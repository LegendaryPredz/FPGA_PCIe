//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Command: generate_target bd_d92b.bd
//Design : bd_d92b
//Purpose: IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_d92b,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_d92b,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=58,numReposBlks=37,numNonXlnxBlks=0,numHierBlks=21,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=SBD,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "design_1_v_proc_ss_0_0.hwdef" *) 
module bd_d92b
   (aclk_axis,
    aclk_ctrl,
    aresetn_ctrl,
    aresetn_io_axis,
    m_axis_tdata,
    m_axis_tdest,
    m_axis_tid,
    m_axis_tkeep,
    m_axis_tlast,
    m_axis_tready,
    m_axis_tstrb,
    m_axis_tuser,
    m_axis_tvalid,
    s_axi_ctrl_araddr,
    s_axi_ctrl_arprot,
    s_axi_ctrl_arready,
    s_axi_ctrl_arvalid,
    s_axi_ctrl_awaddr,
    s_axi_ctrl_awprot,
    s_axi_ctrl_awready,
    s_axi_ctrl_awvalid,
    s_axi_ctrl_bready,
    s_axi_ctrl_bresp,
    s_axi_ctrl_bvalid,
    s_axi_ctrl_rdata,
    s_axi_ctrl_rready,
    s_axi_ctrl_rresp,
    s_axi_ctrl_rvalid,
    s_axi_ctrl_wdata,
    s_axi_ctrl_wready,
    s_axi_ctrl_wstrb,
    s_axi_ctrl_wvalid,
    s_axis_tdata,
    s_axis_tdest,
    s_axis_tid,
    s_axis_tkeep,
    s_axis_tlast,
    s_axis_tready,
    s_axis_tstrb,
    s_axis_tuser,
    s_axis_tvalid);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.ACLK_AXIS CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.ACLK_AXIS, ASSOCIATED_BUSIF m_axis:s_axis, ASSOCIATED_CLKEN aclken, ASSOCIATED_RESET aresetn_io_axis, CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk, FREQ_HZ 300000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.00" *) input aclk_axis;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 CLK.ACLK_CTRL CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME CLK.ACLK_CTRL, ASSOCIATED_BUSIF s_axi_ctrl, ASSOCIATED_CLKEN s_sc_aclken, ASSOCIATED_RESET aresetn_ctrl, CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk, FREQ_HZ 300000000, FREQ_TOLERANCE_HZ 0, INSERT_VIP 0, PHASE 0.00" *) input aclk_ctrl;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.ARESETN_CTRL RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.ARESETN_CTRL, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) input aresetn_ctrl;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 RST.ARESETN_IO_AXIS RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME RST.ARESETN_IO_AXIS, INSERT_VIP 0, POLARITY ACTIVE_LOW" *) output [0:0]aresetn_io_axis;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TDATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME m_axis, CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk, FREQ_HZ 300000000, HAS_TKEEP 1, HAS_TLAST 1, HAS_TREADY 1, HAS_TSTRB 1, INSERT_VIP 0, LAYERED_METADATA undef, PHASE 0.00, TDATA_NUM_BYTES 8, TDEST_WIDTH 4, TID_WIDTH 1, TUSER_WIDTH 1" *) output [63:0]m_axis_tdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TDEST" *) output [3:0]m_axis_tdest;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TID" *) output [0:0]m_axis_tid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TKEEP" *) output [7:0]m_axis_tkeep;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TLAST" *) output m_axis_tlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TREADY" *) input m_axis_tready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TSTRB" *) output [7:0]m_axis_tstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TUSER" *) output [0:0]m_axis_tuser;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 m_axis TVALID" *) output m_axis_tvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARADDR" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axi_ctrl, ADDR_WIDTH 20, ARUSER_WIDTH 0, AWUSER_WIDTH 0, BUSER_WIDTH 0, CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk, DATA_WIDTH 32, FREQ_HZ 300000000, HAS_BRESP 1, HAS_BURST 0, HAS_CACHE 0, HAS_LOCK 0, HAS_PROT 1, HAS_QOS 0, HAS_REGION 0, HAS_RRESP 1, HAS_WSTRB 1, ID_WIDTH 0, INSERT_VIP 0, MAX_BURST_LENGTH 1, NUM_READ_OUTSTANDING 1, NUM_READ_THREADS 1, NUM_WRITE_OUTSTANDING 1, NUM_WRITE_THREADS 1, PHASE 0.00, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, RUSER_BITS_PER_BYTE 0, RUSER_WIDTH 0, SUPPORTS_NARROW_BURST 0, WUSER_BITS_PER_BYTE 0, WUSER_WIDTH 0" *) input [19:0]s_axi_ctrl_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARPROT" *) input [2:0]s_axi_ctrl_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARREADY" *) output [0:0]s_axi_ctrl_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl ARVALID" *) input [0:0]s_axi_ctrl_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWADDR" *) input [19:0]s_axi_ctrl_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWPROT" *) input [2:0]s_axi_ctrl_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWREADY" *) output [0:0]s_axi_ctrl_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl AWVALID" *) input [0:0]s_axi_ctrl_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BREADY" *) input [0:0]s_axi_ctrl_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BRESP" *) output [1:0]s_axi_ctrl_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl BVALID" *) output [0:0]s_axi_ctrl_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RDATA" *) output [31:0]s_axi_ctrl_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RREADY" *) input [0:0]s_axi_ctrl_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RRESP" *) output [1:0]s_axi_ctrl_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl RVALID" *) output [0:0]s_axi_ctrl_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WDATA" *) input [31:0]s_axi_ctrl_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WREADY" *) output [0:0]s_axi_ctrl_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WSTRB" *) input [3:0]s_axi_ctrl_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_ctrl WVALID" *) input [0:0]s_axi_ctrl_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TDATA" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME s_axis, CLK_DOMAIN design_1_ddr4_0_1_c0_ddr4_ui_clk, FREQ_HZ 300000000, HAS_TKEEP 1, HAS_TLAST 1, HAS_TREADY 1, HAS_TSTRB 1, INSERT_VIP 0, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {TDATA {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value xilinx.com:video:G_B_R_444:1.0} bitwidth {attribs {resolve_type automatic dependency {} format long minimum {} maximum {}} value 24} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} array_type {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value rows} size {attribs {resolve_type generated dependency active_rows format long minimum {} maximum {}} value 1} stride {attribs {resolve_type generated dependency active_rows_stride format long minimum {} maximum {}} value 24} datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type automatic dependency {} format long minimum {} maximum {}} value 24} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} array_type {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value cols} size {attribs {resolve_type generated dependency active_cols format long minimum {} maximum {}} value 1} stride {attribs {resolve_type generated dependency active_cols_stride format long minimum {} maximum {}} value 24} datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type automatic dependency {} format long minimum {} maximum {}} value 24} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} struct {field_G {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value G} enabled {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true} datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type generated dependency video_data_width format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}} field_B {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value B} enabled {attribs {resolve_type generated dependency video_comp1_enabled format bool minimum {} maximum {}} value true} datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type generated dependency video_data_width format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type generated dependency video_comp1_offset format long minimum {} maximum {}} value 8} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}} field_R {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value R} enabled {attribs {resolve_type generated dependency video_comp2_enabled format bool minimum {} maximum {}} value true} datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type generated dependency video_data_width format long minimum {} maximum {}} value 8} bitoffset {attribs {resolve_type generated dependency video_comp2_offset format long minimum {} maximum {}} value 16} integer {signed {attribs {resolve_type immediate dependency {} format bool minimum {} maximum {}} value true}}}}}}}}}}} TDATA_WIDTH 24}, PHASE 0.00, TDATA_NUM_BYTES 8, TDEST_WIDTH 1, TID_WIDTH 1, TUSER_WIDTH 1" *) input [63:0]s_axis_tdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TDEST" *) input [0:0]s_axis_tdest;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TID" *) input [0:0]s_axis_tid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TKEEP" *) input [7:0]s_axis_tkeep;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TLAST" *) input s_axis_tlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TREADY" *) output s_axis_tready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TSTRB" *) input [7:0]s_axis_tstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TUSER" *) input [0:0]s_axis_tuser;
  (* X_INTERFACE_INFO = "xilinx.com:interface:axis:1.0 s_axis TVALID" *) input s_axis_tvalid;

  wire [19:0]intf_net_bdry_in_s_axi_ctrl_ARADDR;
  wire [2:0]intf_net_bdry_in_s_axi_ctrl_ARPROT;
  wire intf_net_bdry_in_s_axi_ctrl_ARREADY;
  wire [0:0]intf_net_bdry_in_s_axi_ctrl_ARVALID;
  wire [19:0]intf_net_bdry_in_s_axi_ctrl_AWADDR;
  wire [2:0]intf_net_bdry_in_s_axi_ctrl_AWPROT;
  wire intf_net_bdry_in_s_axi_ctrl_AWREADY;
  wire [0:0]intf_net_bdry_in_s_axi_ctrl_AWVALID;
  wire [0:0]intf_net_bdry_in_s_axi_ctrl_BREADY;
  wire [1:0]intf_net_bdry_in_s_axi_ctrl_BRESP;
  wire intf_net_bdry_in_s_axi_ctrl_BVALID;
  wire [31:0]intf_net_bdry_in_s_axi_ctrl_RDATA;
  wire [0:0]intf_net_bdry_in_s_axi_ctrl_RREADY;
  wire [1:0]intf_net_bdry_in_s_axi_ctrl_RRESP;
  wire intf_net_bdry_in_s_axi_ctrl_RVALID;
  wire [31:0]intf_net_bdry_in_s_axi_ctrl_WDATA;
  wire intf_net_bdry_in_s_axi_ctrl_WREADY;
  wire [3:0]intf_net_bdry_in_s_axi_ctrl_WSTRB;
  wire [0:0]intf_net_bdry_in_s_axi_ctrl_WVALID;
  wire [63:0]intf_net_bdry_in_s_axis_TDATA;
  wire [0:0]intf_net_bdry_in_s_axis_TDEST;
  wire [0:0]intf_net_bdry_in_s_axis_TID;
  wire [7:0]intf_net_bdry_in_s_axis_TKEEP;
  wire intf_net_bdry_in_s_axis_TLAST;
  wire intf_net_bdry_in_s_axis_TREADY;
  wire [7:0]intf_net_bdry_in_s_axis_TSTRB;
  wire [0:0]intf_net_bdry_in_s_axis_TUSER;
  wire intf_net_bdry_in_s_axis_TVALID;
  wire [63:0]intf_net_csc_m_axis_video_TDATA;
  wire [0:0]intf_net_csc_m_axis_video_TDEST;
  wire [0:0]intf_net_csc_m_axis_video_TID;
  wire [7:0]intf_net_csc_m_axis_video_TKEEP;
  wire [0:0]intf_net_csc_m_axis_video_TLAST;
  wire [0:0]intf_net_csc_m_axis_video_TREADY;
  wire [7:0]intf_net_csc_m_axis_video_TSTRB;
  wire [0:0]intf_net_csc_m_axis_video_TUSER;
  wire intf_net_csc_m_axis_video_TVALID;
  wire [63:0]intf_net_hcr_m_axis_video_TDATA;
  wire [0:0]intf_net_hcr_m_axis_video_TDEST;
  wire [0:0]intf_net_hcr_m_axis_video_TID;
  wire [7:0]intf_net_hcr_m_axis_video_TKEEP;
  wire [0:0]intf_net_hcr_m_axis_video_TLAST;
  wire intf_net_hcr_m_axis_video_TREADY;
  wire [7:0]intf_net_hcr_m_axis_video_TSTRB;
  wire [0:0]intf_net_hcr_m_axis_video_TUSER;
  wire intf_net_hcr_m_axis_video_TVALID;
  wire [63:0]intf_net_hsc_m_axis_video_TDATA;
  wire [0:0]intf_net_hsc_m_axis_video_TDEST;
  wire [0:0]intf_net_hsc_m_axis_video_TID;
  wire [7:0]intf_net_hsc_m_axis_video_TKEEP;
  wire [0:0]intf_net_hsc_m_axis_video_TLAST;
  wire [0:0]intf_net_hsc_m_axis_video_TREADY;
  wire [7:0]intf_net_hsc_m_axis_video_TSTRB;
  wire [0:0]intf_net_hsc_m_axis_video_TUSER;
  wire intf_net_hsc_m_axis_video_TVALID;
  wire [63:0]intf_net_input_size_set_M_AXIS_TDATA;
  wire [0:0]intf_net_input_size_set_M_AXIS_TDEST;
  wire [0:0]intf_net_input_size_set_M_AXIS_TID;
  wire [7:0]intf_net_input_size_set_M_AXIS_TKEEP;
  wire intf_net_input_size_set_M_AXIS_TLAST;
  wire [0:0]intf_net_input_size_set_M_AXIS_TREADY;
  wire [7:0]intf_net_input_size_set_M_AXIS_TSTRB;
  wire [0:0]intf_net_input_size_set_M_AXIS_TUSER;
  wire intf_net_input_size_set_M_AXIS_TVALID;
  wire [63:0]intf_net_ltr_m_axis_video_TDATA;
  wire [0:0]intf_net_ltr_m_axis_video_TDEST;
  wire [0:0]intf_net_ltr_m_axis_video_TID;
  wire [7:0]intf_net_ltr_m_axis_video_TKEEP;
  wire [0:0]intf_net_ltr_m_axis_video_TLAST;
  wire [0:0]intf_net_ltr_m_axis_video_TREADY;
  wire [7:0]intf_net_ltr_m_axis_video_TSTRB;
  wire [0:0]intf_net_ltr_m_axis_video_TUSER;
  wire intf_net_ltr_m_axis_video_TVALID;
  wire [6:0]intf_net_smartconnect_0_M00_AXI_ARADDR;
  wire intf_net_smartconnect_0_M00_AXI_ARREADY;
  wire intf_net_smartconnect_0_M00_AXI_ARVALID;
  wire [6:0]intf_net_smartconnect_0_M00_AXI_AWADDR;
  wire intf_net_smartconnect_0_M00_AXI_AWREADY;
  wire intf_net_smartconnect_0_M00_AXI_AWVALID;
  wire intf_net_smartconnect_0_M00_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M00_AXI_BRESP;
  wire intf_net_smartconnect_0_M00_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M00_AXI_RDATA;
  wire intf_net_smartconnect_0_M00_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M00_AXI_RRESP;
  wire intf_net_smartconnect_0_M00_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M00_AXI_WDATA;
  wire intf_net_smartconnect_0_M00_AXI_WREADY;
  wire intf_net_smartconnect_0_M00_AXI_WVALID;
  wire [8:0]intf_net_smartconnect_0_M01_AXI_ARADDR;
  wire intf_net_smartconnect_0_M01_AXI_ARREADY;
  wire intf_net_smartconnect_0_M01_AXI_ARVALID;
  wire [8:0]intf_net_smartconnect_0_M01_AXI_AWADDR;
  wire intf_net_smartconnect_0_M01_AXI_AWREADY;
  wire intf_net_smartconnect_0_M01_AXI_AWVALID;
  wire intf_net_smartconnect_0_M01_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M01_AXI_BRESP;
  wire intf_net_smartconnect_0_M01_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M01_AXI_RDATA;
  wire intf_net_smartconnect_0_M01_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M01_AXI_RRESP;
  wire intf_net_smartconnect_0_M01_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M01_AXI_WDATA;
  wire intf_net_smartconnect_0_M01_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M01_AXI_WSTRB;
  wire intf_net_smartconnect_0_M01_AXI_WVALID;
  wire [11:0]intf_net_smartconnect_0_M02_AXI_ARADDR;
  wire intf_net_smartconnect_0_M02_AXI_ARREADY;
  wire intf_net_smartconnect_0_M02_AXI_ARVALID;
  wire [11:0]intf_net_smartconnect_0_M02_AXI_AWADDR;
  wire intf_net_smartconnect_0_M02_AXI_AWREADY;
  wire intf_net_smartconnect_0_M02_AXI_AWVALID;
  wire intf_net_smartconnect_0_M02_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M02_AXI_BRESP;
  wire intf_net_smartconnect_0_M02_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M02_AXI_RDATA;
  wire intf_net_smartconnect_0_M02_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M02_AXI_RRESP;
  wire intf_net_smartconnect_0_M02_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M02_AXI_WDATA;
  wire intf_net_smartconnect_0_M02_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M02_AXI_WSTRB;
  wire intf_net_smartconnect_0_M02_AXI_WVALID;
  wire [15:0]intf_net_smartconnect_0_M03_AXI_ARADDR;
  wire intf_net_smartconnect_0_M03_AXI_ARREADY;
  wire intf_net_smartconnect_0_M03_AXI_ARVALID;
  wire [15:0]intf_net_smartconnect_0_M03_AXI_AWADDR;
  wire intf_net_smartconnect_0_M03_AXI_AWREADY;
  wire intf_net_smartconnect_0_M03_AXI_AWVALID;
  wire intf_net_smartconnect_0_M03_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M03_AXI_BRESP;
  wire intf_net_smartconnect_0_M03_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M03_AXI_RDATA;
  wire intf_net_smartconnect_0_M03_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M03_AXI_RRESP;
  wire intf_net_smartconnect_0_M03_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M03_AXI_WDATA;
  wire intf_net_smartconnect_0_M03_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M03_AXI_WSTRB;
  wire intf_net_smartconnect_0_M03_AXI_WVALID;
  wire [6:0]intf_net_smartconnect_0_M04_AXI_ARADDR;
  wire intf_net_smartconnect_0_M04_AXI_ARREADY;
  wire intf_net_smartconnect_0_M04_AXI_ARVALID;
  wire [6:0]intf_net_smartconnect_0_M04_AXI_AWADDR;
  wire intf_net_smartconnect_0_M04_AXI_AWREADY;
  wire intf_net_smartconnect_0_M04_AXI_AWVALID;
  wire intf_net_smartconnect_0_M04_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M04_AXI_BRESP;
  wire intf_net_smartconnect_0_M04_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M04_AXI_RDATA;
  wire intf_net_smartconnect_0_M04_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M04_AXI_RRESP;
  wire intf_net_smartconnect_0_M04_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M04_AXI_WDATA;
  wire intf_net_smartconnect_0_M04_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M04_AXI_WSTRB;
  wire intf_net_smartconnect_0_M04_AXI_WVALID;
  wire [10:0]intf_net_smartconnect_0_M05_AXI_ARADDR;
  wire intf_net_smartconnect_0_M05_AXI_ARREADY;
  wire intf_net_smartconnect_0_M05_AXI_ARVALID;
  wire [10:0]intf_net_smartconnect_0_M05_AXI_AWADDR;
  wire intf_net_smartconnect_0_M05_AXI_AWREADY;
  wire intf_net_smartconnect_0_M05_AXI_AWVALID;
  wire intf_net_smartconnect_0_M05_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M05_AXI_BRESP;
  wire intf_net_smartconnect_0_M05_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M05_AXI_RDATA;
  wire intf_net_smartconnect_0_M05_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M05_AXI_RRESP;
  wire intf_net_smartconnect_0_M05_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M05_AXI_WDATA;
  wire intf_net_smartconnect_0_M05_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M05_AXI_WSTRB;
  wire intf_net_smartconnect_0_M05_AXI_WVALID;
  wire [10:0]intf_net_smartconnect_0_M06_AXI_ARADDR;
  wire intf_net_smartconnect_0_M06_AXI_ARREADY;
  wire intf_net_smartconnect_0_M06_AXI_ARVALID;
  wire [10:0]intf_net_smartconnect_0_M06_AXI_AWADDR;
  wire intf_net_smartconnect_0_M06_AXI_AWREADY;
  wire intf_net_smartconnect_0_M06_AXI_AWVALID;
  wire intf_net_smartconnect_0_M06_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M06_AXI_BRESP;
  wire intf_net_smartconnect_0_M06_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M06_AXI_RDATA;
  wire intf_net_smartconnect_0_M06_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M06_AXI_RRESP;
  wire intf_net_smartconnect_0_M06_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M06_AXI_WDATA;
  wire intf_net_smartconnect_0_M06_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M06_AXI_WSTRB;
  wire intf_net_smartconnect_0_M06_AXI_WVALID;
  wire [10:0]intf_net_smartconnect_0_M07_AXI_ARADDR;
  wire intf_net_smartconnect_0_M07_AXI_ARREADY;
  wire intf_net_smartconnect_0_M07_AXI_ARVALID;
  wire [10:0]intf_net_smartconnect_0_M07_AXI_AWADDR;
  wire intf_net_smartconnect_0_M07_AXI_AWREADY;
  wire intf_net_smartconnect_0_M07_AXI_AWVALID;
  wire intf_net_smartconnect_0_M07_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M07_AXI_BRESP;
  wire intf_net_smartconnect_0_M07_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M07_AXI_RDATA;
  wire intf_net_smartconnect_0_M07_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M07_AXI_RRESP;
  wire intf_net_smartconnect_0_M07_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M07_AXI_WDATA;
  wire intf_net_smartconnect_0_M07_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M07_AXI_WSTRB;
  wire intf_net_smartconnect_0_M07_AXI_WVALID;
  wire [8:0]intf_net_smartconnect_0_M08_AXI_ARADDR;
  wire intf_net_smartconnect_0_M08_AXI_ARREADY;
  wire intf_net_smartconnect_0_M08_AXI_ARVALID;
  wire [8:0]intf_net_smartconnect_0_M08_AXI_AWADDR;
  wire intf_net_smartconnect_0_M08_AXI_AWREADY;
  wire intf_net_smartconnect_0_M08_AXI_AWVALID;
  wire intf_net_smartconnect_0_M08_AXI_BREADY;
  wire [1:0]intf_net_smartconnect_0_M08_AXI_BRESP;
  wire intf_net_smartconnect_0_M08_AXI_BVALID;
  wire [31:0]intf_net_smartconnect_0_M08_AXI_RDATA;
  wire intf_net_smartconnect_0_M08_AXI_RREADY;
  wire [1:0]intf_net_smartconnect_0_M08_AXI_RRESP;
  wire intf_net_smartconnect_0_M08_AXI_RVALID;
  wire [31:0]intf_net_smartconnect_0_M08_AXI_WDATA;
  wire intf_net_smartconnect_0_M08_AXI_WREADY;
  wire [3:0]intf_net_smartconnect_0_M08_AXI_WSTRB;
  wire intf_net_smartconnect_0_M08_AXI_WVALID;
  wire [63:0]intf_net_vcr_i_m_axis_video_TDATA;
  wire [0:0]intf_net_vcr_i_m_axis_video_TDEST;
  wire [0:0]intf_net_vcr_i_m_axis_video_TID;
  wire [7:0]intf_net_vcr_i_m_axis_video_TKEEP;
  wire [0:0]intf_net_vcr_i_m_axis_video_TLAST;
  wire intf_net_vcr_i_m_axis_video_TREADY;
  wire [7:0]intf_net_vcr_i_m_axis_video_TSTRB;
  wire [0:0]intf_net_vcr_i_m_axis_video_TUSER;
  wire intf_net_vcr_i_m_axis_video_TVALID;
  wire [63:0]intf_net_vcr_o_m_axis_video_TDATA;
  wire [0:0]intf_net_vcr_o_m_axis_video_TDEST;
  wire [0:0]intf_net_vcr_o_m_axis_video_TID;
  wire [7:0]intf_net_vcr_o_m_axis_video_TKEEP;
  wire [0:0]intf_net_vcr_o_m_axis_video_TLAST;
  wire intf_net_vcr_o_m_axis_video_TREADY;
  wire [7:0]intf_net_vcr_o_m_axis_video_TSTRB;
  wire [0:0]intf_net_vcr_o_m_axis_video_TUSER;
  wire intf_net_vcr_o_m_axis_video_TVALID;
  wire [63:0]intf_net_video_router_M00_AXIS_TDATA;
  wire [3:0]intf_net_video_router_M00_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M00_AXIS_TID;
  wire [7:0]intf_net_video_router_M00_AXIS_TKEEP;
  wire intf_net_video_router_M00_AXIS_TLAST;
  wire intf_net_video_router_M00_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M00_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M00_AXIS_TUSER;
  wire intf_net_video_router_M00_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M01_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M01_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M01_AXIS_TID;
  wire [7:0]intf_net_video_router_M01_AXIS_TKEEP;
  wire intf_net_video_router_M01_AXIS_TLAST;
  wire intf_net_video_router_M01_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M01_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M01_AXIS_TUSER;
  wire intf_net_video_router_M01_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M02_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M02_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M02_AXIS_TID;
  wire [7:0]intf_net_video_router_M02_AXIS_TKEEP;
  wire intf_net_video_router_M02_AXIS_TLAST;
  wire intf_net_video_router_M02_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M02_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M02_AXIS_TUSER;
  wire intf_net_video_router_M02_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M04_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M04_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M04_AXIS_TID;
  wire [7:0]intf_net_video_router_M04_AXIS_TKEEP;
  wire intf_net_video_router_M04_AXIS_TLAST;
  wire intf_net_video_router_M04_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M04_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M04_AXIS_TUSER;
  wire intf_net_video_router_M04_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M05_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M05_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M05_AXIS_TID;
  wire [7:0]intf_net_video_router_M05_AXIS_TKEEP;
  wire [0:0]intf_net_video_router_M05_AXIS_TLAST;
  wire intf_net_video_router_M05_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M05_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M05_AXIS_TUSER;
  wire intf_net_video_router_M05_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M06_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M06_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M06_AXIS_TID;
  wire [7:0]intf_net_video_router_M06_AXIS_TKEEP;
  wire [0:0]intf_net_video_router_M06_AXIS_TLAST;
  wire intf_net_video_router_M06_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M06_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M06_AXIS_TUSER;
  wire intf_net_video_router_M06_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M07_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M07_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M07_AXIS_TID;
  wire [7:0]intf_net_video_router_M07_AXIS_TKEEP;
  wire [0:0]intf_net_video_router_M07_AXIS_TLAST;
  wire intf_net_video_router_M07_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M07_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M07_AXIS_TUSER;
  wire intf_net_video_router_M07_AXIS_TVALID;
  wire [63:0]intf_net_video_router_M08_AXIS_TDATA;
  wire [0:0]intf_net_video_router_M08_AXIS_TDEST;
  wire [0:0]intf_net_video_router_M08_AXIS_TID;
  wire [7:0]intf_net_video_router_M08_AXIS_TKEEP;
  wire intf_net_video_router_M08_AXIS_TLAST;
  wire intf_net_video_router_M08_AXIS_TREADY;
  wire [7:0]intf_net_video_router_M08_AXIS_TSTRB;
  wire [0:0]intf_net_video_router_M08_AXIS_TUSER;
  wire intf_net_video_router_M08_AXIS_TVALID;
  wire [63:0]intf_net_vsc_m_axis_video_TDATA;
  wire [0:0]intf_net_vsc_m_axis_video_TDEST;
  wire [0:0]intf_net_vsc_m_axis_video_TID;
  wire [7:0]intf_net_vsc_m_axis_video_TKEEP;
  wire [0:0]intf_net_vsc_m_axis_video_TLAST;
  wire [0:0]intf_net_vsc_m_axis_video_TREADY;
  wire [7:0]intf_net_vsc_m_axis_video_TSTRB;
  wire [0:0]intf_net_vsc_m_axis_video_TUSER;
  wire intf_net_vsc_m_axis_video_TVALID;
  wire net_bdry_in_aclk_axis;
  wire net_bdry_in_aclk_ctrl;
  wire net_bdry_in_aresetn_ctrl;
  wire [0:0]net_proc_ss_ip_aresetn_Dout;
  wire [1:0]net_reset_sel_axis_gpio_io_o;
  wire [0:0]net_rst_axis_peripheral_aresetn;
  wire [0:0]net_vid_in_aresetn_Dout;

  assign aresetn_io_axis[0] = net_vid_in_aresetn_Dout;
  assign intf_net_bdry_in_s_axi_ctrl_ARADDR = s_axi_ctrl_araddr[19:0];
  assign intf_net_bdry_in_s_axi_ctrl_ARPROT = s_axi_ctrl_arprot[2:0];
  assign intf_net_bdry_in_s_axi_ctrl_ARVALID = s_axi_ctrl_arvalid[0];
  assign intf_net_bdry_in_s_axi_ctrl_AWADDR = s_axi_ctrl_awaddr[19:0];
  assign intf_net_bdry_in_s_axi_ctrl_AWPROT = s_axi_ctrl_awprot[2:0];
  assign intf_net_bdry_in_s_axi_ctrl_AWVALID = s_axi_ctrl_awvalid[0];
  assign intf_net_bdry_in_s_axi_ctrl_BREADY = s_axi_ctrl_bready[0];
  assign intf_net_bdry_in_s_axi_ctrl_RREADY = s_axi_ctrl_rready[0];
  assign intf_net_bdry_in_s_axi_ctrl_WDATA = s_axi_ctrl_wdata[31:0];
  assign intf_net_bdry_in_s_axi_ctrl_WSTRB = s_axi_ctrl_wstrb[3:0];
  assign intf_net_bdry_in_s_axi_ctrl_WVALID = s_axi_ctrl_wvalid[0];
  assign intf_net_bdry_in_s_axis_TDATA = s_axis_tdata[63:0];
  assign intf_net_bdry_in_s_axis_TDEST = s_axis_tdest[0];
  assign intf_net_bdry_in_s_axis_TID = s_axis_tid[0];
  assign intf_net_bdry_in_s_axis_TKEEP = s_axis_tkeep[7:0];
  assign intf_net_bdry_in_s_axis_TLAST = s_axis_tlast;
  assign intf_net_bdry_in_s_axis_TSTRB = s_axis_tstrb[7:0];
  assign intf_net_bdry_in_s_axis_TUSER = s_axis_tuser[0];
  assign intf_net_bdry_in_s_axis_TVALID = s_axis_tvalid;
  assign intf_net_video_router_M00_AXIS_TREADY = m_axis_tready;
  assign m_axis_tdata[63:0] = intf_net_video_router_M00_AXIS_TDATA;
  assign m_axis_tdest[3:0] = intf_net_video_router_M00_AXIS_TDEST;
  assign m_axis_tid[0] = intf_net_video_router_M00_AXIS_TID;
  assign m_axis_tkeep[7:0] = intf_net_video_router_M00_AXIS_TKEEP;
  assign m_axis_tlast = intf_net_video_router_M00_AXIS_TLAST;
  assign m_axis_tstrb[7:0] = intf_net_video_router_M00_AXIS_TSTRB;
  assign m_axis_tuser[0] = intf_net_video_router_M00_AXIS_TUSER;
  assign m_axis_tvalid = intf_net_video_router_M00_AXIS_TVALID;
  assign net_bdry_in_aclk_axis = aclk_axis;
  assign net_bdry_in_aclk_ctrl = aclk_ctrl;
  assign net_bdry_in_aresetn_ctrl = aresetn_ctrl;
  assign s_axi_ctrl_arready[0] = intf_net_bdry_in_s_axi_ctrl_ARREADY;
  assign s_axi_ctrl_awready[0] = intf_net_bdry_in_s_axi_ctrl_AWREADY;
  assign s_axi_ctrl_bresp[1:0] = intf_net_bdry_in_s_axi_ctrl_BRESP;
  assign s_axi_ctrl_bvalid[0] = intf_net_bdry_in_s_axi_ctrl_BVALID;
  assign s_axi_ctrl_rdata[31:0] = intf_net_bdry_in_s_axi_ctrl_RDATA;
  assign s_axi_ctrl_rresp[1:0] = intf_net_bdry_in_s_axi_ctrl_RRESP;
  assign s_axi_ctrl_rvalid[0] = intf_net_bdry_in_s_axi_ctrl_RVALID;
  assign s_axi_ctrl_wready[0] = intf_net_bdry_in_s_axi_ctrl_WREADY;
  assign s_axis_tready = intf_net_bdry_in_s_axis_TREADY;
  bd_d92b_csc_0 csc
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_csc_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_csc_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_csc_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_csc_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_csc_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_csc_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_csc_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_csc_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_csc_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M08_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M08_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M08_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M08_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M08_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M08_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M08_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M08_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M08_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M08_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M08_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M08_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M08_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M08_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M08_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M08_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M08_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M08_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M08_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M08_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M08_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M08_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M08_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M08_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M08_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M08_AXIS_TVALID));
  bd_d92b_hcr_0 hcr
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_hcr_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_hcr_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_hcr_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_hcr_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_hcr_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_hcr_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_hcr_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_hcr_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_hcr_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M05_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M05_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M05_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M05_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M05_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M05_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M05_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M05_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M05_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M05_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M05_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M05_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M05_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M05_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M05_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M05_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M05_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M05_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M05_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M05_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M05_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M05_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M05_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M05_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M05_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M05_AXIS_TVALID));
  bd_d92b_hsc_0 hsc
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_hsc_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_hsc_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_hsc_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_hsc_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_hsc_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_hsc_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_hsc_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_hsc_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_hsc_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M03_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M03_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M03_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M03_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M03_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M03_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M03_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M03_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M03_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M03_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M03_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M03_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M03_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M03_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M03_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M03_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M03_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M02_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M02_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M02_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M02_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M02_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M02_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M02_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M02_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M02_AXIS_TVALID));
  bd_d92b_input_size_set_0 input_size_set
       (.aclk(net_bdry_in_aclk_axis),
        .aresetn(net_proc_ss_ip_aresetn_Dout),
        .m_axis_tdata(intf_net_input_size_set_M_AXIS_TDATA),
        .m_axis_tdest(intf_net_input_size_set_M_AXIS_TDEST),
        .m_axis_tid(intf_net_input_size_set_M_AXIS_TID),
        .m_axis_tkeep(intf_net_input_size_set_M_AXIS_TKEEP),
        .m_axis_tlast(intf_net_input_size_set_M_AXIS_TLAST),
        .m_axis_tready(intf_net_input_size_set_M_AXIS_TREADY),
        .m_axis_tstrb(intf_net_input_size_set_M_AXIS_TSTRB),
        .m_axis_tuser(intf_net_input_size_set_M_AXIS_TUSER),
        .m_axis_tvalid(intf_net_input_size_set_M_AXIS_TVALID),
        .s_axis_tdata(intf_net_bdry_in_s_axis_TDATA),
        .s_axis_tdest(intf_net_bdry_in_s_axis_TDEST),
        .s_axis_tid(intf_net_bdry_in_s_axis_TID),
        .s_axis_tkeep(intf_net_bdry_in_s_axis_TKEEP),
        .s_axis_tlast(intf_net_bdry_in_s_axis_TLAST),
        .s_axis_tready(intf_net_bdry_in_s_axis_TREADY),
        .s_axis_tstrb(intf_net_bdry_in_s_axis_TSTRB),
        .s_axis_tuser(intf_net_bdry_in_s_axis_TUSER),
        .s_axis_tvalid(intf_net_bdry_in_s_axis_TVALID));
  bd_d92b_ltr_0 ltr
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_ltr_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_ltr_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_ltr_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_ltr_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_ltr_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_ltr_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_ltr_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_ltr_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_ltr_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M04_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M04_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M04_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M04_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M04_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M04_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M04_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M04_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M04_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M04_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M04_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M04_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M04_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M04_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M04_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M04_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M04_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M04_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M04_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M04_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M04_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M04_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M04_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M04_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M04_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M04_AXIS_TVALID));
  bd_d92b_proc_ss_ip_aresetn_0 proc_ss_ip_aresetn
       (.Din(net_reset_sel_axis_gpio_io_o),
        .Dout(net_proc_ss_ip_aresetn_Dout));
  bd_d92b_reset_sel_axis_0 reset_sel_axis
       (.gpio_io_i(net_reset_sel_axis_gpio_io_o),
        .gpio_io_o(net_reset_sel_axis_gpio_io_o),
        .s_axi_aclk(net_bdry_in_aclk_axis),
        .s_axi_araddr(intf_net_smartconnect_0_M01_AXI_ARADDR),
        .s_axi_aresetn(net_rst_axis_peripheral_aresetn),
        .s_axi_arready(intf_net_smartconnect_0_M01_AXI_ARREADY),
        .s_axi_arvalid(intf_net_smartconnect_0_M01_AXI_ARVALID),
        .s_axi_awaddr(intf_net_smartconnect_0_M01_AXI_AWADDR),
        .s_axi_awready(intf_net_smartconnect_0_M01_AXI_AWREADY),
        .s_axi_awvalid(intf_net_smartconnect_0_M01_AXI_AWVALID),
        .s_axi_bready(intf_net_smartconnect_0_M01_AXI_BREADY),
        .s_axi_bresp(intf_net_smartconnect_0_M01_AXI_BRESP),
        .s_axi_bvalid(intf_net_smartconnect_0_M01_AXI_BVALID),
        .s_axi_rdata(intf_net_smartconnect_0_M01_AXI_RDATA),
        .s_axi_rready(intf_net_smartconnect_0_M01_AXI_RREADY),
        .s_axi_rresp(intf_net_smartconnect_0_M01_AXI_RRESP),
        .s_axi_rvalid(intf_net_smartconnect_0_M01_AXI_RVALID),
        .s_axi_wdata(intf_net_smartconnect_0_M01_AXI_WDATA),
        .s_axi_wready(intf_net_smartconnect_0_M01_AXI_WREADY),
        .s_axi_wstrb(intf_net_smartconnect_0_M01_AXI_WSTRB),
        .s_axi_wvalid(intf_net_smartconnect_0_M01_AXI_WVALID));
  bd_d92b_rst_axis_0 rst_axis
       (.aux_reset_in(1'b1),
        .dcm_locked(1'b1),
        .ext_reset_in(net_bdry_in_aresetn_ctrl),
        .mb_debug_sys_rst(1'b0),
        .peripheral_aresetn(net_rst_axis_peripheral_aresetn),
        .slowest_sync_clk(net_bdry_in_aclk_axis));
  bd_d92b_smartconnect_0_0 smartconnect_0
       (.M00_AXI_araddr(intf_net_smartconnect_0_M00_AXI_ARADDR),
        .M00_AXI_arready(intf_net_smartconnect_0_M00_AXI_ARREADY),
        .M00_AXI_arvalid(intf_net_smartconnect_0_M00_AXI_ARVALID),
        .M00_AXI_awaddr(intf_net_smartconnect_0_M00_AXI_AWADDR),
        .M00_AXI_awready(intf_net_smartconnect_0_M00_AXI_AWREADY),
        .M00_AXI_awvalid(intf_net_smartconnect_0_M00_AXI_AWVALID),
        .M00_AXI_bready(intf_net_smartconnect_0_M00_AXI_BREADY),
        .M00_AXI_bresp(intf_net_smartconnect_0_M00_AXI_BRESP),
        .M00_AXI_bvalid(intf_net_smartconnect_0_M00_AXI_BVALID),
        .M00_AXI_rdata(intf_net_smartconnect_0_M00_AXI_RDATA),
        .M00_AXI_rready(intf_net_smartconnect_0_M00_AXI_RREADY),
        .M00_AXI_rresp(intf_net_smartconnect_0_M00_AXI_RRESP),
        .M00_AXI_rvalid(intf_net_smartconnect_0_M00_AXI_RVALID),
        .M00_AXI_wdata(intf_net_smartconnect_0_M00_AXI_WDATA),
        .M00_AXI_wready(intf_net_smartconnect_0_M00_AXI_WREADY),
        .M00_AXI_wvalid(intf_net_smartconnect_0_M00_AXI_WVALID),
        .M01_AXI_araddr(intf_net_smartconnect_0_M01_AXI_ARADDR),
        .M01_AXI_arready(intf_net_smartconnect_0_M01_AXI_ARREADY),
        .M01_AXI_arvalid(intf_net_smartconnect_0_M01_AXI_ARVALID),
        .M01_AXI_awaddr(intf_net_smartconnect_0_M01_AXI_AWADDR),
        .M01_AXI_awready(intf_net_smartconnect_0_M01_AXI_AWREADY),
        .M01_AXI_awvalid(intf_net_smartconnect_0_M01_AXI_AWVALID),
        .M01_AXI_bready(intf_net_smartconnect_0_M01_AXI_BREADY),
        .M01_AXI_bresp(intf_net_smartconnect_0_M01_AXI_BRESP),
        .M01_AXI_bvalid(intf_net_smartconnect_0_M01_AXI_BVALID),
        .M01_AXI_rdata(intf_net_smartconnect_0_M01_AXI_RDATA),
        .M01_AXI_rready(intf_net_smartconnect_0_M01_AXI_RREADY),
        .M01_AXI_rresp(intf_net_smartconnect_0_M01_AXI_RRESP),
        .M01_AXI_rvalid(intf_net_smartconnect_0_M01_AXI_RVALID),
        .M01_AXI_wdata(intf_net_smartconnect_0_M01_AXI_WDATA),
        .M01_AXI_wready(intf_net_smartconnect_0_M01_AXI_WREADY),
        .M01_AXI_wstrb(intf_net_smartconnect_0_M01_AXI_WSTRB),
        .M01_AXI_wvalid(intf_net_smartconnect_0_M01_AXI_WVALID),
        .M02_AXI_araddr(intf_net_smartconnect_0_M02_AXI_ARADDR),
        .M02_AXI_arready(intf_net_smartconnect_0_M02_AXI_ARREADY),
        .M02_AXI_arvalid(intf_net_smartconnect_0_M02_AXI_ARVALID),
        .M02_AXI_awaddr(intf_net_smartconnect_0_M02_AXI_AWADDR),
        .M02_AXI_awready(intf_net_smartconnect_0_M02_AXI_AWREADY),
        .M02_AXI_awvalid(intf_net_smartconnect_0_M02_AXI_AWVALID),
        .M02_AXI_bready(intf_net_smartconnect_0_M02_AXI_BREADY),
        .M02_AXI_bresp(intf_net_smartconnect_0_M02_AXI_BRESP),
        .M02_AXI_bvalid(intf_net_smartconnect_0_M02_AXI_BVALID),
        .M02_AXI_rdata(intf_net_smartconnect_0_M02_AXI_RDATA),
        .M02_AXI_rready(intf_net_smartconnect_0_M02_AXI_RREADY),
        .M02_AXI_rresp(intf_net_smartconnect_0_M02_AXI_RRESP),
        .M02_AXI_rvalid(intf_net_smartconnect_0_M02_AXI_RVALID),
        .M02_AXI_wdata(intf_net_smartconnect_0_M02_AXI_WDATA),
        .M02_AXI_wready(intf_net_smartconnect_0_M02_AXI_WREADY),
        .M02_AXI_wstrb(intf_net_smartconnect_0_M02_AXI_WSTRB),
        .M02_AXI_wvalid(intf_net_smartconnect_0_M02_AXI_WVALID),
        .M03_AXI_araddr(intf_net_smartconnect_0_M03_AXI_ARADDR),
        .M03_AXI_arready(intf_net_smartconnect_0_M03_AXI_ARREADY),
        .M03_AXI_arvalid(intf_net_smartconnect_0_M03_AXI_ARVALID),
        .M03_AXI_awaddr(intf_net_smartconnect_0_M03_AXI_AWADDR),
        .M03_AXI_awready(intf_net_smartconnect_0_M03_AXI_AWREADY),
        .M03_AXI_awvalid(intf_net_smartconnect_0_M03_AXI_AWVALID),
        .M03_AXI_bready(intf_net_smartconnect_0_M03_AXI_BREADY),
        .M03_AXI_bresp(intf_net_smartconnect_0_M03_AXI_BRESP),
        .M03_AXI_bvalid(intf_net_smartconnect_0_M03_AXI_BVALID),
        .M03_AXI_rdata(intf_net_smartconnect_0_M03_AXI_RDATA),
        .M03_AXI_rready(intf_net_smartconnect_0_M03_AXI_RREADY),
        .M03_AXI_rresp(intf_net_smartconnect_0_M03_AXI_RRESP),
        .M03_AXI_rvalid(intf_net_smartconnect_0_M03_AXI_RVALID),
        .M03_AXI_wdata(intf_net_smartconnect_0_M03_AXI_WDATA),
        .M03_AXI_wready(intf_net_smartconnect_0_M03_AXI_WREADY),
        .M03_AXI_wstrb(intf_net_smartconnect_0_M03_AXI_WSTRB),
        .M03_AXI_wvalid(intf_net_smartconnect_0_M03_AXI_WVALID),
        .M04_AXI_araddr(intf_net_smartconnect_0_M04_AXI_ARADDR),
        .M04_AXI_arready(intf_net_smartconnect_0_M04_AXI_ARREADY),
        .M04_AXI_arvalid(intf_net_smartconnect_0_M04_AXI_ARVALID),
        .M04_AXI_awaddr(intf_net_smartconnect_0_M04_AXI_AWADDR),
        .M04_AXI_awready(intf_net_smartconnect_0_M04_AXI_AWREADY),
        .M04_AXI_awvalid(intf_net_smartconnect_0_M04_AXI_AWVALID),
        .M04_AXI_bready(intf_net_smartconnect_0_M04_AXI_BREADY),
        .M04_AXI_bresp(intf_net_smartconnect_0_M04_AXI_BRESP),
        .M04_AXI_bvalid(intf_net_smartconnect_0_M04_AXI_BVALID),
        .M04_AXI_rdata(intf_net_smartconnect_0_M04_AXI_RDATA),
        .M04_AXI_rready(intf_net_smartconnect_0_M04_AXI_RREADY),
        .M04_AXI_rresp(intf_net_smartconnect_0_M04_AXI_RRESP),
        .M04_AXI_rvalid(intf_net_smartconnect_0_M04_AXI_RVALID),
        .M04_AXI_wdata(intf_net_smartconnect_0_M04_AXI_WDATA),
        .M04_AXI_wready(intf_net_smartconnect_0_M04_AXI_WREADY),
        .M04_AXI_wstrb(intf_net_smartconnect_0_M04_AXI_WSTRB),
        .M04_AXI_wvalid(intf_net_smartconnect_0_M04_AXI_WVALID),
        .M05_AXI_araddr(intf_net_smartconnect_0_M05_AXI_ARADDR),
        .M05_AXI_arready(intf_net_smartconnect_0_M05_AXI_ARREADY),
        .M05_AXI_arvalid(intf_net_smartconnect_0_M05_AXI_ARVALID),
        .M05_AXI_awaddr(intf_net_smartconnect_0_M05_AXI_AWADDR),
        .M05_AXI_awready(intf_net_smartconnect_0_M05_AXI_AWREADY),
        .M05_AXI_awvalid(intf_net_smartconnect_0_M05_AXI_AWVALID),
        .M05_AXI_bready(intf_net_smartconnect_0_M05_AXI_BREADY),
        .M05_AXI_bresp(intf_net_smartconnect_0_M05_AXI_BRESP),
        .M05_AXI_bvalid(intf_net_smartconnect_0_M05_AXI_BVALID),
        .M05_AXI_rdata(intf_net_smartconnect_0_M05_AXI_RDATA),
        .M05_AXI_rready(intf_net_smartconnect_0_M05_AXI_RREADY),
        .M05_AXI_rresp(intf_net_smartconnect_0_M05_AXI_RRESP),
        .M05_AXI_rvalid(intf_net_smartconnect_0_M05_AXI_RVALID),
        .M05_AXI_wdata(intf_net_smartconnect_0_M05_AXI_WDATA),
        .M05_AXI_wready(intf_net_smartconnect_0_M05_AXI_WREADY),
        .M05_AXI_wstrb(intf_net_smartconnect_0_M05_AXI_WSTRB),
        .M05_AXI_wvalid(intf_net_smartconnect_0_M05_AXI_WVALID),
        .M06_AXI_araddr(intf_net_smartconnect_0_M06_AXI_ARADDR),
        .M06_AXI_arready(intf_net_smartconnect_0_M06_AXI_ARREADY),
        .M06_AXI_arvalid(intf_net_smartconnect_0_M06_AXI_ARVALID),
        .M06_AXI_awaddr(intf_net_smartconnect_0_M06_AXI_AWADDR),
        .M06_AXI_awready(intf_net_smartconnect_0_M06_AXI_AWREADY),
        .M06_AXI_awvalid(intf_net_smartconnect_0_M06_AXI_AWVALID),
        .M06_AXI_bready(intf_net_smartconnect_0_M06_AXI_BREADY),
        .M06_AXI_bresp(intf_net_smartconnect_0_M06_AXI_BRESP),
        .M06_AXI_bvalid(intf_net_smartconnect_0_M06_AXI_BVALID),
        .M06_AXI_rdata(intf_net_smartconnect_0_M06_AXI_RDATA),
        .M06_AXI_rready(intf_net_smartconnect_0_M06_AXI_RREADY),
        .M06_AXI_rresp(intf_net_smartconnect_0_M06_AXI_RRESP),
        .M06_AXI_rvalid(intf_net_smartconnect_0_M06_AXI_RVALID),
        .M06_AXI_wdata(intf_net_smartconnect_0_M06_AXI_WDATA),
        .M06_AXI_wready(intf_net_smartconnect_0_M06_AXI_WREADY),
        .M06_AXI_wstrb(intf_net_smartconnect_0_M06_AXI_WSTRB),
        .M06_AXI_wvalid(intf_net_smartconnect_0_M06_AXI_WVALID),
        .M07_AXI_araddr(intf_net_smartconnect_0_M07_AXI_ARADDR),
        .M07_AXI_arready(intf_net_smartconnect_0_M07_AXI_ARREADY),
        .M07_AXI_arvalid(intf_net_smartconnect_0_M07_AXI_ARVALID),
        .M07_AXI_awaddr(intf_net_smartconnect_0_M07_AXI_AWADDR),
        .M07_AXI_awready(intf_net_smartconnect_0_M07_AXI_AWREADY),
        .M07_AXI_awvalid(intf_net_smartconnect_0_M07_AXI_AWVALID),
        .M07_AXI_bready(intf_net_smartconnect_0_M07_AXI_BREADY),
        .M07_AXI_bresp(intf_net_smartconnect_0_M07_AXI_BRESP),
        .M07_AXI_bvalid(intf_net_smartconnect_0_M07_AXI_BVALID),
        .M07_AXI_rdata(intf_net_smartconnect_0_M07_AXI_RDATA),
        .M07_AXI_rready(intf_net_smartconnect_0_M07_AXI_RREADY),
        .M07_AXI_rresp(intf_net_smartconnect_0_M07_AXI_RRESP),
        .M07_AXI_rvalid(intf_net_smartconnect_0_M07_AXI_RVALID),
        .M07_AXI_wdata(intf_net_smartconnect_0_M07_AXI_WDATA),
        .M07_AXI_wready(intf_net_smartconnect_0_M07_AXI_WREADY),
        .M07_AXI_wstrb(intf_net_smartconnect_0_M07_AXI_WSTRB),
        .M07_AXI_wvalid(intf_net_smartconnect_0_M07_AXI_WVALID),
        .M08_AXI_araddr(intf_net_smartconnect_0_M08_AXI_ARADDR),
        .M08_AXI_arready(intf_net_smartconnect_0_M08_AXI_ARREADY),
        .M08_AXI_arvalid(intf_net_smartconnect_0_M08_AXI_ARVALID),
        .M08_AXI_awaddr(intf_net_smartconnect_0_M08_AXI_AWADDR),
        .M08_AXI_awready(intf_net_smartconnect_0_M08_AXI_AWREADY),
        .M08_AXI_awvalid(intf_net_smartconnect_0_M08_AXI_AWVALID),
        .M08_AXI_bready(intf_net_smartconnect_0_M08_AXI_BREADY),
        .M08_AXI_bresp(intf_net_smartconnect_0_M08_AXI_BRESP),
        .M08_AXI_bvalid(intf_net_smartconnect_0_M08_AXI_BVALID),
        .M08_AXI_rdata(intf_net_smartconnect_0_M08_AXI_RDATA),
        .M08_AXI_rready(intf_net_smartconnect_0_M08_AXI_RREADY),
        .M08_AXI_rresp(intf_net_smartconnect_0_M08_AXI_RRESP),
        .M08_AXI_rvalid(intf_net_smartconnect_0_M08_AXI_RVALID),
        .M08_AXI_wdata(intf_net_smartconnect_0_M08_AXI_WDATA),
        .M08_AXI_wready(intf_net_smartconnect_0_M08_AXI_WREADY),
        .M08_AXI_wstrb(intf_net_smartconnect_0_M08_AXI_WSTRB),
        .M08_AXI_wvalid(intf_net_smartconnect_0_M08_AXI_WVALID),
        .M09_AXI_arready(1'b0),
        .M09_AXI_awready(1'b0),
        .M09_AXI_bid(1'b0),
        .M09_AXI_bresp({1'b0,1'b0}),
        .M09_AXI_buser(1'b0),
        .M09_AXI_bvalid(1'b0),
        .M09_AXI_rdata(1'b0),
        .M09_AXI_rid(1'b0),
        .M09_AXI_rlast(1'b0),
        .M09_AXI_rresp({1'b0,1'b0}),
        .M09_AXI_ruser(1'b0),
        .M09_AXI_rvalid(1'b0),
        .M09_AXI_wready(1'b0),
        .M10_AXI_arready(1'b0),
        .M10_AXI_awready(1'b0),
        .M10_AXI_bid(1'b0),
        .M10_AXI_bresp({1'b0,1'b0}),
        .M10_AXI_buser(1'b0),
        .M10_AXI_bvalid(1'b0),
        .M10_AXI_rdata(1'b0),
        .M10_AXI_rid(1'b0),
        .M10_AXI_rlast(1'b0),
        .M10_AXI_rresp({1'b0,1'b0}),
        .M10_AXI_ruser(1'b0),
        .M10_AXI_rvalid(1'b0),
        .M10_AXI_wready(1'b0),
        .M11_AXI_arready(1'b0),
        .M11_AXI_awready(1'b0),
        .M11_AXI_bid(1'b0),
        .M11_AXI_bresp({1'b0,1'b0}),
        .M11_AXI_buser(1'b0),
        .M11_AXI_bvalid(1'b0),
        .M11_AXI_rdata(1'b0),
        .M11_AXI_rid(1'b0),
        .M11_AXI_rlast(1'b0),
        .M11_AXI_rresp({1'b0,1'b0}),
        .M11_AXI_ruser(1'b0),
        .M11_AXI_rvalid(1'b0),
        .M11_AXI_wready(1'b0),
        .S00_AXI_araddr(intf_net_bdry_in_s_axi_ctrl_ARADDR),
        .S00_AXI_arprot(intf_net_bdry_in_s_axi_ctrl_ARPROT),
        .S00_AXI_arready(intf_net_bdry_in_s_axi_ctrl_ARREADY),
        .S00_AXI_arvalid(intf_net_bdry_in_s_axi_ctrl_ARVALID),
        .S00_AXI_awaddr(intf_net_bdry_in_s_axi_ctrl_AWADDR),
        .S00_AXI_awprot(intf_net_bdry_in_s_axi_ctrl_AWPROT),
        .S00_AXI_awready(intf_net_bdry_in_s_axi_ctrl_AWREADY),
        .S00_AXI_awvalid(intf_net_bdry_in_s_axi_ctrl_AWVALID),
        .S00_AXI_bready(intf_net_bdry_in_s_axi_ctrl_BREADY),
        .S00_AXI_bresp(intf_net_bdry_in_s_axi_ctrl_BRESP),
        .S00_AXI_bvalid(intf_net_bdry_in_s_axi_ctrl_BVALID),
        .S00_AXI_rdata(intf_net_bdry_in_s_axi_ctrl_RDATA),
        .S00_AXI_rready(intf_net_bdry_in_s_axi_ctrl_RREADY),
        .S00_AXI_rresp(intf_net_bdry_in_s_axi_ctrl_RRESP),
        .S00_AXI_rvalid(intf_net_bdry_in_s_axi_ctrl_RVALID),
        .S00_AXI_wdata(intf_net_bdry_in_s_axi_ctrl_WDATA),
        .S00_AXI_wready(intf_net_bdry_in_s_axi_ctrl_WREADY),
        .S00_AXI_wstrb(intf_net_bdry_in_s_axi_ctrl_WSTRB),
        .S00_AXI_wvalid(intf_net_bdry_in_s_axi_ctrl_WVALID),
        .aclk(net_bdry_in_aclk_ctrl),
        .aclk1(net_bdry_in_aclk_axis),
        .aclk2(net_bdry_in_aclk_ctrl),
        .aclk3(net_bdry_in_aclk_ctrl),
        .aclk4(net_bdry_in_aclk_ctrl),
        .aresetn(net_bdry_in_aresetn_ctrl));
  bd_d92b_vcr_i_0 vcr_i
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_vcr_i_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_vcr_i_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_vcr_i_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_vcr_i_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_vcr_i_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_vcr_i_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_vcr_i_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_vcr_i_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_vcr_i_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M06_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M06_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M06_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M06_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M06_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M06_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M06_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M06_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M06_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M06_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M06_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M06_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M06_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M06_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M06_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M06_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M06_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M06_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M06_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M06_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M06_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M06_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M06_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M06_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M06_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M06_AXIS_TVALID));
  bd_d92b_vcr_o_0 vcr_o
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_vcr_o_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_vcr_o_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_vcr_o_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_vcr_o_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_vcr_o_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_vcr_o_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_vcr_o_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_vcr_o_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_vcr_o_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M07_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M07_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M07_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M07_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M07_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M07_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M07_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M07_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M07_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M07_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M07_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M07_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M07_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M07_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M07_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M07_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M07_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M07_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M07_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M07_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M07_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M07_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M07_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M07_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M07_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M07_AXIS_TVALID));
  bd_d92b_vid_in_aresetn_0 vid_in_aresetn
       (.Din(net_reset_sel_axis_gpio_io_o),
        .Dout(net_vid_in_aresetn_Dout));
  bd_d92b_video_router_0 video_router
       (.ACLK(net_bdry_in_aclk_axis),
        .ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M00_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M00_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M00_AXIS_tdata(intf_net_video_router_M00_AXIS_TDATA),
        .M00_AXIS_tdest(intf_net_video_router_M00_AXIS_TDEST),
        .M00_AXIS_tid(intf_net_video_router_M00_AXIS_TID),
        .M00_AXIS_tkeep(intf_net_video_router_M00_AXIS_TKEEP),
        .M00_AXIS_tlast(intf_net_video_router_M00_AXIS_TLAST),
        .M00_AXIS_tready(intf_net_video_router_M00_AXIS_TREADY),
        .M00_AXIS_tstrb(intf_net_video_router_M00_AXIS_TSTRB),
        .M00_AXIS_tuser(intf_net_video_router_M00_AXIS_TUSER),
        .M00_AXIS_tvalid(intf_net_video_router_M00_AXIS_TVALID),
        .M01_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M01_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M01_AXIS_tdata(intf_net_video_router_M01_AXIS_TDATA),
        .M01_AXIS_tdest(intf_net_video_router_M01_AXIS_TDEST),
        .M01_AXIS_tid(intf_net_video_router_M01_AXIS_TID),
        .M01_AXIS_tkeep(intf_net_video_router_M01_AXIS_TKEEP),
        .M01_AXIS_tlast(intf_net_video_router_M01_AXIS_TLAST),
        .M01_AXIS_tready(intf_net_video_router_M01_AXIS_TREADY),
        .M01_AXIS_tstrb(intf_net_video_router_M01_AXIS_TSTRB),
        .M01_AXIS_tuser(intf_net_video_router_M01_AXIS_TUSER),
        .M01_AXIS_tvalid(intf_net_video_router_M01_AXIS_TVALID),
        .M02_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M02_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M02_AXIS_tdata(intf_net_video_router_M02_AXIS_TDATA),
        .M02_AXIS_tdest(intf_net_video_router_M02_AXIS_TDEST),
        .M02_AXIS_tid(intf_net_video_router_M02_AXIS_TID),
        .M02_AXIS_tkeep(intf_net_video_router_M02_AXIS_TKEEP),
        .M02_AXIS_tlast(intf_net_video_router_M02_AXIS_TLAST),
        .M02_AXIS_tready(intf_net_video_router_M02_AXIS_TREADY),
        .M02_AXIS_tstrb(intf_net_video_router_M02_AXIS_TSTRB),
        .M02_AXIS_tuser(intf_net_video_router_M02_AXIS_TUSER),
        .M02_AXIS_tvalid(intf_net_video_router_M02_AXIS_TVALID),
        .M03_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M03_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M03_AXIS_tready(1'b0),
        .M04_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M04_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M04_AXIS_tdata(intf_net_video_router_M04_AXIS_TDATA),
        .M04_AXIS_tdest(intf_net_video_router_M04_AXIS_TDEST),
        .M04_AXIS_tid(intf_net_video_router_M04_AXIS_TID),
        .M04_AXIS_tkeep(intf_net_video_router_M04_AXIS_TKEEP),
        .M04_AXIS_tlast(intf_net_video_router_M04_AXIS_TLAST),
        .M04_AXIS_tready(intf_net_video_router_M04_AXIS_TREADY),
        .M04_AXIS_tstrb(intf_net_video_router_M04_AXIS_TSTRB),
        .M04_AXIS_tuser(intf_net_video_router_M04_AXIS_TUSER),
        .M04_AXIS_tvalid(intf_net_video_router_M04_AXIS_TVALID),
        .M05_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M05_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M05_AXIS_tdata(intf_net_video_router_M05_AXIS_TDATA),
        .M05_AXIS_tdest(intf_net_video_router_M05_AXIS_TDEST),
        .M05_AXIS_tid(intf_net_video_router_M05_AXIS_TID),
        .M05_AXIS_tkeep(intf_net_video_router_M05_AXIS_TKEEP),
        .M05_AXIS_tlast(intf_net_video_router_M05_AXIS_TLAST),
        .M05_AXIS_tready(intf_net_video_router_M05_AXIS_TREADY),
        .M05_AXIS_tstrb(intf_net_video_router_M05_AXIS_TSTRB),
        .M05_AXIS_tuser(intf_net_video_router_M05_AXIS_TUSER),
        .M05_AXIS_tvalid(intf_net_video_router_M05_AXIS_TVALID),
        .M06_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M06_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M06_AXIS_tdata(intf_net_video_router_M06_AXIS_TDATA),
        .M06_AXIS_tdest(intf_net_video_router_M06_AXIS_TDEST),
        .M06_AXIS_tid(intf_net_video_router_M06_AXIS_TID),
        .M06_AXIS_tkeep(intf_net_video_router_M06_AXIS_TKEEP),
        .M06_AXIS_tlast(intf_net_video_router_M06_AXIS_TLAST),
        .M06_AXIS_tready(intf_net_video_router_M06_AXIS_TREADY),
        .M06_AXIS_tstrb(intf_net_video_router_M06_AXIS_TSTRB),
        .M06_AXIS_tuser(intf_net_video_router_M06_AXIS_TUSER),
        .M06_AXIS_tvalid(intf_net_video_router_M06_AXIS_TVALID),
        .M07_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M07_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M07_AXIS_tdata(intf_net_video_router_M07_AXIS_TDATA),
        .M07_AXIS_tdest(intf_net_video_router_M07_AXIS_TDEST),
        .M07_AXIS_tid(intf_net_video_router_M07_AXIS_TID),
        .M07_AXIS_tkeep(intf_net_video_router_M07_AXIS_TKEEP),
        .M07_AXIS_tlast(intf_net_video_router_M07_AXIS_TLAST),
        .M07_AXIS_tready(intf_net_video_router_M07_AXIS_TREADY),
        .M07_AXIS_tstrb(intf_net_video_router_M07_AXIS_TSTRB),
        .M07_AXIS_tuser(intf_net_video_router_M07_AXIS_TUSER),
        .M07_AXIS_tvalid(intf_net_video_router_M07_AXIS_TVALID),
        .M08_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M08_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M08_AXIS_tdata(intf_net_video_router_M08_AXIS_TDATA),
        .M08_AXIS_tdest(intf_net_video_router_M08_AXIS_TDEST),
        .M08_AXIS_tid(intf_net_video_router_M08_AXIS_TID),
        .M08_AXIS_tkeep(intf_net_video_router_M08_AXIS_TKEEP),
        .M08_AXIS_tlast(intf_net_video_router_M08_AXIS_TLAST),
        .M08_AXIS_tready(intf_net_video_router_M08_AXIS_TREADY),
        .M08_AXIS_tstrb(intf_net_video_router_M08_AXIS_TSTRB),
        .M08_AXIS_tuser(intf_net_video_router_M08_AXIS_TUSER),
        .M08_AXIS_tvalid(intf_net_video_router_M08_AXIS_TVALID),
        .M09_AXIS_ACLK(net_bdry_in_aclk_axis),
        .M09_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .M09_AXIS_tready(1'b0),
        .S00_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S00_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S00_AXIS_tdata(intf_net_input_size_set_M_AXIS_TDATA),
        .S00_AXIS_tdest(intf_net_input_size_set_M_AXIS_TDEST),
        .S00_AXIS_tid(intf_net_input_size_set_M_AXIS_TID),
        .S00_AXIS_tkeep(intf_net_input_size_set_M_AXIS_TKEEP),
        .S00_AXIS_tlast(intf_net_input_size_set_M_AXIS_TLAST),
        .S00_AXIS_tready(intf_net_input_size_set_M_AXIS_TREADY),
        .S00_AXIS_tstrb(intf_net_input_size_set_M_AXIS_TSTRB),
        .S00_AXIS_tuser(intf_net_input_size_set_M_AXIS_TUSER),
        .S00_AXIS_tvalid(intf_net_input_size_set_M_AXIS_TVALID),
        .S01_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S01_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S01_AXIS_tdata(intf_net_vsc_m_axis_video_TDATA),
        .S01_AXIS_tdest(intf_net_vsc_m_axis_video_TDEST),
        .S01_AXIS_tid(intf_net_vsc_m_axis_video_TID),
        .S01_AXIS_tkeep(intf_net_vsc_m_axis_video_TKEEP),
        .S01_AXIS_tlast(intf_net_vsc_m_axis_video_TLAST),
        .S01_AXIS_tready(intf_net_vsc_m_axis_video_TREADY),
        .S01_AXIS_tstrb(intf_net_vsc_m_axis_video_TSTRB),
        .S01_AXIS_tuser(intf_net_vsc_m_axis_video_TUSER),
        .S01_AXIS_tvalid(intf_net_vsc_m_axis_video_TVALID),
        .S02_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S02_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S02_AXIS_tdata(intf_net_hsc_m_axis_video_TDATA),
        .S02_AXIS_tdest(intf_net_hsc_m_axis_video_TDEST),
        .S02_AXIS_tid(intf_net_hsc_m_axis_video_TID),
        .S02_AXIS_tkeep(intf_net_hsc_m_axis_video_TKEEP),
        .S02_AXIS_tlast(intf_net_hsc_m_axis_video_TLAST),
        .S02_AXIS_tready(intf_net_hsc_m_axis_video_TREADY),
        .S02_AXIS_tstrb(intf_net_hsc_m_axis_video_TSTRB),
        .S02_AXIS_tuser(intf_net_hsc_m_axis_video_TUSER),
        .S02_AXIS_tvalid(intf_net_hsc_m_axis_video_TVALID),
        .S03_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S03_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S03_AXIS_tdata(1'b0),
        .S03_AXIS_tdest(1'b0),
        .S03_AXIS_tvalid(1'b0),
        .S04_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S04_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S04_AXIS_tdata(intf_net_ltr_m_axis_video_TDATA),
        .S04_AXIS_tdest(intf_net_ltr_m_axis_video_TDEST),
        .S04_AXIS_tid(intf_net_ltr_m_axis_video_TID),
        .S04_AXIS_tkeep(intf_net_ltr_m_axis_video_TKEEP),
        .S04_AXIS_tlast(intf_net_ltr_m_axis_video_TLAST),
        .S04_AXIS_tready(intf_net_ltr_m_axis_video_TREADY),
        .S04_AXIS_tstrb(intf_net_ltr_m_axis_video_TSTRB),
        .S04_AXIS_tuser(intf_net_ltr_m_axis_video_TUSER),
        .S04_AXIS_tvalid(intf_net_ltr_m_axis_video_TVALID),
        .S05_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S05_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S05_AXIS_tdata(intf_net_hcr_m_axis_video_TDATA),
        .S05_AXIS_tdest(intf_net_hcr_m_axis_video_TDEST),
        .S05_AXIS_tid(intf_net_hcr_m_axis_video_TID),
        .S05_AXIS_tkeep(intf_net_hcr_m_axis_video_TKEEP),
        .S05_AXIS_tlast(intf_net_hcr_m_axis_video_TLAST),
        .S05_AXIS_tready(intf_net_hcr_m_axis_video_TREADY),
        .S05_AXIS_tstrb(intf_net_hcr_m_axis_video_TSTRB),
        .S05_AXIS_tuser(intf_net_hcr_m_axis_video_TUSER),
        .S05_AXIS_tvalid(intf_net_hcr_m_axis_video_TVALID),
        .S06_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S06_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S06_AXIS_tdata(intf_net_vcr_i_m_axis_video_TDATA),
        .S06_AXIS_tdest(intf_net_vcr_i_m_axis_video_TDEST),
        .S06_AXIS_tid(intf_net_vcr_i_m_axis_video_TID),
        .S06_AXIS_tkeep(intf_net_vcr_i_m_axis_video_TKEEP),
        .S06_AXIS_tlast(intf_net_vcr_i_m_axis_video_TLAST),
        .S06_AXIS_tready(intf_net_vcr_i_m_axis_video_TREADY),
        .S06_AXIS_tstrb(intf_net_vcr_i_m_axis_video_TSTRB),
        .S06_AXIS_tuser(intf_net_vcr_i_m_axis_video_TUSER),
        .S06_AXIS_tvalid(intf_net_vcr_i_m_axis_video_TVALID),
        .S07_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S07_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S07_AXIS_tdata(intf_net_vcr_o_m_axis_video_TDATA),
        .S07_AXIS_tdest(intf_net_vcr_o_m_axis_video_TDEST),
        .S07_AXIS_tid(intf_net_vcr_o_m_axis_video_TID),
        .S07_AXIS_tkeep(intf_net_vcr_o_m_axis_video_TKEEP),
        .S07_AXIS_tlast(intf_net_vcr_o_m_axis_video_TLAST),
        .S07_AXIS_tready(intf_net_vcr_o_m_axis_video_TREADY),
        .S07_AXIS_tstrb(intf_net_vcr_o_m_axis_video_TSTRB),
        .S07_AXIS_tuser(intf_net_vcr_o_m_axis_video_TUSER),
        .S07_AXIS_tvalid(intf_net_vcr_o_m_axis_video_TVALID),
        .S08_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S08_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S08_AXIS_tdata(intf_net_csc_m_axis_video_TDATA),
        .S08_AXIS_tdest(intf_net_csc_m_axis_video_TDEST),
        .S08_AXIS_tid(intf_net_csc_m_axis_video_TID),
        .S08_AXIS_tkeep(intf_net_csc_m_axis_video_TKEEP),
        .S08_AXIS_tlast(intf_net_csc_m_axis_video_TLAST),
        .S08_AXIS_tready(intf_net_csc_m_axis_video_TREADY),
        .S08_AXIS_tstrb(intf_net_csc_m_axis_video_TSTRB),
        .S08_AXIS_tuser(intf_net_csc_m_axis_video_TUSER),
        .S08_AXIS_tvalid(intf_net_csc_m_axis_video_TVALID),
        .S09_AXIS_ACLK(net_bdry_in_aclk_axis),
        .S09_AXIS_ARESETN(net_proc_ss_ip_aresetn_Dout),
        .S09_AXIS_tdata(1'b0),
        .S09_AXIS_tdest(1'b0),
        .S09_AXIS_tvalid(1'b0),
        .S_AXI_CTRL_ACLK(net_bdry_in_aclk_ctrl),
        .S_AXI_CTRL_ARESETN(net_bdry_in_aresetn_ctrl),
        .S_AXI_CTRL_araddr(intf_net_smartconnect_0_M00_AXI_ARADDR),
        .S_AXI_CTRL_arready(intf_net_smartconnect_0_M00_AXI_ARREADY),
        .S_AXI_CTRL_arvalid(intf_net_smartconnect_0_M00_AXI_ARVALID),
        .S_AXI_CTRL_awaddr(intf_net_smartconnect_0_M00_AXI_AWADDR),
        .S_AXI_CTRL_awready(intf_net_smartconnect_0_M00_AXI_AWREADY),
        .S_AXI_CTRL_awvalid(intf_net_smartconnect_0_M00_AXI_AWVALID),
        .S_AXI_CTRL_bready(intf_net_smartconnect_0_M00_AXI_BREADY),
        .S_AXI_CTRL_bresp(intf_net_smartconnect_0_M00_AXI_BRESP),
        .S_AXI_CTRL_bvalid(intf_net_smartconnect_0_M00_AXI_BVALID),
        .S_AXI_CTRL_rdata(intf_net_smartconnect_0_M00_AXI_RDATA),
        .S_AXI_CTRL_rready(intf_net_smartconnect_0_M00_AXI_RREADY),
        .S_AXI_CTRL_rresp(intf_net_smartconnect_0_M00_AXI_RRESP),
        .S_AXI_CTRL_rvalid(intf_net_smartconnect_0_M00_AXI_RVALID),
        .S_AXI_CTRL_wdata(intf_net_smartconnect_0_M00_AXI_WDATA),
        .S_AXI_CTRL_wready(intf_net_smartconnect_0_M00_AXI_WREADY),
        .S_AXI_CTRL_wvalid(intf_net_smartconnect_0_M00_AXI_WVALID));
  bd_d92b_vsc_0 vsc
       (.ap_clk(net_bdry_in_aclk_axis),
        .ap_rst_n(net_proc_ss_ip_aresetn_Dout),
        .m_axis_video_TDATA(intf_net_vsc_m_axis_video_TDATA),
        .m_axis_video_TDEST(intf_net_vsc_m_axis_video_TDEST),
        .m_axis_video_TID(intf_net_vsc_m_axis_video_TID),
        .m_axis_video_TKEEP(intf_net_vsc_m_axis_video_TKEEP),
        .m_axis_video_TLAST(intf_net_vsc_m_axis_video_TLAST),
        .m_axis_video_TREADY(intf_net_vsc_m_axis_video_TREADY),
        .m_axis_video_TSTRB(intf_net_vsc_m_axis_video_TSTRB),
        .m_axis_video_TUSER(intf_net_vsc_m_axis_video_TUSER),
        .m_axis_video_TVALID(intf_net_vsc_m_axis_video_TVALID),
        .s_axi_CTRL_ARADDR(intf_net_smartconnect_0_M02_AXI_ARADDR),
        .s_axi_CTRL_ARREADY(intf_net_smartconnect_0_M02_AXI_ARREADY),
        .s_axi_CTRL_ARVALID(intf_net_smartconnect_0_M02_AXI_ARVALID),
        .s_axi_CTRL_AWADDR(intf_net_smartconnect_0_M02_AXI_AWADDR),
        .s_axi_CTRL_AWREADY(intf_net_smartconnect_0_M02_AXI_AWREADY),
        .s_axi_CTRL_AWVALID(intf_net_smartconnect_0_M02_AXI_AWVALID),
        .s_axi_CTRL_BREADY(intf_net_smartconnect_0_M02_AXI_BREADY),
        .s_axi_CTRL_BRESP(intf_net_smartconnect_0_M02_AXI_BRESP),
        .s_axi_CTRL_BVALID(intf_net_smartconnect_0_M02_AXI_BVALID),
        .s_axi_CTRL_RDATA(intf_net_smartconnect_0_M02_AXI_RDATA),
        .s_axi_CTRL_RREADY(intf_net_smartconnect_0_M02_AXI_RREADY),
        .s_axi_CTRL_RRESP(intf_net_smartconnect_0_M02_AXI_RRESP),
        .s_axi_CTRL_RVALID(intf_net_smartconnect_0_M02_AXI_RVALID),
        .s_axi_CTRL_WDATA(intf_net_smartconnect_0_M02_AXI_WDATA),
        .s_axi_CTRL_WREADY(intf_net_smartconnect_0_M02_AXI_WREADY),
        .s_axi_CTRL_WSTRB(intf_net_smartconnect_0_M02_AXI_WSTRB),
        .s_axi_CTRL_WVALID(intf_net_smartconnect_0_M02_AXI_WVALID),
        .s_axis_video_TDATA(intf_net_video_router_M01_AXIS_TDATA),
        .s_axis_video_TDEST(intf_net_video_router_M01_AXIS_TDEST),
        .s_axis_video_TID(intf_net_video_router_M01_AXIS_TID),
        .s_axis_video_TKEEP(intf_net_video_router_M01_AXIS_TKEEP),
        .s_axis_video_TLAST(intf_net_video_router_M01_AXIS_TLAST),
        .s_axis_video_TREADY(intf_net_video_router_M01_AXIS_TREADY),
        .s_axis_video_TSTRB(intf_net_video_router_M01_AXIS_TSTRB),
        .s_axis_video_TUSER(intf_net_video_router_M01_AXIS_TUSER),
        .s_axis_video_TVALID(intf_net_video_router_M01_AXIS_TVALID));
endmodule

module bd_d92b_video_router_0
   (ACLK,
    ARESETN,
    M00_AXIS_ACLK,
    M00_AXIS_ARESETN,
    M00_AXIS_tdata,
    M00_AXIS_tdest,
    M00_AXIS_tid,
    M00_AXIS_tkeep,
    M00_AXIS_tlast,
    M00_AXIS_tready,
    M00_AXIS_tstrb,
    M00_AXIS_tuser,
    M00_AXIS_tvalid,
    M01_AXIS_ACLK,
    M01_AXIS_ARESETN,
    M01_AXIS_tdata,
    M01_AXIS_tdest,
    M01_AXIS_tid,
    M01_AXIS_tkeep,
    M01_AXIS_tlast,
    M01_AXIS_tready,
    M01_AXIS_tstrb,
    M01_AXIS_tuser,
    M01_AXIS_tvalid,
    M02_AXIS_ACLK,
    M02_AXIS_ARESETN,
    M02_AXIS_tdata,
    M02_AXIS_tdest,
    M02_AXIS_tid,
    M02_AXIS_tkeep,
    M02_AXIS_tlast,
    M02_AXIS_tready,
    M02_AXIS_tstrb,
    M02_AXIS_tuser,
    M02_AXIS_tvalid,
    M03_AXIS_ACLK,
    M03_AXIS_ARESETN,
    M03_AXIS_tdata,
    M03_AXIS_tdest,
    M03_AXIS_tready,
    M03_AXIS_tvalid,
    M04_AXIS_ACLK,
    M04_AXIS_ARESETN,
    M04_AXIS_tdata,
    M04_AXIS_tdest,
    M04_AXIS_tid,
    M04_AXIS_tkeep,
    M04_AXIS_tlast,
    M04_AXIS_tready,
    M04_AXIS_tstrb,
    M04_AXIS_tuser,
    M04_AXIS_tvalid,
    M05_AXIS_ACLK,
    M05_AXIS_ARESETN,
    M05_AXIS_tdata,
    M05_AXIS_tdest,
    M05_AXIS_tid,
    M05_AXIS_tkeep,
    M05_AXIS_tlast,
    M05_AXIS_tready,
    M05_AXIS_tstrb,
    M05_AXIS_tuser,
    M05_AXIS_tvalid,
    M06_AXIS_ACLK,
    M06_AXIS_ARESETN,
    M06_AXIS_tdata,
    M06_AXIS_tdest,
    M06_AXIS_tid,
    M06_AXIS_tkeep,
    M06_AXIS_tlast,
    M06_AXIS_tready,
    M06_AXIS_tstrb,
    M06_AXIS_tuser,
    M06_AXIS_tvalid,
    M07_AXIS_ACLK,
    M07_AXIS_ARESETN,
    M07_AXIS_tdata,
    M07_AXIS_tdest,
    M07_AXIS_tid,
    M07_AXIS_tkeep,
    M07_AXIS_tlast,
    M07_AXIS_tready,
    M07_AXIS_tstrb,
    M07_AXIS_tuser,
    M07_AXIS_tvalid,
    M08_AXIS_ACLK,
    M08_AXIS_ARESETN,
    M08_AXIS_tdata,
    M08_AXIS_tdest,
    M08_AXIS_tid,
    M08_AXIS_tkeep,
    M08_AXIS_tlast,
    M08_AXIS_tready,
    M08_AXIS_tstrb,
    M08_AXIS_tuser,
    M08_AXIS_tvalid,
    M09_AXIS_ACLK,
    M09_AXIS_ARESETN,
    M09_AXIS_tdata,
    M09_AXIS_tdest,
    M09_AXIS_tready,
    M09_AXIS_tvalid,
    S00_AXIS_ACLK,
    S00_AXIS_ARESETN,
    S00_AXIS_tdata,
    S00_AXIS_tdest,
    S00_AXIS_tid,
    S00_AXIS_tkeep,
    S00_AXIS_tlast,
    S00_AXIS_tready,
    S00_AXIS_tstrb,
    S00_AXIS_tuser,
    S00_AXIS_tvalid,
    S01_AXIS_ACLK,
    S01_AXIS_ARESETN,
    S01_AXIS_tdata,
    S01_AXIS_tdest,
    S01_AXIS_tid,
    S01_AXIS_tkeep,
    S01_AXIS_tlast,
    S01_AXIS_tready,
    S01_AXIS_tstrb,
    S01_AXIS_tuser,
    S01_AXIS_tvalid,
    S02_AXIS_ACLK,
    S02_AXIS_ARESETN,
    S02_AXIS_tdata,
    S02_AXIS_tdest,
    S02_AXIS_tid,
    S02_AXIS_tkeep,
    S02_AXIS_tlast,
    S02_AXIS_tready,
    S02_AXIS_tstrb,
    S02_AXIS_tuser,
    S02_AXIS_tvalid,
    S03_AXIS_ACLK,
    S03_AXIS_ARESETN,
    S03_AXIS_tdata,
    S03_AXIS_tdest,
    S03_AXIS_tready,
    S03_AXIS_tvalid,
    S04_AXIS_ACLK,
    S04_AXIS_ARESETN,
    S04_AXIS_tdata,
    S04_AXIS_tdest,
    S04_AXIS_tid,
    S04_AXIS_tkeep,
    S04_AXIS_tlast,
    S04_AXIS_tready,
    S04_AXIS_tstrb,
    S04_AXIS_tuser,
    S04_AXIS_tvalid,
    S05_AXIS_ACLK,
    S05_AXIS_ARESETN,
    S05_AXIS_tdata,
    S05_AXIS_tdest,
    S05_AXIS_tid,
    S05_AXIS_tkeep,
    S05_AXIS_tlast,
    S05_AXIS_tready,
    S05_AXIS_tstrb,
    S05_AXIS_tuser,
    S05_AXIS_tvalid,
    S06_AXIS_ACLK,
    S06_AXIS_ARESETN,
    S06_AXIS_tdata,
    S06_AXIS_tdest,
    S06_AXIS_tid,
    S06_AXIS_tkeep,
    S06_AXIS_tlast,
    S06_AXIS_tready,
    S06_AXIS_tstrb,
    S06_AXIS_tuser,
    S06_AXIS_tvalid,
    S07_AXIS_ACLK,
    S07_AXIS_ARESETN,
    S07_AXIS_tdata,
    S07_AXIS_tdest,
    S07_AXIS_tid,
    S07_AXIS_tkeep,
    S07_AXIS_tlast,
    S07_AXIS_tready,
    S07_AXIS_tstrb,
    S07_AXIS_tuser,
    S07_AXIS_tvalid,
    S08_AXIS_ACLK,
    S08_AXIS_ARESETN,
    S08_AXIS_tdata,
    S08_AXIS_tdest,
    S08_AXIS_tid,
    S08_AXIS_tkeep,
    S08_AXIS_tlast,
    S08_AXIS_tready,
    S08_AXIS_tstrb,
    S08_AXIS_tuser,
    S08_AXIS_tvalid,
    S09_AXIS_ACLK,
    S09_AXIS_ARESETN,
    S09_AXIS_tdata,
    S09_AXIS_tdest,
    S09_AXIS_tready,
    S09_AXIS_tvalid,
    S_AXI_CTRL_ACLK,
    S_AXI_CTRL_ARESETN,
    S_AXI_CTRL_araddr,
    S_AXI_CTRL_arready,
    S_AXI_CTRL_arvalid,
    S_AXI_CTRL_awaddr,
    S_AXI_CTRL_awready,
    S_AXI_CTRL_awvalid,
    S_AXI_CTRL_bready,
    S_AXI_CTRL_bresp,
    S_AXI_CTRL_bvalid,
    S_AXI_CTRL_rdata,
    S_AXI_CTRL_rready,
    S_AXI_CTRL_rresp,
    S_AXI_CTRL_rvalid,
    S_AXI_CTRL_wdata,
    S_AXI_CTRL_wready,
    S_AXI_CTRL_wvalid);
  input ACLK;
  input ARESETN;
  input M00_AXIS_ACLK;
  input M00_AXIS_ARESETN;
  output [63:0]M00_AXIS_tdata;
  output [3:0]M00_AXIS_tdest;
  output [0:0]M00_AXIS_tid;
  output [7:0]M00_AXIS_tkeep;
  output M00_AXIS_tlast;
  input M00_AXIS_tready;
  output [7:0]M00_AXIS_tstrb;
  output [0:0]M00_AXIS_tuser;
  output M00_AXIS_tvalid;
  input M01_AXIS_ACLK;
  input M01_AXIS_ARESETN;
  output [63:0]M01_AXIS_tdata;
  output [0:0]M01_AXIS_tdest;
  output [0:0]M01_AXIS_tid;
  output [7:0]M01_AXIS_tkeep;
  output M01_AXIS_tlast;
  input M01_AXIS_tready;
  output [7:0]M01_AXIS_tstrb;
  output [0:0]M01_AXIS_tuser;
  output M01_AXIS_tvalid;
  input M02_AXIS_ACLK;
  input M02_AXIS_ARESETN;
  output [63:0]M02_AXIS_tdata;
  output [0:0]M02_AXIS_tdest;
  output [0:0]M02_AXIS_tid;
  output [7:0]M02_AXIS_tkeep;
  output M02_AXIS_tlast;
  input M02_AXIS_tready;
  output [7:0]M02_AXIS_tstrb;
  output [0:0]M02_AXIS_tuser;
  output M02_AXIS_tvalid;
  input M03_AXIS_ACLK;
  input M03_AXIS_ARESETN;
  output M03_AXIS_tdata;
  output M03_AXIS_tdest;
  input M03_AXIS_tready;
  output M03_AXIS_tvalid;
  input M04_AXIS_ACLK;
  input M04_AXIS_ARESETN;
  output [63:0]M04_AXIS_tdata;
  output [0:0]M04_AXIS_tdest;
  output [0:0]M04_AXIS_tid;
  output [7:0]M04_AXIS_tkeep;
  output M04_AXIS_tlast;
  input M04_AXIS_tready;
  output [7:0]M04_AXIS_tstrb;
  output [0:0]M04_AXIS_tuser;
  output M04_AXIS_tvalid;
  input M05_AXIS_ACLK;
  input M05_AXIS_ARESETN;
  output [63:0]M05_AXIS_tdata;
  output [0:0]M05_AXIS_tdest;
  output [0:0]M05_AXIS_tid;
  output [7:0]M05_AXIS_tkeep;
  output [0:0]M05_AXIS_tlast;
  input M05_AXIS_tready;
  output [7:0]M05_AXIS_tstrb;
  output [0:0]M05_AXIS_tuser;
  output M05_AXIS_tvalid;
  input M06_AXIS_ACLK;
  input M06_AXIS_ARESETN;
  output [63:0]M06_AXIS_tdata;
  output [0:0]M06_AXIS_tdest;
  output [0:0]M06_AXIS_tid;
  output [7:0]M06_AXIS_tkeep;
  output [0:0]M06_AXIS_tlast;
  input M06_AXIS_tready;
  output [7:0]M06_AXIS_tstrb;
  output [0:0]M06_AXIS_tuser;
  output M06_AXIS_tvalid;
  input M07_AXIS_ACLK;
  input M07_AXIS_ARESETN;
  output [63:0]M07_AXIS_tdata;
  output [0:0]M07_AXIS_tdest;
  output [0:0]M07_AXIS_tid;
  output [7:0]M07_AXIS_tkeep;
  output [0:0]M07_AXIS_tlast;
  input M07_AXIS_tready;
  output [7:0]M07_AXIS_tstrb;
  output [0:0]M07_AXIS_tuser;
  output M07_AXIS_tvalid;
  input M08_AXIS_ACLK;
  input M08_AXIS_ARESETN;
  output [63:0]M08_AXIS_tdata;
  output [0:0]M08_AXIS_tdest;
  output [0:0]M08_AXIS_tid;
  output [7:0]M08_AXIS_tkeep;
  output M08_AXIS_tlast;
  input M08_AXIS_tready;
  output [7:0]M08_AXIS_tstrb;
  output [0:0]M08_AXIS_tuser;
  output M08_AXIS_tvalid;
  input M09_AXIS_ACLK;
  input M09_AXIS_ARESETN;
  output M09_AXIS_tdata;
  output M09_AXIS_tdest;
  input M09_AXIS_tready;
  output M09_AXIS_tvalid;
  input S00_AXIS_ACLK;
  input S00_AXIS_ARESETN;
  input [63:0]S00_AXIS_tdata;
  input [0:0]S00_AXIS_tdest;
  input [0:0]S00_AXIS_tid;
  input [7:0]S00_AXIS_tkeep;
  input [0:0]S00_AXIS_tlast;
  output [0:0]S00_AXIS_tready;
  input [7:0]S00_AXIS_tstrb;
  input [0:0]S00_AXIS_tuser;
  input [0:0]S00_AXIS_tvalid;
  input S01_AXIS_ACLK;
  input S01_AXIS_ARESETN;
  input [63:0]S01_AXIS_tdata;
  input [0:0]S01_AXIS_tdest;
  input [0:0]S01_AXIS_tid;
  input [7:0]S01_AXIS_tkeep;
  input [0:0]S01_AXIS_tlast;
  output [0:0]S01_AXIS_tready;
  input [7:0]S01_AXIS_tstrb;
  input [0:0]S01_AXIS_tuser;
  input [0:0]S01_AXIS_tvalid;
  input S02_AXIS_ACLK;
  input S02_AXIS_ARESETN;
  input [63:0]S02_AXIS_tdata;
  input [0:0]S02_AXIS_tdest;
  input [0:0]S02_AXIS_tid;
  input [7:0]S02_AXIS_tkeep;
  input [0:0]S02_AXIS_tlast;
  output [0:0]S02_AXIS_tready;
  input [7:0]S02_AXIS_tstrb;
  input [0:0]S02_AXIS_tuser;
  input [0:0]S02_AXIS_tvalid;
  input S03_AXIS_ACLK;
  input S03_AXIS_ARESETN;
  input S03_AXIS_tdata;
  input S03_AXIS_tdest;
  output S03_AXIS_tready;
  input S03_AXIS_tvalid;
  input S04_AXIS_ACLK;
  input S04_AXIS_ARESETN;
  input [63:0]S04_AXIS_tdata;
  input [0:0]S04_AXIS_tdest;
  input [0:0]S04_AXIS_tid;
  input [7:0]S04_AXIS_tkeep;
  input [0:0]S04_AXIS_tlast;
  output [0:0]S04_AXIS_tready;
  input [7:0]S04_AXIS_tstrb;
  input [0:0]S04_AXIS_tuser;
  input [0:0]S04_AXIS_tvalid;
  input S05_AXIS_ACLK;
  input S05_AXIS_ARESETN;
  input [63:0]S05_AXIS_tdata;
  input [0:0]S05_AXIS_tdest;
  input [0:0]S05_AXIS_tid;
  input [7:0]S05_AXIS_tkeep;
  input [0:0]S05_AXIS_tlast;
  output S05_AXIS_tready;
  input [7:0]S05_AXIS_tstrb;
  input [0:0]S05_AXIS_tuser;
  input S05_AXIS_tvalid;
  input S06_AXIS_ACLK;
  input S06_AXIS_ARESETN;
  input [63:0]S06_AXIS_tdata;
  input [0:0]S06_AXIS_tdest;
  input [0:0]S06_AXIS_tid;
  input [7:0]S06_AXIS_tkeep;
  input [0:0]S06_AXIS_tlast;
  output S06_AXIS_tready;
  input [7:0]S06_AXIS_tstrb;
  input [0:0]S06_AXIS_tuser;
  input S06_AXIS_tvalid;
  input S07_AXIS_ACLK;
  input S07_AXIS_ARESETN;
  input [63:0]S07_AXIS_tdata;
  input [0:0]S07_AXIS_tdest;
  input [0:0]S07_AXIS_tid;
  input [7:0]S07_AXIS_tkeep;
  input [0:0]S07_AXIS_tlast;
  output S07_AXIS_tready;
  input [7:0]S07_AXIS_tstrb;
  input [0:0]S07_AXIS_tuser;
  input S07_AXIS_tvalid;
  input S08_AXIS_ACLK;
  input S08_AXIS_ARESETN;
  input [63:0]S08_AXIS_tdata;
  input [0:0]S08_AXIS_tdest;
  input [0:0]S08_AXIS_tid;
  input [7:0]S08_AXIS_tkeep;
  input [0:0]S08_AXIS_tlast;
  output [0:0]S08_AXIS_tready;
  input [7:0]S08_AXIS_tstrb;
  input [0:0]S08_AXIS_tuser;
  input [0:0]S08_AXIS_tvalid;
  input S09_AXIS_ACLK;
  input S09_AXIS_ARESETN;
  input S09_AXIS_tdata;
  input S09_AXIS_tdest;
  output S09_AXIS_tready;
  input S09_AXIS_tvalid;
  input S_AXI_CTRL_ACLK;
  input S_AXI_CTRL_ARESETN;
  input [6:0]S_AXI_CTRL_araddr;
  output S_AXI_CTRL_arready;
  input S_AXI_CTRL_arvalid;
  input [6:0]S_AXI_CTRL_awaddr;
  output S_AXI_CTRL_awready;
  input S_AXI_CTRL_awvalid;
  input S_AXI_CTRL_bready;
  output [1:0]S_AXI_CTRL_bresp;
  output S_AXI_CTRL_bvalid;
  output [31:0]S_AXI_CTRL_rdata;
  input S_AXI_CTRL_rready;
  output [1:0]S_AXI_CTRL_rresp;
  output S_AXI_CTRL_rvalid;
  input [31:0]S_AXI_CTRL_wdata;
  output S_AXI_CTRL_wready;
  input S_AXI_CTRL_wvalid;

  wire M00_AXIS_ACLK_1;
  wire M00_AXIS_ARESETN_1;
  wire M01_AXIS_ACLK_1;
  wire M01_AXIS_ARESETN_1;
  wire M02_AXIS_ACLK_1;
  wire M02_AXIS_ARESETN_1;
  wire M03_AXIS_ACLK_1;
  wire M03_AXIS_ARESETN_1;
  wire M04_AXIS_ACLK_1;
  wire M04_AXIS_ARESETN_1;
  wire M05_AXIS_ACLK_1;
  wire M05_AXIS_ARESETN_1;
  wire M06_AXIS_ACLK_1;
  wire M06_AXIS_ARESETN_1;
  wire M07_AXIS_ACLK_1;
  wire M07_AXIS_ARESETN_1;
  wire M08_AXIS_ACLK_1;
  wire M08_AXIS_ARESETN_1;
  wire M09_AXIS_ACLK_1;
  wire M09_AXIS_ARESETN_1;
  wire S00_AXIS_ACLK_1;
  wire S00_AXIS_ARESETN_1;
  wire S01_AXIS_ACLK_1;
  wire S01_AXIS_ARESETN_1;
  wire S02_AXIS_ACLK_1;
  wire S02_AXIS_ARESETN_1;
  wire S03_AXIS_ACLK_1;
  wire S03_AXIS_ARESETN_1;
  wire S04_AXIS_ACLK_1;
  wire S04_AXIS_ARESETN_1;
  wire S05_AXIS_ACLK_1;
  wire S05_AXIS_ARESETN_1;
  wire S06_AXIS_ACLK_1;
  wire S06_AXIS_ARESETN_1;
  wire S07_AXIS_ACLK_1;
  wire S07_AXIS_ARESETN_1;
  wire S08_AXIS_ACLK_1;
  wire S08_AXIS_ARESETN_1;
  wire S09_AXIS_ACLK_1;
  wire S09_AXIS_ARESETN_1;
  wire S_AXI_CTRL_ACLK_1;
  wire S_AXI_CTRL_ARESETN_1;
  wire [63:0]m00_couplers_to_video_router_TDATA;
  wire [3:0]m00_couplers_to_video_router_TDEST;
  wire [0:0]m00_couplers_to_video_router_TID;
  wire [7:0]m00_couplers_to_video_router_TKEEP;
  wire m00_couplers_to_video_router_TLAST;
  wire m00_couplers_to_video_router_TREADY;
  wire [7:0]m00_couplers_to_video_router_TSTRB;
  wire [0:0]m00_couplers_to_video_router_TUSER;
  wire m00_couplers_to_video_router_TVALID;
  wire [63:0]m01_couplers_to_video_router_TDATA;
  wire [0:0]m01_couplers_to_video_router_TDEST;
  wire [0:0]m01_couplers_to_video_router_TID;
  wire [7:0]m01_couplers_to_video_router_TKEEP;
  wire m01_couplers_to_video_router_TLAST;
  wire m01_couplers_to_video_router_TREADY;
  wire [7:0]m01_couplers_to_video_router_TSTRB;
  wire [0:0]m01_couplers_to_video_router_TUSER;
  wire m01_couplers_to_video_router_TVALID;
  wire [63:0]m02_couplers_to_video_router_TDATA;
  wire [0:0]m02_couplers_to_video_router_TDEST;
  wire [0:0]m02_couplers_to_video_router_TID;
  wire [7:0]m02_couplers_to_video_router_TKEEP;
  wire m02_couplers_to_video_router_TLAST;
  wire m02_couplers_to_video_router_TREADY;
  wire [7:0]m02_couplers_to_video_router_TSTRB;
  wire [0:0]m02_couplers_to_video_router_TUSER;
  wire m02_couplers_to_video_router_TVALID;
  wire m03_couplers_to_video_router_TDATA;
  wire m03_couplers_to_video_router_TDEST;
  wire m03_couplers_to_video_router_TREADY;
  wire m03_couplers_to_video_router_TVALID;
  wire [63:0]m04_couplers_to_video_router_TDATA;
  wire [0:0]m04_couplers_to_video_router_TDEST;
  wire [0:0]m04_couplers_to_video_router_TID;
  wire [7:0]m04_couplers_to_video_router_TKEEP;
  wire m04_couplers_to_video_router_TLAST;
  wire m04_couplers_to_video_router_TREADY;
  wire [7:0]m04_couplers_to_video_router_TSTRB;
  wire [0:0]m04_couplers_to_video_router_TUSER;
  wire m04_couplers_to_video_router_TVALID;
  wire [63:0]m05_couplers_to_video_router_TDATA;
  wire [0:0]m05_couplers_to_video_router_TDEST;
  wire [0:0]m05_couplers_to_video_router_TID;
  wire [7:0]m05_couplers_to_video_router_TKEEP;
  wire [0:0]m05_couplers_to_video_router_TLAST;
  wire m05_couplers_to_video_router_TREADY;
  wire [7:0]m05_couplers_to_video_router_TSTRB;
  wire [0:0]m05_couplers_to_video_router_TUSER;
  wire m05_couplers_to_video_router_TVALID;
  wire [63:0]m06_couplers_to_video_router_TDATA;
  wire [0:0]m06_couplers_to_video_router_TDEST;
  wire [0:0]m06_couplers_to_video_router_TID;
  wire [7:0]m06_couplers_to_video_router_TKEEP;
  wire [0:0]m06_couplers_to_video_router_TLAST;
  wire m06_couplers_to_video_router_TREADY;
  wire [7:0]m06_couplers_to_video_router_TSTRB;
  wire [0:0]m06_couplers_to_video_router_TUSER;
  wire m06_couplers_to_video_router_TVALID;
  wire [63:0]m07_couplers_to_video_router_TDATA;
  wire [0:0]m07_couplers_to_video_router_TDEST;
  wire [0:0]m07_couplers_to_video_router_TID;
  wire [7:0]m07_couplers_to_video_router_TKEEP;
  wire [0:0]m07_couplers_to_video_router_TLAST;
  wire m07_couplers_to_video_router_TREADY;
  wire [7:0]m07_couplers_to_video_router_TSTRB;
  wire [0:0]m07_couplers_to_video_router_TUSER;
  wire m07_couplers_to_video_router_TVALID;
  wire [63:0]m08_couplers_to_video_router_TDATA;
  wire [0:0]m08_couplers_to_video_router_TDEST;
  wire [0:0]m08_couplers_to_video_router_TID;
  wire [7:0]m08_couplers_to_video_router_TKEEP;
  wire m08_couplers_to_video_router_TLAST;
  wire m08_couplers_to_video_router_TREADY;
  wire [7:0]m08_couplers_to_video_router_TSTRB;
  wire [0:0]m08_couplers_to_video_router_TUSER;
  wire m08_couplers_to_video_router_TVALID;
  wire m09_couplers_to_video_router_TDATA;
  wire m09_couplers_to_video_router_TDEST;
  wire m09_couplers_to_video_router_TREADY;
  wire m09_couplers_to_video_router_TVALID;
  wire [63:0]s00_couplers_to_xbar_TDATA;
  wire [3:0]s00_couplers_to_xbar_TDEST;
  wire [0:0]s00_couplers_to_xbar_TID;
  wire [7:0]s00_couplers_to_xbar_TKEEP;
  wire [0:0]s00_couplers_to_xbar_TLAST;
  wire [0:0]s00_couplers_to_xbar_TREADY;
  wire [7:0]s00_couplers_to_xbar_TSTRB;
  wire [0:0]s00_couplers_to_xbar_TUSER;
  wire [0:0]s00_couplers_to_xbar_TVALID;
  wire [63:0]s01_couplers_to_xbar_TDATA;
  wire [3:0]s01_couplers_to_xbar_TDEST;
  wire [0:0]s01_couplers_to_xbar_TID;
  wire [7:0]s01_couplers_to_xbar_TKEEP;
  wire [0:0]s01_couplers_to_xbar_TLAST;
  wire [1:1]s01_couplers_to_xbar_TREADY;
  wire [7:0]s01_couplers_to_xbar_TSTRB;
  wire [0:0]s01_couplers_to_xbar_TUSER;
  wire [0:0]s01_couplers_to_xbar_TVALID;
  wire [63:0]s02_couplers_to_xbar_TDATA;
  wire [3:0]s02_couplers_to_xbar_TDEST;
  wire [0:0]s02_couplers_to_xbar_TID;
  wire [7:0]s02_couplers_to_xbar_TKEEP;
  wire [0:0]s02_couplers_to_xbar_TLAST;
  wire [2:2]s02_couplers_to_xbar_TREADY;
  wire [7:0]s02_couplers_to_xbar_TSTRB;
  wire [0:0]s02_couplers_to_xbar_TUSER;
  wire [0:0]s02_couplers_to_xbar_TVALID;
  wire s03_couplers_to_xbar_TDATA;
  wire s03_couplers_to_xbar_TDEST;
  wire [3:3]s03_couplers_to_xbar_TREADY;
  wire s03_couplers_to_xbar_TVALID;
  wire [63:0]s04_couplers_to_xbar_TDATA;
  wire [3:0]s04_couplers_to_xbar_TDEST;
  wire [0:0]s04_couplers_to_xbar_TID;
  wire [7:0]s04_couplers_to_xbar_TKEEP;
  wire [0:0]s04_couplers_to_xbar_TLAST;
  wire [4:4]s04_couplers_to_xbar_TREADY;
  wire [7:0]s04_couplers_to_xbar_TSTRB;
  wire [0:0]s04_couplers_to_xbar_TUSER;
  wire [0:0]s04_couplers_to_xbar_TVALID;
  wire [63:0]s05_couplers_to_xbar_TDATA;
  wire [3:0]s05_couplers_to_xbar_TDEST;
  wire [0:0]s05_couplers_to_xbar_TID;
  wire [7:0]s05_couplers_to_xbar_TKEEP;
  wire [0:0]s05_couplers_to_xbar_TLAST;
  wire [5:5]s05_couplers_to_xbar_TREADY;
  wire [7:0]s05_couplers_to_xbar_TSTRB;
  wire [0:0]s05_couplers_to_xbar_TUSER;
  wire s05_couplers_to_xbar_TVALID;
  wire [63:0]s06_couplers_to_xbar_TDATA;
  wire [3:0]s06_couplers_to_xbar_TDEST;
  wire [0:0]s06_couplers_to_xbar_TID;
  wire [7:0]s06_couplers_to_xbar_TKEEP;
  wire [0:0]s06_couplers_to_xbar_TLAST;
  wire [6:6]s06_couplers_to_xbar_TREADY;
  wire [7:0]s06_couplers_to_xbar_TSTRB;
  wire [0:0]s06_couplers_to_xbar_TUSER;
  wire s06_couplers_to_xbar_TVALID;
  wire [63:0]s07_couplers_to_xbar_TDATA;
  wire [3:0]s07_couplers_to_xbar_TDEST;
  wire [0:0]s07_couplers_to_xbar_TID;
  wire [7:0]s07_couplers_to_xbar_TKEEP;
  wire [0:0]s07_couplers_to_xbar_TLAST;
  wire [7:7]s07_couplers_to_xbar_TREADY;
  wire [7:0]s07_couplers_to_xbar_TSTRB;
  wire [0:0]s07_couplers_to_xbar_TUSER;
  wire s07_couplers_to_xbar_TVALID;
  wire [63:0]s08_couplers_to_xbar_TDATA;
  wire [3:0]s08_couplers_to_xbar_TDEST;
  wire [0:0]s08_couplers_to_xbar_TID;
  wire [7:0]s08_couplers_to_xbar_TKEEP;
  wire [0:0]s08_couplers_to_xbar_TLAST;
  wire [8:8]s08_couplers_to_xbar_TREADY;
  wire [7:0]s08_couplers_to_xbar_TSTRB;
  wire [0:0]s08_couplers_to_xbar_TUSER;
  wire [0:0]s08_couplers_to_xbar_TVALID;
  wire s09_couplers_to_xbar_TDATA;
  wire s09_couplers_to_xbar_TDEST;
  wire [9:9]s09_couplers_to_xbar_TREADY;
  wire s09_couplers_to_xbar_TVALID;
  wire video_router_ACLK_net;
  wire video_router_ARESETN_net;
  wire [63:0]video_router_to_s00_couplers_TDATA;
  wire [0:0]video_router_to_s00_couplers_TDEST;
  wire [0:0]video_router_to_s00_couplers_TID;
  wire [7:0]video_router_to_s00_couplers_TKEEP;
  wire [0:0]video_router_to_s00_couplers_TLAST;
  wire [0:0]video_router_to_s00_couplers_TREADY;
  wire [7:0]video_router_to_s00_couplers_TSTRB;
  wire [0:0]video_router_to_s00_couplers_TUSER;
  wire [0:0]video_router_to_s00_couplers_TVALID;
  wire [63:0]video_router_to_s01_couplers_TDATA;
  wire [0:0]video_router_to_s01_couplers_TDEST;
  wire [0:0]video_router_to_s01_couplers_TID;
  wire [7:0]video_router_to_s01_couplers_TKEEP;
  wire [0:0]video_router_to_s01_couplers_TLAST;
  wire [0:0]video_router_to_s01_couplers_TREADY;
  wire [7:0]video_router_to_s01_couplers_TSTRB;
  wire [0:0]video_router_to_s01_couplers_TUSER;
  wire [0:0]video_router_to_s01_couplers_TVALID;
  wire [63:0]video_router_to_s02_couplers_TDATA;
  wire [0:0]video_router_to_s02_couplers_TDEST;
  wire [0:0]video_router_to_s02_couplers_TID;
  wire [7:0]video_router_to_s02_couplers_TKEEP;
  wire [0:0]video_router_to_s02_couplers_TLAST;
  wire [0:0]video_router_to_s02_couplers_TREADY;
  wire [7:0]video_router_to_s02_couplers_TSTRB;
  wire [0:0]video_router_to_s02_couplers_TUSER;
  wire [0:0]video_router_to_s02_couplers_TVALID;
  wire video_router_to_s03_couplers_TDATA;
  wire video_router_to_s03_couplers_TDEST;
  wire video_router_to_s03_couplers_TREADY;
  wire video_router_to_s03_couplers_TVALID;
  wire [63:0]video_router_to_s04_couplers_TDATA;
  wire [0:0]video_router_to_s04_couplers_TDEST;
  wire [0:0]video_router_to_s04_couplers_TID;
  wire [7:0]video_router_to_s04_couplers_TKEEP;
  wire [0:0]video_router_to_s04_couplers_TLAST;
  wire [0:0]video_router_to_s04_couplers_TREADY;
  wire [7:0]video_router_to_s04_couplers_TSTRB;
  wire [0:0]video_router_to_s04_couplers_TUSER;
  wire [0:0]video_router_to_s04_couplers_TVALID;
  wire [63:0]video_router_to_s05_couplers_TDATA;
  wire [0:0]video_router_to_s05_couplers_TDEST;
  wire [0:0]video_router_to_s05_couplers_TID;
  wire [7:0]video_router_to_s05_couplers_TKEEP;
  wire [0:0]video_router_to_s05_couplers_TLAST;
  wire video_router_to_s05_couplers_TREADY;
  wire [7:0]video_router_to_s05_couplers_TSTRB;
  wire [0:0]video_router_to_s05_couplers_TUSER;
  wire video_router_to_s05_couplers_TVALID;
  wire [63:0]video_router_to_s06_couplers_TDATA;
  wire [0:0]video_router_to_s06_couplers_TDEST;
  wire [0:0]video_router_to_s06_couplers_TID;
  wire [7:0]video_router_to_s06_couplers_TKEEP;
  wire [0:0]video_router_to_s06_couplers_TLAST;
  wire video_router_to_s06_couplers_TREADY;
  wire [7:0]video_router_to_s06_couplers_TSTRB;
  wire [0:0]video_router_to_s06_couplers_TUSER;
  wire video_router_to_s06_couplers_TVALID;
  wire [63:0]video_router_to_s07_couplers_TDATA;
  wire [0:0]video_router_to_s07_couplers_TDEST;
  wire [0:0]video_router_to_s07_couplers_TID;
  wire [7:0]video_router_to_s07_couplers_TKEEP;
  wire [0:0]video_router_to_s07_couplers_TLAST;
  wire video_router_to_s07_couplers_TREADY;
  wire [7:0]video_router_to_s07_couplers_TSTRB;
  wire [0:0]video_router_to_s07_couplers_TUSER;
  wire video_router_to_s07_couplers_TVALID;
  wire [63:0]video_router_to_s08_couplers_TDATA;
  wire [0:0]video_router_to_s08_couplers_TDEST;
  wire [0:0]video_router_to_s08_couplers_TID;
  wire [7:0]video_router_to_s08_couplers_TKEEP;
  wire [0:0]video_router_to_s08_couplers_TLAST;
  wire [0:0]video_router_to_s08_couplers_TREADY;
  wire [7:0]video_router_to_s08_couplers_TSTRB;
  wire [0:0]video_router_to_s08_couplers_TUSER;
  wire [0:0]video_router_to_s08_couplers_TVALID;
  wire video_router_to_s09_couplers_TDATA;
  wire video_router_to_s09_couplers_TDEST;
  wire video_router_to_s09_couplers_TREADY;
  wire video_router_to_s09_couplers_TVALID;
  wire [6:0]video_router_to_xbar_ARADDR;
  wire video_router_to_xbar_ARREADY;
  wire video_router_to_xbar_ARVALID;
  wire [6:0]video_router_to_xbar_AWADDR;
  wire video_router_to_xbar_AWREADY;
  wire video_router_to_xbar_AWVALID;
  wire video_router_to_xbar_BREADY;
  wire [1:0]video_router_to_xbar_BRESP;
  wire video_router_to_xbar_BVALID;
  wire [31:0]video_router_to_xbar_RDATA;
  wire video_router_to_xbar_RREADY;
  wire [1:0]video_router_to_xbar_RRESP;
  wire video_router_to_xbar_RVALID;
  wire [31:0]video_router_to_xbar_WDATA;
  wire video_router_to_xbar_WREADY;
  wire video_router_to_xbar_WVALID;
  wire [63:0]xbar_to_m00_couplers_TDATA;
  wire [3:0]xbar_to_m00_couplers_TDEST;
  wire [0:0]xbar_to_m00_couplers_TID;
  wire [7:0]xbar_to_m00_couplers_TKEEP;
  wire [0:0]xbar_to_m00_couplers_TLAST;
  wire xbar_to_m00_couplers_TREADY;
  wire [7:0]xbar_to_m00_couplers_TSTRB;
  wire [0:0]xbar_to_m00_couplers_TUSER;
  wire [0:0]xbar_to_m00_couplers_TVALID;
  wire [127:64]xbar_to_m01_couplers_TDATA;
  wire [7:4]xbar_to_m01_couplers_TDEST;
  wire [1:1]xbar_to_m01_couplers_TID;
  wire [15:8]xbar_to_m01_couplers_TKEEP;
  wire [1:1]xbar_to_m01_couplers_TLAST;
  wire xbar_to_m01_couplers_TREADY;
  wire [15:8]xbar_to_m01_couplers_TSTRB;
  wire [1:1]xbar_to_m01_couplers_TUSER;
  wire [1:1]xbar_to_m01_couplers_TVALID;
  wire [191:128]xbar_to_m02_couplers_TDATA;
  wire [11:8]xbar_to_m02_couplers_TDEST;
  wire [2:2]xbar_to_m02_couplers_TID;
  wire [23:16]xbar_to_m02_couplers_TKEEP;
  wire [2:2]xbar_to_m02_couplers_TLAST;
  wire xbar_to_m02_couplers_TREADY;
  wire [23:16]xbar_to_m02_couplers_TSTRB;
  wire [2:2]xbar_to_m02_couplers_TUSER;
  wire [2:2]xbar_to_m02_couplers_TVALID;
  wire [255:192]xbar_to_m03_couplers_TDATA;
  wire [15:12]xbar_to_m03_couplers_TDEST;
  wire xbar_to_m03_couplers_TREADY;
  wire [3:3]xbar_to_m03_couplers_TVALID;
  wire [319:256]xbar_to_m04_couplers_TDATA;
  wire [19:16]xbar_to_m04_couplers_TDEST;
  wire [4:4]xbar_to_m04_couplers_TID;
  wire [39:32]xbar_to_m04_couplers_TKEEP;
  wire [4:4]xbar_to_m04_couplers_TLAST;
  wire xbar_to_m04_couplers_TREADY;
  wire [39:32]xbar_to_m04_couplers_TSTRB;
  wire [4:4]xbar_to_m04_couplers_TUSER;
  wire [4:4]xbar_to_m04_couplers_TVALID;
  wire [383:320]xbar_to_m05_couplers_TDATA;
  wire [23:20]xbar_to_m05_couplers_TDEST;
  wire [5:5]xbar_to_m05_couplers_TID;
  wire [47:40]xbar_to_m05_couplers_TKEEP;
  wire [5:5]xbar_to_m05_couplers_TLAST;
  wire xbar_to_m05_couplers_TREADY;
  wire [47:40]xbar_to_m05_couplers_TSTRB;
  wire [5:5]xbar_to_m05_couplers_TUSER;
  wire [5:5]xbar_to_m05_couplers_TVALID;
  wire [447:384]xbar_to_m06_couplers_TDATA;
  wire [27:24]xbar_to_m06_couplers_TDEST;
  wire [6:6]xbar_to_m06_couplers_TID;
  wire [55:48]xbar_to_m06_couplers_TKEEP;
  wire [6:6]xbar_to_m06_couplers_TLAST;
  wire xbar_to_m06_couplers_TREADY;
  wire [55:48]xbar_to_m06_couplers_TSTRB;
  wire [6:6]xbar_to_m06_couplers_TUSER;
  wire [6:6]xbar_to_m06_couplers_TVALID;
  wire [511:448]xbar_to_m07_couplers_TDATA;
  wire [31:28]xbar_to_m07_couplers_TDEST;
  wire [7:7]xbar_to_m07_couplers_TID;
  wire [63:56]xbar_to_m07_couplers_TKEEP;
  wire [7:7]xbar_to_m07_couplers_TLAST;
  wire xbar_to_m07_couplers_TREADY;
  wire [63:56]xbar_to_m07_couplers_TSTRB;
  wire [7:7]xbar_to_m07_couplers_TUSER;
  wire [7:7]xbar_to_m07_couplers_TVALID;
  wire [575:512]xbar_to_m08_couplers_TDATA;
  wire [35:32]xbar_to_m08_couplers_TDEST;
  wire [8:8]xbar_to_m08_couplers_TID;
  wire [71:64]xbar_to_m08_couplers_TKEEP;
  wire [8:8]xbar_to_m08_couplers_TLAST;
  wire xbar_to_m08_couplers_TREADY;
  wire [71:64]xbar_to_m08_couplers_TSTRB;
  wire [8:8]xbar_to_m08_couplers_TUSER;
  wire [8:8]xbar_to_m08_couplers_TVALID;
  wire [639:576]xbar_to_m09_couplers_TDATA;
  wire [39:36]xbar_to_m09_couplers_TDEST;
  wire xbar_to_m09_couplers_TREADY;
  wire [9:9]xbar_to_m09_couplers_TVALID;
  wire [9:0]NLW_xbar_m_axis_tid_UNCONNECTED;
  wire [79:0]NLW_xbar_m_axis_tkeep_UNCONNECTED;
  wire [9:0]NLW_xbar_m_axis_tlast_UNCONNECTED;
  wire [79:0]NLW_xbar_m_axis_tstrb_UNCONNECTED;
  wire [9:0]NLW_xbar_m_axis_tuser_UNCONNECTED;

  assign M00_AXIS_ACLK_1 = M00_AXIS_ACLK;
  assign M00_AXIS_ARESETN_1 = M00_AXIS_ARESETN;
  assign M00_AXIS_tdata[63:0] = m00_couplers_to_video_router_TDATA;
  assign M00_AXIS_tdest[3:0] = m00_couplers_to_video_router_TDEST;
  assign M00_AXIS_tid[0] = m00_couplers_to_video_router_TID;
  assign M00_AXIS_tkeep[7:0] = m00_couplers_to_video_router_TKEEP;
  assign M00_AXIS_tlast = m00_couplers_to_video_router_TLAST;
  assign M00_AXIS_tstrb[7:0] = m00_couplers_to_video_router_TSTRB;
  assign M00_AXIS_tuser[0] = m00_couplers_to_video_router_TUSER;
  assign M00_AXIS_tvalid = m00_couplers_to_video_router_TVALID;
  assign M01_AXIS_ACLK_1 = M01_AXIS_ACLK;
  assign M01_AXIS_ARESETN_1 = M01_AXIS_ARESETN;
  assign M01_AXIS_tdata[63:0] = m01_couplers_to_video_router_TDATA;
  assign M01_AXIS_tdest[0] = m01_couplers_to_video_router_TDEST;
  assign M01_AXIS_tid[0] = m01_couplers_to_video_router_TID;
  assign M01_AXIS_tkeep[7:0] = m01_couplers_to_video_router_TKEEP;
  assign M01_AXIS_tlast = m01_couplers_to_video_router_TLAST;
  assign M01_AXIS_tstrb[7:0] = m01_couplers_to_video_router_TSTRB;
  assign M01_AXIS_tuser[0] = m01_couplers_to_video_router_TUSER;
  assign M01_AXIS_tvalid = m01_couplers_to_video_router_TVALID;
  assign M02_AXIS_ACLK_1 = M02_AXIS_ACLK;
  assign M02_AXIS_ARESETN_1 = M02_AXIS_ARESETN;
  assign M02_AXIS_tdata[63:0] = m02_couplers_to_video_router_TDATA;
  assign M02_AXIS_tdest[0] = m02_couplers_to_video_router_TDEST;
  assign M02_AXIS_tid[0] = m02_couplers_to_video_router_TID;
  assign M02_AXIS_tkeep[7:0] = m02_couplers_to_video_router_TKEEP;
  assign M02_AXIS_tlast = m02_couplers_to_video_router_TLAST;
  assign M02_AXIS_tstrb[7:0] = m02_couplers_to_video_router_TSTRB;
  assign M02_AXIS_tuser[0] = m02_couplers_to_video_router_TUSER;
  assign M02_AXIS_tvalid = m02_couplers_to_video_router_TVALID;
  assign M03_AXIS_ACLK_1 = M03_AXIS_ACLK;
  assign M03_AXIS_ARESETN_1 = M03_AXIS_ARESETN;
  assign M03_AXIS_tdata = m03_couplers_to_video_router_TDATA;
  assign M03_AXIS_tdest = m03_couplers_to_video_router_TDEST;
  assign M03_AXIS_tvalid = m03_couplers_to_video_router_TVALID;
  assign M04_AXIS_ACLK_1 = M04_AXIS_ACLK;
  assign M04_AXIS_ARESETN_1 = M04_AXIS_ARESETN;
  assign M04_AXIS_tdata[63:0] = m04_couplers_to_video_router_TDATA;
  assign M04_AXIS_tdest[0] = m04_couplers_to_video_router_TDEST;
  assign M04_AXIS_tid[0] = m04_couplers_to_video_router_TID;
  assign M04_AXIS_tkeep[7:0] = m04_couplers_to_video_router_TKEEP;
  assign M04_AXIS_tlast = m04_couplers_to_video_router_TLAST;
  assign M04_AXIS_tstrb[7:0] = m04_couplers_to_video_router_TSTRB;
  assign M04_AXIS_tuser[0] = m04_couplers_to_video_router_TUSER;
  assign M04_AXIS_tvalid = m04_couplers_to_video_router_TVALID;
  assign M05_AXIS_ACLK_1 = M05_AXIS_ACLK;
  assign M05_AXIS_ARESETN_1 = M05_AXIS_ARESETN;
  assign M05_AXIS_tdata[63:0] = m05_couplers_to_video_router_TDATA;
  assign M05_AXIS_tdest[0] = m05_couplers_to_video_router_TDEST;
  assign M05_AXIS_tid[0] = m05_couplers_to_video_router_TID;
  assign M05_AXIS_tkeep[7:0] = m05_couplers_to_video_router_TKEEP;
  assign M05_AXIS_tlast[0] = m05_couplers_to_video_router_TLAST;
  assign M05_AXIS_tstrb[7:0] = m05_couplers_to_video_router_TSTRB;
  assign M05_AXIS_tuser[0] = m05_couplers_to_video_router_TUSER;
  assign M05_AXIS_tvalid = m05_couplers_to_video_router_TVALID;
  assign M06_AXIS_ACLK_1 = M06_AXIS_ACLK;
  assign M06_AXIS_ARESETN_1 = M06_AXIS_ARESETN;
  assign M06_AXIS_tdata[63:0] = m06_couplers_to_video_router_TDATA;
  assign M06_AXIS_tdest[0] = m06_couplers_to_video_router_TDEST;
  assign M06_AXIS_tid[0] = m06_couplers_to_video_router_TID;
  assign M06_AXIS_tkeep[7:0] = m06_couplers_to_video_router_TKEEP;
  assign M06_AXIS_tlast[0] = m06_couplers_to_video_router_TLAST;
  assign M06_AXIS_tstrb[7:0] = m06_couplers_to_video_router_TSTRB;
  assign M06_AXIS_tuser[0] = m06_couplers_to_video_router_TUSER;
  assign M06_AXIS_tvalid = m06_couplers_to_video_router_TVALID;
  assign M07_AXIS_ACLK_1 = M07_AXIS_ACLK;
  assign M07_AXIS_ARESETN_1 = M07_AXIS_ARESETN;
  assign M07_AXIS_tdata[63:0] = m07_couplers_to_video_router_TDATA;
  assign M07_AXIS_tdest[0] = m07_couplers_to_video_router_TDEST;
  assign M07_AXIS_tid[0] = m07_couplers_to_video_router_TID;
  assign M07_AXIS_tkeep[7:0] = m07_couplers_to_video_router_TKEEP;
  assign M07_AXIS_tlast[0] = m07_couplers_to_video_router_TLAST;
  assign M07_AXIS_tstrb[7:0] = m07_couplers_to_video_router_TSTRB;
  assign M07_AXIS_tuser[0] = m07_couplers_to_video_router_TUSER;
  assign M07_AXIS_tvalid = m07_couplers_to_video_router_TVALID;
  assign M08_AXIS_ACLK_1 = M08_AXIS_ACLK;
  assign M08_AXIS_ARESETN_1 = M08_AXIS_ARESETN;
  assign M08_AXIS_tdata[63:0] = m08_couplers_to_video_router_TDATA;
  assign M08_AXIS_tdest[0] = m08_couplers_to_video_router_TDEST;
  assign M08_AXIS_tid[0] = m08_couplers_to_video_router_TID;
  assign M08_AXIS_tkeep[7:0] = m08_couplers_to_video_router_TKEEP;
  assign M08_AXIS_tlast = m08_couplers_to_video_router_TLAST;
  assign M08_AXIS_tstrb[7:0] = m08_couplers_to_video_router_TSTRB;
  assign M08_AXIS_tuser[0] = m08_couplers_to_video_router_TUSER;
  assign M08_AXIS_tvalid = m08_couplers_to_video_router_TVALID;
  assign M09_AXIS_ACLK_1 = M09_AXIS_ACLK;
  assign M09_AXIS_ARESETN_1 = M09_AXIS_ARESETN;
  assign M09_AXIS_tdata = m09_couplers_to_video_router_TDATA;
  assign M09_AXIS_tdest = m09_couplers_to_video_router_TDEST;
  assign M09_AXIS_tvalid = m09_couplers_to_video_router_TVALID;
  assign S00_AXIS_ACLK_1 = S00_AXIS_ACLK;
  assign S00_AXIS_ARESETN_1 = S00_AXIS_ARESETN;
  assign S00_AXIS_tready[0] = video_router_to_s00_couplers_TREADY;
  assign S01_AXIS_ACLK_1 = S01_AXIS_ACLK;
  assign S01_AXIS_ARESETN_1 = S01_AXIS_ARESETN;
  assign S01_AXIS_tready[0] = video_router_to_s01_couplers_TREADY;
  assign S02_AXIS_ACLK_1 = S02_AXIS_ACLK;
  assign S02_AXIS_ARESETN_1 = S02_AXIS_ARESETN;
  assign S02_AXIS_tready[0] = video_router_to_s02_couplers_TREADY;
  assign S03_AXIS_ACLK_1 = S03_AXIS_ACLK;
  assign S03_AXIS_ARESETN_1 = S03_AXIS_ARESETN;
  assign S03_AXIS_tready = video_router_to_s03_couplers_TREADY;
  assign S04_AXIS_ACLK_1 = S04_AXIS_ACLK;
  assign S04_AXIS_ARESETN_1 = S04_AXIS_ARESETN;
  assign S04_AXIS_tready[0] = video_router_to_s04_couplers_TREADY;
  assign S05_AXIS_ACLK_1 = S05_AXIS_ACLK;
  assign S05_AXIS_ARESETN_1 = S05_AXIS_ARESETN;
  assign S05_AXIS_tready = video_router_to_s05_couplers_TREADY;
  assign S06_AXIS_ACLK_1 = S06_AXIS_ACLK;
  assign S06_AXIS_ARESETN_1 = S06_AXIS_ARESETN;
  assign S06_AXIS_tready = video_router_to_s06_couplers_TREADY;
  assign S07_AXIS_ACLK_1 = S07_AXIS_ACLK;
  assign S07_AXIS_ARESETN_1 = S07_AXIS_ARESETN;
  assign S07_AXIS_tready = video_router_to_s07_couplers_TREADY;
  assign S08_AXIS_ACLK_1 = S08_AXIS_ACLK;
  assign S08_AXIS_ARESETN_1 = S08_AXIS_ARESETN;
  assign S08_AXIS_tready[0] = video_router_to_s08_couplers_TREADY;
  assign S09_AXIS_ACLK_1 = S09_AXIS_ACLK;
  assign S09_AXIS_ARESETN_1 = S09_AXIS_ARESETN;
  assign S09_AXIS_tready = video_router_to_s09_couplers_TREADY;
  assign S_AXI_CTRL_ACLK_1 = S_AXI_CTRL_ACLK;
  assign S_AXI_CTRL_ARESETN_1 = S_AXI_CTRL_ARESETN;
  assign S_AXI_CTRL_arready = video_router_to_xbar_ARREADY;
  assign S_AXI_CTRL_awready = video_router_to_xbar_AWREADY;
  assign S_AXI_CTRL_bresp[1:0] = video_router_to_xbar_BRESP;
  assign S_AXI_CTRL_bvalid = video_router_to_xbar_BVALID;
  assign S_AXI_CTRL_rdata[31:0] = video_router_to_xbar_RDATA;
  assign S_AXI_CTRL_rresp[1:0] = video_router_to_xbar_RRESP;
  assign S_AXI_CTRL_rvalid = video_router_to_xbar_RVALID;
  assign S_AXI_CTRL_wready = video_router_to_xbar_WREADY;
  assign m00_couplers_to_video_router_TREADY = M00_AXIS_tready;
  assign m01_couplers_to_video_router_TREADY = M01_AXIS_tready;
  assign m02_couplers_to_video_router_TREADY = M02_AXIS_tready;
  assign m03_couplers_to_video_router_TREADY = M03_AXIS_tready;
  assign m04_couplers_to_video_router_TREADY = M04_AXIS_tready;
  assign m05_couplers_to_video_router_TREADY = M05_AXIS_tready;
  assign m06_couplers_to_video_router_TREADY = M06_AXIS_tready;
  assign m07_couplers_to_video_router_TREADY = M07_AXIS_tready;
  assign m08_couplers_to_video_router_TREADY = M08_AXIS_tready;
  assign m09_couplers_to_video_router_TREADY = M09_AXIS_tready;
  assign video_router_ACLK_net = ACLK;
  assign video_router_ARESETN_net = ARESETN;
  assign video_router_to_s00_couplers_TDATA = S00_AXIS_tdata[63:0];
  assign video_router_to_s00_couplers_TDEST = S00_AXIS_tdest[0];
  assign video_router_to_s00_couplers_TID = S00_AXIS_tid[0];
  assign video_router_to_s00_couplers_TKEEP = S00_AXIS_tkeep[7:0];
  assign video_router_to_s00_couplers_TLAST = S00_AXIS_tlast[0];
  assign video_router_to_s00_couplers_TSTRB = S00_AXIS_tstrb[7:0];
  assign video_router_to_s00_couplers_TUSER = S00_AXIS_tuser[0];
  assign video_router_to_s00_couplers_TVALID = S00_AXIS_tvalid[0];
  assign video_router_to_s01_couplers_TDATA = S01_AXIS_tdata[63:0];
  assign video_router_to_s01_couplers_TDEST = S01_AXIS_tdest[0];
  assign video_router_to_s01_couplers_TID = S01_AXIS_tid[0];
  assign video_router_to_s01_couplers_TKEEP = S01_AXIS_tkeep[7:0];
  assign video_router_to_s01_couplers_TLAST = S01_AXIS_tlast[0];
  assign video_router_to_s01_couplers_TSTRB = S01_AXIS_tstrb[7:0];
  assign video_router_to_s01_couplers_TUSER = S01_AXIS_tuser[0];
  assign video_router_to_s01_couplers_TVALID = S01_AXIS_tvalid[0];
  assign video_router_to_s02_couplers_TDATA = S02_AXIS_tdata[63:0];
  assign video_router_to_s02_couplers_TDEST = S02_AXIS_tdest[0];
  assign video_router_to_s02_couplers_TID = S02_AXIS_tid[0];
  assign video_router_to_s02_couplers_TKEEP = S02_AXIS_tkeep[7:0];
  assign video_router_to_s02_couplers_TLAST = S02_AXIS_tlast[0];
  assign video_router_to_s02_couplers_TSTRB = S02_AXIS_tstrb[7:0];
  assign video_router_to_s02_couplers_TUSER = S02_AXIS_tuser[0];
  assign video_router_to_s02_couplers_TVALID = S02_AXIS_tvalid[0];
  assign video_router_to_s03_couplers_TDATA = S03_AXIS_tdata;
  assign video_router_to_s03_couplers_TDEST = S03_AXIS_tdest;
  assign video_router_to_s03_couplers_TVALID = S03_AXIS_tvalid;
  assign video_router_to_s04_couplers_TDATA = S04_AXIS_tdata[63:0];
  assign video_router_to_s04_couplers_TDEST = S04_AXIS_tdest[0];
  assign video_router_to_s04_couplers_TID = S04_AXIS_tid[0];
  assign video_router_to_s04_couplers_TKEEP = S04_AXIS_tkeep[7:0];
  assign video_router_to_s04_couplers_TLAST = S04_AXIS_tlast[0];
  assign video_router_to_s04_couplers_TSTRB = S04_AXIS_tstrb[7:0];
  assign video_router_to_s04_couplers_TUSER = S04_AXIS_tuser[0];
  assign video_router_to_s04_couplers_TVALID = S04_AXIS_tvalid[0];
  assign video_router_to_s05_couplers_TDATA = S05_AXIS_tdata[63:0];
  assign video_router_to_s05_couplers_TDEST = S05_AXIS_tdest[0];
  assign video_router_to_s05_couplers_TID = S05_AXIS_tid[0];
  assign video_router_to_s05_couplers_TKEEP = S05_AXIS_tkeep[7:0];
  assign video_router_to_s05_couplers_TLAST = S05_AXIS_tlast[0];
  assign video_router_to_s05_couplers_TSTRB = S05_AXIS_tstrb[7:0];
  assign video_router_to_s05_couplers_TUSER = S05_AXIS_tuser[0];
  assign video_router_to_s05_couplers_TVALID = S05_AXIS_tvalid;
  assign video_router_to_s06_couplers_TDATA = S06_AXIS_tdata[63:0];
  assign video_router_to_s06_couplers_TDEST = S06_AXIS_tdest[0];
  assign video_router_to_s06_couplers_TID = S06_AXIS_tid[0];
  assign video_router_to_s06_couplers_TKEEP = S06_AXIS_tkeep[7:0];
  assign video_router_to_s06_couplers_TLAST = S06_AXIS_tlast[0];
  assign video_router_to_s06_couplers_TSTRB = S06_AXIS_tstrb[7:0];
  assign video_router_to_s06_couplers_TUSER = S06_AXIS_tuser[0];
  assign video_router_to_s06_couplers_TVALID = S06_AXIS_tvalid;
  assign video_router_to_s07_couplers_TDATA = S07_AXIS_tdata[63:0];
  assign video_router_to_s07_couplers_TDEST = S07_AXIS_tdest[0];
  assign video_router_to_s07_couplers_TID = S07_AXIS_tid[0];
  assign video_router_to_s07_couplers_TKEEP = S07_AXIS_tkeep[7:0];
  assign video_router_to_s07_couplers_TLAST = S07_AXIS_tlast[0];
  assign video_router_to_s07_couplers_TSTRB = S07_AXIS_tstrb[7:0];
  assign video_router_to_s07_couplers_TUSER = S07_AXIS_tuser[0];
  assign video_router_to_s07_couplers_TVALID = S07_AXIS_tvalid;
  assign video_router_to_s08_couplers_TDATA = S08_AXIS_tdata[63:0];
  assign video_router_to_s08_couplers_TDEST = S08_AXIS_tdest[0];
  assign video_router_to_s08_couplers_TID = S08_AXIS_tid[0];
  assign video_router_to_s08_couplers_TKEEP = S08_AXIS_tkeep[7:0];
  assign video_router_to_s08_couplers_TLAST = S08_AXIS_tlast[0];
  assign video_router_to_s08_couplers_TSTRB = S08_AXIS_tstrb[7:0];
  assign video_router_to_s08_couplers_TUSER = S08_AXIS_tuser[0];
  assign video_router_to_s08_couplers_TVALID = S08_AXIS_tvalid[0];
  assign video_router_to_s09_couplers_TDATA = S09_AXIS_tdata;
  assign video_router_to_s09_couplers_TDEST = S09_AXIS_tdest;
  assign video_router_to_s09_couplers_TVALID = S09_AXIS_tvalid;
  assign video_router_to_xbar_ARADDR = S_AXI_CTRL_araddr[6:0];
  assign video_router_to_xbar_ARVALID = S_AXI_CTRL_arvalid;
  assign video_router_to_xbar_AWADDR = S_AXI_CTRL_awaddr[6:0];
  assign video_router_to_xbar_AWVALID = S_AXI_CTRL_awvalid;
  assign video_router_to_xbar_BREADY = S_AXI_CTRL_bready;
  assign video_router_to_xbar_RREADY = S_AXI_CTRL_rready;
  assign video_router_to_xbar_WDATA = S_AXI_CTRL_wdata[31:0];
  assign video_router_to_xbar_WVALID = S_AXI_CTRL_wvalid;
  m00_couplers_imp_UNKMQM m00_couplers
       (.M_AXIS_ACLK(M00_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M00_AXIS_ARESETN_1),
        .M_AXIS_tdata(m00_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m00_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m00_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m00_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m00_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m00_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m00_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m00_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m00_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m00_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m00_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m00_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m00_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m00_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m00_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m00_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m00_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m00_couplers_TVALID));
  m01_couplers_imp_1SW0MZH m01_couplers
       (.M_AXIS_ACLK(M01_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M01_AXIS_ARESETN_1),
        .M_AXIS_tdata(m01_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m01_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m01_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m01_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m01_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m01_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m01_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m01_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m01_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m01_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m01_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m01_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m01_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m01_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m01_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m01_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m01_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m01_couplers_TVALID));
  m02_couplers_imp_1FOPCK9 m02_couplers
       (.M_AXIS_ACLK(M02_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M02_AXIS_ARESETN_1),
        .M_AXIS_tdata(m02_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m02_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m02_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m02_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m02_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m02_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m02_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m02_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m02_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m02_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m02_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m02_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m02_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m02_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m02_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m02_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m02_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m02_couplers_TVALID));
  m03_couplers_imp_H63B16 m03_couplers
       (.M_AXIS_ACLK(M03_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M03_AXIS_ARESETN_1),
        .M_AXIS_tdata(m03_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m03_couplers_to_video_router_TDEST),
        .M_AXIS_tready(m03_couplers_to_video_router_TREADY),
        .M_AXIS_tvalid(m03_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m03_couplers_TDATA[192]),
        .S_AXIS_tdest(xbar_to_m03_couplers_TDEST[12]),
        .S_AXIS_tready(xbar_to_m03_couplers_TREADY),
        .S_AXIS_tvalid(xbar_to_m03_couplers_TVALID));
  m04_couplers_imp_866F9T m04_couplers
       (.M_AXIS_ACLK(M04_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M04_AXIS_ARESETN_1),
        .M_AXIS_tdata(m04_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m04_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m04_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m04_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m04_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m04_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m04_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m04_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m04_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m04_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m04_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m04_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m04_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m04_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m04_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m04_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m04_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m04_couplers_TVALID));
  m05_couplers_imp_16YLNDE m05_couplers
       (.M_AXIS_ACLK(M05_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M05_AXIS_ARESETN_1),
        .M_AXIS_tdata(m05_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m05_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m05_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m05_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m05_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m05_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m05_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m05_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m05_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m05_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m05_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m05_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m05_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m05_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m05_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m05_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m05_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m05_couplers_TVALID));
  m06_couplers_imp_1JUUMMU m06_couplers
       (.M_AXIS_ACLK(M06_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M06_AXIS_ARESETN_1),
        .M_AXIS_tdata(m06_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m06_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m06_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m06_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m06_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m06_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m06_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m06_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m06_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m06_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m06_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m06_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m06_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m06_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m06_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m06_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m06_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m06_couplers_TVALID));
  m07_couplers_imp_LW7T5H m07_couplers
       (.M_AXIS_ACLK(M07_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M07_AXIS_ARESETN_1),
        .M_AXIS_tdata(m07_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m07_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m07_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m07_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m07_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m07_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m07_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m07_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m07_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m07_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m07_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m07_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m07_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m07_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m07_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m07_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m07_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m07_couplers_TVALID));
  m08_couplers_imp_11UN62O m08_couplers
       (.M_AXIS_ACLK(M08_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M08_AXIS_ARESETN_1),
        .M_AXIS_tdata(m08_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m08_couplers_to_video_router_TDEST),
        .M_AXIS_tid(m08_couplers_to_video_router_TID),
        .M_AXIS_tkeep(m08_couplers_to_video_router_TKEEP),
        .M_AXIS_tlast(m08_couplers_to_video_router_TLAST),
        .M_AXIS_tready(m08_couplers_to_video_router_TREADY),
        .M_AXIS_tstrb(m08_couplers_to_video_router_TSTRB),
        .M_AXIS_tuser(m08_couplers_to_video_router_TUSER),
        .M_AXIS_tvalid(m08_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m08_couplers_TDATA),
        .S_AXIS_tdest(xbar_to_m08_couplers_TDEST),
        .S_AXIS_tid(xbar_to_m08_couplers_TID),
        .S_AXIS_tkeep(xbar_to_m08_couplers_TKEEP),
        .S_AXIS_tlast(xbar_to_m08_couplers_TLAST),
        .S_AXIS_tready(xbar_to_m08_couplers_TREADY),
        .S_AXIS_tstrb(xbar_to_m08_couplers_TSTRB),
        .S_AXIS_tuser(xbar_to_m08_couplers_TUSER),
        .S_AXIS_tvalid(xbar_to_m08_couplers_TVALID));
  m09_couplers_imp_4DV2KJ m09_couplers
       (.M_AXIS_ACLK(M09_AXIS_ACLK_1),
        .M_AXIS_ARESETN(M09_AXIS_ARESETN_1),
        .M_AXIS_tdata(m09_couplers_to_video_router_TDATA),
        .M_AXIS_tdest(m09_couplers_to_video_router_TDEST),
        .M_AXIS_tready(m09_couplers_to_video_router_TREADY),
        .M_AXIS_tvalid(m09_couplers_to_video_router_TVALID),
        .S_AXIS_ACLK(video_router_ACLK_net),
        .S_AXIS_ARESETN(video_router_ARESETN_net),
        .S_AXIS_tdata(xbar_to_m09_couplers_TDATA[576]),
        .S_AXIS_tdest(xbar_to_m09_couplers_TDEST[36]),
        .S_AXIS_tready(xbar_to_m09_couplers_TREADY),
        .S_AXIS_tvalid(xbar_to_m09_couplers_TVALID));
  s00_couplers_imp_1SQ1JEQ s00_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s00_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s00_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s00_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s00_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s00_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s00_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s00_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s00_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s00_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S00_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S00_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s00_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s00_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s00_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s00_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s00_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s00_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s00_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s00_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s00_couplers_TVALID));
  s01_couplers_imp_URLT4X s01_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s01_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s01_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s01_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s01_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s01_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s01_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s01_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s01_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s01_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S01_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S01_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s01_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s01_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s01_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s01_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s01_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s01_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s01_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s01_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s01_couplers_TVALID));
  s02_couplers_imp_H2116T s02_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s02_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s02_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s02_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s02_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s02_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s02_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s02_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s02_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s02_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S02_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S02_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s02_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s02_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s02_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s02_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s02_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s02_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s02_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s02_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s02_couplers_TVALID));
  s03_couplers_imp_1FUKJD2 s03_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s03_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s03_couplers_to_xbar_TDEST),
        .M_AXIS_tready(s03_couplers_to_xbar_TREADY),
        .M_AXIS_tvalid(s03_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S03_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S03_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s03_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s03_couplers_TDEST),
        .S_AXIS_tready(video_router_to_s03_couplers_TREADY),
        .S_AXIS_tvalid(video_router_to_s03_couplers_TVALID));
  s04_couplers_imp_16T8OY5 s04_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s04_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s04_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s04_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s04_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s04_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s04_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s04_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s04_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s04_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S04_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S04_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s04_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s04_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s04_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s04_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s04_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s04_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s04_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s04_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s04_couplers_TVALID));
  s05_couplers_imp_8ATS7I s05_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s05_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s05_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s05_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s05_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s05_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s05_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s05_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s05_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s05_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S05_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S05_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s05_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s05_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s05_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s05_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s05_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s05_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s05_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s05_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s05_couplers_TVALID));
  s06_couplers_imp_LRIQH6 s06_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s06_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s06_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s06_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s06_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s06_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s06_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s06_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s06_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s06_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S06_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S06_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s06_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s06_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s06_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s06_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s06_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s06_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s06_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s06_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s06_couplers_TVALID));
  s07_couplers_imp_1K032DL s07_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s07_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s07_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s07_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s07_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s07_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s07_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s07_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s07_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s07_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S07_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S07_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s07_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s07_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s07_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s07_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s07_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s07_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s07_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s07_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s07_couplers_TVALID));
  s08_couplers_imp_4948IK s08_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s08_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s08_couplers_to_xbar_TDEST),
        .M_AXIS_tid(s08_couplers_to_xbar_TID),
        .M_AXIS_tkeep(s08_couplers_to_xbar_TKEEP),
        .M_AXIS_tlast(s08_couplers_to_xbar_TLAST),
        .M_AXIS_tready(s08_couplers_to_xbar_TREADY),
        .M_AXIS_tstrb(s08_couplers_to_xbar_TSTRB),
        .M_AXIS_tuser(s08_couplers_to_xbar_TUSER),
        .M_AXIS_tvalid(s08_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S08_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S08_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s08_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s08_couplers_TDEST),
        .S_AXIS_tid(video_router_to_s08_couplers_TID),
        .S_AXIS_tkeep(video_router_to_s08_couplers_TKEEP),
        .S_AXIS_tlast(video_router_to_s08_couplers_TLAST),
        .S_AXIS_tready(video_router_to_s08_couplers_TREADY),
        .S_AXIS_tstrb(video_router_to_s08_couplers_TSTRB),
        .S_AXIS_tuser(video_router_to_s08_couplers_TUSER),
        .S_AXIS_tvalid(video_router_to_s08_couplers_TVALID));
  s09_couplers_imp_11ZY25B s09_couplers
       (.M_AXIS_ACLK(video_router_ACLK_net),
        .M_AXIS_ARESETN(video_router_ARESETN_net),
        .M_AXIS_tdata(s09_couplers_to_xbar_TDATA),
        .M_AXIS_tdest(s09_couplers_to_xbar_TDEST),
        .M_AXIS_tready(s09_couplers_to_xbar_TREADY),
        .M_AXIS_tvalid(s09_couplers_to_xbar_TVALID),
        .S_AXIS_ACLK(S09_AXIS_ACLK_1),
        .S_AXIS_ARESETN(S09_AXIS_ARESETN_1),
        .S_AXIS_tdata(video_router_to_s09_couplers_TDATA),
        .S_AXIS_tdest(video_router_to_s09_couplers_TDEST),
        .S_AXIS_tready(video_router_to_s09_couplers_TREADY),
        .S_AXIS_tvalid(video_router_to_s09_couplers_TVALID));
  bd_d92b_xbar_0 xbar
       (.aclk(video_router_ACLK_net),
        .aresetn(video_router_ARESETN_net),
        .m_axis_tdata({xbar_to_m09_couplers_TDATA,xbar_to_m08_couplers_TDATA,xbar_to_m07_couplers_TDATA,xbar_to_m06_couplers_TDATA,xbar_to_m05_couplers_TDATA,xbar_to_m04_couplers_TDATA,xbar_to_m03_couplers_TDATA,xbar_to_m02_couplers_TDATA,xbar_to_m01_couplers_TDATA,xbar_to_m00_couplers_TDATA}),
        .m_axis_tdest({xbar_to_m09_couplers_TDEST,xbar_to_m08_couplers_TDEST,xbar_to_m07_couplers_TDEST,xbar_to_m06_couplers_TDEST,xbar_to_m05_couplers_TDEST,xbar_to_m04_couplers_TDEST,xbar_to_m03_couplers_TDEST,xbar_to_m02_couplers_TDEST,xbar_to_m01_couplers_TDEST,xbar_to_m00_couplers_TDEST}),
        .m_axis_tid({xbar_to_m08_couplers_TID,xbar_to_m07_couplers_TID,xbar_to_m06_couplers_TID,xbar_to_m05_couplers_TID,xbar_to_m04_couplers_TID,NLW_xbar_m_axis_tid_UNCONNECTED[3],xbar_to_m02_couplers_TID,xbar_to_m01_couplers_TID,xbar_to_m00_couplers_TID}),
        .m_axis_tkeep({xbar_to_m08_couplers_TKEEP,xbar_to_m07_couplers_TKEEP,xbar_to_m06_couplers_TKEEP,xbar_to_m05_couplers_TKEEP,xbar_to_m04_couplers_TKEEP,NLW_xbar_m_axis_tkeep_UNCONNECTED[31:24],xbar_to_m02_couplers_TKEEP,xbar_to_m01_couplers_TKEEP,xbar_to_m00_couplers_TKEEP}),
        .m_axis_tlast({xbar_to_m08_couplers_TLAST,xbar_to_m07_couplers_TLAST,xbar_to_m06_couplers_TLAST,xbar_to_m05_couplers_TLAST,xbar_to_m04_couplers_TLAST,NLW_xbar_m_axis_tlast_UNCONNECTED[3],xbar_to_m02_couplers_TLAST,xbar_to_m01_couplers_TLAST,xbar_to_m00_couplers_TLAST}),
        .m_axis_tready({xbar_to_m09_couplers_TREADY,xbar_to_m08_couplers_TREADY,xbar_to_m07_couplers_TREADY,xbar_to_m06_couplers_TREADY,xbar_to_m05_couplers_TREADY,xbar_to_m04_couplers_TREADY,xbar_to_m03_couplers_TREADY,xbar_to_m02_couplers_TREADY,xbar_to_m01_couplers_TREADY,xbar_to_m00_couplers_TREADY}),
        .m_axis_tstrb({xbar_to_m08_couplers_TSTRB,xbar_to_m07_couplers_TSTRB,xbar_to_m06_couplers_TSTRB,xbar_to_m05_couplers_TSTRB,xbar_to_m04_couplers_TSTRB,NLW_xbar_m_axis_tstrb_UNCONNECTED[31:24],xbar_to_m02_couplers_TSTRB,xbar_to_m01_couplers_TSTRB,xbar_to_m00_couplers_TSTRB}),
        .m_axis_tuser({xbar_to_m08_couplers_TUSER,xbar_to_m07_couplers_TUSER,xbar_to_m06_couplers_TUSER,xbar_to_m05_couplers_TUSER,xbar_to_m04_couplers_TUSER,NLW_xbar_m_axis_tuser_UNCONNECTED[3],xbar_to_m02_couplers_TUSER,xbar_to_m01_couplers_TUSER,xbar_to_m00_couplers_TUSER}),
        .m_axis_tvalid({xbar_to_m09_couplers_TVALID,xbar_to_m08_couplers_TVALID,xbar_to_m07_couplers_TVALID,xbar_to_m06_couplers_TVALID,xbar_to_m05_couplers_TVALID,xbar_to_m04_couplers_TVALID,xbar_to_m03_couplers_TVALID,xbar_to_m02_couplers_TVALID,xbar_to_m01_couplers_TVALID,xbar_to_m00_couplers_TVALID}),
        .s_axi_ctrl_aclk(S_AXI_CTRL_ACLK_1),
        .s_axi_ctrl_araddr(video_router_to_xbar_ARADDR),
        .s_axi_ctrl_aresetn(S_AXI_CTRL_ARESETN_1),
        .s_axi_ctrl_arready(video_router_to_xbar_ARREADY),
        .s_axi_ctrl_arvalid(video_router_to_xbar_ARVALID),
        .s_axi_ctrl_awaddr(video_router_to_xbar_AWADDR),
        .s_axi_ctrl_awready(video_router_to_xbar_AWREADY),
        .s_axi_ctrl_awvalid(video_router_to_xbar_AWVALID),
        .s_axi_ctrl_bready(video_router_to_xbar_BREADY),
        .s_axi_ctrl_bresp(video_router_to_xbar_BRESP),
        .s_axi_ctrl_bvalid(video_router_to_xbar_BVALID),
        .s_axi_ctrl_rdata(video_router_to_xbar_RDATA),
        .s_axi_ctrl_rready(video_router_to_xbar_RREADY),
        .s_axi_ctrl_rresp(video_router_to_xbar_RRESP),
        .s_axi_ctrl_rvalid(video_router_to_xbar_RVALID),
        .s_axi_ctrl_wdata(video_router_to_xbar_WDATA),
        .s_axi_ctrl_wready(video_router_to_xbar_WREADY),
        .s_axi_ctrl_wvalid(video_router_to_xbar_WVALID),
        .s_axis_tdata({s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s09_couplers_to_xbar_TDATA,s08_couplers_to_xbar_TDATA,s07_couplers_to_xbar_TDATA,s06_couplers_to_xbar_TDATA,s05_couplers_to_xbar_TDATA,s04_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s03_couplers_to_xbar_TDATA,s02_couplers_to_xbar_TDATA,s01_couplers_to_xbar_TDATA,s00_couplers_to_xbar_TDATA}),
        .s_axis_tdest({s09_couplers_to_xbar_TDEST,s09_couplers_to_xbar_TDEST,s09_couplers_to_xbar_TDEST,s09_couplers_to_xbar_TDEST,s08_couplers_to_xbar_TDEST,s07_couplers_to_xbar_TDEST,s06_couplers_to_xbar_TDEST,s05_couplers_to_xbar_TDEST,s04_couplers_to_xbar_TDEST,s03_couplers_to_xbar_TDEST,s03_couplers_to_xbar_TDEST,s03_couplers_to_xbar_TDEST,s03_couplers_to_xbar_TDEST,s02_couplers_to_xbar_TDEST,s01_couplers_to_xbar_TDEST,s00_couplers_to_xbar_TDEST}),
        .s_axis_tid({1'b0,s08_couplers_to_xbar_TID,s07_couplers_to_xbar_TID,s06_couplers_to_xbar_TID,s05_couplers_to_xbar_TID,s04_couplers_to_xbar_TID,1'b0,s02_couplers_to_xbar_TID,s01_couplers_to_xbar_TID,s00_couplers_to_xbar_TID}),
        .s_axis_tkeep({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,s08_couplers_to_xbar_TKEEP,s07_couplers_to_xbar_TKEEP,s06_couplers_to_xbar_TKEEP,s05_couplers_to_xbar_TKEEP,s04_couplers_to_xbar_TKEEP,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,s02_couplers_to_xbar_TKEEP,s01_couplers_to_xbar_TKEEP,s00_couplers_to_xbar_TKEEP}),
        .s_axis_tlast({1'b0,s08_couplers_to_xbar_TLAST,s07_couplers_to_xbar_TLAST,s06_couplers_to_xbar_TLAST,s05_couplers_to_xbar_TLAST,s04_couplers_to_xbar_TLAST,1'b0,s02_couplers_to_xbar_TLAST,s01_couplers_to_xbar_TLAST,s00_couplers_to_xbar_TLAST}),
        .s_axis_tready({s09_couplers_to_xbar_TREADY,s08_couplers_to_xbar_TREADY,s07_couplers_to_xbar_TREADY,s06_couplers_to_xbar_TREADY,s05_couplers_to_xbar_TREADY,s04_couplers_to_xbar_TREADY,s03_couplers_to_xbar_TREADY,s02_couplers_to_xbar_TREADY,s01_couplers_to_xbar_TREADY,s00_couplers_to_xbar_TREADY}),
        .s_axis_tstrb({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,s08_couplers_to_xbar_TSTRB,s07_couplers_to_xbar_TSTRB,s06_couplers_to_xbar_TSTRB,s05_couplers_to_xbar_TSTRB,s04_couplers_to_xbar_TSTRB,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,s02_couplers_to_xbar_TSTRB,s01_couplers_to_xbar_TSTRB,s00_couplers_to_xbar_TSTRB}),
        .s_axis_tuser({1'b0,s08_couplers_to_xbar_TUSER,s07_couplers_to_xbar_TUSER,s06_couplers_to_xbar_TUSER,s05_couplers_to_xbar_TUSER,s04_couplers_to_xbar_TUSER,1'b0,s02_couplers_to_xbar_TUSER,s01_couplers_to_xbar_TUSER,s00_couplers_to_xbar_TUSER}),
        .s_axis_tvalid({s09_couplers_to_xbar_TVALID,s08_couplers_to_xbar_TVALID,s07_couplers_to_xbar_TVALID,s06_couplers_to_xbar_TVALID,s05_couplers_to_xbar_TVALID,s04_couplers_to_xbar_TVALID,s03_couplers_to_xbar_TVALID,s02_couplers_to_xbar_TVALID,s01_couplers_to_xbar_TVALID,s00_couplers_to_xbar_TVALID}));
endmodule

module m00_couplers_imp_UNKMQM
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire [63:0]m00_couplers_to_m00_regslice_TDATA;
  wire [3:0]m00_couplers_to_m00_regslice_TDEST;
  wire [0:0]m00_couplers_to_m00_regslice_TID;
  wire [7:0]m00_couplers_to_m00_regslice_TKEEP;
  wire m00_couplers_to_m00_regslice_TLAST;
  wire m00_couplers_to_m00_regslice_TREADY;
  wire [7:0]m00_couplers_to_m00_regslice_TSTRB;
  wire [0:0]m00_couplers_to_m00_regslice_TUSER;
  wire m00_couplers_to_m00_regslice_TVALID;
  wire [63:0]m00_regslice_to_m00_couplers_TDATA;
  wire [3:0]m00_regslice_to_m00_couplers_TDEST;
  wire [0:0]m00_regslice_to_m00_couplers_TID;
  wire [7:0]m00_regslice_to_m00_couplers_TKEEP;
  wire m00_regslice_to_m00_couplers_TLAST;
  wire m00_regslice_to_m00_couplers_TREADY;
  wire [7:0]m00_regslice_to_m00_couplers_TSTRB;
  wire [0:0]m00_regslice_to_m00_couplers_TUSER;
  wire m00_regslice_to_m00_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m00_regslice_to_m00_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = m00_regslice_to_m00_couplers_TDEST;
  assign M_AXIS_tid[0] = m00_regslice_to_m00_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m00_regslice_to_m00_couplers_TKEEP;
  assign M_AXIS_tlast = m00_regslice_to_m00_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m00_regslice_to_m00_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m00_regslice_to_m00_couplers_TUSER;
  assign M_AXIS_tvalid = m00_regslice_to_m00_couplers_TVALID;
  assign S_AXIS_tready = m00_couplers_to_m00_regslice_TREADY;
  assign m00_couplers_to_m00_regslice_TDATA = S_AXIS_tdata[63:0];
  assign m00_couplers_to_m00_regslice_TDEST = S_AXIS_tdest[3:0];
  assign m00_couplers_to_m00_regslice_TID = S_AXIS_tid[0];
  assign m00_couplers_to_m00_regslice_TKEEP = S_AXIS_tkeep[7:0];
  assign m00_couplers_to_m00_regslice_TLAST = S_AXIS_tlast;
  assign m00_couplers_to_m00_regslice_TSTRB = S_AXIS_tstrb[7:0];
  assign m00_couplers_to_m00_regslice_TUSER = S_AXIS_tuser[0];
  assign m00_couplers_to_m00_regslice_TVALID = S_AXIS_tvalid;
  assign m00_regslice_to_m00_couplers_TREADY = M_AXIS_tready;
  bd_d92b_m00_regslice_0 m00_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m00_regslice_to_m00_couplers_TDATA),
        .m_axis_tdest(m00_regslice_to_m00_couplers_TDEST),
        .m_axis_tid(m00_regslice_to_m00_couplers_TID),
        .m_axis_tkeep(m00_regslice_to_m00_couplers_TKEEP),
        .m_axis_tlast(m00_regslice_to_m00_couplers_TLAST),
        .m_axis_tready(m00_regslice_to_m00_couplers_TREADY),
        .m_axis_tstrb(m00_regslice_to_m00_couplers_TSTRB),
        .m_axis_tuser(m00_regslice_to_m00_couplers_TUSER),
        .m_axis_tvalid(m00_regslice_to_m00_couplers_TVALID),
        .s_axis_tdata(m00_couplers_to_m00_regslice_TDATA),
        .s_axis_tdest(m00_couplers_to_m00_regslice_TDEST),
        .s_axis_tid(m00_couplers_to_m00_regslice_TID),
        .s_axis_tkeep(m00_couplers_to_m00_regslice_TKEEP),
        .s_axis_tlast(m00_couplers_to_m00_regslice_TLAST),
        .s_axis_tready(m00_couplers_to_m00_regslice_TREADY),
        .s_axis_tstrb(m00_couplers_to_m00_regslice_TSTRB),
        .s_axis_tuser(m00_couplers_to_m00_regslice_TUSER),
        .s_axis_tvalid(m00_couplers_to_m00_regslice_TVALID));
endmodule

module m01_couplers_imp_1SW0MZH
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m01_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m01_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m01_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m01_regslice_TKEEP;
  wire auto_ss_slidr_to_m01_regslice_TLAST;
  wire auto_ss_slidr_to_m01_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m01_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m01_regslice_TUSER;
  wire auto_ss_slidr_to_m01_regslice_TVALID;
  wire [63:0]m01_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m01_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m01_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m01_couplers_to_auto_ss_slidr_TKEEP;
  wire m01_couplers_to_auto_ss_slidr_TLAST;
  wire m01_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m01_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m01_couplers_to_auto_ss_slidr_TUSER;
  wire m01_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m01_regslice_to_m01_couplers_TDATA;
  wire [0:0]m01_regslice_to_m01_couplers_TDEST;
  wire [0:0]m01_regslice_to_m01_couplers_TID;
  wire [7:0]m01_regslice_to_m01_couplers_TKEEP;
  wire m01_regslice_to_m01_couplers_TLAST;
  wire m01_regslice_to_m01_couplers_TREADY;
  wire [7:0]m01_regslice_to_m01_couplers_TSTRB;
  wire [0:0]m01_regslice_to_m01_couplers_TUSER;
  wire m01_regslice_to_m01_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m01_regslice_to_m01_couplers_TDATA;
  assign M_AXIS_tdest[0] = m01_regslice_to_m01_couplers_TDEST;
  assign M_AXIS_tid[0] = m01_regslice_to_m01_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m01_regslice_to_m01_couplers_TKEEP;
  assign M_AXIS_tlast = m01_regslice_to_m01_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m01_regslice_to_m01_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m01_regslice_to_m01_couplers_TUSER;
  assign M_AXIS_tvalid = m01_regslice_to_m01_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m01_couplers_to_auto_ss_slidr_TREADY;
  assign m01_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m01_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m01_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m01_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m01_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m01_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m01_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m01_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m01_regslice_to_m01_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_0 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m01_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m01_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m01_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m01_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m01_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m01_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m01_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m01_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m01_regslice_TVALID),
        .s_axis_tdata(m01_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m01_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m01_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m01_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m01_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m01_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m01_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m01_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m01_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m01_regslice_0 m01_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m01_regslice_to_m01_couplers_TDATA),
        .m_axis_tdest(m01_regslice_to_m01_couplers_TDEST),
        .m_axis_tid(m01_regslice_to_m01_couplers_TID),
        .m_axis_tkeep(m01_regslice_to_m01_couplers_TKEEP),
        .m_axis_tlast(m01_regslice_to_m01_couplers_TLAST),
        .m_axis_tready(m01_regslice_to_m01_couplers_TREADY),
        .m_axis_tstrb(m01_regslice_to_m01_couplers_TSTRB),
        .m_axis_tuser(m01_regslice_to_m01_couplers_TUSER),
        .m_axis_tvalid(m01_regslice_to_m01_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m01_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m01_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m01_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m01_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m01_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m01_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m01_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m01_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m01_regslice_TVALID));
endmodule

module m02_couplers_imp_1FOPCK9
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m02_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m02_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m02_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m02_regslice_TKEEP;
  wire auto_ss_slidr_to_m02_regslice_TLAST;
  wire auto_ss_slidr_to_m02_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m02_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m02_regslice_TUSER;
  wire auto_ss_slidr_to_m02_regslice_TVALID;
  wire [63:0]m02_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m02_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m02_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m02_couplers_to_auto_ss_slidr_TKEEP;
  wire m02_couplers_to_auto_ss_slidr_TLAST;
  wire m02_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m02_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m02_couplers_to_auto_ss_slidr_TUSER;
  wire m02_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m02_regslice_to_m02_couplers_TDATA;
  wire [0:0]m02_regslice_to_m02_couplers_TDEST;
  wire [0:0]m02_regslice_to_m02_couplers_TID;
  wire [7:0]m02_regslice_to_m02_couplers_TKEEP;
  wire m02_regslice_to_m02_couplers_TLAST;
  wire m02_regslice_to_m02_couplers_TREADY;
  wire [7:0]m02_regslice_to_m02_couplers_TSTRB;
  wire [0:0]m02_regslice_to_m02_couplers_TUSER;
  wire m02_regslice_to_m02_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m02_regslice_to_m02_couplers_TDATA;
  assign M_AXIS_tdest[0] = m02_regslice_to_m02_couplers_TDEST;
  assign M_AXIS_tid[0] = m02_regslice_to_m02_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m02_regslice_to_m02_couplers_TKEEP;
  assign M_AXIS_tlast = m02_regslice_to_m02_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m02_regslice_to_m02_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m02_regslice_to_m02_couplers_TUSER;
  assign M_AXIS_tvalid = m02_regslice_to_m02_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m02_couplers_to_auto_ss_slidr_TREADY;
  assign m02_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m02_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m02_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m02_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m02_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m02_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m02_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m02_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m02_regslice_to_m02_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_1 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m02_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m02_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m02_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m02_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m02_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m02_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m02_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m02_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m02_regslice_TVALID),
        .s_axis_tdata(m02_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m02_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m02_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m02_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m02_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m02_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m02_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m02_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m02_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m02_regslice_0 m02_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m02_regslice_to_m02_couplers_TDATA),
        .m_axis_tdest(m02_regslice_to_m02_couplers_TDEST),
        .m_axis_tid(m02_regslice_to_m02_couplers_TID),
        .m_axis_tkeep(m02_regslice_to_m02_couplers_TKEEP),
        .m_axis_tlast(m02_regslice_to_m02_couplers_TLAST),
        .m_axis_tready(m02_regslice_to_m02_couplers_TREADY),
        .m_axis_tstrb(m02_regslice_to_m02_couplers_TSTRB),
        .m_axis_tuser(m02_regslice_to_m02_couplers_TUSER),
        .m_axis_tvalid(m02_regslice_to_m02_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m02_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m02_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m02_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m02_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m02_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m02_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m02_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m02_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m02_regslice_TVALID));
endmodule

module m03_couplers_imp_H63B16
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tready,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tready,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output M_AXIS_tdata;
  output M_AXIS_tdest;
  input M_AXIS_tready;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input S_AXIS_tdata;
  input S_AXIS_tdest;
  output S_AXIS_tready;
  input S_AXIS_tvalid;

  wire m03_couplers_to_m03_couplers_TDATA;
  wire m03_couplers_to_m03_couplers_TDEST;
  wire m03_couplers_to_m03_couplers_TREADY;
  wire m03_couplers_to_m03_couplers_TVALID;

  assign M_AXIS_tdata = m03_couplers_to_m03_couplers_TDATA;
  assign M_AXIS_tdest = m03_couplers_to_m03_couplers_TDEST;
  assign M_AXIS_tvalid = m03_couplers_to_m03_couplers_TVALID;
  assign S_AXIS_tready = m03_couplers_to_m03_couplers_TREADY;
  assign m03_couplers_to_m03_couplers_TDATA = S_AXIS_tdata;
  assign m03_couplers_to_m03_couplers_TDEST = S_AXIS_tdest;
  assign m03_couplers_to_m03_couplers_TREADY = M_AXIS_tready;
  assign m03_couplers_to_m03_couplers_TVALID = S_AXIS_tvalid;
endmodule

module m04_couplers_imp_866F9T
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m04_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m04_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m04_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m04_regslice_TKEEP;
  wire auto_ss_slidr_to_m04_regslice_TLAST;
  wire auto_ss_slidr_to_m04_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m04_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m04_regslice_TUSER;
  wire auto_ss_slidr_to_m04_regslice_TVALID;
  wire [63:0]m04_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m04_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m04_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m04_couplers_to_auto_ss_slidr_TKEEP;
  wire m04_couplers_to_auto_ss_slidr_TLAST;
  wire m04_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m04_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m04_couplers_to_auto_ss_slidr_TUSER;
  wire m04_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m04_regslice_to_m04_couplers_TDATA;
  wire [0:0]m04_regslice_to_m04_couplers_TDEST;
  wire [0:0]m04_regslice_to_m04_couplers_TID;
  wire [7:0]m04_regslice_to_m04_couplers_TKEEP;
  wire m04_regslice_to_m04_couplers_TLAST;
  wire m04_regslice_to_m04_couplers_TREADY;
  wire [7:0]m04_regslice_to_m04_couplers_TSTRB;
  wire [0:0]m04_regslice_to_m04_couplers_TUSER;
  wire m04_regslice_to_m04_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m04_regslice_to_m04_couplers_TDATA;
  assign M_AXIS_tdest[0] = m04_regslice_to_m04_couplers_TDEST;
  assign M_AXIS_tid[0] = m04_regslice_to_m04_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m04_regslice_to_m04_couplers_TKEEP;
  assign M_AXIS_tlast = m04_regslice_to_m04_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m04_regslice_to_m04_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m04_regslice_to_m04_couplers_TUSER;
  assign M_AXIS_tvalid = m04_regslice_to_m04_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m04_couplers_to_auto_ss_slidr_TREADY;
  assign m04_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m04_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m04_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m04_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m04_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m04_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m04_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m04_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m04_regslice_to_m04_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_2 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m04_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m04_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m04_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m04_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m04_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m04_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m04_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m04_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m04_regslice_TVALID),
        .s_axis_tdata(m04_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m04_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m04_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m04_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m04_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m04_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m04_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m04_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m04_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m04_regslice_0 m04_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m04_regslice_to_m04_couplers_TDATA),
        .m_axis_tdest(m04_regslice_to_m04_couplers_TDEST),
        .m_axis_tid(m04_regslice_to_m04_couplers_TID),
        .m_axis_tkeep(m04_regslice_to_m04_couplers_TKEEP),
        .m_axis_tlast(m04_regslice_to_m04_couplers_TLAST),
        .m_axis_tready(m04_regslice_to_m04_couplers_TREADY),
        .m_axis_tstrb(m04_regslice_to_m04_couplers_TSTRB),
        .m_axis_tuser(m04_regslice_to_m04_couplers_TUSER),
        .m_axis_tvalid(m04_regslice_to_m04_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m04_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m04_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m04_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m04_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m04_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m04_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m04_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m04_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m04_regslice_TVALID));
endmodule

module m05_couplers_imp_16YLNDE
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m05_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m05_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m05_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m05_regslice_TKEEP;
  wire auto_ss_slidr_to_m05_regslice_TLAST;
  wire auto_ss_slidr_to_m05_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m05_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m05_regslice_TUSER;
  wire auto_ss_slidr_to_m05_regslice_TVALID;
  wire [63:0]m05_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m05_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m05_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m05_couplers_to_auto_ss_slidr_TKEEP;
  wire m05_couplers_to_auto_ss_slidr_TLAST;
  wire m05_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m05_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m05_couplers_to_auto_ss_slidr_TUSER;
  wire m05_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m05_regslice_to_m05_couplers_TDATA;
  wire [0:0]m05_regslice_to_m05_couplers_TDEST;
  wire [0:0]m05_regslice_to_m05_couplers_TID;
  wire [7:0]m05_regslice_to_m05_couplers_TKEEP;
  wire m05_regslice_to_m05_couplers_TLAST;
  wire m05_regslice_to_m05_couplers_TREADY;
  wire [7:0]m05_regslice_to_m05_couplers_TSTRB;
  wire [0:0]m05_regslice_to_m05_couplers_TUSER;
  wire m05_regslice_to_m05_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m05_regslice_to_m05_couplers_TDATA;
  assign M_AXIS_tdest[0] = m05_regslice_to_m05_couplers_TDEST;
  assign M_AXIS_tid[0] = m05_regslice_to_m05_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m05_regslice_to_m05_couplers_TKEEP;
  assign M_AXIS_tlast[0] = m05_regslice_to_m05_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m05_regslice_to_m05_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m05_regslice_to_m05_couplers_TUSER;
  assign M_AXIS_tvalid = m05_regslice_to_m05_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m05_couplers_to_auto_ss_slidr_TREADY;
  assign m05_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m05_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m05_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m05_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m05_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m05_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m05_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m05_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m05_regslice_to_m05_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_3 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m05_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m05_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m05_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m05_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m05_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m05_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m05_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m05_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m05_regslice_TVALID),
        .s_axis_tdata(m05_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m05_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m05_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m05_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m05_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m05_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m05_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m05_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m05_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m05_regslice_0 m05_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m05_regslice_to_m05_couplers_TDATA),
        .m_axis_tdest(m05_regslice_to_m05_couplers_TDEST),
        .m_axis_tid(m05_regslice_to_m05_couplers_TID),
        .m_axis_tkeep(m05_regslice_to_m05_couplers_TKEEP),
        .m_axis_tlast(m05_regslice_to_m05_couplers_TLAST),
        .m_axis_tready(m05_regslice_to_m05_couplers_TREADY),
        .m_axis_tstrb(m05_regslice_to_m05_couplers_TSTRB),
        .m_axis_tuser(m05_regslice_to_m05_couplers_TUSER),
        .m_axis_tvalid(m05_regslice_to_m05_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m05_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m05_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m05_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m05_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m05_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m05_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m05_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m05_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m05_regslice_TVALID));
endmodule

module m06_couplers_imp_1JUUMMU
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m06_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m06_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m06_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m06_regslice_TKEEP;
  wire auto_ss_slidr_to_m06_regslice_TLAST;
  wire auto_ss_slidr_to_m06_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m06_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m06_regslice_TUSER;
  wire auto_ss_slidr_to_m06_regslice_TVALID;
  wire [63:0]m06_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m06_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m06_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m06_couplers_to_auto_ss_slidr_TKEEP;
  wire m06_couplers_to_auto_ss_slidr_TLAST;
  wire m06_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m06_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m06_couplers_to_auto_ss_slidr_TUSER;
  wire m06_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m06_regslice_to_m06_couplers_TDATA;
  wire [0:0]m06_regslice_to_m06_couplers_TDEST;
  wire [0:0]m06_regslice_to_m06_couplers_TID;
  wire [7:0]m06_regslice_to_m06_couplers_TKEEP;
  wire m06_regslice_to_m06_couplers_TLAST;
  wire m06_regslice_to_m06_couplers_TREADY;
  wire [7:0]m06_regslice_to_m06_couplers_TSTRB;
  wire [0:0]m06_regslice_to_m06_couplers_TUSER;
  wire m06_regslice_to_m06_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m06_regslice_to_m06_couplers_TDATA;
  assign M_AXIS_tdest[0] = m06_regslice_to_m06_couplers_TDEST;
  assign M_AXIS_tid[0] = m06_regslice_to_m06_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m06_regslice_to_m06_couplers_TKEEP;
  assign M_AXIS_tlast[0] = m06_regslice_to_m06_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m06_regslice_to_m06_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m06_regslice_to_m06_couplers_TUSER;
  assign M_AXIS_tvalid = m06_regslice_to_m06_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m06_couplers_to_auto_ss_slidr_TREADY;
  assign m06_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m06_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m06_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m06_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m06_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m06_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m06_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m06_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m06_regslice_to_m06_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_4 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m06_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m06_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m06_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m06_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m06_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m06_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m06_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m06_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m06_regslice_TVALID),
        .s_axis_tdata(m06_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m06_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m06_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m06_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m06_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m06_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m06_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m06_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m06_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m06_regslice_0 m06_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m06_regslice_to_m06_couplers_TDATA),
        .m_axis_tdest(m06_regslice_to_m06_couplers_TDEST),
        .m_axis_tid(m06_regslice_to_m06_couplers_TID),
        .m_axis_tkeep(m06_regslice_to_m06_couplers_TKEEP),
        .m_axis_tlast(m06_regslice_to_m06_couplers_TLAST),
        .m_axis_tready(m06_regslice_to_m06_couplers_TREADY),
        .m_axis_tstrb(m06_regslice_to_m06_couplers_TSTRB),
        .m_axis_tuser(m06_regslice_to_m06_couplers_TUSER),
        .m_axis_tvalid(m06_regslice_to_m06_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m06_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m06_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m06_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m06_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m06_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m06_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m06_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m06_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m06_regslice_TVALID));
endmodule

module m07_couplers_imp_LW7T5H
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m07_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m07_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m07_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m07_regslice_TKEEP;
  wire auto_ss_slidr_to_m07_regslice_TLAST;
  wire auto_ss_slidr_to_m07_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m07_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m07_regslice_TUSER;
  wire auto_ss_slidr_to_m07_regslice_TVALID;
  wire [63:0]m07_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m07_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m07_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m07_couplers_to_auto_ss_slidr_TKEEP;
  wire m07_couplers_to_auto_ss_slidr_TLAST;
  wire m07_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m07_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m07_couplers_to_auto_ss_slidr_TUSER;
  wire m07_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m07_regslice_to_m07_couplers_TDATA;
  wire [0:0]m07_regslice_to_m07_couplers_TDEST;
  wire [0:0]m07_regslice_to_m07_couplers_TID;
  wire [7:0]m07_regslice_to_m07_couplers_TKEEP;
  wire m07_regslice_to_m07_couplers_TLAST;
  wire m07_regslice_to_m07_couplers_TREADY;
  wire [7:0]m07_regslice_to_m07_couplers_TSTRB;
  wire [0:0]m07_regslice_to_m07_couplers_TUSER;
  wire m07_regslice_to_m07_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m07_regslice_to_m07_couplers_TDATA;
  assign M_AXIS_tdest[0] = m07_regslice_to_m07_couplers_TDEST;
  assign M_AXIS_tid[0] = m07_regslice_to_m07_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m07_regslice_to_m07_couplers_TKEEP;
  assign M_AXIS_tlast[0] = m07_regslice_to_m07_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m07_regslice_to_m07_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m07_regslice_to_m07_couplers_TUSER;
  assign M_AXIS_tvalid = m07_regslice_to_m07_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m07_couplers_to_auto_ss_slidr_TREADY;
  assign m07_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m07_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m07_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m07_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m07_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m07_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m07_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m07_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m07_regslice_to_m07_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_5 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m07_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m07_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m07_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m07_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m07_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m07_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m07_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m07_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m07_regslice_TVALID),
        .s_axis_tdata(m07_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m07_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m07_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m07_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m07_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m07_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m07_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m07_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m07_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m07_regslice_0 m07_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m07_regslice_to_m07_couplers_TDATA),
        .m_axis_tdest(m07_regslice_to_m07_couplers_TDEST),
        .m_axis_tid(m07_regslice_to_m07_couplers_TID),
        .m_axis_tkeep(m07_regslice_to_m07_couplers_TKEEP),
        .m_axis_tlast(m07_regslice_to_m07_couplers_TLAST),
        .m_axis_tready(m07_regslice_to_m07_couplers_TREADY),
        .m_axis_tstrb(m07_regslice_to_m07_couplers_TSTRB),
        .m_axis_tuser(m07_regslice_to_m07_couplers_TUSER),
        .m_axis_tvalid(m07_regslice_to_m07_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m07_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m07_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m07_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m07_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m07_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m07_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m07_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m07_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m07_regslice_TVALID));
endmodule

module m08_couplers_imp_11UN62O
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [0:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [3:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire M_AXIS_ACLK;
  wire M_AXIS_ARESETN;
  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slidr_to_m08_regslice_TDATA;
  wire [0:0]auto_ss_slidr_to_m08_regslice_TDEST;
  wire [0:0]auto_ss_slidr_to_m08_regslice_TID;
  wire [7:0]auto_ss_slidr_to_m08_regslice_TKEEP;
  wire auto_ss_slidr_to_m08_regslice_TLAST;
  wire auto_ss_slidr_to_m08_regslice_TREADY;
  wire [7:0]auto_ss_slidr_to_m08_regslice_TSTRB;
  wire [0:0]auto_ss_slidr_to_m08_regslice_TUSER;
  wire auto_ss_slidr_to_m08_regslice_TVALID;
  wire [63:0]m08_couplers_to_auto_ss_slidr_TDATA;
  wire [3:0]m08_couplers_to_auto_ss_slidr_TDEST;
  wire [0:0]m08_couplers_to_auto_ss_slidr_TID;
  wire [7:0]m08_couplers_to_auto_ss_slidr_TKEEP;
  wire m08_couplers_to_auto_ss_slidr_TLAST;
  wire m08_couplers_to_auto_ss_slidr_TREADY;
  wire [7:0]m08_couplers_to_auto_ss_slidr_TSTRB;
  wire [0:0]m08_couplers_to_auto_ss_slidr_TUSER;
  wire m08_couplers_to_auto_ss_slidr_TVALID;
  wire [63:0]m08_regslice_to_m08_couplers_TDATA;
  wire [0:0]m08_regslice_to_m08_couplers_TDEST;
  wire [0:0]m08_regslice_to_m08_couplers_TID;
  wire [7:0]m08_regslice_to_m08_couplers_TKEEP;
  wire m08_regslice_to_m08_couplers_TLAST;
  wire m08_regslice_to_m08_couplers_TREADY;
  wire [7:0]m08_regslice_to_m08_couplers_TSTRB;
  wire [0:0]m08_regslice_to_m08_couplers_TUSER;
  wire m08_regslice_to_m08_couplers_TVALID;

  assign M_AXIS_tdata[63:0] = m08_regslice_to_m08_couplers_TDATA;
  assign M_AXIS_tdest[0] = m08_regslice_to_m08_couplers_TDEST;
  assign M_AXIS_tid[0] = m08_regslice_to_m08_couplers_TID;
  assign M_AXIS_tkeep[7:0] = m08_regslice_to_m08_couplers_TKEEP;
  assign M_AXIS_tlast = m08_regslice_to_m08_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = m08_regslice_to_m08_couplers_TSTRB;
  assign M_AXIS_tuser[0] = m08_regslice_to_m08_couplers_TUSER;
  assign M_AXIS_tvalid = m08_regslice_to_m08_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = m08_couplers_to_auto_ss_slidr_TREADY;
  assign m08_couplers_to_auto_ss_slidr_TDATA = S_AXIS_tdata[63:0];
  assign m08_couplers_to_auto_ss_slidr_TDEST = S_AXIS_tdest[3:0];
  assign m08_couplers_to_auto_ss_slidr_TID = S_AXIS_tid[0];
  assign m08_couplers_to_auto_ss_slidr_TKEEP = S_AXIS_tkeep[7:0];
  assign m08_couplers_to_auto_ss_slidr_TLAST = S_AXIS_tlast;
  assign m08_couplers_to_auto_ss_slidr_TSTRB = S_AXIS_tstrb[7:0];
  assign m08_couplers_to_auto_ss_slidr_TUSER = S_AXIS_tuser[0];
  assign m08_couplers_to_auto_ss_slidr_TVALID = S_AXIS_tvalid;
  assign m08_regslice_to_m08_couplers_TREADY = M_AXIS_tready;
  bd_d92b_auto_ss_slidr_6 auto_ss_slidr
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slidr_to_m08_regslice_TDATA),
        .m_axis_tdest(auto_ss_slidr_to_m08_regslice_TDEST),
        .m_axis_tid(auto_ss_slidr_to_m08_regslice_TID),
        .m_axis_tkeep(auto_ss_slidr_to_m08_regslice_TKEEP),
        .m_axis_tlast(auto_ss_slidr_to_m08_regslice_TLAST),
        .m_axis_tready(auto_ss_slidr_to_m08_regslice_TREADY),
        .m_axis_tstrb(auto_ss_slidr_to_m08_regslice_TSTRB),
        .m_axis_tuser(auto_ss_slidr_to_m08_regslice_TUSER),
        .m_axis_tvalid(auto_ss_slidr_to_m08_regslice_TVALID),
        .s_axis_tdata(m08_couplers_to_auto_ss_slidr_TDATA),
        .s_axis_tdest(m08_couplers_to_auto_ss_slidr_TDEST),
        .s_axis_tid(m08_couplers_to_auto_ss_slidr_TID),
        .s_axis_tkeep(m08_couplers_to_auto_ss_slidr_TKEEP),
        .s_axis_tlast(m08_couplers_to_auto_ss_slidr_TLAST),
        .s_axis_tready(m08_couplers_to_auto_ss_slidr_TREADY),
        .s_axis_tstrb(m08_couplers_to_auto_ss_slidr_TSTRB),
        .s_axis_tuser(m08_couplers_to_auto_ss_slidr_TUSER),
        .s_axis_tvalid(m08_couplers_to_auto_ss_slidr_TVALID));
  bd_d92b_m08_regslice_0 m08_regslice
       (.aclk(M_AXIS_ACLK),
        .aresetn(M_AXIS_ARESETN),
        .m_axis_tdata(m08_regslice_to_m08_couplers_TDATA),
        .m_axis_tdest(m08_regslice_to_m08_couplers_TDEST),
        .m_axis_tid(m08_regslice_to_m08_couplers_TID),
        .m_axis_tkeep(m08_regslice_to_m08_couplers_TKEEP),
        .m_axis_tlast(m08_regslice_to_m08_couplers_TLAST),
        .m_axis_tready(m08_regslice_to_m08_couplers_TREADY),
        .m_axis_tstrb(m08_regslice_to_m08_couplers_TSTRB),
        .m_axis_tuser(m08_regslice_to_m08_couplers_TUSER),
        .m_axis_tvalid(m08_regslice_to_m08_couplers_TVALID),
        .s_axis_tdata(auto_ss_slidr_to_m08_regslice_TDATA),
        .s_axis_tdest(auto_ss_slidr_to_m08_regslice_TDEST),
        .s_axis_tid(auto_ss_slidr_to_m08_regslice_TID),
        .s_axis_tkeep(auto_ss_slidr_to_m08_regslice_TKEEP),
        .s_axis_tlast(auto_ss_slidr_to_m08_regslice_TLAST),
        .s_axis_tready(auto_ss_slidr_to_m08_regslice_TREADY),
        .s_axis_tstrb(auto_ss_slidr_to_m08_regslice_TSTRB),
        .s_axis_tuser(auto_ss_slidr_to_m08_regslice_TUSER),
        .s_axis_tvalid(auto_ss_slidr_to_m08_regslice_TVALID));
endmodule

module m09_couplers_imp_4DV2KJ
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tready,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tready,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output M_AXIS_tdata;
  output M_AXIS_tdest;
  input M_AXIS_tready;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input S_AXIS_tdata;
  input S_AXIS_tdest;
  output S_AXIS_tready;
  input S_AXIS_tvalid;

  wire m09_couplers_to_m09_couplers_TDATA;
  wire m09_couplers_to_m09_couplers_TDEST;
  wire m09_couplers_to_m09_couplers_TREADY;
  wire m09_couplers_to_m09_couplers_TVALID;

  assign M_AXIS_tdata = m09_couplers_to_m09_couplers_TDATA;
  assign M_AXIS_tdest = m09_couplers_to_m09_couplers_TDEST;
  assign M_AXIS_tvalid = m09_couplers_to_m09_couplers_TVALID;
  assign S_AXIS_tready = m09_couplers_to_m09_couplers_TREADY;
  assign m09_couplers_to_m09_couplers_TDATA = S_AXIS_tdata;
  assign m09_couplers_to_m09_couplers_TDEST = S_AXIS_tdest;
  assign m09_couplers_to_m09_couplers_TREADY = M_AXIS_tready;
  assign m09_couplers_to_m09_couplers_TVALID = S_AXIS_tvalid;
endmodule

module s00_couplers_imp_1SQ1JEQ
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input [0:0]M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output [0:0]M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output [0:0]S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input [0:0]S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s00_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s00_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s00_couplers_TID;
  wire [7:0]auto_ss_slid_to_s00_couplers_TKEEP;
  wire auto_ss_slid_to_s00_couplers_TLAST;
  wire [0:0]auto_ss_slid_to_s00_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s00_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s00_couplers_TUSER;
  wire auto_ss_slid_to_s00_couplers_TVALID;
  wire [63:0]s00_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s00_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s00_couplers_to_auto_ss_slid_TID;
  wire [7:0]s00_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s00_couplers_to_auto_ss_slid_TLAST;
  wire s00_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s00_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s00_couplers_to_auto_ss_slid_TUSER;
  wire [0:0]s00_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s00_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s00_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s00_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s00_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s00_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s00_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s00_couplers_TUSER;
  assign M_AXIS_tvalid[0] = auto_ss_slid_to_s00_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready[0] = s00_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s00_couplers_TREADY = M_AXIS_tready[0];
  assign s00_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s00_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s00_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s00_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s00_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s00_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s00_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s00_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid[0];
  bd_d92b_auto_ss_slid_0 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s00_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s00_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s00_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s00_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s00_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s00_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s00_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s00_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s00_couplers_TVALID),
        .s_axis_tdata(s00_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s00_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s00_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s00_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s00_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s00_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s00_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s00_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s00_couplers_to_auto_ss_slid_TVALID));
endmodule

module s01_couplers_imp_URLT4X
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input [0:0]M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output [0:0]M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output [0:0]S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input [0:0]S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s01_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s01_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s01_couplers_TID;
  wire [7:0]auto_ss_slid_to_s01_couplers_TKEEP;
  wire auto_ss_slid_to_s01_couplers_TLAST;
  wire [0:0]auto_ss_slid_to_s01_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s01_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s01_couplers_TUSER;
  wire auto_ss_slid_to_s01_couplers_TVALID;
  wire [63:0]s01_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s01_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s01_couplers_to_auto_ss_slid_TID;
  wire [7:0]s01_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s01_couplers_to_auto_ss_slid_TLAST;
  wire s01_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s01_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s01_couplers_to_auto_ss_slid_TUSER;
  wire [0:0]s01_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s01_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s01_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s01_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s01_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s01_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s01_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s01_couplers_TUSER;
  assign M_AXIS_tvalid[0] = auto_ss_slid_to_s01_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready[0] = s01_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s01_couplers_TREADY = M_AXIS_tready[0];
  assign s01_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s01_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s01_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s01_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s01_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s01_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s01_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s01_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid[0];
  bd_d92b_auto_ss_slid_1 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s01_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s01_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s01_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s01_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s01_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s01_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s01_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s01_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s01_couplers_TVALID),
        .s_axis_tdata(s01_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s01_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s01_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s01_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s01_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s01_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s01_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s01_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s01_couplers_to_auto_ss_slid_TVALID));
endmodule

module s02_couplers_imp_H2116T
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input [0:0]M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output [0:0]M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output [0:0]S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input [0:0]S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s02_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s02_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s02_couplers_TID;
  wire [7:0]auto_ss_slid_to_s02_couplers_TKEEP;
  wire auto_ss_slid_to_s02_couplers_TLAST;
  wire [0:0]auto_ss_slid_to_s02_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s02_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s02_couplers_TUSER;
  wire auto_ss_slid_to_s02_couplers_TVALID;
  wire [63:0]s02_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s02_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s02_couplers_to_auto_ss_slid_TID;
  wire [7:0]s02_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s02_couplers_to_auto_ss_slid_TLAST;
  wire s02_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s02_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s02_couplers_to_auto_ss_slid_TUSER;
  wire [0:0]s02_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s02_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s02_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s02_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s02_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s02_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s02_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s02_couplers_TUSER;
  assign M_AXIS_tvalid[0] = auto_ss_slid_to_s02_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready[0] = s02_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s02_couplers_TREADY = M_AXIS_tready[0];
  assign s02_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s02_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s02_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s02_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s02_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s02_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s02_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s02_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid[0];
  bd_d92b_auto_ss_slid_2 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s02_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s02_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s02_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s02_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s02_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s02_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s02_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s02_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s02_couplers_TVALID),
        .s_axis_tdata(s02_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s02_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s02_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s02_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s02_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s02_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s02_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s02_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s02_couplers_to_auto_ss_slid_TVALID));
endmodule

module s03_couplers_imp_1FUKJD2
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tready,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tready,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output M_AXIS_tdata;
  output M_AXIS_tdest;
  input M_AXIS_tready;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input S_AXIS_tdata;
  input S_AXIS_tdest;
  output S_AXIS_tready;
  input S_AXIS_tvalid;

  wire s03_couplers_to_s03_couplers_TDATA;
  wire s03_couplers_to_s03_couplers_TDEST;
  wire s03_couplers_to_s03_couplers_TREADY;
  wire s03_couplers_to_s03_couplers_TVALID;

  assign M_AXIS_tdata = s03_couplers_to_s03_couplers_TDATA;
  assign M_AXIS_tdest = s03_couplers_to_s03_couplers_TDEST;
  assign M_AXIS_tvalid = s03_couplers_to_s03_couplers_TVALID;
  assign S_AXIS_tready = s03_couplers_to_s03_couplers_TREADY;
  assign s03_couplers_to_s03_couplers_TDATA = S_AXIS_tdata;
  assign s03_couplers_to_s03_couplers_TDEST = S_AXIS_tdest;
  assign s03_couplers_to_s03_couplers_TREADY = M_AXIS_tready;
  assign s03_couplers_to_s03_couplers_TVALID = S_AXIS_tvalid;
endmodule

module s04_couplers_imp_16T8OY5
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input [0:0]M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output [0:0]M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output [0:0]S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input [0:0]S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s04_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s04_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s04_couplers_TID;
  wire [7:0]auto_ss_slid_to_s04_couplers_TKEEP;
  wire auto_ss_slid_to_s04_couplers_TLAST;
  wire [0:0]auto_ss_slid_to_s04_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s04_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s04_couplers_TUSER;
  wire auto_ss_slid_to_s04_couplers_TVALID;
  wire [63:0]s04_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s04_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s04_couplers_to_auto_ss_slid_TID;
  wire [7:0]s04_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s04_couplers_to_auto_ss_slid_TLAST;
  wire s04_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s04_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s04_couplers_to_auto_ss_slid_TUSER;
  wire [0:0]s04_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s04_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s04_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s04_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s04_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s04_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s04_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s04_couplers_TUSER;
  assign M_AXIS_tvalid[0] = auto_ss_slid_to_s04_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready[0] = s04_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s04_couplers_TREADY = M_AXIS_tready[0];
  assign s04_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s04_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s04_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s04_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s04_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s04_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s04_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s04_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid[0];
  bd_d92b_auto_ss_slid_3 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s04_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s04_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s04_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s04_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s04_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s04_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s04_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s04_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s04_couplers_TVALID),
        .s_axis_tdata(s04_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s04_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s04_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s04_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s04_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s04_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s04_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s04_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s04_couplers_to_auto_ss_slid_TVALID));
