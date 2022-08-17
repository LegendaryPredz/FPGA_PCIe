# aclk {FREQ_HZ 300000000 CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk PHASE 0.00} aclk1 {FREQ_HZ 300000000 CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk PHASE 0.00} aclk2 {FREQ_HZ 300000000 CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk PHASE 0.00} aclk3 {FREQ_HZ 300000000 CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk PHASE 0.00} aclk4 {FREQ_HZ 300000000 CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk PHASE 0.00}
# Clock Domain: design_1_ddr4_0_1_c0_ddr4_ui_clk
create_clock -name aclk -period 3.333 [get_ports aclk]
# Generated clocks
create_generated_clock -name aclk1 -source [get_ports aclk] -divide_by 1 [get_ports aclk1]
create_generated_clock -name aclk2 -source [get_ports aclk] -divide_by 1 [get_ports aclk2]
create_generated_clock -name aclk3 -source [get_ports aclk] -divide_by 1 [get_ports aclk3]
create_generated_clock -name aclk4 -source [get_ports aclk] -divide_by 1 [get_ports aclk4]
