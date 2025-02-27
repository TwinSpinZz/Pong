library IEEE;
library work;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
library UNISIM;
use UNISIM.VComponents.all;
use work.constants.all;

entity ball is
	port(
		clk : in std_logic;
		new_frame: in std_logic;
		h_count : in natural range 0 to h_total-1;
      v_count : in natural range 0 to v_total-1;
		left_pos : in natural range 0 to (v_active-v_paddle-1);
		right_pos : in natural range 0 to (v_active-v_paddle-1);
		ball : out std_logic
	);
end ball;

architecture Behavioral of ball is
    signal h_ball : natural range 0 to (h_active + ball_size) := 320;  
    signal v_ball : natural range 0 to (v_active - ball_size - 1) := 150;     
    signal h_ball_mov : std_logic := '1';  -- Moving right initially
    signal v_ball_mov : std_logic := '1';  -- Moving down initially
begin
    process(clk, left_pos, right_pos, new_frame)
    begin
        if rising_edge(clk) then    
            if new_frame = '1' then
                -- Handle Horizontal Ball Movement
                if h_ball_mov = '0' then -- Moving Left
                    h_ball <= h_ball - 2; -- Ball moves left
                    -- Left Paddle Collision
                    if (h_ball <= edge_size + h_paddle + 20) and
                       (v_ball + ball_size >= left_pos) and
                       (v_ball <= left_pos + v_paddle) then
                        h_ball_mov <= '1'; -- Ball bounces to the right
                    -- Special Reset Condition (Left Side)
                    elsif (h_ball <= edge_size + 20) and
                          (v_ball > 150) and (v_ball < 350) then
                        h_ball <= 350;
                        v_ball <= 250;
                        h_ball_mov <= '1'; -- Ball moves right
                        v_ball_mov <= '1'; -- Ball moves down
                    -- Left Wall Collision
                    elsif (h_ball <= edge_size + 20) then
                        h_ball_mov <= '1'; -- Ball bounces to the right
                    end if;
                else -- Moving Right
                    h_ball <= h_ball + 2; -- Ball moves right
                    -- Right Paddle Collision
                    if (h_ball + ball_size >= h_active - edge_size - h_paddle - 20) and
                       (v_ball + ball_size >= right_pos) and
                       (v_ball <= right_pos + v_paddle) then
                        h_ball_mov <= '0'; -- Ball bounces to the left
                    -- Special Reset Condition (Right Side)
                    elsif (h_ball + ball_size >= h_active - edge_size - 20) and
                          (v_ball > 150) and (v_ball < 350) then
                        h_ball <= 350;
                        v_ball <= 250;
                        h_ball_mov <= '0'; -- Ball moves left
                        v_ball_mov <= '0'; -- Ball moves up
                    -- Right Wall Collision
                    elsif (h_ball + ball_size >= h_active - edge_size - 20) then
                        h_ball_mov <= '0'; -- Ball bounces to the left
                    end if;
                end if;

                -- Handle Vertical Ball Movement
                if v_ball_mov = '0' then -- Moving Up
                    v_ball <= v_ball - 2; -- Ball moves up
                    if (v_ball <= edge_size + 20) then
                        v_ball_mov <= '1'; -- Ball bounces down from the top
                    end if;
                else -- Moving Down
                    v_ball <= v_ball + 2; -- Ball moves down
                    if (v_ball + ball_size >= v_active - edge_size - 1 - 20) then
                        v_ball_mov <= '0'; -- Ball bounces up from the bottom
                    end if;
                end if;
            end if;
        end if;
    end process;

    -- Process for Drawing the Ball on Screen
    process(clk)
    begin
        if rising_edge(clk) then
            if (h_count >= h_ball) and (h_count <= h_ball + ball_size - 1) and
               (v_count >= v_ball) and (v_count <= v_ball + ball_size - 1) then
                ball <= '1'; -- Display the ball
            else
                ball <= '0'; -- No ball displayed
            end if;
        end if;
    end process;
end Behavioral;