endmodule

module s05_couplers_imp_8ATS7I
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s05_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s05_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s05_couplers_TID;
  wire [7:0]auto_ss_slid_to_s05_couplers_TKEEP;
  wire auto_ss_slid_to_s05_couplers_TLAST;
  wire auto_ss_slid_to_s05_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s05_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s05_couplers_TUSER;
  wire auto_ss_slid_to_s05_couplers_TVALID;
  wire [63:0]s05_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s05_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s05_couplers_to_auto_ss_slid_TID;
  wire [7:0]s05_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s05_couplers_to_auto_ss_slid_TLAST;
  wire s05_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s05_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s05_couplers_to_auto_ss_slid_TUSER;
  wire s05_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s05_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s05_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s05_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s05_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s05_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s05_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s05_couplers_TUSER;
  assign M_AXIS_tvalid = auto_ss_slid_to_s05_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = s05_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s05_couplers_TREADY = M_AXIS_tready;
  assign s05_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s05_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s05_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s05_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s05_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s05_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s05_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s05_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid;
  bd_d92b_auto_ss_slid_4 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s05_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s05_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s05_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s05_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s05_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s05_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s05_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s05_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s05_couplers_TVALID),
        .s_axis_tdata(s05_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s05_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s05_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s05_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s05_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s05_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s05_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s05_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s05_couplers_to_auto_ss_slid_TVALID));
