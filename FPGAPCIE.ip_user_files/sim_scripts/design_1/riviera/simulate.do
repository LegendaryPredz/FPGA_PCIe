onbreak {quit -force}
onerror {quit -force}

asim +access +r +m+design_1 -L xilinx_vip -L xpm -L gtwizard_ultrascale_v1_7_13 -L xil_defaultlib -L blk_mem_gen_v8_4_5 -L xdma_v4_1_17 -L microblaze_v11_0_9 -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L lmb_v10_v3_0_12 -L lmb_bram_if_cntlr_v4_0_21 -L iomodule_v3_1_8 -L axi_lite_ipif_v3_0_4 -L mdm_v3_2_23 -L v_vid_in_axi4s_v5_0_1 -L lib_pkg_v1_0_2 -L fifo_generator_v13_2_7 -L lib_fifo_v1_0_16 -L lib_bmg_v1_0_14 -L lib_srl_fifo_v1_0_2 -L axi_datamover_v5_1_28 -L axi_vdma_v6_3_14 -L xlconstant_v1_1_7 -L smartconnect_v1_0 -L axi_infrastructure_v1_1_0 -L axi_register_slice_v2_1_26 -L axi_vip_v1_1_12 -L v_vscaler_v1_1_5 -L v_hscaler_v1_1_5 -L axis_infrastructure_v1_1_0 -L axis_register_slice_v1_1_26 -L axis_subset_converter_v1_1_26 -L v_letterbox_v1_1_5 -L v_csc_v1_1_5 -L xlslice_v1_0_2 -L axis_switch_v1_1_26 -L interrupt_control_v3_1_4 -L axi_gpio_v2_0_28 -L v_vcresampler_v1_1_5 -L v_hcresampler_v1_1_5 -L xilinx_vip -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.design_1 xil_defaultlib.glbl

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

do {wave.do}

view wave
view structure

do {design_1.udo}

run -all

endsim

quit -force