endmodule

module s06_couplers_imp_LRIQH6
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s06_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s06_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s06_couplers_TID;
  wire [7:0]auto_ss_slid_to_s06_couplers_TKEEP;
  wire auto_ss_slid_to_s06_couplers_TLAST;
  wire auto_ss_slid_to_s06_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s06_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s06_couplers_TUSER;
  wire auto_ss_slid_to_s06_couplers_TVALID;
  wire [63:0]s06_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s06_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s06_couplers_to_auto_ss_slid_TID;
  wire [7:0]s06_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s06_couplers_to_auto_ss_slid_TLAST;
  wire s06_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s06_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s06_couplers_to_auto_ss_slid_TUSER;
  wire s06_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s06_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s06_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s06_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s06_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s06_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s06_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s06_couplers_TUSER;
  assign M_AXIS_tvalid = auto_ss_slid_to_s06_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = s06_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s06_couplers_TREADY = M_AXIS_tready;
  assign s06_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s06_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s06_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s06_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s06_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s06_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s06_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s06_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid;
  bd_d92b_auto_ss_slid_5 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s06_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s06_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s06_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s06_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s06_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s06_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s06_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s06_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s06_couplers_TVALID),
        .s_axis_tdata(s06_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s06_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s06_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s06_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s06_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s06_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s06_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s06_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s06_couplers_to_auto_ss_slid_TVALID));
endmodule

module s07_couplers_imp_1K032DL
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s07_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s07_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s07_couplers_TID;
  wire [7:0]auto_ss_slid_to_s07_couplers_TKEEP;
  wire auto_ss_slid_to_s07_couplers_TLAST;
  wire auto_ss_slid_to_s07_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s07_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s07_couplers_TUSER;
  wire auto_ss_slid_to_s07_couplers_TVALID;
  wire [63:0]s07_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s07_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s07_couplers_to_auto_ss_slid_TID;
  wire [7:0]s07_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s07_couplers_to_auto_ss_slid_TLAST;
  wire s07_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s07_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s07_couplers_to_auto_ss_slid_TUSER;
  wire s07_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s07_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s07_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s07_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s07_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s07_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s07_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s07_couplers_TUSER;
  assign M_AXIS_tvalid = auto_ss_slid_to_s07_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready = s07_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s07_couplers_TREADY = M_AXIS_tready;
  assign s07_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s07_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s07_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s07_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s07_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s07_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s07_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s07_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid;
  bd_d92b_auto_ss_slid_6 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s07_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s07_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s07_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s07_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s07_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s07_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s07_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s07_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s07_couplers_TVALID),
        .s_axis_tdata(s07_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s07_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s07_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s07_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s07_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s07_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s07_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s07_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s07_couplers_to_auto_ss_slid_TVALID));
endmodule

module s08_couplers_imp_4948IK
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tid,
    M_AXIS_tkeep,
    M_AXIS_tlast,
    M_AXIS_tready,
    M_AXIS_tstrb,
    M_AXIS_tuser,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tid,
    S_AXIS_tkeep,
    S_AXIS_tlast,
    S_AXIS_tready,
    S_AXIS_tstrb,
    S_AXIS_tuser,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output [63:0]M_AXIS_tdata;
  output [3:0]M_AXIS_tdest;
  output [0:0]M_AXIS_tid;
  output [7:0]M_AXIS_tkeep;
  output [0:0]M_AXIS_tlast;
  input [0:0]M_AXIS_tready;
  output [7:0]M_AXIS_tstrb;
  output [0:0]M_AXIS_tuser;
  output [0:0]M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input [63:0]S_AXIS_tdata;
  input [0:0]S_AXIS_tdest;
  input [0:0]S_AXIS_tid;
  input [7:0]S_AXIS_tkeep;
  input [0:0]S_AXIS_tlast;
  output [0:0]S_AXIS_tready;
  input [7:0]S_AXIS_tstrb;
  input [0:0]S_AXIS_tuser;
  input [0:0]S_AXIS_tvalid;

  wire S_AXIS_ACLK_1;
  wire S_AXIS_ARESETN_1;
  wire [63:0]auto_ss_slid_to_s08_couplers_TDATA;
  wire [3:0]auto_ss_slid_to_s08_couplers_TDEST;
  wire [0:0]auto_ss_slid_to_s08_couplers_TID;
  wire [7:0]auto_ss_slid_to_s08_couplers_TKEEP;
  wire auto_ss_slid_to_s08_couplers_TLAST;
  wire [0:0]auto_ss_slid_to_s08_couplers_TREADY;
  wire [7:0]auto_ss_slid_to_s08_couplers_TSTRB;
  wire [0:0]auto_ss_slid_to_s08_couplers_TUSER;
  wire auto_ss_slid_to_s08_couplers_TVALID;
  wire [63:0]s08_couplers_to_auto_ss_slid_TDATA;
  wire [0:0]s08_couplers_to_auto_ss_slid_TDEST;
  wire [0:0]s08_couplers_to_auto_ss_slid_TID;
  wire [7:0]s08_couplers_to_auto_ss_slid_TKEEP;
  wire [0:0]s08_couplers_to_auto_ss_slid_TLAST;
  wire s08_couplers_to_auto_ss_slid_TREADY;
  wire [7:0]s08_couplers_to_auto_ss_slid_TSTRB;
  wire [0:0]s08_couplers_to_auto_ss_slid_TUSER;
  wire [0:0]s08_couplers_to_auto_ss_slid_TVALID;

  assign M_AXIS_tdata[63:0] = auto_ss_slid_to_s08_couplers_TDATA;
  assign M_AXIS_tdest[3:0] = auto_ss_slid_to_s08_couplers_TDEST;
  assign M_AXIS_tid[0] = auto_ss_slid_to_s08_couplers_TID;
  assign M_AXIS_tkeep[7:0] = auto_ss_slid_to_s08_couplers_TKEEP;
  assign M_AXIS_tlast[0] = auto_ss_slid_to_s08_couplers_TLAST;
  assign M_AXIS_tstrb[7:0] = auto_ss_slid_to_s08_couplers_TSTRB;
  assign M_AXIS_tuser[0] = auto_ss_slid_to_s08_couplers_TUSER;
  assign M_AXIS_tvalid[0] = auto_ss_slid_to_s08_couplers_TVALID;
  assign S_AXIS_ACLK_1 = S_AXIS_ACLK;
  assign S_AXIS_ARESETN_1 = S_AXIS_ARESETN;
  assign S_AXIS_tready[0] = s08_couplers_to_auto_ss_slid_TREADY;
  assign auto_ss_slid_to_s08_couplers_TREADY = M_AXIS_tready[0];
  assign s08_couplers_to_auto_ss_slid_TDATA = S_AXIS_tdata[63:0];
  assign s08_couplers_to_auto_ss_slid_TDEST = S_AXIS_tdest[0];
  assign s08_couplers_to_auto_ss_slid_TID = S_AXIS_tid[0];
  assign s08_couplers_to_auto_ss_slid_TKEEP = S_AXIS_tkeep[7:0];
  assign s08_couplers_to_auto_ss_slid_TLAST = S_AXIS_tlast[0];
  assign s08_couplers_to_auto_ss_slid_TSTRB = S_AXIS_tstrb[7:0];
  assign s08_couplers_to_auto_ss_slid_TUSER = S_AXIS_tuser[0];
  assign s08_couplers_to_auto_ss_slid_TVALID = S_AXIS_tvalid[0];
  bd_d92b_auto_ss_slid_7 auto_ss_slid
       (.aclk(S_AXIS_ACLK_1),
        .aresetn(S_AXIS_ARESETN_1),
        .m_axis_tdata(auto_ss_slid_to_s08_couplers_TDATA),
        .m_axis_tdest(auto_ss_slid_to_s08_couplers_TDEST),
        .m_axis_tid(auto_ss_slid_to_s08_couplers_TID),
        .m_axis_tkeep(auto_ss_slid_to_s08_couplers_TKEEP),
        .m_axis_tlast(auto_ss_slid_to_s08_couplers_TLAST),
        .m_axis_tready(auto_ss_slid_to_s08_couplers_TREADY),
        .m_axis_tstrb(auto_ss_slid_to_s08_couplers_TSTRB),
        .m_axis_tuser(auto_ss_slid_to_s08_couplers_TUSER),
        .m_axis_tvalid(auto_ss_slid_to_s08_couplers_TVALID),
        .s_axis_tdata(s08_couplers_to_auto_ss_slid_TDATA),
        .s_axis_tdest(s08_couplers_to_auto_ss_slid_TDEST),
        .s_axis_tid(s08_couplers_to_auto_ss_slid_TID),
        .s_axis_tkeep(s08_couplers_to_auto_ss_slid_TKEEP),
        .s_axis_tlast(s08_couplers_to_auto_ss_slid_TLAST),
        .s_axis_tready(s08_couplers_to_auto_ss_slid_TREADY),
        .s_axis_tstrb(s08_couplers_to_auto_ss_slid_TSTRB),
        .s_axis_tuser(s08_couplers_to_auto_ss_slid_TUSER),
        .s_axis_tvalid(s08_couplers_to_auto_ss_slid_TVALID));
endmodule

module s09_couplers_imp_11ZY25B
   (M_AXIS_ACLK,
    M_AXIS_ARESETN,
    M_AXIS_tdata,
    M_AXIS_tdest,
    M_AXIS_tready,
    M_AXIS_tvalid,
    S_AXIS_ACLK,
    S_AXIS_ARESETN,
    S_AXIS_tdata,
    S_AXIS_tdest,
    S_AXIS_tready,
    S_AXIS_tvalid);
  input M_AXIS_ACLK;
  input M_AXIS_ARESETN;
  output M_AXIS_tdata;
  output M_AXIS_tdest;
  input M_AXIS_tready;
  output M_AXIS_tvalid;
  input S_AXIS_ACLK;
  input S_AXIS_ARESETN;
  input S_AXIS_tdata;
  input S_AXIS_tdest;
  output S_AXIS_tready;
  input S_AXIS_tvalid;

  wire s09_couplers_to_s09_couplers_TDATA;
  wire s09_couplers_to_s09_couplers_TDEST;
  wire s09_couplers_to_s09_couplers_TREADY;
  wire s09_couplers_to_s09_couplers_TVALID;

  assign M_AXIS_tdata = s09_couplers_to_s09_couplers_TDATA;
  assign M_AXIS_tdest = s09_couplers_to_s09_couplers_TDEST;
  assign M_AXIS_tvalid = s09_couplers_to_s09_couplers_TVALID;
  assign S_AXIS_tready = s09_couplers_to_s09_couplers_TREADY;
  assign s09_couplers_to_s09_couplers_TDATA = S_AXIS_tdata;
  assign s09_couplers_to_s09_couplers_TDEST = S_AXIS_tdest;
  assign s09_couplers_to_s09_couplers_TREADY = M_AXIS_tready;
  assign s09_couplers_to_s09_couplers_TVALID = S_AXIS_tvalid;
endmodule
