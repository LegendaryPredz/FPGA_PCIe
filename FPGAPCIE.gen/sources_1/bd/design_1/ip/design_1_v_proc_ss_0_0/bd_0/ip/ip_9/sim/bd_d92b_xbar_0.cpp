// (c) Copyright 1995-2022 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


#include "bd_d92b_xbar_0_sc.h"

#include "bd_d92b_xbar_0.h"

#include "bd_d92b_xbar_0_core.h"

#include <map>
#include <string>





#ifdef XILINX_SIMULATOR
bd_d92b_xbar_0::bd_d92b_xbar_0(const sc_core::sc_module_name& nm) : bd_d92b_xbar_0_sc(nm), aclk("aclk"), aresetn("aresetn"), s_axis_tvalid("s_axis_tvalid"), s_axis_tready("s_axis_tready"), s_axis_tdata("s_axis_tdata"), s_axis_tstrb("s_axis_tstrb"), s_axis_tkeep("s_axis_tkeep"), s_axis_tlast("s_axis_tlast"), s_axis_tid("s_axis_tid"), s_axis_tdest("s_axis_tdest"), s_axis_tuser("s_axis_tuser"), m_axis_tvalid("m_axis_tvalid"), m_axis_tready("m_axis_tready"), m_axis_tdata("m_axis_tdata"), m_axis_tstrb("m_axis_tstrb"), m_axis_tkeep("m_axis_tkeep"), m_axis_tlast("m_axis_tlast"), m_axis_tid("m_axis_tid"), m_axis_tdest("m_axis_tdest"), m_axis_tuser("m_axis_tuser"), s_axi_ctrl_aclk("s_axi_ctrl_aclk"), s_axi_ctrl_aresetn("s_axi_ctrl_aresetn"), s_axi_ctrl_awvalid("s_axi_ctrl_awvalid"), s_axi_ctrl_awready("s_axi_ctrl_awready"), s_axi_ctrl_awaddr("s_axi_ctrl_awaddr"), s_axi_ctrl_wvalid("s_axi_ctrl_wvalid"), s_axi_ctrl_wready("s_axi_ctrl_wready"), s_axi_ctrl_wdata("s_axi_ctrl_wdata"), s_axi_ctrl_bvalid("s_axi_ctrl_bvalid"), s_axi_ctrl_bready("s_axi_ctrl_bready"), s_axi_ctrl_bresp("s_axi_ctrl_bresp"), s_axi_ctrl_arvalid("s_axi_ctrl_arvalid"), s_axi_ctrl_arready("s_axi_ctrl_arready"), s_axi_ctrl_araddr("s_axi_ctrl_araddr"), s_axi_ctrl_rvalid("s_axi_ctrl_rvalid"), s_axi_ctrl_rready("s_axi_ctrl_rready"), s_axi_ctrl_rdata("s_axi_ctrl_rdata"), s_axi_ctrl_rresp("s_axi_ctrl_rresp")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);
  mp_impl->s_axi_ctrl_aclk(s_axi_ctrl_aclk);
  mp_impl->s_axi_ctrl_aresetn(s_axi_ctrl_aresetn);

  // initialize transactors
  mp_S00_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_0 = NULL;
  mp_s_axis_tready_converter_0 = NULL;
  mp_s_axis_tdata_converter_0 = NULL;
  mp_s_axis_tstrb_converter_0 = NULL;
  mp_s_axis_tkeep_converter_0 = NULL;
  mp_s_axis_tlast_converter_0 = NULL;
  mp_s_axis_tid_converter_0 = NULL;
  mp_s_axis_tdest_converter_0 = NULL;
  mp_s_axis_tuser_converter_0 = NULL;
  mp_M00_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_0 = NULL;
  mp_m_axis_tready_converter_0 = NULL;
  mp_m_axis_tdata_converter_0 = NULL;
  mp_m_axis_tstrb_converter_0 = NULL;
  mp_m_axis_tkeep_converter_0 = NULL;
  mp_m_axis_tlast_converter_0 = NULL;
  mp_m_axis_tid_converter_0 = NULL;
  mp_m_axis_tdest_converter_0 = NULL;
  mp_m_axis_tuser_converter_0 = NULL;
  mp_S01_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_1 = NULL;
  mp_s_axis_tready_converter_1 = NULL;
  mp_s_axis_tdata_converter_1 = NULL;
  mp_s_axis_tstrb_converter_1 = NULL;
  mp_s_axis_tkeep_converter_1 = NULL;
  mp_s_axis_tlast_converter_1 = NULL;
  mp_s_axis_tid_converter_1 = NULL;
  mp_s_axis_tdest_converter_1 = NULL;
  mp_s_axis_tuser_converter_1 = NULL;
  mp_M01_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_1 = NULL;
  mp_m_axis_tready_converter_1 = NULL;
  mp_m_axis_tdata_converter_1 = NULL;
  mp_m_axis_tstrb_converter_1 = NULL;
  mp_m_axis_tkeep_converter_1 = NULL;
  mp_m_axis_tlast_converter_1 = NULL;
  mp_m_axis_tid_converter_1 = NULL;
  mp_m_axis_tdest_converter_1 = NULL;
  mp_m_axis_tuser_converter_1 = NULL;
  mp_S02_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_2 = NULL;
  mp_s_axis_tready_converter_2 = NULL;
  mp_s_axis_tdata_converter_2 = NULL;
  mp_s_axis_tstrb_converter_2 = NULL;
  mp_s_axis_tkeep_converter_2 = NULL;
  mp_s_axis_tlast_converter_2 = NULL;
  mp_s_axis_tid_converter_2 = NULL;
  mp_s_axis_tdest_converter_2 = NULL;
  mp_s_axis_tuser_converter_2 = NULL;
  mp_M02_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_2 = NULL;
  mp_m_axis_tready_converter_2 = NULL;
  mp_m_axis_tdata_converter_2 = NULL;
  mp_m_axis_tstrb_converter_2 = NULL;
  mp_m_axis_tkeep_converter_2 = NULL;
  mp_m_axis_tlast_converter_2 = NULL;
  mp_m_axis_tid_converter_2 = NULL;
  mp_m_axis_tdest_converter_2 = NULL;
  mp_m_axis_tuser_converter_2 = NULL;
  mp_S03_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_3 = NULL;
  mp_s_axis_tready_converter_3 = NULL;
  mp_s_axis_tdata_converter_3 = NULL;
  mp_s_axis_tstrb_converter_3 = NULL;
  mp_s_axis_tkeep_converter_3 = NULL;
  mp_s_axis_tlast_converter_3 = NULL;
  mp_s_axis_tid_converter_3 = NULL;
  mp_s_axis_tdest_converter_3 = NULL;
  mp_s_axis_tuser_converter_3 = NULL;
  mp_M03_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_3 = NULL;
  mp_m_axis_tready_converter_3 = NULL;
  mp_m_axis_tdata_converter_3 = NULL;
  mp_m_axis_tstrb_converter_3 = NULL;
  mp_m_axis_tkeep_converter_3 = NULL;
  mp_m_axis_tlast_converter_3 = NULL;
  mp_m_axis_tid_converter_3 = NULL;
  mp_m_axis_tdest_converter_3 = NULL;
  mp_m_axis_tuser_converter_3 = NULL;
  mp_S04_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_4 = NULL;
  mp_s_axis_tready_converter_4 = NULL;
  mp_s_axis_tdata_converter_4 = NULL;
  mp_s_axis_tstrb_converter_4 = NULL;
  mp_s_axis_tkeep_converter_4 = NULL;
  mp_s_axis_tlast_converter_4 = NULL;
  mp_s_axis_tid_converter_4 = NULL;
  mp_s_axis_tdest_converter_4 = NULL;
  mp_s_axis_tuser_converter_4 = NULL;
  mp_M04_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_4 = NULL;
  mp_m_axis_tready_converter_4 = NULL;
  mp_m_axis_tdata_converter_4 = NULL;
  mp_m_axis_tstrb_converter_4 = NULL;
  mp_m_axis_tkeep_converter_4 = NULL;
  mp_m_axis_tlast_converter_4 = NULL;
  mp_m_axis_tid_converter_4 = NULL;
  mp_m_axis_tdest_converter_4 = NULL;
  mp_m_axis_tuser_converter_4 = NULL;
  mp_S05_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_5 = NULL;
  mp_s_axis_tready_converter_5 = NULL;
  mp_s_axis_tdata_converter_5 = NULL;
  mp_s_axis_tstrb_converter_5 = NULL;
  mp_s_axis_tkeep_converter_5 = NULL;
  mp_s_axis_tlast_converter_5 = NULL;
  mp_s_axis_tid_converter_5 = NULL;
  mp_s_axis_tdest_converter_5 = NULL;
  mp_s_axis_tuser_converter_5 = NULL;
  mp_M05_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_5 = NULL;
  mp_m_axis_tready_converter_5 = NULL;
  mp_m_axis_tdata_converter_5 = NULL;
  mp_m_axis_tstrb_converter_5 = NULL;
  mp_m_axis_tkeep_converter_5 = NULL;
  mp_m_axis_tlast_converter_5 = NULL;
  mp_m_axis_tid_converter_5 = NULL;
  mp_m_axis_tdest_converter_5 = NULL;
  mp_m_axis_tuser_converter_5 = NULL;
  mp_S06_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_6 = NULL;
  mp_s_axis_tready_converter_6 = NULL;
  mp_s_axis_tdata_converter_6 = NULL;
  mp_s_axis_tstrb_converter_6 = NULL;
  mp_s_axis_tkeep_converter_6 = NULL;
  mp_s_axis_tlast_converter_6 = NULL;
  mp_s_axis_tid_converter_6 = NULL;
  mp_s_axis_tdest_converter_6 = NULL;
  mp_s_axis_tuser_converter_6 = NULL;
  mp_M06_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_6 = NULL;
  mp_m_axis_tready_converter_6 = NULL;
  mp_m_axis_tdata_converter_6 = NULL;
  mp_m_axis_tstrb_converter_6 = NULL;
  mp_m_axis_tkeep_converter_6 = NULL;
  mp_m_axis_tlast_converter_6 = NULL;
  mp_m_axis_tid_converter_6 = NULL;
  mp_m_axis_tdest_converter_6 = NULL;
  mp_m_axis_tuser_converter_6 = NULL;
  mp_S07_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_7 = NULL;
  mp_s_axis_tready_converter_7 = NULL;
  mp_s_axis_tdata_converter_7 = NULL;
  mp_s_axis_tstrb_converter_7 = NULL;
  mp_s_axis_tkeep_converter_7 = NULL;
  mp_s_axis_tlast_converter_7 = NULL;
  mp_s_axis_tid_converter_7 = NULL;
  mp_s_axis_tdest_converter_7 = NULL;
  mp_s_axis_tuser_converter_7 = NULL;
  mp_M07_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_7 = NULL;
  mp_m_axis_tready_converter_7 = NULL;
  mp_m_axis_tdata_converter_7 = NULL;
  mp_m_axis_tstrb_converter_7 = NULL;
  mp_m_axis_tkeep_converter_7 = NULL;
  mp_m_axis_tlast_converter_7 = NULL;
  mp_m_axis_tid_converter_7 = NULL;
  mp_m_axis_tdest_converter_7 = NULL;
  mp_m_axis_tuser_converter_7 = NULL;
  mp_S08_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_8 = NULL;
  mp_s_axis_tready_converter_8 = NULL;
  mp_s_axis_tdata_converter_8 = NULL;
  mp_s_axis_tstrb_converter_8 = NULL;
  mp_s_axis_tkeep_converter_8 = NULL;
  mp_s_axis_tlast_converter_8 = NULL;
  mp_s_axis_tid_converter_8 = NULL;
  mp_s_axis_tdest_converter_8 = NULL;
  mp_s_axis_tuser_converter_8 = NULL;
  mp_M08_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_8 = NULL;
  mp_m_axis_tready_converter_8 = NULL;
  mp_m_axis_tdata_converter_8 = NULL;
  mp_m_axis_tstrb_converter_8 = NULL;
  mp_m_axis_tkeep_converter_8 = NULL;
  mp_m_axis_tlast_converter_8 = NULL;
  mp_m_axis_tid_converter_8 = NULL;
  mp_m_axis_tdest_converter_8 = NULL;
  mp_m_axis_tuser_converter_8 = NULL;
  mp_S09_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_9 = NULL;
  mp_s_axis_tready_converter_9 = NULL;
  mp_s_axis_tdata_converter_9 = NULL;
  mp_s_axis_tstrb_converter_9 = NULL;
  mp_s_axis_tkeep_converter_9 = NULL;
  mp_s_axis_tlast_converter_9 = NULL;
  mp_s_axis_tid_converter_9 = NULL;
  mp_s_axis_tdest_converter_9 = NULL;
  mp_s_axis_tuser_converter_9 = NULL;
  mp_M09_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_9 = NULL;
  mp_m_axis_tready_converter_9 = NULL;
  mp_m_axis_tdata_converter_9 = NULL;
  mp_m_axis_tstrb_converter_9 = NULL;
  mp_m_axis_tkeep_converter_9 = NULL;
  mp_m_axis_tlast_converter_9 = NULL;
  mp_m_axis_tid_converter_9 = NULL;
  mp_m_axis_tdest_converter_9 = NULL;
  mp_m_axis_tuser_converter_9 = NULL;
  mp_S_AXI_CTRL_transactor = NULL;

  // initialize junctures
  mp_m_axis_concat_tdata = NULL;
  mp_m_axis_concat_tdest = NULL;
  mp_m_axis_concat_tid = NULL;
  mp_m_axis_concat_tkeep = NULL;
  mp_m_axis_concat_tlast = NULL;
  mp_m_axis_concat_tstrb = NULL;
  mp_m_axis_concat_tuser = NULL;
  mp_m_axis_concat_tvalid = NULL;
  mp_m_axis_split_tready = NULL;
  mp_s_axis_concat_tready = NULL;
  mp_s_axis_split_tdata = NULL;
  mp_s_axis_split_tdest = NULL;
  mp_s_axis_split_tid = NULL;
  mp_s_axis_split_tkeep = NULL;
  mp_s_axis_split_tlast = NULL;
  mp_s_axis_split_tstrb = NULL;
  mp_s_axis_split_tuser = NULL;
  mp_s_axis_split_tvalid = NULL;
  mp_s_axis_split_tvalid = new xsc::xsc_split<10, 10>("s_axis_split_tvalid");
  mp_s_axis_split_tvalid->in_port(s_axis_tvalid);
  mp_s_axis_split_tvalid->out_port[0](s_axis_split_tvalid_out_0);
    mp_s_axis_split_tvalid->add_mask(0,1,0);
  mp_s_axis_concat_tready = new xsc::xsc_concatenator<10, 10>("s_axis_concat_tready");
  mp_s_axis_concat_tready->in_port[0](s_axis_concat_tready_out_0);
  mp_s_axis_concat_tready->out_port(s_axis_tready);
    mp_s_axis_concat_tready->offset_port(0, 0);
  mp_s_axis_split_tdata = new xsc::xsc_split<640, 10>("s_axis_split_tdata");
  mp_s_axis_split_tdata->in_port(s_axis_tdata);
  mp_s_axis_split_tdata->out_port[0](s_axis_split_tdata_out_0);
    mp_s_axis_split_tdata->add_mask(0,64,0);
  mp_s_axis_split_tstrb = new xsc::xsc_split<80, 10>("s_axis_split_tstrb");
  mp_s_axis_split_tstrb->in_port(s_axis_tstrb);
  mp_s_axis_split_tstrb->out_port[0](s_axis_split_tstrb_out_0);
    mp_s_axis_split_tstrb->add_mask(0,8,0);
  mp_s_axis_split_tkeep = new xsc::xsc_split<80, 10>("s_axis_split_tkeep");
  mp_s_axis_split_tkeep->in_port(s_axis_tkeep);
  mp_s_axis_split_tkeep->out_port[0](s_axis_split_tkeep_out_0);
    mp_s_axis_split_tkeep->add_mask(0,8,0);
  mp_s_axis_split_tlast = new xsc::xsc_split<10, 10>("s_axis_split_tlast");
  mp_s_axis_split_tlast->in_port(s_axis_tlast);
  mp_s_axis_split_tlast->out_port[0](s_axis_split_tlast_out_0);
    mp_s_axis_split_tlast->add_mask(0,1,0);
  mp_s_axis_split_tid = new xsc::xsc_split<10, 10>("s_axis_split_tid");
  mp_s_axis_split_tid->in_port(s_axis_tid);
  mp_s_axis_split_tid->out_port[0](s_axis_split_tid_out_0);
    mp_s_axis_split_tid->add_mask(0,1,0);
  mp_s_axis_split_tdest = new xsc::xsc_split<40, 10>("s_axis_split_tdest");
  mp_s_axis_split_tdest->in_port(s_axis_tdest);
  mp_s_axis_split_tdest->out_port[0](s_axis_split_tdest_out_0);
    mp_s_axis_split_tdest->add_mask(0,4,0);
  mp_s_axis_split_tuser = new xsc::xsc_split<10, 10>("s_axis_split_tuser");
  mp_s_axis_split_tuser->in_port(s_axis_tuser);
  mp_s_axis_split_tuser->out_port[0](s_axis_split_tuser_out_0);
    mp_s_axis_split_tuser->add_mask(0,1,0);
  mp_m_axis_concat_tvalid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tvalid");
  mp_m_axis_concat_tvalid->in_port[0](m_axis_concat_tvalid_out_0);
  mp_m_axis_concat_tvalid->out_port(m_axis_tvalid);
    mp_m_axis_concat_tvalid->offset_port(0, 0);
  mp_m_axis_split_tready = new xsc::xsc_split<10, 10>("m_axis_split_tready");
  mp_m_axis_split_tready->in_port(m_axis_tready);
  mp_m_axis_split_tready->out_port[0](m_axis_split_tready_out_0);
    mp_m_axis_split_tready->add_mask(0,1,0);
  mp_m_axis_concat_tdata = new xsc::xsc_concatenator<640, 10>("m_axis_concat_tdata");
  mp_m_axis_concat_tdata->in_port[0](m_axis_concat_tdata_out_0);
  mp_m_axis_concat_tdata->out_port(m_axis_tdata);
    mp_m_axis_concat_tdata->offset_port(0, 0);
  mp_m_axis_concat_tstrb = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tstrb");
  mp_m_axis_concat_tstrb->in_port[0](m_axis_concat_tstrb_out_0);
  mp_m_axis_concat_tstrb->out_port(m_axis_tstrb);
    mp_m_axis_concat_tstrb->offset_port(0, 0);
  mp_m_axis_concat_tkeep = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tkeep");
  mp_m_axis_concat_tkeep->in_port[0](m_axis_concat_tkeep_out_0);
  mp_m_axis_concat_tkeep->out_port(m_axis_tkeep);
    mp_m_axis_concat_tkeep->offset_port(0, 0);
  mp_m_axis_concat_tlast = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tlast");
  mp_m_axis_concat_tlast->in_port[0](m_axis_concat_tlast_out_0);
  mp_m_axis_concat_tlast->out_port(m_axis_tlast);
    mp_m_axis_concat_tlast->offset_port(0, 0);
  mp_m_axis_concat_tid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tid");
  mp_m_axis_concat_tid->in_port[0](m_axis_concat_tid_out_0);
  mp_m_axis_concat_tid->out_port(m_axis_tid);
    mp_m_axis_concat_tid->offset_port(0, 0);
  mp_m_axis_concat_tdest = new xsc::xsc_concatenator<40, 10>("m_axis_concat_tdest");
  mp_m_axis_concat_tdest->in_port[0](m_axis_concat_tdest_out_0);
  mp_m_axis_concat_tdest->out_port(m_axis_tdest);
    mp_m_axis_concat_tdest->offset_port(0, 0);
  mp_m_axis_concat_tuser = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tuser");
  mp_m_axis_concat_tuser->in_port[0](m_axis_concat_tuser_out_0);
  mp_m_axis_concat_tuser->out_port(m_axis_tuser);
    mp_m_axis_concat_tuser->offset_port(0, 0);
  
  mp_s_axis_split_tvalid->out_port[1](s_axis_split_tvalid_out_1);
    mp_s_axis_split_tvalid->add_mask(1,2,1);
  mp_s_axis_concat_tready->in_port[1](s_axis_concat_tready_out_1);
  mp_s_axis_concat_tready->offset_port(1, 1);
  
  mp_s_axis_split_tdata->out_port[1](s_axis_split_tdata_out_1);
    mp_s_axis_split_tdata->add_mask(1,128,64);
  
  mp_s_axis_split_tstrb->out_port[1](s_axis_split_tstrb_out_1);
    mp_s_axis_split_tstrb->add_mask(1,16,8);
  
  mp_s_axis_split_tkeep->out_port[1](s_axis_split_tkeep_out_1);
    mp_s_axis_split_tkeep->add_mask(1,16,8);
  
  mp_s_axis_split_tlast->out_port[1](s_axis_split_tlast_out_1);
    mp_s_axis_split_tlast->add_mask(1,2,1);
  
  mp_s_axis_split_tid->out_port[1](s_axis_split_tid_out_1);
    mp_s_axis_split_tid->add_mask(1,2,1);
  
  mp_s_axis_split_tdest->out_port[1](s_axis_split_tdest_out_1);
    mp_s_axis_split_tdest->add_mask(1,8,4);
  
  mp_s_axis_split_tuser->out_port[1](s_axis_split_tuser_out_1);
    mp_s_axis_split_tuser->add_mask(1,2,1);
  mp_m_axis_concat_tvalid->in_port[1](m_axis_concat_tvalid_out_1);
  mp_m_axis_concat_tvalid->offset_port(1, 1);
  
  mp_m_axis_split_tready->out_port[1](m_axis_split_tready_out_1);
    mp_m_axis_split_tready->add_mask(1,2,1);
  mp_m_axis_concat_tdata->in_port[1](m_axis_concat_tdata_out_1);
  mp_m_axis_concat_tdata->offset_port(1, 64);
  mp_m_axis_concat_tstrb->in_port[1](m_axis_concat_tstrb_out_1);
  mp_m_axis_concat_tstrb->offset_port(1, 8);
  mp_m_axis_concat_tkeep->in_port[1](m_axis_concat_tkeep_out_1);
  mp_m_axis_concat_tkeep->offset_port(1, 8);
  mp_m_axis_concat_tlast->in_port[1](m_axis_concat_tlast_out_1);
  mp_m_axis_concat_tlast->offset_port(1, 1);
  mp_m_axis_concat_tid->in_port[1](m_axis_concat_tid_out_1);
  mp_m_axis_concat_tid->offset_port(1, 1);
  mp_m_axis_concat_tdest->in_port[1](m_axis_concat_tdest_out_1);
  mp_m_axis_concat_tdest->offset_port(1, 4);
  mp_m_axis_concat_tuser->in_port[1](m_axis_concat_tuser_out_1);
  mp_m_axis_concat_tuser->offset_port(1, 1);
  
  mp_s_axis_split_tvalid->out_port[2](s_axis_split_tvalid_out_2);
    mp_s_axis_split_tvalid->add_mask(2,3,2);
  mp_s_axis_concat_tready->in_port[2](s_axis_concat_tready_out_2);
  mp_s_axis_concat_tready->offset_port(2, 2);
  
  mp_s_axis_split_tdata->out_port[2](s_axis_split_tdata_out_2);
    mp_s_axis_split_tdata->add_mask(2,192,128);
  
  mp_s_axis_split_tstrb->out_port[2](s_axis_split_tstrb_out_2);
    mp_s_axis_split_tstrb->add_mask(2,24,16);
  
  mp_s_axis_split_tkeep->out_port[2](s_axis_split_tkeep_out_2);
    mp_s_axis_split_tkeep->add_mask(2,24,16);
  
  mp_s_axis_split_tlast->out_port[2](s_axis_split_tlast_out_2);
    mp_s_axis_split_tlast->add_mask(2,3,2);
  
  mp_s_axis_split_tid->out_port[2](s_axis_split_tid_out_2);
    mp_s_axis_split_tid->add_mask(2,3,2);
  
  mp_s_axis_split_tdest->out_port[2](s_axis_split_tdest_out_2);
    mp_s_axis_split_tdest->add_mask(2,12,8);
  
  mp_s_axis_split_tuser->out_port[2](s_axis_split_tuser_out_2);
    mp_s_axis_split_tuser->add_mask(2,3,2);
  mp_m_axis_concat_tvalid->in_port[2](m_axis_concat_tvalid_out_2);
  mp_m_axis_concat_tvalid->offset_port(2, 2);
  
  mp_m_axis_split_tready->out_port[2](m_axis_split_tready_out_2);
    mp_m_axis_split_tready->add_mask(2,3,2);
  mp_m_axis_concat_tdata->in_port[2](m_axis_concat_tdata_out_2);
  mp_m_axis_concat_tdata->offset_port(2, 128);
  mp_m_axis_concat_tstrb->in_port[2](m_axis_concat_tstrb_out_2);
  mp_m_axis_concat_tstrb->offset_port(2, 16);
  mp_m_axis_concat_tkeep->in_port[2](m_axis_concat_tkeep_out_2);
  mp_m_axis_concat_tkeep->offset_port(2, 16);
  mp_m_axis_concat_tlast->in_port[2](m_axis_concat_tlast_out_2);
  mp_m_axis_concat_tlast->offset_port(2, 2);
  mp_m_axis_concat_tid->in_port[2](m_axis_concat_tid_out_2);
  mp_m_axis_concat_tid->offset_port(2, 2);
  mp_m_axis_concat_tdest->in_port[2](m_axis_concat_tdest_out_2);
  mp_m_axis_concat_tdest->offset_port(2, 8);
  mp_m_axis_concat_tuser->in_port[2](m_axis_concat_tuser_out_2);
  mp_m_axis_concat_tuser->offset_port(2, 2);
  
  mp_s_axis_split_tvalid->out_port[3](s_axis_split_tvalid_out_3);
    mp_s_axis_split_tvalid->add_mask(3,4,3);
  mp_s_axis_concat_tready->in_port[3](s_axis_concat_tready_out_3);
  mp_s_axis_concat_tready->offset_port(3, 3);
  
  mp_s_axis_split_tdata->out_port[3](s_axis_split_tdata_out_3);
    mp_s_axis_split_tdata->add_mask(3,256,192);
  
  mp_s_axis_split_tstrb->out_port[3](s_axis_split_tstrb_out_3);
    mp_s_axis_split_tstrb->add_mask(3,32,24);
  
  mp_s_axis_split_tkeep->out_port[3](s_axis_split_tkeep_out_3);
    mp_s_axis_split_tkeep->add_mask(3,32,24);
  
  mp_s_axis_split_tlast->out_port[3](s_axis_split_tlast_out_3);
    mp_s_axis_split_tlast->add_mask(3,4,3);
  
  mp_s_axis_split_tid->out_port[3](s_axis_split_tid_out_3);
    mp_s_axis_split_tid->add_mask(3,4,3);
  
  mp_s_axis_split_tdest->out_port[3](s_axis_split_tdest_out_3);
    mp_s_axis_split_tdest->add_mask(3,16,12);
  
  mp_s_axis_split_tuser->out_port[3](s_axis_split_tuser_out_3);
    mp_s_axis_split_tuser->add_mask(3,4,3);
  mp_m_axis_concat_tvalid->in_port[3](m_axis_concat_tvalid_out_3);
  mp_m_axis_concat_tvalid->offset_port(3, 3);
  
  mp_m_axis_split_tready->out_port[3](m_axis_split_tready_out_3);
    mp_m_axis_split_tready->add_mask(3,4,3);
  mp_m_axis_concat_tdata->in_port[3](m_axis_concat_tdata_out_3);
  mp_m_axis_concat_tdata->offset_port(3, 192);
  mp_m_axis_concat_tstrb->in_port[3](m_axis_concat_tstrb_out_3);
  mp_m_axis_concat_tstrb->offset_port(3, 24);
  mp_m_axis_concat_tkeep->in_port[3](m_axis_concat_tkeep_out_3);
  mp_m_axis_concat_tkeep->offset_port(3, 24);
  mp_m_axis_concat_tlast->in_port[3](m_axis_concat_tlast_out_3);
  mp_m_axis_concat_tlast->offset_port(3, 3);
  mp_m_axis_concat_tid->in_port[3](m_axis_concat_tid_out_3);
  mp_m_axis_concat_tid->offset_port(3, 3);
  mp_m_axis_concat_tdest->in_port[3](m_axis_concat_tdest_out_3);
  mp_m_axis_concat_tdest->offset_port(3, 12);
  mp_m_axis_concat_tuser->in_port[3](m_axis_concat_tuser_out_3);
  mp_m_axis_concat_tuser->offset_port(3, 3);
  
  mp_s_axis_split_tvalid->out_port[4](s_axis_split_tvalid_out_4);
    mp_s_axis_split_tvalid->add_mask(4,5,4);
  mp_s_axis_concat_tready->in_port[4](s_axis_concat_tready_out_4);
  mp_s_axis_concat_tready->offset_port(4, 4);
  
  mp_s_axis_split_tdata->out_port[4](s_axis_split_tdata_out_4);
    mp_s_axis_split_tdata->add_mask(4,320,256);
  
  mp_s_axis_split_tstrb->out_port[4](s_axis_split_tstrb_out_4);
    mp_s_axis_split_tstrb->add_mask(4,40,32);
  
  mp_s_axis_split_tkeep->out_port[4](s_axis_split_tkeep_out_4);
    mp_s_axis_split_tkeep->add_mask(4,40,32);
  
  mp_s_axis_split_tlast->out_port[4](s_axis_split_tlast_out_4);
    mp_s_axis_split_tlast->add_mask(4,5,4);
  
  mp_s_axis_split_tid->out_port[4](s_axis_split_tid_out_4);
    mp_s_axis_split_tid->add_mask(4,5,4);
  
  mp_s_axis_split_tdest->out_port[4](s_axis_split_tdest_out_4);
    mp_s_axis_split_tdest->add_mask(4,20,16);
  
  mp_s_axis_split_tuser->out_port[4](s_axis_split_tuser_out_4);
    mp_s_axis_split_tuser->add_mask(4,5,4);
  mp_m_axis_concat_tvalid->in_port[4](m_axis_concat_tvalid_out_4);
  mp_m_axis_concat_tvalid->offset_port(4, 4);
  
  mp_m_axis_split_tready->out_port[4](m_axis_split_tready_out_4);
    mp_m_axis_split_tready->add_mask(4,5,4);
  mp_m_axis_concat_tdata->in_port[4](m_axis_concat_tdata_out_4);
  mp_m_axis_concat_tdata->offset_port(4, 256);
  mp_m_axis_concat_tstrb->in_port[4](m_axis_concat_tstrb_out_4);
  mp_m_axis_concat_tstrb->offset_port(4, 32);
  mp_m_axis_concat_tkeep->in_port[4](m_axis_concat_tkeep_out_4);
  mp_m_axis_concat_tkeep->offset_port(4, 32);
  mp_m_axis_concat_tlast->in_port[4](m_axis_concat_tlast_out_4);
  mp_m_axis_concat_tlast->offset_port(4, 4);
  mp_m_axis_concat_tid->in_port[4](m_axis_concat_tid_out_4);
  mp_m_axis_concat_tid->offset_port(4, 4);
  mp_m_axis_concat_tdest->in_port[4](m_axis_concat_tdest_out_4);
  mp_m_axis_concat_tdest->offset_port(4, 16);
  mp_m_axis_concat_tuser->in_port[4](m_axis_concat_tuser_out_4);
  mp_m_axis_concat_tuser->offset_port(4, 4);
  
  mp_s_axis_split_tvalid->out_port[5](s_axis_split_tvalid_out_5);
    mp_s_axis_split_tvalid->add_mask(5,6,5);
  mp_s_axis_concat_tready->in_port[5](s_axis_concat_tready_out_5);
  mp_s_axis_concat_tready->offset_port(5, 5);
  
  mp_s_axis_split_tdata->out_port[5](s_axis_split_tdata_out_5);
    mp_s_axis_split_tdata->add_mask(5,384,320);
  
  mp_s_axis_split_tstrb->out_port[5](s_axis_split_tstrb_out_5);
    mp_s_axis_split_tstrb->add_mask(5,48,40);
  
  mp_s_axis_split_tkeep->out_port[5](s_axis_split_tkeep_out_5);
    mp_s_axis_split_tkeep->add_mask(5,48,40);
  
  mp_s_axis_split_tlast->out_port[5](s_axis_split_tlast_out_5);
    mp_s_axis_split_tlast->add_mask(5,6,5);
  
  mp_s_axis_split_tid->out_port[5](s_axis_split_tid_out_5);
    mp_s_axis_split_tid->add_mask(5,6,5);
  
  mp_s_axis_split_tdest->out_port[5](s_axis_split_tdest_out_5);
    mp_s_axis_split_tdest->add_mask(5,24,20);
  
  mp_s_axis_split_tuser->out_port[5](s_axis_split_tuser_out_5);
    mp_s_axis_split_tuser->add_mask(5,6,5);
  mp_m_axis_concat_tvalid->in_port[5](m_axis_concat_tvalid_out_5);
  mp_m_axis_concat_tvalid->offset_port(5, 5);
  
  mp_m_axis_split_tready->out_port[5](m_axis_split_tready_out_5);
    mp_m_axis_split_tready->add_mask(5,6,5);
  mp_m_axis_concat_tdata->in_port[5](m_axis_concat_tdata_out_5);
  mp_m_axis_concat_tdata->offset_port(5, 320);
  mp_m_axis_concat_tstrb->in_port[5](m_axis_concat_tstrb_out_5);
  mp_m_axis_concat_tstrb->offset_port(5, 40);
  mp_m_axis_concat_tkeep->in_port[5](m_axis_concat_tkeep_out_5);
  mp_m_axis_concat_tkeep->offset_port(5, 40);
  mp_m_axis_concat_tlast->in_port[5](m_axis_concat_tlast_out_5);
  mp_m_axis_concat_tlast->offset_port(5, 5);
  mp_m_axis_concat_tid->in_port[5](m_axis_concat_tid_out_5);
  mp_m_axis_concat_tid->offset_port(5, 5);
  mp_m_axis_concat_tdest->in_port[5](m_axis_concat_tdest_out_5);
  mp_m_axis_concat_tdest->offset_port(5, 20);
  mp_m_axis_concat_tuser->in_port[5](m_axis_concat_tuser_out_5);
  mp_m_axis_concat_tuser->offset_port(5, 5);
  
  mp_s_axis_split_tvalid->out_port[6](s_axis_split_tvalid_out_6);
    mp_s_axis_split_tvalid->add_mask(6,7,6);
  mp_s_axis_concat_tready->in_port[6](s_axis_concat_tready_out_6);
  mp_s_axis_concat_tready->offset_port(6, 6);
  
  mp_s_axis_split_tdata->out_port[6](s_axis_split_tdata_out_6);
    mp_s_axis_split_tdata->add_mask(6,448,384);
  
  mp_s_axis_split_tstrb->out_port[6](s_axis_split_tstrb_out_6);
    mp_s_axis_split_tstrb->add_mask(6,56,48);
  
  mp_s_axis_split_tkeep->out_port[6](s_axis_split_tkeep_out_6);
    mp_s_axis_split_tkeep->add_mask(6,56,48);
  
  mp_s_axis_split_tlast->out_port[6](s_axis_split_tlast_out_6);
    mp_s_axis_split_tlast->add_mask(6,7,6);
  
  mp_s_axis_split_tid->out_port[6](s_axis_split_tid_out_6);
    mp_s_axis_split_tid->add_mask(6,7,6);
  
  mp_s_axis_split_tdest->out_port[6](s_axis_split_tdest_out_6);
    mp_s_axis_split_tdest->add_mask(6,28,24);
  
  mp_s_axis_split_tuser->out_port[6](s_axis_split_tuser_out_6);
    mp_s_axis_split_tuser->add_mask(6,7,6);
  mp_m_axis_concat_tvalid->in_port[6](m_axis_concat_tvalid_out_6);
  mp_m_axis_concat_tvalid->offset_port(6, 6);
  
  mp_m_axis_split_tready->out_port[6](m_axis_split_tready_out_6);
    mp_m_axis_split_tready->add_mask(6,7,6);
  mp_m_axis_concat_tdata->in_port[6](m_axis_concat_tdata_out_6);
  mp_m_axis_concat_tdata->offset_port(6, 384);
  mp_m_axis_concat_tstrb->in_port[6](m_axis_concat_tstrb_out_6);
  mp_m_axis_concat_tstrb->offset_port(6, 48);
  mp_m_axis_concat_tkeep->in_port[6](m_axis_concat_tkeep_out_6);
  mp_m_axis_concat_tkeep->offset_port(6, 48);
  mp_m_axis_concat_tlast->in_port[6](m_axis_concat_tlast_out_6);
  mp_m_axis_concat_tlast->offset_port(6, 6);
  mp_m_axis_concat_tid->in_port[6](m_axis_concat_tid_out_6);
  mp_m_axis_concat_tid->offset_port(6, 6);
  mp_m_axis_concat_tdest->in_port[6](m_axis_concat_tdest_out_6);
  mp_m_axis_concat_tdest->offset_port(6, 24);
  mp_m_axis_concat_tuser->in_port[6](m_axis_concat_tuser_out_6);
  mp_m_axis_concat_tuser->offset_port(6, 6);
  
  mp_s_axis_split_tvalid->out_port[7](s_axis_split_tvalid_out_7);
    mp_s_axis_split_tvalid->add_mask(7,8,7);
  mp_s_axis_concat_tready->in_port[7](s_axis_concat_tready_out_7);
  mp_s_axis_concat_tready->offset_port(7, 7);
  
  mp_s_axis_split_tdata->out_port[7](s_axis_split_tdata_out_7);
    mp_s_axis_split_tdata->add_mask(7,512,448);
  
  mp_s_axis_split_tstrb->out_port[7](s_axis_split_tstrb_out_7);
    mp_s_axis_split_tstrb->add_mask(7,64,56);
  
  mp_s_axis_split_tkeep->out_port[7](s_axis_split_tkeep_out_7);
    mp_s_axis_split_tkeep->add_mask(7,64,56);
  
  mp_s_axis_split_tlast->out_port[7](s_axis_split_tlast_out_7);
    mp_s_axis_split_tlast->add_mask(7,8,7);
  
  mp_s_axis_split_tid->out_port[7](s_axis_split_tid_out_7);
    mp_s_axis_split_tid->add_mask(7,8,7);
  
  mp_s_axis_split_tdest->out_port[7](s_axis_split_tdest_out_7);
    mp_s_axis_split_tdest->add_mask(7,32,28);
  
  mp_s_axis_split_tuser->out_port[7](s_axis_split_tuser_out_7);
    mp_s_axis_split_tuser->add_mask(7,8,7);
  mp_m_axis_concat_tvalid->in_port[7](m_axis_concat_tvalid_out_7);
  mp_m_axis_concat_tvalid->offset_port(7, 7);
  
  mp_m_axis_split_tready->out_port[7](m_axis_split_tready_out_7);
    mp_m_axis_split_tready->add_mask(7,8,7);
  mp_m_axis_concat_tdata->in_port[7](m_axis_concat_tdata_out_7);
  mp_m_axis_concat_tdata->offset_port(7, 448);
  mp_m_axis_concat_tstrb->in_port[7](m_axis_concat_tstrb_out_7);
  mp_m_axis_concat_tstrb->offset_port(7, 56);
  mp_m_axis_concat_tkeep->in_port[7](m_axis_concat_tkeep_out_7);
  mp_m_axis_concat_tkeep->offset_port(7, 56);
  mp_m_axis_concat_tlast->in_port[7](m_axis_concat_tlast_out_7);
  mp_m_axis_concat_tlast->offset_port(7, 7);
  mp_m_axis_concat_tid->in_port[7](m_axis_concat_tid_out_7);
  mp_m_axis_concat_tid->offset_port(7, 7);
  mp_m_axis_concat_tdest->in_port[7](m_axis_concat_tdest_out_7);
  mp_m_axis_concat_tdest->offset_port(7, 28);
  mp_m_axis_concat_tuser->in_port[7](m_axis_concat_tuser_out_7);
  mp_m_axis_concat_tuser->offset_port(7, 7);
  
  mp_s_axis_split_tvalid->out_port[8](s_axis_split_tvalid_out_8);
    mp_s_axis_split_tvalid->add_mask(8,9,8);
  mp_s_axis_concat_tready->in_port[8](s_axis_concat_tready_out_8);
  mp_s_axis_concat_tready->offset_port(8, 8);
  
  mp_s_axis_split_tdata->out_port[8](s_axis_split_tdata_out_8);
    mp_s_axis_split_tdata->add_mask(8,576,512);
  
  mp_s_axis_split_tstrb->out_port[8](s_axis_split_tstrb_out_8);
    mp_s_axis_split_tstrb->add_mask(8,72,64);
  
  mp_s_axis_split_tkeep->out_port[8](s_axis_split_tkeep_out_8);
    mp_s_axis_split_tkeep->add_mask(8,72,64);
  
  mp_s_axis_split_tlast->out_port[8](s_axis_split_tlast_out_8);
    mp_s_axis_split_tlast->add_mask(8,9,8);
  
  mp_s_axis_split_tid->out_port[8](s_axis_split_tid_out_8);
    mp_s_axis_split_tid->add_mask(8,9,8);
  
  mp_s_axis_split_tdest->out_port[8](s_axis_split_tdest_out_8);
    mp_s_axis_split_tdest->add_mask(8,36,32);
  
  mp_s_axis_split_tuser->out_port[8](s_axis_split_tuser_out_8);
    mp_s_axis_split_tuser->add_mask(8,9,8);
  mp_m_axis_concat_tvalid->in_port[8](m_axis_concat_tvalid_out_8);
  mp_m_axis_concat_tvalid->offset_port(8, 8);
  
  mp_m_axis_split_tready->out_port[8](m_axis_split_tready_out_8);
    mp_m_axis_split_tready->add_mask(8,9,8);
  mp_m_axis_concat_tdata->in_port[8](m_axis_concat_tdata_out_8);
  mp_m_axis_concat_tdata->offset_port(8, 512);
  mp_m_axis_concat_tstrb->in_port[8](m_axis_concat_tstrb_out_8);
  mp_m_axis_concat_tstrb->offset_port(8, 64);
  mp_m_axis_concat_tkeep->in_port[8](m_axis_concat_tkeep_out_8);
  mp_m_axis_concat_tkeep->offset_port(8, 64);
  mp_m_axis_concat_tlast->in_port[8](m_axis_concat_tlast_out_8);
  mp_m_axis_concat_tlast->offset_port(8, 8);
  mp_m_axis_concat_tid->in_port[8](m_axis_concat_tid_out_8);
  mp_m_axis_concat_tid->offset_port(8, 8);
  mp_m_axis_concat_tdest->in_port[8](m_axis_concat_tdest_out_8);
  mp_m_axis_concat_tdest->offset_port(8, 32);
  mp_m_axis_concat_tuser->in_port[8](m_axis_concat_tuser_out_8);
  mp_m_axis_concat_tuser->offset_port(8, 8);
  
  mp_s_axis_split_tvalid->out_port[9](s_axis_split_tvalid_out_9);
    mp_s_axis_split_tvalid->add_mask(9,10,9);
  mp_s_axis_concat_tready->in_port[9](s_axis_concat_tready_out_9);
  mp_s_axis_concat_tready->offset_port(9, 9);
  
  mp_s_axis_split_tdata->out_port[9](s_axis_split_tdata_out_9);
    mp_s_axis_split_tdata->add_mask(9,640,576);
  
  mp_s_axis_split_tstrb->out_port[9](s_axis_split_tstrb_out_9);
    mp_s_axis_split_tstrb->add_mask(9,80,72);
  
  mp_s_axis_split_tkeep->out_port[9](s_axis_split_tkeep_out_9);
    mp_s_axis_split_tkeep->add_mask(9,80,72);
  
  mp_s_axis_split_tlast->out_port[9](s_axis_split_tlast_out_9);
    mp_s_axis_split_tlast->add_mask(9,10,9);
  
  mp_s_axis_split_tid->out_port[9](s_axis_split_tid_out_9);
    mp_s_axis_split_tid->add_mask(9,10,9);
  
  mp_s_axis_split_tdest->out_port[9](s_axis_split_tdest_out_9);
    mp_s_axis_split_tdest->add_mask(9,40,36);
  
  mp_s_axis_split_tuser->out_port[9](s_axis_split_tuser_out_9);
    mp_s_axis_split_tuser->add_mask(9,10,9);
  mp_m_axis_concat_tvalid->in_port[9](m_axis_concat_tvalid_out_9);
  mp_m_axis_concat_tvalid->offset_port(9, 9);
  
  mp_m_axis_split_tready->out_port[9](m_axis_split_tready_out_9);
    mp_m_axis_split_tready->add_mask(9,10,9);
  mp_m_axis_concat_tdata->in_port[9](m_axis_concat_tdata_out_9);
  mp_m_axis_concat_tdata->offset_port(9, 576);
  mp_m_axis_concat_tstrb->in_port[9](m_axis_concat_tstrb_out_9);
  mp_m_axis_concat_tstrb->offset_port(9, 72);
  mp_m_axis_concat_tkeep->in_port[9](m_axis_concat_tkeep_out_9);
  mp_m_axis_concat_tkeep->offset_port(9, 72);
  mp_m_axis_concat_tlast->in_port[9](m_axis_concat_tlast_out_9);
  mp_m_axis_concat_tlast->offset_port(9, 9);
  mp_m_axis_concat_tid->in_port[9](m_axis_concat_tid_out_9);
  mp_m_axis_concat_tid->offset_port(9, 9);
  mp_m_axis_concat_tdest->in_port[9](m_axis_concat_tdest_out_9);
  mp_m_axis_concat_tdest->offset_port(9, 36);
  mp_m_axis_concat_tuser->in_port[9](m_axis_concat_tuser_out_9);
  mp_m_axis_concat_tuser->offset_port(9, 9);

  // initialize socket stubs

}

void bd_d92b_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S00_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXIS' transactor parameters
    xsc::common_cpp::properties S00_AXIS_transactor_param_props;
    S00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S00_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S00_AXIS_transactor", S00_AXIS_transactor_param_props);

    // S00_AXIS' transactor ports

    mp_s_axis_tvalid_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_0");
    mp_s_axis_tvalid_converter_0->vector_in(s_axis_split_tvalid_out_0);
    mp_s_axis_tvalid_converter_0->scalar_out(m_s_axis_tvalid_converter_0_signal);
    mp_S00_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_0_signal);
    mp_s_axis_tready_converter_0 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_0");
    mp_s_axis_tready_converter_0->scalar_in(m_s_axis_tready_converter_0_signal);
    mp_s_axis_tready_converter_0->vector_out(s_axis_concat_tready_out_0);
    mp_S00_AXIS_transactor->TREADY(m_s_axis_tready_converter_0_signal);
    mp_s_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_0");
    mp_s_axis_tdata_converter_0->vector_in(s_axis_split_tdata_out_0);
    mp_s_axis_tdata_converter_0->vector_out(m_s_axis_tdata_converter_0_signal);
    mp_S00_AXIS_transactor->TDATA(m_s_axis_tdata_converter_0_signal);
    mp_s_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_0");
    mp_s_axis_tstrb_converter_0->vector_in(s_axis_split_tstrb_out_0);
    mp_s_axis_tstrb_converter_0->vector_out(m_s_axis_tstrb_converter_0_signal);
    mp_S00_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_0_signal);
    mp_s_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_0");
    mp_s_axis_tkeep_converter_0->vector_in(s_axis_split_tkeep_out_0);
    mp_s_axis_tkeep_converter_0->vector_out(m_s_axis_tkeep_converter_0_signal);
    mp_S00_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_0_signal);
    mp_s_axis_tlast_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_0");
    mp_s_axis_tlast_converter_0->vector_in(s_axis_split_tlast_out_0);
    mp_s_axis_tlast_converter_0->scalar_out(m_s_axis_tlast_converter_0_signal);
    mp_S00_AXIS_transactor->TLAST(m_s_axis_tlast_converter_0_signal);
    mp_s_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_0");
    mp_s_axis_tid_converter_0->vector_in(s_axis_split_tid_out_0);
    mp_s_axis_tid_converter_0->vector_out(m_s_axis_tid_converter_0_signal);
    mp_S00_AXIS_transactor->TID(m_s_axis_tid_converter_0_signal);
    mp_s_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_0");
    mp_s_axis_tdest_converter_0->vector_in(s_axis_split_tdest_out_0);
    mp_s_axis_tdest_converter_0->vector_out(m_s_axis_tdest_converter_0_signal);
    mp_S00_AXIS_transactor->TDEST(m_s_axis_tdest_converter_0_signal);
    mp_s_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_0");
    mp_s_axis_tuser_converter_0->vector_in(s_axis_split_tuser_out_0);
    mp_s_axis_tuser_converter_0->vector_out(m_s_axis_tuser_converter_0_signal);
    mp_S00_AXIS_transactor->TUSER(m_s_axis_tuser_converter_0_signal);
    mp_S00_AXIS_transactor->CLK(aclk);
    mp_S00_AXIS_transactor->RST(aresetn);

    // S00_AXIS' transactor sockets

    mp_impl->S00_AXIS_TARGET_SOCKET->bind(*(mp_S00_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M00_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M00_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXIS' transactor parameters
    xsc::common_cpp::properties M00_AXIS_transactor_param_props;
    M00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M00_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M00_AXIS_transactor", M00_AXIS_transactor_param_props);

    // M00_AXIS' transactor ports

    mp_m_axis_tvalid_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_0");
    mp_m_axis_tvalid_converter_0->scalar_in(m_m_axis_tvalid_converter_0_signal);
    mp_m_axis_tvalid_converter_0->vector_out(m_axis_concat_tvalid_out_0);
    mp_M00_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_0_signal);
    mp_m_axis_tready_converter_0 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_0");
    mp_m_axis_tready_converter_0->vector_in(m_axis_split_tready_out_0);
    mp_m_axis_tready_converter_0->scalar_out(m_m_axis_tready_converter_0_signal);
    mp_M00_AXIS_transactor->TREADY(m_m_axis_tready_converter_0_signal);
    mp_m_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_0");
    mp_m_axis_tdata_converter_0->vector_in(m_m_axis_tdata_converter_0_signal);
    mp_m_axis_tdata_converter_0->vector_out(m_axis_concat_tdata_out_0);
    mp_M00_AXIS_transactor->TDATA(m_m_axis_tdata_converter_0_signal);
    mp_m_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_0");
    mp_m_axis_tstrb_converter_0->vector_in(m_m_axis_tstrb_converter_0_signal);
    mp_m_axis_tstrb_converter_0->vector_out(m_axis_concat_tstrb_out_0);
    mp_M00_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_0_signal);
    mp_m_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_0");
    mp_m_axis_tkeep_converter_0->vector_in(m_m_axis_tkeep_converter_0_signal);
    mp_m_axis_tkeep_converter_0->vector_out(m_axis_concat_tkeep_out_0);
    mp_M00_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_0_signal);
    mp_m_axis_tlast_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_0");
    mp_m_axis_tlast_converter_0->scalar_in(m_m_axis_tlast_converter_0_signal);
    mp_m_axis_tlast_converter_0->vector_out(m_axis_concat_tlast_out_0);
    mp_M00_AXIS_transactor->TLAST(m_m_axis_tlast_converter_0_signal);
    mp_m_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_0");
    mp_m_axis_tid_converter_0->vector_in(m_m_axis_tid_converter_0_signal);
    mp_m_axis_tid_converter_0->vector_out(m_axis_concat_tid_out_0);
    mp_M00_AXIS_transactor->TID(m_m_axis_tid_converter_0_signal);
    mp_m_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_0");
    mp_m_axis_tdest_converter_0->vector_in(m_m_axis_tdest_converter_0_signal);
    mp_m_axis_tdest_converter_0->vector_out(m_axis_concat_tdest_out_0);
    mp_M00_AXIS_transactor->TDEST(m_m_axis_tdest_converter_0_signal);
    mp_m_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_0");
    mp_m_axis_tuser_converter_0->vector_in(m_m_axis_tuser_converter_0_signal);
    mp_m_axis_tuser_converter_0->vector_out(m_axis_concat_tuser_out_0);
    mp_M00_AXIS_transactor->TUSER(m_m_axis_tuser_converter_0_signal);
    mp_M00_AXIS_transactor->CLK(aclk);
    mp_M00_AXIS_transactor->RST(aresetn);

    // M00_AXIS' transactor sockets

    mp_impl->M00_AXIS_INITIATOR_SOCKET->bind(*(mp_M00_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S01_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S01_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S01_AXIS' transactor parameters
    xsc::common_cpp::properties S01_AXIS_transactor_param_props;
    S01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S01_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S01_AXIS_transactor", S01_AXIS_transactor_param_props);

    // S01_AXIS' transactor ports

    mp_s_axis_tvalid_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_1");
    mp_s_axis_tvalid_converter_1->vector_in(s_axis_split_tvalid_out_1);
    mp_s_axis_tvalid_converter_1->scalar_out(m_s_axis_tvalid_converter_1_signal);
    mp_S01_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_1_signal);
    mp_s_axis_tready_converter_1 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_1");
    mp_s_axis_tready_converter_1->scalar_in(m_s_axis_tready_converter_1_signal);
    mp_s_axis_tready_converter_1->vector_out(s_axis_concat_tready_out_1);
    mp_S01_AXIS_transactor->TREADY(m_s_axis_tready_converter_1_signal);
    mp_s_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_1");
    mp_s_axis_tdata_converter_1->vector_in(s_axis_split_tdata_out_1);
    mp_s_axis_tdata_converter_1->vector_out(m_s_axis_tdata_converter_1_signal);
    mp_S01_AXIS_transactor->TDATA(m_s_axis_tdata_converter_1_signal);
    mp_s_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_1");
    mp_s_axis_tstrb_converter_1->vector_in(s_axis_split_tstrb_out_1);
    mp_s_axis_tstrb_converter_1->vector_out(m_s_axis_tstrb_converter_1_signal);
    mp_S01_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_1_signal);
    mp_s_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_1");
    mp_s_axis_tkeep_converter_1->vector_in(s_axis_split_tkeep_out_1);
    mp_s_axis_tkeep_converter_1->vector_out(m_s_axis_tkeep_converter_1_signal);
    mp_S01_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_1_signal);
    mp_s_axis_tlast_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_1");
    mp_s_axis_tlast_converter_1->vector_in(s_axis_split_tlast_out_1);
    mp_s_axis_tlast_converter_1->scalar_out(m_s_axis_tlast_converter_1_signal);
    mp_S01_AXIS_transactor->TLAST(m_s_axis_tlast_converter_1_signal);
    mp_s_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_1");
    mp_s_axis_tid_converter_1->vector_in(s_axis_split_tid_out_1);
    mp_s_axis_tid_converter_1->vector_out(m_s_axis_tid_converter_1_signal);
    mp_S01_AXIS_transactor->TID(m_s_axis_tid_converter_1_signal);
    mp_s_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_1");
    mp_s_axis_tdest_converter_1->vector_in(s_axis_split_tdest_out_1);
    mp_s_axis_tdest_converter_1->vector_out(m_s_axis_tdest_converter_1_signal);
    mp_S01_AXIS_transactor->TDEST(m_s_axis_tdest_converter_1_signal);
    mp_s_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_1");
    mp_s_axis_tuser_converter_1->vector_in(s_axis_split_tuser_out_1);
    mp_s_axis_tuser_converter_1->vector_out(m_s_axis_tuser_converter_1_signal);
    mp_S01_AXIS_transactor->TUSER(m_s_axis_tuser_converter_1_signal);
    mp_S01_AXIS_transactor->CLK(aclk);
    mp_S01_AXIS_transactor->RST(aresetn);

    // S01_AXIS' transactor sockets

    mp_impl->S01_AXIS_TARGET_SOCKET->bind(*(mp_S01_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M01_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M01_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXIS' transactor parameters
    xsc::common_cpp::properties M01_AXIS_transactor_param_props;
    M01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M01_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M01_AXIS_transactor", M01_AXIS_transactor_param_props);

    // M01_AXIS' transactor ports

    mp_m_axis_tvalid_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_1");
    mp_m_axis_tvalid_converter_1->scalar_in(m_m_axis_tvalid_converter_1_signal);
    mp_m_axis_tvalid_converter_1->vector_out(m_axis_concat_tvalid_out_1);
    mp_M01_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_1_signal);
    mp_m_axis_tready_converter_1 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_1");
    mp_m_axis_tready_converter_1->vector_in(m_axis_split_tready_out_1);
    mp_m_axis_tready_converter_1->scalar_out(m_m_axis_tready_converter_1_signal);
    mp_M01_AXIS_transactor->TREADY(m_m_axis_tready_converter_1_signal);
    mp_m_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_1");
    mp_m_axis_tdata_converter_1->vector_in(m_m_axis_tdata_converter_1_signal);
    mp_m_axis_tdata_converter_1->vector_out(m_axis_concat_tdata_out_1);
    mp_M01_AXIS_transactor->TDATA(m_m_axis_tdata_converter_1_signal);
    mp_m_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_1");
    mp_m_axis_tstrb_converter_1->vector_in(m_m_axis_tstrb_converter_1_signal);
    mp_m_axis_tstrb_converter_1->vector_out(m_axis_concat_tstrb_out_1);
    mp_M01_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_1_signal);
    mp_m_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_1");
    mp_m_axis_tkeep_converter_1->vector_in(m_m_axis_tkeep_converter_1_signal);
    mp_m_axis_tkeep_converter_1->vector_out(m_axis_concat_tkeep_out_1);
    mp_M01_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_1_signal);
    mp_m_axis_tlast_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_1");
    mp_m_axis_tlast_converter_1->scalar_in(m_m_axis_tlast_converter_1_signal);
    mp_m_axis_tlast_converter_1->vector_out(m_axis_concat_tlast_out_1);
    mp_M01_AXIS_transactor->TLAST(m_m_axis_tlast_converter_1_signal);
    mp_m_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_1");
    mp_m_axis_tid_converter_1->vector_in(m_m_axis_tid_converter_1_signal);
    mp_m_axis_tid_converter_1->vector_out(m_axis_concat_tid_out_1);
    mp_M01_AXIS_transactor->TID(m_m_axis_tid_converter_1_signal);
    mp_m_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_1");
    mp_m_axis_tdest_converter_1->vector_in(m_m_axis_tdest_converter_1_signal);
    mp_m_axis_tdest_converter_1->vector_out(m_axis_concat_tdest_out_1);
    mp_M01_AXIS_transactor->TDEST(m_m_axis_tdest_converter_1_signal);
    mp_m_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_1");
    mp_m_axis_tuser_converter_1->vector_in(m_m_axis_tuser_converter_1_signal);
    mp_m_axis_tuser_converter_1->vector_out(m_axis_concat_tuser_out_1);
    mp_M01_AXIS_transactor->TUSER(m_m_axis_tuser_converter_1_signal);
    mp_M01_AXIS_transactor->CLK(aclk);
    mp_M01_AXIS_transactor->RST(aresetn);

    // M01_AXIS' transactor sockets

    mp_impl->M01_AXIS_INITIATOR_SOCKET->bind(*(mp_M01_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S02_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S02_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S02_AXIS' transactor parameters
    xsc::common_cpp::properties S02_AXIS_transactor_param_props;
    S02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S02_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S02_AXIS_transactor", S02_AXIS_transactor_param_props);

    // S02_AXIS' transactor ports

    mp_s_axis_tvalid_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_2");
    mp_s_axis_tvalid_converter_2->vector_in(s_axis_split_tvalid_out_2);
    mp_s_axis_tvalid_converter_2->scalar_out(m_s_axis_tvalid_converter_2_signal);
    mp_S02_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_2_signal);
    mp_s_axis_tready_converter_2 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_2");
    mp_s_axis_tready_converter_2->scalar_in(m_s_axis_tready_converter_2_signal);
    mp_s_axis_tready_converter_2->vector_out(s_axis_concat_tready_out_2);
    mp_S02_AXIS_transactor->TREADY(m_s_axis_tready_converter_2_signal);
    mp_s_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_2");
    mp_s_axis_tdata_converter_2->vector_in(s_axis_split_tdata_out_2);
    mp_s_axis_tdata_converter_2->vector_out(m_s_axis_tdata_converter_2_signal);
    mp_S02_AXIS_transactor->TDATA(m_s_axis_tdata_converter_2_signal);
    mp_s_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_2");
    mp_s_axis_tstrb_converter_2->vector_in(s_axis_split_tstrb_out_2);
    mp_s_axis_tstrb_converter_2->vector_out(m_s_axis_tstrb_converter_2_signal);
    mp_S02_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_2_signal);
    mp_s_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_2");
    mp_s_axis_tkeep_converter_2->vector_in(s_axis_split_tkeep_out_2);
    mp_s_axis_tkeep_converter_2->vector_out(m_s_axis_tkeep_converter_2_signal);
    mp_S02_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_2_signal);
    mp_s_axis_tlast_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_2");
    mp_s_axis_tlast_converter_2->vector_in(s_axis_split_tlast_out_2);
    mp_s_axis_tlast_converter_2->scalar_out(m_s_axis_tlast_converter_2_signal);
    mp_S02_AXIS_transactor->TLAST(m_s_axis_tlast_converter_2_signal);
    mp_s_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_2");
    mp_s_axis_tid_converter_2->vector_in(s_axis_split_tid_out_2);
    mp_s_axis_tid_converter_2->vector_out(m_s_axis_tid_converter_2_signal);
    mp_S02_AXIS_transactor->TID(m_s_axis_tid_converter_2_signal);
    mp_s_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_2");
    mp_s_axis_tdest_converter_2->vector_in(s_axis_split_tdest_out_2);
    mp_s_axis_tdest_converter_2->vector_out(m_s_axis_tdest_converter_2_signal);
    mp_S02_AXIS_transactor->TDEST(m_s_axis_tdest_converter_2_signal);
    mp_s_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_2");
    mp_s_axis_tuser_converter_2->vector_in(s_axis_split_tuser_out_2);
    mp_s_axis_tuser_converter_2->vector_out(m_s_axis_tuser_converter_2_signal);
    mp_S02_AXIS_transactor->TUSER(m_s_axis_tuser_converter_2_signal);
    mp_S02_AXIS_transactor->CLK(aclk);
    mp_S02_AXIS_transactor->RST(aresetn);

    // S02_AXIS' transactor sockets

    mp_impl->S02_AXIS_TARGET_SOCKET->bind(*(mp_S02_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M02_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M02_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXIS' transactor parameters
    xsc::common_cpp::properties M02_AXIS_transactor_param_props;
    M02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M02_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M02_AXIS_transactor", M02_AXIS_transactor_param_props);

    // M02_AXIS' transactor ports

    mp_m_axis_tvalid_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_2");
    mp_m_axis_tvalid_converter_2->scalar_in(m_m_axis_tvalid_converter_2_signal);
    mp_m_axis_tvalid_converter_2->vector_out(m_axis_concat_tvalid_out_2);
    mp_M02_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_2_signal);
    mp_m_axis_tready_converter_2 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_2");
    mp_m_axis_tready_converter_2->vector_in(m_axis_split_tready_out_2);
    mp_m_axis_tready_converter_2->scalar_out(m_m_axis_tready_converter_2_signal);
    mp_M02_AXIS_transactor->TREADY(m_m_axis_tready_converter_2_signal);
    mp_m_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_2");
    mp_m_axis_tdata_converter_2->vector_in(m_m_axis_tdata_converter_2_signal);
    mp_m_axis_tdata_converter_2->vector_out(m_axis_concat_tdata_out_2);
    mp_M02_AXIS_transactor->TDATA(m_m_axis_tdata_converter_2_signal);
    mp_m_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_2");
    mp_m_axis_tstrb_converter_2->vector_in(m_m_axis_tstrb_converter_2_signal);
    mp_m_axis_tstrb_converter_2->vector_out(m_axis_concat_tstrb_out_2);
    mp_M02_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_2_signal);
    mp_m_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_2");
    mp_m_axis_tkeep_converter_2->vector_in(m_m_axis_tkeep_converter_2_signal);
    mp_m_axis_tkeep_converter_2->vector_out(m_axis_concat_tkeep_out_2);
    mp_M02_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_2_signal);
    mp_m_axis_tlast_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_2");
    mp_m_axis_tlast_converter_2->scalar_in(m_m_axis_tlast_converter_2_signal);
    mp_m_axis_tlast_converter_2->vector_out(m_axis_concat_tlast_out_2);
    mp_M02_AXIS_transactor->TLAST(m_m_axis_tlast_converter_2_signal);
    mp_m_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_2");
    mp_m_axis_tid_converter_2->vector_in(m_m_axis_tid_converter_2_signal);
    mp_m_axis_tid_converter_2->vector_out(m_axis_concat_tid_out_2);
    mp_M02_AXIS_transactor->TID(m_m_axis_tid_converter_2_signal);
    mp_m_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_2");
    mp_m_axis_tdest_converter_2->vector_in(m_m_axis_tdest_converter_2_signal);
    mp_m_axis_tdest_converter_2->vector_out(m_axis_concat_tdest_out_2);
    mp_M02_AXIS_transactor->TDEST(m_m_axis_tdest_converter_2_signal);
    mp_m_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_2");
    mp_m_axis_tuser_converter_2->vector_in(m_m_axis_tuser_converter_2_signal);
    mp_m_axis_tuser_converter_2->vector_out(m_axis_concat_tuser_out_2);
    mp_M02_AXIS_transactor->TUSER(m_m_axis_tuser_converter_2_signal);
    mp_M02_AXIS_transactor->CLK(aclk);
    mp_M02_AXIS_transactor->RST(aresetn);

    // M02_AXIS' transactor sockets

    mp_impl->M02_AXIS_INITIATOR_SOCKET->bind(*(mp_M02_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S03_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S03_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S03_AXIS' transactor parameters
    xsc::common_cpp::properties S03_AXIS_transactor_param_props;
    S03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S03_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S03_AXIS_transactor", S03_AXIS_transactor_param_props);

    // S03_AXIS' transactor ports

    mp_s_axis_tvalid_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_3");
    mp_s_axis_tvalid_converter_3->vector_in(s_axis_split_tvalid_out_3);
    mp_s_axis_tvalid_converter_3->scalar_out(m_s_axis_tvalid_converter_3_signal);
    mp_S03_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_3_signal);
    mp_s_axis_tready_converter_3 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_3");
    mp_s_axis_tready_converter_3->scalar_in(m_s_axis_tready_converter_3_signal);
    mp_s_axis_tready_converter_3->vector_out(s_axis_concat_tready_out_3);
    mp_S03_AXIS_transactor->TREADY(m_s_axis_tready_converter_3_signal);
    mp_s_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_3");
    mp_s_axis_tdata_converter_3->vector_in(s_axis_split_tdata_out_3);
    mp_s_axis_tdata_converter_3->vector_out(m_s_axis_tdata_converter_3_signal);
    mp_S03_AXIS_transactor->TDATA(m_s_axis_tdata_converter_3_signal);
    mp_s_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_3");
    mp_s_axis_tstrb_converter_3->vector_in(s_axis_split_tstrb_out_3);
    mp_s_axis_tstrb_converter_3->vector_out(m_s_axis_tstrb_converter_3_signal);
    mp_S03_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_3_signal);
    mp_s_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_3");
    mp_s_axis_tkeep_converter_3->vector_in(s_axis_split_tkeep_out_3);
    mp_s_axis_tkeep_converter_3->vector_out(m_s_axis_tkeep_converter_3_signal);
    mp_S03_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_3_signal);
    mp_s_axis_tlast_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_3");
    mp_s_axis_tlast_converter_3->vector_in(s_axis_split_tlast_out_3);
    mp_s_axis_tlast_converter_3->scalar_out(m_s_axis_tlast_converter_3_signal);
    mp_S03_AXIS_transactor->TLAST(m_s_axis_tlast_converter_3_signal);
    mp_s_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_3");
    mp_s_axis_tid_converter_3->vector_in(s_axis_split_tid_out_3);
    mp_s_axis_tid_converter_3->vector_out(m_s_axis_tid_converter_3_signal);
    mp_S03_AXIS_transactor->TID(m_s_axis_tid_converter_3_signal);
    mp_s_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_3");
    mp_s_axis_tdest_converter_3->vector_in(s_axis_split_tdest_out_3);
    mp_s_axis_tdest_converter_3->vector_out(m_s_axis_tdest_converter_3_signal);
    mp_S03_AXIS_transactor->TDEST(m_s_axis_tdest_converter_3_signal);
    mp_s_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_3");
    mp_s_axis_tuser_converter_3->vector_in(s_axis_split_tuser_out_3);
    mp_s_axis_tuser_converter_3->vector_out(m_s_axis_tuser_converter_3_signal);
    mp_S03_AXIS_transactor->TUSER(m_s_axis_tuser_converter_3_signal);
    mp_S03_AXIS_transactor->CLK(aclk);
    mp_S03_AXIS_transactor->RST(aresetn);

    // S03_AXIS' transactor sockets

    mp_impl->S03_AXIS_TARGET_SOCKET->bind(*(mp_S03_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M03_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M03_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXIS' transactor parameters
    xsc::common_cpp::properties M03_AXIS_transactor_param_props;
    M03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M03_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M03_AXIS_transactor", M03_AXIS_transactor_param_props);

    // M03_AXIS' transactor ports

    mp_m_axis_tvalid_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_3");
    mp_m_axis_tvalid_converter_3->scalar_in(m_m_axis_tvalid_converter_3_signal);
    mp_m_axis_tvalid_converter_3->vector_out(m_axis_concat_tvalid_out_3);
    mp_M03_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_3_signal);
    mp_m_axis_tready_converter_3 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_3");
    mp_m_axis_tready_converter_3->vector_in(m_axis_split_tready_out_3);
    mp_m_axis_tready_converter_3->scalar_out(m_m_axis_tready_converter_3_signal);
    mp_M03_AXIS_transactor->TREADY(m_m_axis_tready_converter_3_signal);
    mp_m_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_3");
    mp_m_axis_tdata_converter_3->vector_in(m_m_axis_tdata_converter_3_signal);
    mp_m_axis_tdata_converter_3->vector_out(m_axis_concat_tdata_out_3);
    mp_M03_AXIS_transactor->TDATA(m_m_axis_tdata_converter_3_signal);
    mp_m_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_3");
    mp_m_axis_tstrb_converter_3->vector_in(m_m_axis_tstrb_converter_3_signal);
    mp_m_axis_tstrb_converter_3->vector_out(m_axis_concat_tstrb_out_3);
    mp_M03_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_3_signal);
    mp_m_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_3");
    mp_m_axis_tkeep_converter_3->vector_in(m_m_axis_tkeep_converter_3_signal);
    mp_m_axis_tkeep_converter_3->vector_out(m_axis_concat_tkeep_out_3);
    mp_M03_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_3_signal);
    mp_m_axis_tlast_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_3");
    mp_m_axis_tlast_converter_3->scalar_in(m_m_axis_tlast_converter_3_signal);
    mp_m_axis_tlast_converter_3->vector_out(m_axis_concat_tlast_out_3);
    mp_M03_AXIS_transactor->TLAST(m_m_axis_tlast_converter_3_signal);
    mp_m_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_3");
    mp_m_axis_tid_converter_3->vector_in(m_m_axis_tid_converter_3_signal);
    mp_m_axis_tid_converter_3->vector_out(m_axis_concat_tid_out_3);
    mp_M03_AXIS_transactor->TID(m_m_axis_tid_converter_3_signal);
    mp_m_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_3");
    mp_m_axis_tdest_converter_3->vector_in(m_m_axis_tdest_converter_3_signal);
    mp_m_axis_tdest_converter_3->vector_out(m_axis_concat_tdest_out_3);
    mp_M03_AXIS_transactor->TDEST(m_m_axis_tdest_converter_3_signal);
    mp_m_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_3");
    mp_m_axis_tuser_converter_3->vector_in(m_m_axis_tuser_converter_3_signal);
    mp_m_axis_tuser_converter_3->vector_out(m_axis_concat_tuser_out_3);
    mp_M03_AXIS_transactor->TUSER(m_m_axis_tuser_converter_3_signal);
    mp_M03_AXIS_transactor->CLK(aclk);
    mp_M03_AXIS_transactor->RST(aresetn);

    // M03_AXIS' transactor sockets

    mp_impl->M03_AXIS_INITIATOR_SOCKET->bind(*(mp_M03_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S04_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S04_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S04_AXIS' transactor parameters
    xsc::common_cpp::properties S04_AXIS_transactor_param_props;
    S04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S04_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S04_AXIS_transactor", S04_AXIS_transactor_param_props);

    // S04_AXIS' transactor ports

    mp_s_axis_tvalid_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_4");
    mp_s_axis_tvalid_converter_4->vector_in(s_axis_split_tvalid_out_4);
    mp_s_axis_tvalid_converter_4->scalar_out(m_s_axis_tvalid_converter_4_signal);
    mp_S04_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_4_signal);
    mp_s_axis_tready_converter_4 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_4");
    mp_s_axis_tready_converter_4->scalar_in(m_s_axis_tready_converter_4_signal);
    mp_s_axis_tready_converter_4->vector_out(s_axis_concat_tready_out_4);
    mp_S04_AXIS_transactor->TREADY(m_s_axis_tready_converter_4_signal);
    mp_s_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_4");
    mp_s_axis_tdata_converter_4->vector_in(s_axis_split_tdata_out_4);
    mp_s_axis_tdata_converter_4->vector_out(m_s_axis_tdata_converter_4_signal);
    mp_S04_AXIS_transactor->TDATA(m_s_axis_tdata_converter_4_signal);
    mp_s_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_4");
    mp_s_axis_tstrb_converter_4->vector_in(s_axis_split_tstrb_out_4);
    mp_s_axis_tstrb_converter_4->vector_out(m_s_axis_tstrb_converter_4_signal);
    mp_S04_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_4_signal);
    mp_s_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_4");
    mp_s_axis_tkeep_converter_4->vector_in(s_axis_split_tkeep_out_4);
    mp_s_axis_tkeep_converter_4->vector_out(m_s_axis_tkeep_converter_4_signal);
    mp_S04_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_4_signal);
    mp_s_axis_tlast_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_4");
    mp_s_axis_tlast_converter_4->vector_in(s_axis_split_tlast_out_4);
    mp_s_axis_tlast_converter_4->scalar_out(m_s_axis_tlast_converter_4_signal);
    mp_S04_AXIS_transactor->TLAST(m_s_axis_tlast_converter_4_signal);
    mp_s_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_4");
    mp_s_axis_tid_converter_4->vector_in(s_axis_split_tid_out_4);
    mp_s_axis_tid_converter_4->vector_out(m_s_axis_tid_converter_4_signal);
    mp_S04_AXIS_transactor->TID(m_s_axis_tid_converter_4_signal);
    mp_s_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_4");
    mp_s_axis_tdest_converter_4->vector_in(s_axis_split_tdest_out_4);
    mp_s_axis_tdest_converter_4->vector_out(m_s_axis_tdest_converter_4_signal);
    mp_S04_AXIS_transactor->TDEST(m_s_axis_tdest_converter_4_signal);
    mp_s_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_4");
    mp_s_axis_tuser_converter_4->vector_in(s_axis_split_tuser_out_4);
    mp_s_axis_tuser_converter_4->vector_out(m_s_axis_tuser_converter_4_signal);
    mp_S04_AXIS_transactor->TUSER(m_s_axis_tuser_converter_4_signal);
    mp_S04_AXIS_transactor->CLK(aclk);
    mp_S04_AXIS_transactor->RST(aresetn);

    // S04_AXIS' transactor sockets

    mp_impl->S04_AXIS_TARGET_SOCKET->bind(*(mp_S04_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M04_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M04_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXIS' transactor parameters
    xsc::common_cpp::properties M04_AXIS_transactor_param_props;
    M04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M04_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M04_AXIS_transactor", M04_AXIS_transactor_param_props);

    // M04_AXIS' transactor ports

    mp_m_axis_tvalid_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_4");
    mp_m_axis_tvalid_converter_4->scalar_in(m_m_axis_tvalid_converter_4_signal);
    mp_m_axis_tvalid_converter_4->vector_out(m_axis_concat_tvalid_out_4);
    mp_M04_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_4_signal);
    mp_m_axis_tready_converter_4 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_4");
    mp_m_axis_tready_converter_4->vector_in(m_axis_split_tready_out_4);
    mp_m_axis_tready_converter_4->scalar_out(m_m_axis_tready_converter_4_signal);
    mp_M04_AXIS_transactor->TREADY(m_m_axis_tready_converter_4_signal);
    mp_m_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_4");
    mp_m_axis_tdata_converter_4->vector_in(m_m_axis_tdata_converter_4_signal);
    mp_m_axis_tdata_converter_4->vector_out(m_axis_concat_tdata_out_4);
    mp_M04_AXIS_transactor->TDATA(m_m_axis_tdata_converter_4_signal);
    mp_m_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_4");
    mp_m_axis_tstrb_converter_4->vector_in(m_m_axis_tstrb_converter_4_signal);
    mp_m_axis_tstrb_converter_4->vector_out(m_axis_concat_tstrb_out_4);
    mp_M04_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_4_signal);
    mp_m_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_4");
    mp_m_axis_tkeep_converter_4->vector_in(m_m_axis_tkeep_converter_4_signal);
    mp_m_axis_tkeep_converter_4->vector_out(m_axis_concat_tkeep_out_4);
    mp_M04_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_4_signal);
    mp_m_axis_tlast_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_4");
    mp_m_axis_tlast_converter_4->scalar_in(m_m_axis_tlast_converter_4_signal);
    mp_m_axis_tlast_converter_4->vector_out(m_axis_concat_tlast_out_4);
    mp_M04_AXIS_transactor->TLAST(m_m_axis_tlast_converter_4_signal);
    mp_m_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_4");
    mp_m_axis_tid_converter_4->vector_in(m_m_axis_tid_converter_4_signal);
    mp_m_axis_tid_converter_4->vector_out(m_axis_concat_tid_out_4);
    mp_M04_AXIS_transactor->TID(m_m_axis_tid_converter_4_signal);
    mp_m_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_4");
    mp_m_axis_tdest_converter_4->vector_in(m_m_axis_tdest_converter_4_signal);
    mp_m_axis_tdest_converter_4->vector_out(m_axis_concat_tdest_out_4);
    mp_M04_AXIS_transactor->TDEST(m_m_axis_tdest_converter_4_signal);
    mp_m_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_4");
    mp_m_axis_tuser_converter_4->vector_in(m_m_axis_tuser_converter_4_signal);
    mp_m_axis_tuser_converter_4->vector_out(m_axis_concat_tuser_out_4);
    mp_M04_AXIS_transactor->TUSER(m_m_axis_tuser_converter_4_signal);
    mp_M04_AXIS_transactor->CLK(aclk);
    mp_M04_AXIS_transactor->RST(aresetn);

    // M04_AXIS' transactor sockets

    mp_impl->M04_AXIS_INITIATOR_SOCKET->bind(*(mp_M04_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S05_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S05_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S05_AXIS' transactor parameters
    xsc::common_cpp::properties S05_AXIS_transactor_param_props;
    S05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S05_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S05_AXIS_transactor", S05_AXIS_transactor_param_props);

    // S05_AXIS' transactor ports

    mp_s_axis_tvalid_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_5");
    mp_s_axis_tvalid_converter_5->vector_in(s_axis_split_tvalid_out_5);
    mp_s_axis_tvalid_converter_5->scalar_out(m_s_axis_tvalid_converter_5_signal);
    mp_S05_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_5_signal);
    mp_s_axis_tready_converter_5 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_5");
    mp_s_axis_tready_converter_5->scalar_in(m_s_axis_tready_converter_5_signal);
    mp_s_axis_tready_converter_5->vector_out(s_axis_concat_tready_out_5);
    mp_S05_AXIS_transactor->TREADY(m_s_axis_tready_converter_5_signal);
    mp_s_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_5");
    mp_s_axis_tdata_converter_5->vector_in(s_axis_split_tdata_out_5);
    mp_s_axis_tdata_converter_5->vector_out(m_s_axis_tdata_converter_5_signal);
    mp_S05_AXIS_transactor->TDATA(m_s_axis_tdata_converter_5_signal);
    mp_s_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_5");
    mp_s_axis_tstrb_converter_5->vector_in(s_axis_split_tstrb_out_5);
    mp_s_axis_tstrb_converter_5->vector_out(m_s_axis_tstrb_converter_5_signal);
    mp_S05_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_5_signal);
    mp_s_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_5");
    mp_s_axis_tkeep_converter_5->vector_in(s_axis_split_tkeep_out_5);
    mp_s_axis_tkeep_converter_5->vector_out(m_s_axis_tkeep_converter_5_signal);
    mp_S05_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_5_signal);
    mp_s_axis_tlast_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_5");
    mp_s_axis_tlast_converter_5->vector_in(s_axis_split_tlast_out_5);
    mp_s_axis_tlast_converter_5->scalar_out(m_s_axis_tlast_converter_5_signal);
    mp_S05_AXIS_transactor->TLAST(m_s_axis_tlast_converter_5_signal);
    mp_s_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_5");
    mp_s_axis_tid_converter_5->vector_in(s_axis_split_tid_out_5);
    mp_s_axis_tid_converter_5->vector_out(m_s_axis_tid_converter_5_signal);
    mp_S05_AXIS_transactor->TID(m_s_axis_tid_converter_5_signal);
    mp_s_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_5");
    mp_s_axis_tdest_converter_5->vector_in(s_axis_split_tdest_out_5);
    mp_s_axis_tdest_converter_5->vector_out(m_s_axis_tdest_converter_5_signal);
    mp_S05_AXIS_transactor->TDEST(m_s_axis_tdest_converter_5_signal);
    mp_s_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_5");
    mp_s_axis_tuser_converter_5->vector_in(s_axis_split_tuser_out_5);
    mp_s_axis_tuser_converter_5->vector_out(m_s_axis_tuser_converter_5_signal);
    mp_S05_AXIS_transactor->TUSER(m_s_axis_tuser_converter_5_signal);
    mp_S05_AXIS_transactor->CLK(aclk);
    mp_S05_AXIS_transactor->RST(aresetn);

    // S05_AXIS' transactor sockets

    mp_impl->S05_AXIS_TARGET_SOCKET->bind(*(mp_S05_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M05_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M05_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXIS' transactor parameters
    xsc::common_cpp::properties M05_AXIS_transactor_param_props;
    M05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M05_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M05_AXIS_transactor", M05_AXIS_transactor_param_props);

    // M05_AXIS' transactor ports

    mp_m_axis_tvalid_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_5");
    mp_m_axis_tvalid_converter_5->scalar_in(m_m_axis_tvalid_converter_5_signal);
    mp_m_axis_tvalid_converter_5->vector_out(m_axis_concat_tvalid_out_5);
    mp_M05_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_5_signal);
    mp_m_axis_tready_converter_5 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_5");
    mp_m_axis_tready_converter_5->vector_in(m_axis_split_tready_out_5);
    mp_m_axis_tready_converter_5->scalar_out(m_m_axis_tready_converter_5_signal);
    mp_M05_AXIS_transactor->TREADY(m_m_axis_tready_converter_5_signal);
    mp_m_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_5");
    mp_m_axis_tdata_converter_5->vector_in(m_m_axis_tdata_converter_5_signal);
    mp_m_axis_tdata_converter_5->vector_out(m_axis_concat_tdata_out_5);
    mp_M05_AXIS_transactor->TDATA(m_m_axis_tdata_converter_5_signal);
    mp_m_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_5");
    mp_m_axis_tstrb_converter_5->vector_in(m_m_axis_tstrb_converter_5_signal);
    mp_m_axis_tstrb_converter_5->vector_out(m_axis_concat_tstrb_out_5);
    mp_M05_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_5_signal);
    mp_m_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_5");
    mp_m_axis_tkeep_converter_5->vector_in(m_m_axis_tkeep_converter_5_signal);
    mp_m_axis_tkeep_converter_5->vector_out(m_axis_concat_tkeep_out_5);
    mp_M05_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_5_signal);
    mp_m_axis_tlast_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_5");
    mp_m_axis_tlast_converter_5->scalar_in(m_m_axis_tlast_converter_5_signal);
    mp_m_axis_tlast_converter_5->vector_out(m_axis_concat_tlast_out_5);
    mp_M05_AXIS_transactor->TLAST(m_m_axis_tlast_converter_5_signal);
    mp_m_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_5");
    mp_m_axis_tid_converter_5->vector_in(m_m_axis_tid_converter_5_signal);
    mp_m_axis_tid_converter_5->vector_out(m_axis_concat_tid_out_5);
    mp_M05_AXIS_transactor->TID(m_m_axis_tid_converter_5_signal);
    mp_m_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_5");
    mp_m_axis_tdest_converter_5->vector_in(m_m_axis_tdest_converter_5_signal);
    mp_m_axis_tdest_converter_5->vector_out(m_axis_concat_tdest_out_5);
    mp_M05_AXIS_transactor->TDEST(m_m_axis_tdest_converter_5_signal);
    mp_m_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_5");
    mp_m_axis_tuser_converter_5->vector_in(m_m_axis_tuser_converter_5_signal);
    mp_m_axis_tuser_converter_5->vector_out(m_axis_concat_tuser_out_5);
    mp_M05_AXIS_transactor->TUSER(m_m_axis_tuser_converter_5_signal);
    mp_M05_AXIS_transactor->CLK(aclk);
    mp_M05_AXIS_transactor->RST(aresetn);

    // M05_AXIS' transactor sockets

    mp_impl->M05_AXIS_INITIATOR_SOCKET->bind(*(mp_M05_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S06_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S06_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S06_AXIS' transactor parameters
    xsc::common_cpp::properties S06_AXIS_transactor_param_props;
    S06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S06_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S06_AXIS_transactor", S06_AXIS_transactor_param_props);

    // S06_AXIS' transactor ports

    mp_s_axis_tvalid_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_6");
    mp_s_axis_tvalid_converter_6->vector_in(s_axis_split_tvalid_out_6);
    mp_s_axis_tvalid_converter_6->scalar_out(m_s_axis_tvalid_converter_6_signal);
    mp_S06_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_6_signal);
    mp_s_axis_tready_converter_6 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_6");
    mp_s_axis_tready_converter_6->scalar_in(m_s_axis_tready_converter_6_signal);
    mp_s_axis_tready_converter_6->vector_out(s_axis_concat_tready_out_6);
    mp_S06_AXIS_transactor->TREADY(m_s_axis_tready_converter_6_signal);
    mp_s_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_6");
    mp_s_axis_tdata_converter_6->vector_in(s_axis_split_tdata_out_6);
    mp_s_axis_tdata_converter_6->vector_out(m_s_axis_tdata_converter_6_signal);
    mp_S06_AXIS_transactor->TDATA(m_s_axis_tdata_converter_6_signal);
    mp_s_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_6");
    mp_s_axis_tstrb_converter_6->vector_in(s_axis_split_tstrb_out_6);
    mp_s_axis_tstrb_converter_6->vector_out(m_s_axis_tstrb_converter_6_signal);
    mp_S06_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_6_signal);
    mp_s_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_6");
    mp_s_axis_tkeep_converter_6->vector_in(s_axis_split_tkeep_out_6);
    mp_s_axis_tkeep_converter_6->vector_out(m_s_axis_tkeep_converter_6_signal);
    mp_S06_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_6_signal);
    mp_s_axis_tlast_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_6");
    mp_s_axis_tlast_converter_6->vector_in(s_axis_split_tlast_out_6);
    mp_s_axis_tlast_converter_6->scalar_out(m_s_axis_tlast_converter_6_signal);
    mp_S06_AXIS_transactor->TLAST(m_s_axis_tlast_converter_6_signal);
    mp_s_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_6");
    mp_s_axis_tid_converter_6->vector_in(s_axis_split_tid_out_6);
    mp_s_axis_tid_converter_6->vector_out(m_s_axis_tid_converter_6_signal);
    mp_S06_AXIS_transactor->TID(m_s_axis_tid_converter_6_signal);
    mp_s_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_6");
    mp_s_axis_tdest_converter_6->vector_in(s_axis_split_tdest_out_6);
    mp_s_axis_tdest_converter_6->vector_out(m_s_axis_tdest_converter_6_signal);
    mp_S06_AXIS_transactor->TDEST(m_s_axis_tdest_converter_6_signal);
    mp_s_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_6");
    mp_s_axis_tuser_converter_6->vector_in(s_axis_split_tuser_out_6);
    mp_s_axis_tuser_converter_6->vector_out(m_s_axis_tuser_converter_6_signal);
    mp_S06_AXIS_transactor->TUSER(m_s_axis_tuser_converter_6_signal);
    mp_S06_AXIS_transactor->CLK(aclk);
    mp_S06_AXIS_transactor->RST(aresetn);

    // S06_AXIS' transactor sockets

    mp_impl->S06_AXIS_TARGET_SOCKET->bind(*(mp_S06_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M06_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M06_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXIS' transactor parameters
    xsc::common_cpp::properties M06_AXIS_transactor_param_props;
    M06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M06_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M06_AXIS_transactor", M06_AXIS_transactor_param_props);

    // M06_AXIS' transactor ports

    mp_m_axis_tvalid_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_6");
    mp_m_axis_tvalid_converter_6->scalar_in(m_m_axis_tvalid_converter_6_signal);
    mp_m_axis_tvalid_converter_6->vector_out(m_axis_concat_tvalid_out_6);
    mp_M06_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_6_signal);
    mp_m_axis_tready_converter_6 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_6");
    mp_m_axis_tready_converter_6->vector_in(m_axis_split_tready_out_6);
    mp_m_axis_tready_converter_6->scalar_out(m_m_axis_tready_converter_6_signal);
    mp_M06_AXIS_transactor->TREADY(m_m_axis_tready_converter_6_signal);
    mp_m_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_6");
    mp_m_axis_tdata_converter_6->vector_in(m_m_axis_tdata_converter_6_signal);
    mp_m_axis_tdata_converter_6->vector_out(m_axis_concat_tdata_out_6);
    mp_M06_AXIS_transactor->TDATA(m_m_axis_tdata_converter_6_signal);
    mp_m_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_6");
    mp_m_axis_tstrb_converter_6->vector_in(m_m_axis_tstrb_converter_6_signal);
    mp_m_axis_tstrb_converter_6->vector_out(m_axis_concat_tstrb_out_6);
    mp_M06_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_6_signal);
    mp_m_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_6");
    mp_m_axis_tkeep_converter_6->vector_in(m_m_axis_tkeep_converter_6_signal);
    mp_m_axis_tkeep_converter_6->vector_out(m_axis_concat_tkeep_out_6);
    mp_M06_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_6_signal);
    mp_m_axis_tlast_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_6");
    mp_m_axis_tlast_converter_6->scalar_in(m_m_axis_tlast_converter_6_signal);
    mp_m_axis_tlast_converter_6->vector_out(m_axis_concat_tlast_out_6);
    mp_M06_AXIS_transactor->TLAST(m_m_axis_tlast_converter_6_signal);
    mp_m_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_6");
    mp_m_axis_tid_converter_6->vector_in(m_m_axis_tid_converter_6_signal);
    mp_m_axis_tid_converter_6->vector_out(m_axis_concat_tid_out_6);
    mp_M06_AXIS_transactor->TID(m_m_axis_tid_converter_6_signal);
    mp_m_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_6");
    mp_m_axis_tdest_converter_6->vector_in(m_m_axis_tdest_converter_6_signal);
    mp_m_axis_tdest_converter_6->vector_out(m_axis_concat_tdest_out_6);
    mp_M06_AXIS_transactor->TDEST(m_m_axis_tdest_converter_6_signal);
    mp_m_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_6");
    mp_m_axis_tuser_converter_6->vector_in(m_m_axis_tuser_converter_6_signal);
    mp_m_axis_tuser_converter_6->vector_out(m_axis_concat_tuser_out_6);
    mp_M06_AXIS_transactor->TUSER(m_m_axis_tuser_converter_6_signal);
    mp_M06_AXIS_transactor->CLK(aclk);
    mp_M06_AXIS_transactor->RST(aresetn);

    // M06_AXIS' transactor sockets

    mp_impl->M06_AXIS_INITIATOR_SOCKET->bind(*(mp_M06_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S07_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S07_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S07_AXIS' transactor parameters
    xsc::common_cpp::properties S07_AXIS_transactor_param_props;
    S07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S07_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S07_AXIS_transactor", S07_AXIS_transactor_param_props);

    // S07_AXIS' transactor ports

    mp_s_axis_tvalid_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_7");
    mp_s_axis_tvalid_converter_7->vector_in(s_axis_split_tvalid_out_7);
    mp_s_axis_tvalid_converter_7->scalar_out(m_s_axis_tvalid_converter_7_signal);
    mp_S07_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_7_signal);
    mp_s_axis_tready_converter_7 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_7");
    mp_s_axis_tready_converter_7->scalar_in(m_s_axis_tready_converter_7_signal);
    mp_s_axis_tready_converter_7->vector_out(s_axis_concat_tready_out_7);
    mp_S07_AXIS_transactor->TREADY(m_s_axis_tready_converter_7_signal);
    mp_s_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_7");
    mp_s_axis_tdata_converter_7->vector_in(s_axis_split_tdata_out_7);
    mp_s_axis_tdata_converter_7->vector_out(m_s_axis_tdata_converter_7_signal);
    mp_S07_AXIS_transactor->TDATA(m_s_axis_tdata_converter_7_signal);
    mp_s_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_7");
    mp_s_axis_tstrb_converter_7->vector_in(s_axis_split_tstrb_out_7);
    mp_s_axis_tstrb_converter_7->vector_out(m_s_axis_tstrb_converter_7_signal);
    mp_S07_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_7_signal);
    mp_s_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_7");
    mp_s_axis_tkeep_converter_7->vector_in(s_axis_split_tkeep_out_7);
    mp_s_axis_tkeep_converter_7->vector_out(m_s_axis_tkeep_converter_7_signal);
    mp_S07_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_7_signal);
    mp_s_axis_tlast_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_7");
    mp_s_axis_tlast_converter_7->vector_in(s_axis_split_tlast_out_7);
    mp_s_axis_tlast_converter_7->scalar_out(m_s_axis_tlast_converter_7_signal);
    mp_S07_AXIS_transactor->TLAST(m_s_axis_tlast_converter_7_signal);
    mp_s_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_7");
    mp_s_axis_tid_converter_7->vector_in(s_axis_split_tid_out_7);
    mp_s_axis_tid_converter_7->vector_out(m_s_axis_tid_converter_7_signal);
    mp_S07_AXIS_transactor->TID(m_s_axis_tid_converter_7_signal);
    mp_s_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_7");
    mp_s_axis_tdest_converter_7->vector_in(s_axis_split_tdest_out_7);
    mp_s_axis_tdest_converter_7->vector_out(m_s_axis_tdest_converter_7_signal);
    mp_S07_AXIS_transactor->TDEST(m_s_axis_tdest_converter_7_signal);
    mp_s_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_7");
    mp_s_axis_tuser_converter_7->vector_in(s_axis_split_tuser_out_7);
    mp_s_axis_tuser_converter_7->vector_out(m_s_axis_tuser_converter_7_signal);
    mp_S07_AXIS_transactor->TUSER(m_s_axis_tuser_converter_7_signal);
    mp_S07_AXIS_transactor->CLK(aclk);
    mp_S07_AXIS_transactor->RST(aresetn);

    // S07_AXIS' transactor sockets

    mp_impl->S07_AXIS_TARGET_SOCKET->bind(*(mp_S07_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M07_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M07_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXIS' transactor parameters
    xsc::common_cpp::properties M07_AXIS_transactor_param_props;
    M07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M07_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M07_AXIS_transactor", M07_AXIS_transactor_param_props);

    // M07_AXIS' transactor ports

    mp_m_axis_tvalid_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_7");
    mp_m_axis_tvalid_converter_7->scalar_in(m_m_axis_tvalid_converter_7_signal);
    mp_m_axis_tvalid_converter_7->vector_out(m_axis_concat_tvalid_out_7);
    mp_M07_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_7_signal);
    mp_m_axis_tready_converter_7 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_7");
    mp_m_axis_tready_converter_7->vector_in(m_axis_split_tready_out_7);
    mp_m_axis_tready_converter_7->scalar_out(m_m_axis_tready_converter_7_signal);
    mp_M07_AXIS_transactor->TREADY(m_m_axis_tready_converter_7_signal);
    mp_m_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_7");
    mp_m_axis_tdata_converter_7->vector_in(m_m_axis_tdata_converter_7_signal);
    mp_m_axis_tdata_converter_7->vector_out(m_axis_concat_tdata_out_7);
    mp_M07_AXIS_transactor->TDATA(m_m_axis_tdata_converter_7_signal);
    mp_m_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_7");
    mp_m_axis_tstrb_converter_7->vector_in(m_m_axis_tstrb_converter_7_signal);
    mp_m_axis_tstrb_converter_7->vector_out(m_axis_concat_tstrb_out_7);
    mp_M07_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_7_signal);
    mp_m_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_7");
    mp_m_axis_tkeep_converter_7->vector_in(m_m_axis_tkeep_converter_7_signal);
    mp_m_axis_tkeep_converter_7->vector_out(m_axis_concat_tkeep_out_7);
    mp_M07_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_7_signal);
    mp_m_axis_tlast_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_7");
    mp_m_axis_tlast_converter_7->scalar_in(m_m_axis_tlast_converter_7_signal);
    mp_m_axis_tlast_converter_7->vector_out(m_axis_concat_tlast_out_7);
    mp_M07_AXIS_transactor->TLAST(m_m_axis_tlast_converter_7_signal);
    mp_m_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_7");
    mp_m_axis_tid_converter_7->vector_in(m_m_axis_tid_converter_7_signal);
    mp_m_axis_tid_converter_7->vector_out(m_axis_concat_tid_out_7);
    mp_M07_AXIS_transactor->TID(m_m_axis_tid_converter_7_signal);
    mp_m_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_7");
    mp_m_axis_tdest_converter_7->vector_in(m_m_axis_tdest_converter_7_signal);
    mp_m_axis_tdest_converter_7->vector_out(m_axis_concat_tdest_out_7);
    mp_M07_AXIS_transactor->TDEST(m_m_axis_tdest_converter_7_signal);
    mp_m_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_7");
    mp_m_axis_tuser_converter_7->vector_in(m_m_axis_tuser_converter_7_signal);
    mp_m_axis_tuser_converter_7->vector_out(m_axis_concat_tuser_out_7);
    mp_M07_AXIS_transactor->TUSER(m_m_axis_tuser_converter_7_signal);
    mp_M07_AXIS_transactor->CLK(aclk);
    mp_M07_AXIS_transactor->RST(aresetn);

    // M07_AXIS' transactor sockets

    mp_impl->M07_AXIS_INITIATOR_SOCKET->bind(*(mp_M07_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S08_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S08_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S08_AXIS' transactor parameters
    xsc::common_cpp::properties S08_AXIS_transactor_param_props;
    S08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S08_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S08_AXIS_transactor", S08_AXIS_transactor_param_props);

    // S08_AXIS' transactor ports

    mp_s_axis_tvalid_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_8");
    mp_s_axis_tvalid_converter_8->vector_in(s_axis_split_tvalid_out_8);
    mp_s_axis_tvalid_converter_8->scalar_out(m_s_axis_tvalid_converter_8_signal);
    mp_S08_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_8_signal);
    mp_s_axis_tready_converter_8 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_8");
    mp_s_axis_tready_converter_8->scalar_in(m_s_axis_tready_converter_8_signal);
    mp_s_axis_tready_converter_8->vector_out(s_axis_concat_tready_out_8);
    mp_S08_AXIS_transactor->TREADY(m_s_axis_tready_converter_8_signal);
    mp_s_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_8");
    mp_s_axis_tdata_converter_8->vector_in(s_axis_split_tdata_out_8);
    mp_s_axis_tdata_converter_8->vector_out(m_s_axis_tdata_converter_8_signal);
    mp_S08_AXIS_transactor->TDATA(m_s_axis_tdata_converter_8_signal);
    mp_s_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_8");
    mp_s_axis_tstrb_converter_8->vector_in(s_axis_split_tstrb_out_8);
    mp_s_axis_tstrb_converter_8->vector_out(m_s_axis_tstrb_converter_8_signal);
    mp_S08_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_8_signal);
    mp_s_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_8");
    mp_s_axis_tkeep_converter_8->vector_in(s_axis_split_tkeep_out_8);
    mp_s_axis_tkeep_converter_8->vector_out(m_s_axis_tkeep_converter_8_signal);
    mp_S08_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_8_signal);
    mp_s_axis_tlast_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_8");
    mp_s_axis_tlast_converter_8->vector_in(s_axis_split_tlast_out_8);
    mp_s_axis_tlast_converter_8->scalar_out(m_s_axis_tlast_converter_8_signal);
    mp_S08_AXIS_transactor->TLAST(m_s_axis_tlast_converter_8_signal);
    mp_s_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_8");
    mp_s_axis_tid_converter_8->vector_in(s_axis_split_tid_out_8);
    mp_s_axis_tid_converter_8->vector_out(m_s_axis_tid_converter_8_signal);
    mp_S08_AXIS_transactor->TID(m_s_axis_tid_converter_8_signal);
    mp_s_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_8");
    mp_s_axis_tdest_converter_8->vector_in(s_axis_split_tdest_out_8);
    mp_s_axis_tdest_converter_8->vector_out(m_s_axis_tdest_converter_8_signal);
    mp_S08_AXIS_transactor->TDEST(m_s_axis_tdest_converter_8_signal);
    mp_s_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_8");
    mp_s_axis_tuser_converter_8->vector_in(s_axis_split_tuser_out_8);
    mp_s_axis_tuser_converter_8->vector_out(m_s_axis_tuser_converter_8_signal);
    mp_S08_AXIS_transactor->TUSER(m_s_axis_tuser_converter_8_signal);
    mp_S08_AXIS_transactor->CLK(aclk);
    mp_S08_AXIS_transactor->RST(aresetn);

    // S08_AXIS' transactor sockets

    mp_impl->S08_AXIS_TARGET_SOCKET->bind(*(mp_S08_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M08_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M08_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXIS' transactor parameters
    xsc::common_cpp::properties M08_AXIS_transactor_param_props;
    M08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M08_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M08_AXIS_transactor", M08_AXIS_transactor_param_props);

    // M08_AXIS' transactor ports

    mp_m_axis_tvalid_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_8");
    mp_m_axis_tvalid_converter_8->scalar_in(m_m_axis_tvalid_converter_8_signal);
    mp_m_axis_tvalid_converter_8->vector_out(m_axis_concat_tvalid_out_8);
    mp_M08_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_8_signal);
    mp_m_axis_tready_converter_8 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_8");
    mp_m_axis_tready_converter_8->vector_in(m_axis_split_tready_out_8);
    mp_m_axis_tready_converter_8->scalar_out(m_m_axis_tready_converter_8_signal);
    mp_M08_AXIS_transactor->TREADY(m_m_axis_tready_converter_8_signal);
    mp_m_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_8");
    mp_m_axis_tdata_converter_8->vector_in(m_m_axis_tdata_converter_8_signal);
    mp_m_axis_tdata_converter_8->vector_out(m_axis_concat_tdata_out_8);
    mp_M08_AXIS_transactor->TDATA(m_m_axis_tdata_converter_8_signal);
    mp_m_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_8");
    mp_m_axis_tstrb_converter_8->vector_in(m_m_axis_tstrb_converter_8_signal);
    mp_m_axis_tstrb_converter_8->vector_out(m_axis_concat_tstrb_out_8);
    mp_M08_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_8_signal);
    mp_m_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_8");
    mp_m_axis_tkeep_converter_8->vector_in(m_m_axis_tkeep_converter_8_signal);
    mp_m_axis_tkeep_converter_8->vector_out(m_axis_concat_tkeep_out_8);
    mp_M08_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_8_signal);
    mp_m_axis_tlast_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_8");
    mp_m_axis_tlast_converter_8->scalar_in(m_m_axis_tlast_converter_8_signal);
    mp_m_axis_tlast_converter_8->vector_out(m_axis_concat_tlast_out_8);
    mp_M08_AXIS_transactor->TLAST(m_m_axis_tlast_converter_8_signal);
    mp_m_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_8");
    mp_m_axis_tid_converter_8->vector_in(m_m_axis_tid_converter_8_signal);
    mp_m_axis_tid_converter_8->vector_out(m_axis_concat_tid_out_8);
    mp_M08_AXIS_transactor->TID(m_m_axis_tid_converter_8_signal);
    mp_m_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_8");
    mp_m_axis_tdest_converter_8->vector_in(m_m_axis_tdest_converter_8_signal);
    mp_m_axis_tdest_converter_8->vector_out(m_axis_concat_tdest_out_8);
    mp_M08_AXIS_transactor->TDEST(m_m_axis_tdest_converter_8_signal);
    mp_m_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_8");
    mp_m_axis_tuser_converter_8->vector_in(m_m_axis_tuser_converter_8_signal);
    mp_m_axis_tuser_converter_8->vector_out(m_axis_concat_tuser_out_8);
    mp_M08_AXIS_transactor->TUSER(m_m_axis_tuser_converter_8_signal);
    mp_M08_AXIS_transactor->CLK(aclk);
    mp_M08_AXIS_transactor->RST(aresetn);

    // M08_AXIS' transactor sockets

    mp_impl->M08_AXIS_INITIATOR_SOCKET->bind(*(mp_M08_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S09_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S09_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S09_AXIS' transactor parameters
    xsc::common_cpp::properties S09_AXIS_transactor_param_props;
    S09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S09_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S09_AXIS_transactor", S09_AXIS_transactor_param_props);

    // S09_AXIS' transactor ports

    mp_s_axis_tvalid_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_9");
    mp_s_axis_tvalid_converter_9->vector_in(s_axis_split_tvalid_out_9);
    mp_s_axis_tvalid_converter_9->scalar_out(m_s_axis_tvalid_converter_9_signal);
    mp_S09_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_9_signal);
    mp_s_axis_tready_converter_9 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_9");
    mp_s_axis_tready_converter_9->scalar_in(m_s_axis_tready_converter_9_signal);
    mp_s_axis_tready_converter_9->vector_out(s_axis_concat_tready_out_9);
    mp_S09_AXIS_transactor->TREADY(m_s_axis_tready_converter_9_signal);
    mp_s_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_9");
    mp_s_axis_tdata_converter_9->vector_in(s_axis_split_tdata_out_9);
    mp_s_axis_tdata_converter_9->vector_out(m_s_axis_tdata_converter_9_signal);
    mp_S09_AXIS_transactor->TDATA(m_s_axis_tdata_converter_9_signal);
    mp_s_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_9");
    mp_s_axis_tstrb_converter_9->vector_in(s_axis_split_tstrb_out_9);
    mp_s_axis_tstrb_converter_9->vector_out(m_s_axis_tstrb_converter_9_signal);
    mp_S09_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_9_signal);
    mp_s_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_9");
    mp_s_axis_tkeep_converter_9->vector_in(s_axis_split_tkeep_out_9);
    mp_s_axis_tkeep_converter_9->vector_out(m_s_axis_tkeep_converter_9_signal);
    mp_S09_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_9_signal);
    mp_s_axis_tlast_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_9");
    mp_s_axis_tlast_converter_9->vector_in(s_axis_split_tlast_out_9);
    mp_s_axis_tlast_converter_9->scalar_out(m_s_axis_tlast_converter_9_signal);
    mp_S09_AXIS_transactor->TLAST(m_s_axis_tlast_converter_9_signal);
    mp_s_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_9");
    mp_s_axis_tid_converter_9->vector_in(s_axis_split_tid_out_9);
    mp_s_axis_tid_converter_9->vector_out(m_s_axis_tid_converter_9_signal);
    mp_S09_AXIS_transactor->TID(m_s_axis_tid_converter_9_signal);
    mp_s_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_9");
    mp_s_axis_tdest_converter_9->vector_in(s_axis_split_tdest_out_9);
    mp_s_axis_tdest_converter_9->vector_out(m_s_axis_tdest_converter_9_signal);
    mp_S09_AXIS_transactor->TDEST(m_s_axis_tdest_converter_9_signal);
    mp_s_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_9");
    mp_s_axis_tuser_converter_9->vector_in(s_axis_split_tuser_out_9);
    mp_s_axis_tuser_converter_9->vector_out(m_s_axis_tuser_converter_9_signal);
    mp_S09_AXIS_transactor->TUSER(m_s_axis_tuser_converter_9_signal);
    mp_S09_AXIS_transactor->CLK(aclk);
    mp_S09_AXIS_transactor->RST(aresetn);

    // S09_AXIS' transactor sockets

    mp_impl->S09_AXIS_TARGET_SOCKET->bind(*(mp_S09_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M09_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M09_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M09_AXIS' transactor parameters
    xsc::common_cpp::properties M09_AXIS_transactor_param_props;
    M09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M09_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M09_AXIS_transactor", M09_AXIS_transactor_param_props);

    // M09_AXIS' transactor ports

    mp_m_axis_tvalid_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_9");
    mp_m_axis_tvalid_converter_9->scalar_in(m_m_axis_tvalid_converter_9_signal);
    mp_m_axis_tvalid_converter_9->vector_out(m_axis_concat_tvalid_out_9);
    mp_M09_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_9_signal);
    mp_m_axis_tready_converter_9 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_9");
    mp_m_axis_tready_converter_9->vector_in(m_axis_split_tready_out_9);
    mp_m_axis_tready_converter_9->scalar_out(m_m_axis_tready_converter_9_signal);
    mp_M09_AXIS_transactor->TREADY(m_m_axis_tready_converter_9_signal);
    mp_m_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_9");
    mp_m_axis_tdata_converter_9->vector_in(m_m_axis_tdata_converter_9_signal);
    mp_m_axis_tdata_converter_9->vector_out(m_axis_concat_tdata_out_9);
    mp_M09_AXIS_transactor->TDATA(m_m_axis_tdata_converter_9_signal);
    mp_m_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_9");
    mp_m_axis_tstrb_converter_9->vector_in(m_m_axis_tstrb_converter_9_signal);
    mp_m_axis_tstrb_converter_9->vector_out(m_axis_concat_tstrb_out_9);
    mp_M09_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_9_signal);
    mp_m_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_9");
    mp_m_axis_tkeep_converter_9->vector_in(m_m_axis_tkeep_converter_9_signal);
    mp_m_axis_tkeep_converter_9->vector_out(m_axis_concat_tkeep_out_9);
    mp_M09_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_9_signal);
    mp_m_axis_tlast_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_9");
    mp_m_axis_tlast_converter_9->scalar_in(m_m_axis_tlast_converter_9_signal);
    mp_m_axis_tlast_converter_9->vector_out(m_axis_concat_tlast_out_9);
    mp_M09_AXIS_transactor->TLAST(m_m_axis_tlast_converter_9_signal);
    mp_m_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_9");
    mp_m_axis_tid_converter_9->vector_in(m_m_axis_tid_converter_9_signal);
    mp_m_axis_tid_converter_9->vector_out(m_axis_concat_tid_out_9);
    mp_M09_AXIS_transactor->TID(m_m_axis_tid_converter_9_signal);
    mp_m_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_9");
    mp_m_axis_tdest_converter_9->vector_in(m_m_axis_tdest_converter_9_signal);
    mp_m_axis_tdest_converter_9->vector_out(m_axis_concat_tdest_out_9);
    mp_M09_AXIS_transactor->TDEST(m_m_axis_tdest_converter_9_signal);
    mp_m_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_9");
    mp_m_axis_tuser_converter_9->vector_in(m_m_axis_tuser_converter_9_signal);
    mp_m_axis_tuser_converter_9->vector_out(m_axis_concat_tuser_out_9);
    mp_M09_AXIS_transactor->TUSER(m_m_axis_tuser_converter_9_signal);
    mp_M09_AXIS_transactor->CLK(aclk);
    mp_M09_AXIS_transactor->RST(aresetn);

    // M09_AXIS' transactor sockets

    mp_impl->M09_AXIS_INITIATOR_SOCKET->bind(*(mp_M09_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S_AXI_CTRL' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S_AXI_CTRL_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S_AXI_CTRL' transactor parameters
    xsc::common_cpp::properties S_AXI_CTRL_transactor_param_props;
    S_AXI_CTRL_transactor_param_props.addLong("DATA_WIDTH", "32");
    S_AXI_CTRL_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S_AXI_CTRL_transactor_param_props.addLong("ID_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ADDR_WIDTH", "7");
    S_AXI_CTRL_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_LOCK", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_PROT", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_CACHE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_QOS", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_WSTRB", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_SIZE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RESET", "1");
    S_AXI_CTRL_transactor_param_props.addFloat("PHASE", "0.00");
    S_AXI_CTRL_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    S_AXI_CTRL_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_CTRL_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");

    mp_S_AXI_CTRL_transactor = new xtlm::xaximm_pin2xtlm_t<32,7,1,1,1,1,1,1>("S_AXI_CTRL_transactor", S_AXI_CTRL_transactor_param_props);

    // S_AXI_CTRL' transactor ports

    mp_S_AXI_CTRL_transactor->AWVALID(s_axi_ctrl_awvalid);
    mp_S_AXI_CTRL_transactor->AWREADY(s_axi_ctrl_awready);
    mp_S_AXI_CTRL_transactor->AWADDR(s_axi_ctrl_awaddr);
    mp_S_AXI_CTRL_transactor->WVALID(s_axi_ctrl_wvalid);
    mp_S_AXI_CTRL_transactor->WREADY(s_axi_ctrl_wready);
    mp_S_AXI_CTRL_transactor->WDATA(s_axi_ctrl_wdata);
    mp_S_AXI_CTRL_transactor->BVALID(s_axi_ctrl_bvalid);
    mp_S_AXI_CTRL_transactor->BREADY(s_axi_ctrl_bready);
    mp_S_AXI_CTRL_transactor->BRESP(s_axi_ctrl_bresp);
    mp_S_AXI_CTRL_transactor->ARVALID(s_axi_ctrl_arvalid);
    mp_S_AXI_CTRL_transactor->ARREADY(s_axi_ctrl_arready);
    mp_S_AXI_CTRL_transactor->ARADDR(s_axi_ctrl_araddr);
    mp_S_AXI_CTRL_transactor->RVALID(s_axi_ctrl_rvalid);
    mp_S_AXI_CTRL_transactor->RREADY(s_axi_ctrl_rready);
    mp_S_AXI_CTRL_transactor->RDATA(s_axi_ctrl_rdata);
    mp_S_AXI_CTRL_transactor->RRESP(s_axi_ctrl_rresp);
    mp_S_AXI_CTRL_transactor->CLK(s_axi_ctrl_aclk);
    mp_S_AXI_CTRL_transactor->RST(s_axi_ctrl_aresetn);

    // S_AXI_CTRL' transactor sockets

    mp_impl->S_AXI_CTRL_wr_socket->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    mp_impl->S_AXI_CTRL_rd_socket->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
  }
  else
  {
  }

}

#endif // XILINX_SIMULATOR




#ifdef XM_SYSTEMC
bd_d92b_xbar_0::bd_d92b_xbar_0(const sc_core::sc_module_name& nm) : bd_d92b_xbar_0_sc(nm), aclk("aclk"), aresetn("aresetn"), s_axis_tvalid("s_axis_tvalid"), s_axis_tready("s_axis_tready"), s_axis_tdata("s_axis_tdata"), s_axis_tstrb("s_axis_tstrb"), s_axis_tkeep("s_axis_tkeep"), s_axis_tlast("s_axis_tlast"), s_axis_tid("s_axis_tid"), s_axis_tdest("s_axis_tdest"), s_axis_tuser("s_axis_tuser"), m_axis_tvalid("m_axis_tvalid"), m_axis_tready("m_axis_tready"), m_axis_tdata("m_axis_tdata"), m_axis_tstrb("m_axis_tstrb"), m_axis_tkeep("m_axis_tkeep"), m_axis_tlast("m_axis_tlast"), m_axis_tid("m_axis_tid"), m_axis_tdest("m_axis_tdest"), m_axis_tuser("m_axis_tuser"), s_axi_ctrl_aclk("s_axi_ctrl_aclk"), s_axi_ctrl_aresetn("s_axi_ctrl_aresetn"), s_axi_ctrl_awvalid("s_axi_ctrl_awvalid"), s_axi_ctrl_awready("s_axi_ctrl_awready"), s_axi_ctrl_awaddr("s_axi_ctrl_awaddr"), s_axi_ctrl_wvalid("s_axi_ctrl_wvalid"), s_axi_ctrl_wready("s_axi_ctrl_wready"), s_axi_ctrl_wdata("s_axi_ctrl_wdata"), s_axi_ctrl_bvalid("s_axi_ctrl_bvalid"), s_axi_ctrl_bready("s_axi_ctrl_bready"), s_axi_ctrl_bresp("s_axi_ctrl_bresp"), s_axi_ctrl_arvalid("s_axi_ctrl_arvalid"), s_axi_ctrl_arready("s_axi_ctrl_arready"), s_axi_ctrl_araddr("s_axi_ctrl_araddr"), s_axi_ctrl_rvalid("s_axi_ctrl_rvalid"), s_axi_ctrl_rready("s_axi_ctrl_rready"), s_axi_ctrl_rdata("s_axi_ctrl_rdata"), s_axi_ctrl_rresp("s_axi_ctrl_rresp")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);
  mp_impl->s_axi_ctrl_aclk(s_axi_ctrl_aclk);
  mp_impl->s_axi_ctrl_aresetn(s_axi_ctrl_aresetn);

  // initialize transactors
  mp_S00_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_0 = NULL;
  mp_s_axis_tready_converter_0 = NULL;
  mp_s_axis_tdata_converter_0 = NULL;
  mp_s_axis_tstrb_converter_0 = NULL;
  mp_s_axis_tkeep_converter_0 = NULL;
  mp_s_axis_tlast_converter_0 = NULL;
  mp_s_axis_tid_converter_0 = NULL;
  mp_s_axis_tdest_converter_0 = NULL;
  mp_s_axis_tuser_converter_0 = NULL;
  mp_M00_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_0 = NULL;
  mp_m_axis_tready_converter_0 = NULL;
  mp_m_axis_tdata_converter_0 = NULL;
  mp_m_axis_tstrb_converter_0 = NULL;
  mp_m_axis_tkeep_converter_0 = NULL;
  mp_m_axis_tlast_converter_0 = NULL;
  mp_m_axis_tid_converter_0 = NULL;
  mp_m_axis_tdest_converter_0 = NULL;
  mp_m_axis_tuser_converter_0 = NULL;
  mp_S01_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_1 = NULL;
  mp_s_axis_tready_converter_1 = NULL;
  mp_s_axis_tdata_converter_1 = NULL;
  mp_s_axis_tstrb_converter_1 = NULL;
  mp_s_axis_tkeep_converter_1 = NULL;
  mp_s_axis_tlast_converter_1 = NULL;
  mp_s_axis_tid_converter_1 = NULL;
  mp_s_axis_tdest_converter_1 = NULL;
  mp_s_axis_tuser_converter_1 = NULL;
  mp_M01_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_1 = NULL;
  mp_m_axis_tready_converter_1 = NULL;
  mp_m_axis_tdata_converter_1 = NULL;
  mp_m_axis_tstrb_converter_1 = NULL;
  mp_m_axis_tkeep_converter_1 = NULL;
  mp_m_axis_tlast_converter_1 = NULL;
  mp_m_axis_tid_converter_1 = NULL;
  mp_m_axis_tdest_converter_1 = NULL;
  mp_m_axis_tuser_converter_1 = NULL;
  mp_S02_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_2 = NULL;
  mp_s_axis_tready_converter_2 = NULL;
  mp_s_axis_tdata_converter_2 = NULL;
  mp_s_axis_tstrb_converter_2 = NULL;
  mp_s_axis_tkeep_converter_2 = NULL;
  mp_s_axis_tlast_converter_2 = NULL;
  mp_s_axis_tid_converter_2 = NULL;
  mp_s_axis_tdest_converter_2 = NULL;
  mp_s_axis_tuser_converter_2 = NULL;
  mp_M02_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_2 = NULL;
  mp_m_axis_tready_converter_2 = NULL;
  mp_m_axis_tdata_converter_2 = NULL;
  mp_m_axis_tstrb_converter_2 = NULL;
  mp_m_axis_tkeep_converter_2 = NULL;
  mp_m_axis_tlast_converter_2 = NULL;
  mp_m_axis_tid_converter_2 = NULL;
  mp_m_axis_tdest_converter_2 = NULL;
  mp_m_axis_tuser_converter_2 = NULL;
  mp_S03_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_3 = NULL;
  mp_s_axis_tready_converter_3 = NULL;
  mp_s_axis_tdata_converter_3 = NULL;
  mp_s_axis_tstrb_converter_3 = NULL;
  mp_s_axis_tkeep_converter_3 = NULL;
  mp_s_axis_tlast_converter_3 = NULL;
  mp_s_axis_tid_converter_3 = NULL;
  mp_s_axis_tdest_converter_3 = NULL;
  mp_s_axis_tuser_converter_3 = NULL;
  mp_M03_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_3 = NULL;
  mp_m_axis_tready_converter_3 = NULL;
  mp_m_axis_tdata_converter_3 = NULL;
  mp_m_axis_tstrb_converter_3 = NULL;
  mp_m_axis_tkeep_converter_3 = NULL;
  mp_m_axis_tlast_converter_3 = NULL;
  mp_m_axis_tid_converter_3 = NULL;
  mp_m_axis_tdest_converter_3 = NULL;
  mp_m_axis_tuser_converter_3 = NULL;
  mp_S04_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_4 = NULL;
  mp_s_axis_tready_converter_4 = NULL;
  mp_s_axis_tdata_converter_4 = NULL;
  mp_s_axis_tstrb_converter_4 = NULL;
  mp_s_axis_tkeep_converter_4 = NULL;
  mp_s_axis_tlast_converter_4 = NULL;
  mp_s_axis_tid_converter_4 = NULL;
  mp_s_axis_tdest_converter_4 = NULL;
  mp_s_axis_tuser_converter_4 = NULL;
  mp_M04_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_4 = NULL;
  mp_m_axis_tready_converter_4 = NULL;
  mp_m_axis_tdata_converter_4 = NULL;
  mp_m_axis_tstrb_converter_4 = NULL;
  mp_m_axis_tkeep_converter_4 = NULL;
  mp_m_axis_tlast_converter_4 = NULL;
  mp_m_axis_tid_converter_4 = NULL;
  mp_m_axis_tdest_converter_4 = NULL;
  mp_m_axis_tuser_converter_4 = NULL;
  mp_S05_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_5 = NULL;
  mp_s_axis_tready_converter_5 = NULL;
  mp_s_axis_tdata_converter_5 = NULL;
  mp_s_axis_tstrb_converter_5 = NULL;
  mp_s_axis_tkeep_converter_5 = NULL;
  mp_s_axis_tlast_converter_5 = NULL;
  mp_s_axis_tid_converter_5 = NULL;
  mp_s_axis_tdest_converter_5 = NULL;
  mp_s_axis_tuser_converter_5 = NULL;
  mp_M05_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_5 = NULL;
  mp_m_axis_tready_converter_5 = NULL;
  mp_m_axis_tdata_converter_5 = NULL;
  mp_m_axis_tstrb_converter_5 = NULL;
  mp_m_axis_tkeep_converter_5 = NULL;
  mp_m_axis_tlast_converter_5 = NULL;
  mp_m_axis_tid_converter_5 = NULL;
  mp_m_axis_tdest_converter_5 = NULL;
  mp_m_axis_tuser_converter_5 = NULL;
  mp_S06_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_6 = NULL;
  mp_s_axis_tready_converter_6 = NULL;
  mp_s_axis_tdata_converter_6 = NULL;
  mp_s_axis_tstrb_converter_6 = NULL;
  mp_s_axis_tkeep_converter_6 = NULL;
  mp_s_axis_tlast_converter_6 = NULL;
  mp_s_axis_tid_converter_6 = NULL;
  mp_s_axis_tdest_converter_6 = NULL;
  mp_s_axis_tuser_converter_6 = NULL;
  mp_M06_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_6 = NULL;
  mp_m_axis_tready_converter_6 = NULL;
  mp_m_axis_tdata_converter_6 = NULL;
  mp_m_axis_tstrb_converter_6 = NULL;
  mp_m_axis_tkeep_converter_6 = NULL;
  mp_m_axis_tlast_converter_6 = NULL;
  mp_m_axis_tid_converter_6 = NULL;
  mp_m_axis_tdest_converter_6 = NULL;
  mp_m_axis_tuser_converter_6 = NULL;
  mp_S07_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_7 = NULL;
  mp_s_axis_tready_converter_7 = NULL;
  mp_s_axis_tdata_converter_7 = NULL;
  mp_s_axis_tstrb_converter_7 = NULL;
  mp_s_axis_tkeep_converter_7 = NULL;
  mp_s_axis_tlast_converter_7 = NULL;
  mp_s_axis_tid_converter_7 = NULL;
  mp_s_axis_tdest_converter_7 = NULL;
  mp_s_axis_tuser_converter_7 = NULL;
  mp_M07_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_7 = NULL;
  mp_m_axis_tready_converter_7 = NULL;
  mp_m_axis_tdata_converter_7 = NULL;
  mp_m_axis_tstrb_converter_7 = NULL;
  mp_m_axis_tkeep_converter_7 = NULL;
  mp_m_axis_tlast_converter_7 = NULL;
  mp_m_axis_tid_converter_7 = NULL;
  mp_m_axis_tdest_converter_7 = NULL;
  mp_m_axis_tuser_converter_7 = NULL;
  mp_S08_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_8 = NULL;
  mp_s_axis_tready_converter_8 = NULL;
  mp_s_axis_tdata_converter_8 = NULL;
  mp_s_axis_tstrb_converter_8 = NULL;
  mp_s_axis_tkeep_converter_8 = NULL;
  mp_s_axis_tlast_converter_8 = NULL;
  mp_s_axis_tid_converter_8 = NULL;
  mp_s_axis_tdest_converter_8 = NULL;
  mp_s_axis_tuser_converter_8 = NULL;
  mp_M08_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_8 = NULL;
  mp_m_axis_tready_converter_8 = NULL;
  mp_m_axis_tdata_converter_8 = NULL;
  mp_m_axis_tstrb_converter_8 = NULL;
  mp_m_axis_tkeep_converter_8 = NULL;
  mp_m_axis_tlast_converter_8 = NULL;
  mp_m_axis_tid_converter_8 = NULL;
  mp_m_axis_tdest_converter_8 = NULL;
  mp_m_axis_tuser_converter_8 = NULL;
  mp_S09_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_9 = NULL;
  mp_s_axis_tready_converter_9 = NULL;
  mp_s_axis_tdata_converter_9 = NULL;
  mp_s_axis_tstrb_converter_9 = NULL;
  mp_s_axis_tkeep_converter_9 = NULL;
  mp_s_axis_tlast_converter_9 = NULL;
  mp_s_axis_tid_converter_9 = NULL;
  mp_s_axis_tdest_converter_9 = NULL;
  mp_s_axis_tuser_converter_9 = NULL;
  mp_M09_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_9 = NULL;
  mp_m_axis_tready_converter_9 = NULL;
  mp_m_axis_tdata_converter_9 = NULL;
  mp_m_axis_tstrb_converter_9 = NULL;
  mp_m_axis_tkeep_converter_9 = NULL;
  mp_m_axis_tlast_converter_9 = NULL;
  mp_m_axis_tid_converter_9 = NULL;
  mp_m_axis_tdest_converter_9 = NULL;
  mp_m_axis_tuser_converter_9 = NULL;
  mp_S_AXI_CTRL_transactor = NULL;

  // initialize junctures
  mp_m_axis_concat_tdata = NULL;
  mp_m_axis_concat_tdest = NULL;
  mp_m_axis_concat_tid = NULL;
  mp_m_axis_concat_tkeep = NULL;
  mp_m_axis_concat_tlast = NULL;
  mp_m_axis_concat_tstrb = NULL;
  mp_m_axis_concat_tuser = NULL;
  mp_m_axis_concat_tvalid = NULL;
  mp_m_axis_split_tready = NULL;
  mp_s_axis_concat_tready = NULL;
  mp_s_axis_split_tdata = NULL;
  mp_s_axis_split_tdest = NULL;
  mp_s_axis_split_tid = NULL;
  mp_s_axis_split_tkeep = NULL;
  mp_s_axis_split_tlast = NULL;
  mp_s_axis_split_tstrb = NULL;
  mp_s_axis_split_tuser = NULL;
  mp_s_axis_split_tvalid = NULL;
  mp_s_axis_split_tvalid = new xsc::xsc_split<10, 10>("s_axis_split_tvalid");
  mp_s_axis_split_tvalid->in_port(s_axis_tvalid);
  mp_s_axis_split_tvalid->out_port[0](s_axis_split_tvalid_out_0);
    mp_s_axis_split_tvalid->add_mask(0,1,0);
  mp_s_axis_concat_tready = new xsc::xsc_concatenator<10, 10>("s_axis_concat_tready");
  mp_s_axis_concat_tready->in_port[0](s_axis_concat_tready_out_0);
  mp_s_axis_concat_tready->out_port(s_axis_tready);
    mp_s_axis_concat_tready->offset_port(0, 0);
  mp_s_axis_split_tdata = new xsc::xsc_split<640, 10>("s_axis_split_tdata");
  mp_s_axis_split_tdata->in_port(s_axis_tdata);
  mp_s_axis_split_tdata->out_port[0](s_axis_split_tdata_out_0);
    mp_s_axis_split_tdata->add_mask(0,64,0);
  mp_s_axis_split_tstrb = new xsc::xsc_split<80, 10>("s_axis_split_tstrb");
  mp_s_axis_split_tstrb->in_port(s_axis_tstrb);
  mp_s_axis_split_tstrb->out_port[0](s_axis_split_tstrb_out_0);
    mp_s_axis_split_tstrb->add_mask(0,8,0);
  mp_s_axis_split_tkeep = new xsc::xsc_split<80, 10>("s_axis_split_tkeep");
  mp_s_axis_split_tkeep->in_port(s_axis_tkeep);
  mp_s_axis_split_tkeep->out_port[0](s_axis_split_tkeep_out_0);
    mp_s_axis_split_tkeep->add_mask(0,8,0);
  mp_s_axis_split_tlast = new xsc::xsc_split<10, 10>("s_axis_split_tlast");
  mp_s_axis_split_tlast->in_port(s_axis_tlast);
  mp_s_axis_split_tlast->out_port[0](s_axis_split_tlast_out_0);
    mp_s_axis_split_tlast->add_mask(0,1,0);
  mp_s_axis_split_tid = new xsc::xsc_split<10, 10>("s_axis_split_tid");
  mp_s_axis_split_tid->in_port(s_axis_tid);
  mp_s_axis_split_tid->out_port[0](s_axis_split_tid_out_0);
    mp_s_axis_split_tid->add_mask(0,1,0);
  mp_s_axis_split_tdest = new xsc::xsc_split<40, 10>("s_axis_split_tdest");
  mp_s_axis_split_tdest->in_port(s_axis_tdest);
  mp_s_axis_split_tdest->out_port[0](s_axis_split_tdest_out_0);
    mp_s_axis_split_tdest->add_mask(0,4,0);
  mp_s_axis_split_tuser = new xsc::xsc_split<10, 10>("s_axis_split_tuser");
  mp_s_axis_split_tuser->in_port(s_axis_tuser);
  mp_s_axis_split_tuser->out_port[0](s_axis_split_tuser_out_0);
    mp_s_axis_split_tuser->add_mask(0,1,0);
  mp_m_axis_concat_tvalid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tvalid");
  mp_m_axis_concat_tvalid->in_port[0](m_axis_concat_tvalid_out_0);
  mp_m_axis_concat_tvalid->out_port(m_axis_tvalid);
    mp_m_axis_concat_tvalid->offset_port(0, 0);
  mp_m_axis_split_tready = new xsc::xsc_split<10, 10>("m_axis_split_tready");
  mp_m_axis_split_tready->in_port(m_axis_tready);
  mp_m_axis_split_tready->out_port[0](m_axis_split_tready_out_0);
    mp_m_axis_split_tready->add_mask(0,1,0);
  mp_m_axis_concat_tdata = new xsc::xsc_concatenator<640, 10>("m_axis_concat_tdata");
  mp_m_axis_concat_tdata->in_port[0](m_axis_concat_tdata_out_0);
  mp_m_axis_concat_tdata->out_port(m_axis_tdata);
    mp_m_axis_concat_tdata->offset_port(0, 0);
  mp_m_axis_concat_tstrb = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tstrb");
  mp_m_axis_concat_tstrb->in_port[0](m_axis_concat_tstrb_out_0);
  mp_m_axis_concat_tstrb->out_port(m_axis_tstrb);
    mp_m_axis_concat_tstrb->offset_port(0, 0);
  mp_m_axis_concat_tkeep = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tkeep");
  mp_m_axis_concat_tkeep->in_port[0](m_axis_concat_tkeep_out_0);
  mp_m_axis_concat_tkeep->out_port(m_axis_tkeep);
    mp_m_axis_concat_tkeep->offset_port(0, 0);
  mp_m_axis_concat_tlast = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tlast");
  mp_m_axis_concat_tlast->in_port[0](m_axis_concat_tlast_out_0);
  mp_m_axis_concat_tlast->out_port(m_axis_tlast);
    mp_m_axis_concat_tlast->offset_port(0, 0);
  mp_m_axis_concat_tid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tid");
  mp_m_axis_concat_tid->in_port[0](m_axis_concat_tid_out_0);
  mp_m_axis_concat_tid->out_port(m_axis_tid);
    mp_m_axis_concat_tid->offset_port(0, 0);
  mp_m_axis_concat_tdest = new xsc::xsc_concatenator<40, 10>("m_axis_concat_tdest");
  mp_m_axis_concat_tdest->in_port[0](m_axis_concat_tdest_out_0);
  mp_m_axis_concat_tdest->out_port(m_axis_tdest);
    mp_m_axis_concat_tdest->offset_port(0, 0);
  mp_m_axis_concat_tuser = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tuser");
  mp_m_axis_concat_tuser->in_port[0](m_axis_concat_tuser_out_0);
  mp_m_axis_concat_tuser->out_port(m_axis_tuser);
    mp_m_axis_concat_tuser->offset_port(0, 0);
  
  mp_s_axis_split_tvalid->out_port[1](s_axis_split_tvalid_out_1);
    mp_s_axis_split_tvalid->add_mask(1,2,1);
  mp_s_axis_concat_tready->in_port[1](s_axis_concat_tready_out_1);
  mp_s_axis_concat_tready->offset_port(1, 1);
  
  mp_s_axis_split_tdata->out_port[1](s_axis_split_tdata_out_1);
    mp_s_axis_split_tdata->add_mask(1,128,64);
  
  mp_s_axis_split_tstrb->out_port[1](s_axis_split_tstrb_out_1);
    mp_s_axis_split_tstrb->add_mask(1,16,8);
  
  mp_s_axis_split_tkeep->out_port[1](s_axis_split_tkeep_out_1);
    mp_s_axis_split_tkeep->add_mask(1,16,8);
  
  mp_s_axis_split_tlast->out_port[1](s_axis_split_tlast_out_1);
    mp_s_axis_split_tlast->add_mask(1,2,1);
  
  mp_s_axis_split_tid->out_port[1](s_axis_split_tid_out_1);
    mp_s_axis_split_tid->add_mask(1,2,1);
  
  mp_s_axis_split_tdest->out_port[1](s_axis_split_tdest_out_1);
    mp_s_axis_split_tdest->add_mask(1,8,4);
  
  mp_s_axis_split_tuser->out_port[1](s_axis_split_tuser_out_1);
    mp_s_axis_split_tuser->add_mask(1,2,1);
  mp_m_axis_concat_tvalid->in_port[1](m_axis_concat_tvalid_out_1);
  mp_m_axis_concat_tvalid->offset_port(1, 1);
  
  mp_m_axis_split_tready->out_port[1](m_axis_split_tready_out_1);
    mp_m_axis_split_tready->add_mask(1,2,1);
  mp_m_axis_concat_tdata->in_port[1](m_axis_concat_tdata_out_1);
  mp_m_axis_concat_tdata->offset_port(1, 64);
  mp_m_axis_concat_tstrb->in_port[1](m_axis_concat_tstrb_out_1);
  mp_m_axis_concat_tstrb->offset_port(1, 8);
  mp_m_axis_concat_tkeep->in_port[1](m_axis_concat_tkeep_out_1);
  mp_m_axis_concat_tkeep->offset_port(1, 8);
  mp_m_axis_concat_tlast->in_port[1](m_axis_concat_tlast_out_1);
  mp_m_axis_concat_tlast->offset_port(1, 1);
  mp_m_axis_concat_tid->in_port[1](m_axis_concat_tid_out_1);
  mp_m_axis_concat_tid->offset_port(1, 1);
  mp_m_axis_concat_tdest->in_port[1](m_axis_concat_tdest_out_1);
  mp_m_axis_concat_tdest->offset_port(1, 4);
  mp_m_axis_concat_tuser->in_port[1](m_axis_concat_tuser_out_1);
  mp_m_axis_concat_tuser->offset_port(1, 1);
  
  mp_s_axis_split_tvalid->out_port[2](s_axis_split_tvalid_out_2);
    mp_s_axis_split_tvalid->add_mask(2,3,2);
  mp_s_axis_concat_tready->in_port[2](s_axis_concat_tready_out_2);
  mp_s_axis_concat_tready->offset_port(2, 2);
  
  mp_s_axis_split_tdata->out_port[2](s_axis_split_tdata_out_2);
    mp_s_axis_split_tdata->add_mask(2,192,128);
  
  mp_s_axis_split_tstrb->out_port[2](s_axis_split_tstrb_out_2);
    mp_s_axis_split_tstrb->add_mask(2,24,16);
  
  mp_s_axis_split_tkeep->out_port[2](s_axis_split_tkeep_out_2);
    mp_s_axis_split_tkeep->add_mask(2,24,16);
  
  mp_s_axis_split_tlast->out_port[2](s_axis_split_tlast_out_2);
    mp_s_axis_split_tlast->add_mask(2,3,2);
  
  mp_s_axis_split_tid->out_port[2](s_axis_split_tid_out_2);
    mp_s_axis_split_tid->add_mask(2,3,2);
  
  mp_s_axis_split_tdest->out_port[2](s_axis_split_tdest_out_2);
    mp_s_axis_split_tdest->add_mask(2,12,8);
  
  mp_s_axis_split_tuser->out_port[2](s_axis_split_tuser_out_2);
    mp_s_axis_split_tuser->add_mask(2,3,2);
  mp_m_axis_concat_tvalid->in_port[2](m_axis_concat_tvalid_out_2);
  mp_m_axis_concat_tvalid->offset_port(2, 2);
  
  mp_m_axis_split_tready->out_port[2](m_axis_split_tready_out_2);
    mp_m_axis_split_tready->add_mask(2,3,2);
  mp_m_axis_concat_tdata->in_port[2](m_axis_concat_tdata_out_2);
  mp_m_axis_concat_tdata->offset_port(2, 128);
  mp_m_axis_concat_tstrb->in_port[2](m_axis_concat_tstrb_out_2);
  mp_m_axis_concat_tstrb->offset_port(2, 16);
  mp_m_axis_concat_tkeep->in_port[2](m_axis_concat_tkeep_out_2);
  mp_m_axis_concat_tkeep->offset_port(2, 16);
  mp_m_axis_concat_tlast->in_port[2](m_axis_concat_tlast_out_2);
  mp_m_axis_concat_tlast->offset_port(2, 2);
  mp_m_axis_concat_tid->in_port[2](m_axis_concat_tid_out_2);
  mp_m_axis_concat_tid->offset_port(2, 2);
  mp_m_axis_concat_tdest->in_port[2](m_axis_concat_tdest_out_2);
  mp_m_axis_concat_tdest->offset_port(2, 8);
  mp_m_axis_concat_tuser->in_port[2](m_axis_concat_tuser_out_2);
  mp_m_axis_concat_tuser->offset_port(2, 2);
  
  mp_s_axis_split_tvalid->out_port[3](s_axis_split_tvalid_out_3);
    mp_s_axis_split_tvalid->add_mask(3,4,3);
  mp_s_axis_concat_tready->in_port[3](s_axis_concat_tready_out_3);
  mp_s_axis_concat_tready->offset_port(3, 3);
  
  mp_s_axis_split_tdata->out_port[3](s_axis_split_tdata_out_3);
    mp_s_axis_split_tdata->add_mask(3,256,192);
  
  mp_s_axis_split_tstrb->out_port[3](s_axis_split_tstrb_out_3);
    mp_s_axis_split_tstrb->add_mask(3,32,24);
  
  mp_s_axis_split_tkeep->out_port[3](s_axis_split_tkeep_out_3);
    mp_s_axis_split_tkeep->add_mask(3,32,24);
  
  mp_s_axis_split_tlast->out_port[3](s_axis_split_tlast_out_3);
    mp_s_axis_split_tlast->add_mask(3,4,3);
  
  mp_s_axis_split_tid->out_port[3](s_axis_split_tid_out_3);
    mp_s_axis_split_tid->add_mask(3,4,3);
  
  mp_s_axis_split_tdest->out_port[3](s_axis_split_tdest_out_3);
    mp_s_axis_split_tdest->add_mask(3,16,12);
  
  mp_s_axis_split_tuser->out_port[3](s_axis_split_tuser_out_3);
    mp_s_axis_split_tuser->add_mask(3,4,3);
  mp_m_axis_concat_tvalid->in_port[3](m_axis_concat_tvalid_out_3);
  mp_m_axis_concat_tvalid->offset_port(3, 3);
  
  mp_m_axis_split_tready->out_port[3](m_axis_split_tready_out_3);
    mp_m_axis_split_tready->add_mask(3,4,3);
  mp_m_axis_concat_tdata->in_port[3](m_axis_concat_tdata_out_3);
  mp_m_axis_concat_tdata->offset_port(3, 192);
  mp_m_axis_concat_tstrb->in_port[3](m_axis_concat_tstrb_out_3);
  mp_m_axis_concat_tstrb->offset_port(3, 24);
  mp_m_axis_concat_tkeep->in_port[3](m_axis_concat_tkeep_out_3);
  mp_m_axis_concat_tkeep->offset_port(3, 24);
  mp_m_axis_concat_tlast->in_port[3](m_axis_concat_tlast_out_3);
  mp_m_axis_concat_tlast->offset_port(3, 3);
  mp_m_axis_concat_tid->in_port[3](m_axis_concat_tid_out_3);
  mp_m_axis_concat_tid->offset_port(3, 3);
  mp_m_axis_concat_tdest->in_port[3](m_axis_concat_tdest_out_3);
  mp_m_axis_concat_tdest->offset_port(3, 12);
  mp_m_axis_concat_tuser->in_port[3](m_axis_concat_tuser_out_3);
  mp_m_axis_concat_tuser->offset_port(3, 3);
  
  mp_s_axis_split_tvalid->out_port[4](s_axis_split_tvalid_out_4);
    mp_s_axis_split_tvalid->add_mask(4,5,4);
  mp_s_axis_concat_tready->in_port[4](s_axis_concat_tready_out_4);
  mp_s_axis_concat_tready->offset_port(4, 4);
  
  mp_s_axis_split_tdata->out_port[4](s_axis_split_tdata_out_4);
    mp_s_axis_split_tdata->add_mask(4,320,256);
  
  mp_s_axis_split_tstrb->out_port[4](s_axis_split_tstrb_out_4);
    mp_s_axis_split_tstrb->add_mask(4,40,32);
  
  mp_s_axis_split_tkeep->out_port[4](s_axis_split_tkeep_out_4);
    mp_s_axis_split_tkeep->add_mask(4,40,32);
  
  mp_s_axis_split_tlast->out_port[4](s_axis_split_tlast_out_4);
    mp_s_axis_split_tlast->add_mask(4,5,4);
  
  mp_s_axis_split_tid->out_port[4](s_axis_split_tid_out_4);
    mp_s_axis_split_tid->add_mask(4,5,4);
  
  mp_s_axis_split_tdest->out_port[4](s_axis_split_tdest_out_4);
    mp_s_axis_split_tdest->add_mask(4,20,16);
  
  mp_s_axis_split_tuser->out_port[4](s_axis_split_tuser_out_4);
    mp_s_axis_split_tuser->add_mask(4,5,4);
  mp_m_axis_concat_tvalid->in_port[4](m_axis_concat_tvalid_out_4);
  mp_m_axis_concat_tvalid->offset_port(4, 4);
  
  mp_m_axis_split_tready->out_port[4](m_axis_split_tready_out_4);
    mp_m_axis_split_tready->add_mask(4,5,4);
  mp_m_axis_concat_tdata->in_port[4](m_axis_concat_tdata_out_4);
  mp_m_axis_concat_tdata->offset_port(4, 256);
  mp_m_axis_concat_tstrb->in_port[4](m_axis_concat_tstrb_out_4);
  mp_m_axis_concat_tstrb->offset_port(4, 32);
  mp_m_axis_concat_tkeep->in_port[4](m_axis_concat_tkeep_out_4);
  mp_m_axis_concat_tkeep->offset_port(4, 32);
  mp_m_axis_concat_tlast->in_port[4](m_axis_concat_tlast_out_4);
  mp_m_axis_concat_tlast->offset_port(4, 4);
  mp_m_axis_concat_tid->in_port[4](m_axis_concat_tid_out_4);
  mp_m_axis_concat_tid->offset_port(4, 4);
  mp_m_axis_concat_tdest->in_port[4](m_axis_concat_tdest_out_4);
  mp_m_axis_concat_tdest->offset_port(4, 16);
  mp_m_axis_concat_tuser->in_port[4](m_axis_concat_tuser_out_4);
  mp_m_axis_concat_tuser->offset_port(4, 4);
  
  mp_s_axis_split_tvalid->out_port[5](s_axis_split_tvalid_out_5);
    mp_s_axis_split_tvalid->add_mask(5,6,5);
  mp_s_axis_concat_tready->in_port[5](s_axis_concat_tready_out_5);
  mp_s_axis_concat_tready->offset_port(5, 5);
  
  mp_s_axis_split_tdata->out_port[5](s_axis_split_tdata_out_5);
    mp_s_axis_split_tdata->add_mask(5,384,320);
  
  mp_s_axis_split_tstrb->out_port[5](s_axis_split_tstrb_out_5);
    mp_s_axis_split_tstrb->add_mask(5,48,40);
  
  mp_s_axis_split_tkeep->out_port[5](s_axis_split_tkeep_out_5);
    mp_s_axis_split_tkeep->add_mask(5,48,40);
  
  mp_s_axis_split_tlast->out_port[5](s_axis_split_tlast_out_5);
    mp_s_axis_split_tlast->add_mask(5,6,5);
  
  mp_s_axis_split_tid->out_port[5](s_axis_split_tid_out_5);
    mp_s_axis_split_tid->add_mask(5,6,5);
  
  mp_s_axis_split_tdest->out_port[5](s_axis_split_tdest_out_5);
    mp_s_axis_split_tdest->add_mask(5,24,20);
  
  mp_s_axis_split_tuser->out_port[5](s_axis_split_tuser_out_5);
    mp_s_axis_split_tuser->add_mask(5,6,5);
  mp_m_axis_concat_tvalid->in_port[5](m_axis_concat_tvalid_out_5);
  mp_m_axis_concat_tvalid->offset_port(5, 5);
  
  mp_m_axis_split_tready->out_port[5](m_axis_split_tready_out_5);
    mp_m_axis_split_tready->add_mask(5,6,5);
  mp_m_axis_concat_tdata->in_port[5](m_axis_concat_tdata_out_5);
  mp_m_axis_concat_tdata->offset_port(5, 320);
  mp_m_axis_concat_tstrb->in_port[5](m_axis_concat_tstrb_out_5);
  mp_m_axis_concat_tstrb->offset_port(5, 40);
  mp_m_axis_concat_tkeep->in_port[5](m_axis_concat_tkeep_out_5);
  mp_m_axis_concat_tkeep->offset_port(5, 40);
  mp_m_axis_concat_tlast->in_port[5](m_axis_concat_tlast_out_5);
  mp_m_axis_concat_tlast->offset_port(5, 5);
  mp_m_axis_concat_tid->in_port[5](m_axis_concat_tid_out_5);
  mp_m_axis_concat_tid->offset_port(5, 5);
  mp_m_axis_concat_tdest->in_port[5](m_axis_concat_tdest_out_5);
  mp_m_axis_concat_tdest->offset_port(5, 20);
  mp_m_axis_concat_tuser->in_port[5](m_axis_concat_tuser_out_5);
  mp_m_axis_concat_tuser->offset_port(5, 5);
  
  mp_s_axis_split_tvalid->out_port[6](s_axis_split_tvalid_out_6);
    mp_s_axis_split_tvalid->add_mask(6,7,6);
  mp_s_axis_concat_tready->in_port[6](s_axis_concat_tready_out_6);
  mp_s_axis_concat_tready->offset_port(6, 6);
  
  mp_s_axis_split_tdata->out_port[6](s_axis_split_tdata_out_6);
    mp_s_axis_split_tdata->add_mask(6,448,384);
  
  mp_s_axis_split_tstrb->out_port[6](s_axis_split_tstrb_out_6);
    mp_s_axis_split_tstrb->add_mask(6,56,48);
  
  mp_s_axis_split_tkeep->out_port[6](s_axis_split_tkeep_out_6);
    mp_s_axis_split_tkeep->add_mask(6,56,48);
  
  mp_s_axis_split_tlast->out_port[6](s_axis_split_tlast_out_6);
    mp_s_axis_split_tlast->add_mask(6,7,6);
  
  mp_s_axis_split_tid->out_port[6](s_axis_split_tid_out_6);
    mp_s_axis_split_tid->add_mask(6,7,6);
  
  mp_s_axis_split_tdest->out_port[6](s_axis_split_tdest_out_6);
    mp_s_axis_split_tdest->add_mask(6,28,24);
  
  mp_s_axis_split_tuser->out_port[6](s_axis_split_tuser_out_6);
    mp_s_axis_split_tuser->add_mask(6,7,6);
  mp_m_axis_concat_tvalid->in_port[6](m_axis_concat_tvalid_out_6);
  mp_m_axis_concat_tvalid->offset_port(6, 6);
  
  mp_m_axis_split_tready->out_port[6](m_axis_split_tready_out_6);
    mp_m_axis_split_tready->add_mask(6,7,6);
  mp_m_axis_concat_tdata->in_port[6](m_axis_concat_tdata_out_6);
  mp_m_axis_concat_tdata->offset_port(6, 384);
  mp_m_axis_concat_tstrb->in_port[6](m_axis_concat_tstrb_out_6);
  mp_m_axis_concat_tstrb->offset_port(6, 48);
  mp_m_axis_concat_tkeep->in_port[6](m_axis_concat_tkeep_out_6);
  mp_m_axis_concat_tkeep->offset_port(6, 48);
  mp_m_axis_concat_tlast->in_port[6](m_axis_concat_tlast_out_6);
  mp_m_axis_concat_tlast->offset_port(6, 6);
  mp_m_axis_concat_tid->in_port[6](m_axis_concat_tid_out_6);
  mp_m_axis_concat_tid->offset_port(6, 6);
  mp_m_axis_concat_tdest->in_port[6](m_axis_concat_tdest_out_6);
  mp_m_axis_concat_tdest->offset_port(6, 24);
  mp_m_axis_concat_tuser->in_port[6](m_axis_concat_tuser_out_6);
  mp_m_axis_concat_tuser->offset_port(6, 6);
  
  mp_s_axis_split_tvalid->out_port[7](s_axis_split_tvalid_out_7);
    mp_s_axis_split_tvalid->add_mask(7,8,7);
  mp_s_axis_concat_tready->in_port[7](s_axis_concat_tready_out_7);
  mp_s_axis_concat_tready->offset_port(7, 7);
  
  mp_s_axis_split_tdata->out_port[7](s_axis_split_tdata_out_7);
    mp_s_axis_split_tdata->add_mask(7,512,448);
  
  mp_s_axis_split_tstrb->out_port[7](s_axis_split_tstrb_out_7);
    mp_s_axis_split_tstrb->add_mask(7,64,56);
  
  mp_s_axis_split_tkeep->out_port[7](s_axis_split_tkeep_out_7);
    mp_s_axis_split_tkeep->add_mask(7,64,56);
  
  mp_s_axis_split_tlast->out_port[7](s_axis_split_tlast_out_7);
    mp_s_axis_split_tlast->add_mask(7,8,7);
  
  mp_s_axis_split_tid->out_port[7](s_axis_split_tid_out_7);
    mp_s_axis_split_tid->add_mask(7,8,7);
  
  mp_s_axis_split_tdest->out_port[7](s_axis_split_tdest_out_7);
    mp_s_axis_split_tdest->add_mask(7,32,28);
  
  mp_s_axis_split_tuser->out_port[7](s_axis_split_tuser_out_7);
    mp_s_axis_split_tuser->add_mask(7,8,7);
  mp_m_axis_concat_tvalid->in_port[7](m_axis_concat_tvalid_out_7);
  mp_m_axis_concat_tvalid->offset_port(7, 7);
  
  mp_m_axis_split_tready->out_port[7](m_axis_split_tready_out_7);
    mp_m_axis_split_tready->add_mask(7,8,7);
  mp_m_axis_concat_tdata->in_port[7](m_axis_concat_tdata_out_7);
  mp_m_axis_concat_tdata->offset_port(7, 448);
  mp_m_axis_concat_tstrb->in_port[7](m_axis_concat_tstrb_out_7);
  mp_m_axis_concat_tstrb->offset_port(7, 56);
  mp_m_axis_concat_tkeep->in_port[7](m_axis_concat_tkeep_out_7);
  mp_m_axis_concat_tkeep->offset_port(7, 56);
  mp_m_axis_concat_tlast->in_port[7](m_axis_concat_tlast_out_7);
  mp_m_axis_concat_tlast->offset_port(7, 7);
  mp_m_axis_concat_tid->in_port[7](m_axis_concat_tid_out_7);
  mp_m_axis_concat_tid->offset_port(7, 7);
  mp_m_axis_concat_tdest->in_port[7](m_axis_concat_tdest_out_7);
  mp_m_axis_concat_tdest->offset_port(7, 28);
  mp_m_axis_concat_tuser->in_port[7](m_axis_concat_tuser_out_7);
  mp_m_axis_concat_tuser->offset_port(7, 7);
  
  mp_s_axis_split_tvalid->out_port[8](s_axis_split_tvalid_out_8);
    mp_s_axis_split_tvalid->add_mask(8,9,8);
  mp_s_axis_concat_tready->in_port[8](s_axis_concat_tready_out_8);
  mp_s_axis_concat_tready->offset_port(8, 8);
  
  mp_s_axis_split_tdata->out_port[8](s_axis_split_tdata_out_8);
    mp_s_axis_split_tdata->add_mask(8,576,512);
  
  mp_s_axis_split_tstrb->out_port[8](s_axis_split_tstrb_out_8);
    mp_s_axis_split_tstrb->add_mask(8,72,64);
  
  mp_s_axis_split_tkeep->out_port[8](s_axis_split_tkeep_out_8);
    mp_s_axis_split_tkeep->add_mask(8,72,64);
  
  mp_s_axis_split_tlast->out_port[8](s_axis_split_tlast_out_8);
    mp_s_axis_split_tlast->add_mask(8,9,8);
  
  mp_s_axis_split_tid->out_port[8](s_axis_split_tid_out_8);
    mp_s_axis_split_tid->add_mask(8,9,8);
  
  mp_s_axis_split_tdest->out_port[8](s_axis_split_tdest_out_8);
    mp_s_axis_split_tdest->add_mask(8,36,32);
  
  mp_s_axis_split_tuser->out_port[8](s_axis_split_tuser_out_8);
    mp_s_axis_split_tuser->add_mask(8,9,8);
  mp_m_axis_concat_tvalid->in_port[8](m_axis_concat_tvalid_out_8);
  mp_m_axis_concat_tvalid->offset_port(8, 8);
  
  mp_m_axis_split_tready->out_port[8](m_axis_split_tready_out_8);
    mp_m_axis_split_tready->add_mask(8,9,8);
  mp_m_axis_concat_tdata->in_port[8](m_axis_concat_tdata_out_8);
  mp_m_axis_concat_tdata->offset_port(8, 512);
  mp_m_axis_concat_tstrb->in_port[8](m_axis_concat_tstrb_out_8);
  mp_m_axis_concat_tstrb->offset_port(8, 64);
  mp_m_axis_concat_tkeep->in_port[8](m_axis_concat_tkeep_out_8);
  mp_m_axis_concat_tkeep->offset_port(8, 64);
  mp_m_axis_concat_tlast->in_port[8](m_axis_concat_tlast_out_8);
  mp_m_axis_concat_tlast->offset_port(8, 8);
  mp_m_axis_concat_tid->in_port[8](m_axis_concat_tid_out_8);
  mp_m_axis_concat_tid->offset_port(8, 8);
  mp_m_axis_concat_tdest->in_port[8](m_axis_concat_tdest_out_8);
  mp_m_axis_concat_tdest->offset_port(8, 32);
  mp_m_axis_concat_tuser->in_port[8](m_axis_concat_tuser_out_8);
  mp_m_axis_concat_tuser->offset_port(8, 8);
  
  mp_s_axis_split_tvalid->out_port[9](s_axis_split_tvalid_out_9);
    mp_s_axis_split_tvalid->add_mask(9,10,9);
  mp_s_axis_concat_tready->in_port[9](s_axis_concat_tready_out_9);
  mp_s_axis_concat_tready->offset_port(9, 9);
  
  mp_s_axis_split_tdata->out_port[9](s_axis_split_tdata_out_9);
    mp_s_axis_split_tdata->add_mask(9,640,576);
  
  mp_s_axis_split_tstrb->out_port[9](s_axis_split_tstrb_out_9);
    mp_s_axis_split_tstrb->add_mask(9,80,72);
  
  mp_s_axis_split_tkeep->out_port[9](s_axis_split_tkeep_out_9);
    mp_s_axis_split_tkeep->add_mask(9,80,72);
  
  mp_s_axis_split_tlast->out_port[9](s_axis_split_tlast_out_9);
    mp_s_axis_split_tlast->add_mask(9,10,9);
  
  mp_s_axis_split_tid->out_port[9](s_axis_split_tid_out_9);
    mp_s_axis_split_tid->add_mask(9,10,9);
  
  mp_s_axis_split_tdest->out_port[9](s_axis_split_tdest_out_9);
    mp_s_axis_split_tdest->add_mask(9,40,36);
  
  mp_s_axis_split_tuser->out_port[9](s_axis_split_tuser_out_9);
    mp_s_axis_split_tuser->add_mask(9,10,9);
  mp_m_axis_concat_tvalid->in_port[9](m_axis_concat_tvalid_out_9);
  mp_m_axis_concat_tvalid->offset_port(9, 9);
  
  mp_m_axis_split_tready->out_port[9](m_axis_split_tready_out_9);
    mp_m_axis_split_tready->add_mask(9,10,9);
  mp_m_axis_concat_tdata->in_port[9](m_axis_concat_tdata_out_9);
  mp_m_axis_concat_tdata->offset_port(9, 576);
  mp_m_axis_concat_tstrb->in_port[9](m_axis_concat_tstrb_out_9);
  mp_m_axis_concat_tstrb->offset_port(9, 72);
  mp_m_axis_concat_tkeep->in_port[9](m_axis_concat_tkeep_out_9);
  mp_m_axis_concat_tkeep->offset_port(9, 72);
  mp_m_axis_concat_tlast->in_port[9](m_axis_concat_tlast_out_9);
  mp_m_axis_concat_tlast->offset_port(9, 9);
  mp_m_axis_concat_tid->in_port[9](m_axis_concat_tid_out_9);
  mp_m_axis_concat_tid->offset_port(9, 9);
  mp_m_axis_concat_tdest->in_port[9](m_axis_concat_tdest_out_9);
  mp_m_axis_concat_tdest->offset_port(9, 36);
  mp_m_axis_concat_tuser->in_port[9](m_axis_concat_tuser_out_9);
  mp_m_axis_concat_tuser->offset_port(9, 9);

  // initialize socket stubs

}

void bd_d92b_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S00_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXIS' transactor parameters
    xsc::common_cpp::properties S00_AXIS_transactor_param_props;
    S00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S00_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S00_AXIS_transactor", S00_AXIS_transactor_param_props);

    // S00_AXIS' transactor ports

    mp_s_axis_tvalid_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_0");
    mp_s_axis_tvalid_converter_0->vector_in(s_axis_split_tvalid_out_0);
    mp_s_axis_tvalid_converter_0->scalar_out(m_s_axis_tvalid_converter_0_signal);
    mp_S00_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_0_signal);
    mp_s_axis_tready_converter_0 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_0");
    mp_s_axis_tready_converter_0->scalar_in(m_s_axis_tready_converter_0_signal);
    mp_s_axis_tready_converter_0->vector_out(s_axis_concat_tready_out_0);
    mp_S00_AXIS_transactor->TREADY(m_s_axis_tready_converter_0_signal);
    mp_s_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_0");
    mp_s_axis_tdata_converter_0->vector_in(s_axis_split_tdata_out_0);
    mp_s_axis_tdata_converter_0->vector_out(m_s_axis_tdata_converter_0_signal);
    mp_S00_AXIS_transactor->TDATA(m_s_axis_tdata_converter_0_signal);
    mp_s_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_0");
    mp_s_axis_tstrb_converter_0->vector_in(s_axis_split_tstrb_out_0);
    mp_s_axis_tstrb_converter_0->vector_out(m_s_axis_tstrb_converter_0_signal);
    mp_S00_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_0_signal);
    mp_s_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_0");
    mp_s_axis_tkeep_converter_0->vector_in(s_axis_split_tkeep_out_0);
    mp_s_axis_tkeep_converter_0->vector_out(m_s_axis_tkeep_converter_0_signal);
    mp_S00_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_0_signal);
    mp_s_axis_tlast_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_0");
    mp_s_axis_tlast_converter_0->vector_in(s_axis_split_tlast_out_0);
    mp_s_axis_tlast_converter_0->scalar_out(m_s_axis_tlast_converter_0_signal);
    mp_S00_AXIS_transactor->TLAST(m_s_axis_tlast_converter_0_signal);
    mp_s_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_0");
    mp_s_axis_tid_converter_0->vector_in(s_axis_split_tid_out_0);
    mp_s_axis_tid_converter_0->vector_out(m_s_axis_tid_converter_0_signal);
    mp_S00_AXIS_transactor->TID(m_s_axis_tid_converter_0_signal);
    mp_s_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_0");
    mp_s_axis_tdest_converter_0->vector_in(s_axis_split_tdest_out_0);
    mp_s_axis_tdest_converter_0->vector_out(m_s_axis_tdest_converter_0_signal);
    mp_S00_AXIS_transactor->TDEST(m_s_axis_tdest_converter_0_signal);
    mp_s_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_0");
    mp_s_axis_tuser_converter_0->vector_in(s_axis_split_tuser_out_0);
    mp_s_axis_tuser_converter_0->vector_out(m_s_axis_tuser_converter_0_signal);
    mp_S00_AXIS_transactor->TUSER(m_s_axis_tuser_converter_0_signal);
    mp_S00_AXIS_transactor->CLK(aclk);
    mp_S00_AXIS_transactor->RST(aresetn);

    // S00_AXIS' transactor sockets

    mp_impl->S00_AXIS_TARGET_SOCKET->bind(*(mp_S00_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M00_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M00_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXIS' transactor parameters
    xsc::common_cpp::properties M00_AXIS_transactor_param_props;
    M00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M00_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M00_AXIS_transactor", M00_AXIS_transactor_param_props);

    // M00_AXIS' transactor ports

    mp_m_axis_tvalid_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_0");
    mp_m_axis_tvalid_converter_0->scalar_in(m_m_axis_tvalid_converter_0_signal);
    mp_m_axis_tvalid_converter_0->vector_out(m_axis_concat_tvalid_out_0);
    mp_M00_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_0_signal);
    mp_m_axis_tready_converter_0 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_0");
    mp_m_axis_tready_converter_0->vector_in(m_axis_split_tready_out_0);
    mp_m_axis_tready_converter_0->scalar_out(m_m_axis_tready_converter_0_signal);
    mp_M00_AXIS_transactor->TREADY(m_m_axis_tready_converter_0_signal);
    mp_m_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_0");
    mp_m_axis_tdata_converter_0->vector_in(m_m_axis_tdata_converter_0_signal);
    mp_m_axis_tdata_converter_0->vector_out(m_axis_concat_tdata_out_0);
    mp_M00_AXIS_transactor->TDATA(m_m_axis_tdata_converter_0_signal);
    mp_m_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_0");
    mp_m_axis_tstrb_converter_0->vector_in(m_m_axis_tstrb_converter_0_signal);
    mp_m_axis_tstrb_converter_0->vector_out(m_axis_concat_tstrb_out_0);
    mp_M00_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_0_signal);
    mp_m_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_0");
    mp_m_axis_tkeep_converter_0->vector_in(m_m_axis_tkeep_converter_0_signal);
    mp_m_axis_tkeep_converter_0->vector_out(m_axis_concat_tkeep_out_0);
    mp_M00_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_0_signal);
    mp_m_axis_tlast_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_0");
    mp_m_axis_tlast_converter_0->scalar_in(m_m_axis_tlast_converter_0_signal);
    mp_m_axis_tlast_converter_0->vector_out(m_axis_concat_tlast_out_0);
    mp_M00_AXIS_transactor->TLAST(m_m_axis_tlast_converter_0_signal);
    mp_m_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_0");
    mp_m_axis_tid_converter_0->vector_in(m_m_axis_tid_converter_0_signal);
    mp_m_axis_tid_converter_0->vector_out(m_axis_concat_tid_out_0);
    mp_M00_AXIS_transactor->TID(m_m_axis_tid_converter_0_signal);
    mp_m_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_0");
    mp_m_axis_tdest_converter_0->vector_in(m_m_axis_tdest_converter_0_signal);
    mp_m_axis_tdest_converter_0->vector_out(m_axis_concat_tdest_out_0);
    mp_M00_AXIS_transactor->TDEST(m_m_axis_tdest_converter_0_signal);
    mp_m_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_0");
    mp_m_axis_tuser_converter_0->vector_in(m_m_axis_tuser_converter_0_signal);
    mp_m_axis_tuser_converter_0->vector_out(m_axis_concat_tuser_out_0);
    mp_M00_AXIS_transactor->TUSER(m_m_axis_tuser_converter_0_signal);
    mp_M00_AXIS_transactor->CLK(aclk);
    mp_M00_AXIS_transactor->RST(aresetn);

    // M00_AXIS' transactor sockets

    mp_impl->M00_AXIS_INITIATOR_SOCKET->bind(*(mp_M00_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S01_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S01_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S01_AXIS' transactor parameters
    xsc::common_cpp::properties S01_AXIS_transactor_param_props;
    S01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S01_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S01_AXIS_transactor", S01_AXIS_transactor_param_props);

    // S01_AXIS' transactor ports

    mp_s_axis_tvalid_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_1");
    mp_s_axis_tvalid_converter_1->vector_in(s_axis_split_tvalid_out_1);
    mp_s_axis_tvalid_converter_1->scalar_out(m_s_axis_tvalid_converter_1_signal);
    mp_S01_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_1_signal);
    mp_s_axis_tready_converter_1 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_1");
    mp_s_axis_tready_converter_1->scalar_in(m_s_axis_tready_converter_1_signal);
    mp_s_axis_tready_converter_1->vector_out(s_axis_concat_tready_out_1);
    mp_S01_AXIS_transactor->TREADY(m_s_axis_tready_converter_1_signal);
    mp_s_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_1");
    mp_s_axis_tdata_converter_1->vector_in(s_axis_split_tdata_out_1);
    mp_s_axis_tdata_converter_1->vector_out(m_s_axis_tdata_converter_1_signal);
    mp_S01_AXIS_transactor->TDATA(m_s_axis_tdata_converter_1_signal);
    mp_s_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_1");
    mp_s_axis_tstrb_converter_1->vector_in(s_axis_split_tstrb_out_1);
    mp_s_axis_tstrb_converter_1->vector_out(m_s_axis_tstrb_converter_1_signal);
    mp_S01_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_1_signal);
    mp_s_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_1");
    mp_s_axis_tkeep_converter_1->vector_in(s_axis_split_tkeep_out_1);
    mp_s_axis_tkeep_converter_1->vector_out(m_s_axis_tkeep_converter_1_signal);
    mp_S01_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_1_signal);
    mp_s_axis_tlast_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_1");
    mp_s_axis_tlast_converter_1->vector_in(s_axis_split_tlast_out_1);
    mp_s_axis_tlast_converter_1->scalar_out(m_s_axis_tlast_converter_1_signal);
    mp_S01_AXIS_transactor->TLAST(m_s_axis_tlast_converter_1_signal);
    mp_s_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_1");
    mp_s_axis_tid_converter_1->vector_in(s_axis_split_tid_out_1);
    mp_s_axis_tid_converter_1->vector_out(m_s_axis_tid_converter_1_signal);
    mp_S01_AXIS_transactor->TID(m_s_axis_tid_converter_1_signal);
    mp_s_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_1");
    mp_s_axis_tdest_converter_1->vector_in(s_axis_split_tdest_out_1);
    mp_s_axis_tdest_converter_1->vector_out(m_s_axis_tdest_converter_1_signal);
    mp_S01_AXIS_transactor->TDEST(m_s_axis_tdest_converter_1_signal);
    mp_s_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_1");
    mp_s_axis_tuser_converter_1->vector_in(s_axis_split_tuser_out_1);
    mp_s_axis_tuser_converter_1->vector_out(m_s_axis_tuser_converter_1_signal);
    mp_S01_AXIS_transactor->TUSER(m_s_axis_tuser_converter_1_signal);
    mp_S01_AXIS_transactor->CLK(aclk);
    mp_S01_AXIS_transactor->RST(aresetn);

    // S01_AXIS' transactor sockets

    mp_impl->S01_AXIS_TARGET_SOCKET->bind(*(mp_S01_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M01_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M01_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXIS' transactor parameters
    xsc::common_cpp::properties M01_AXIS_transactor_param_props;
    M01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M01_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M01_AXIS_transactor", M01_AXIS_transactor_param_props);

    // M01_AXIS' transactor ports

    mp_m_axis_tvalid_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_1");
    mp_m_axis_tvalid_converter_1->scalar_in(m_m_axis_tvalid_converter_1_signal);
    mp_m_axis_tvalid_converter_1->vector_out(m_axis_concat_tvalid_out_1);
    mp_M01_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_1_signal);
    mp_m_axis_tready_converter_1 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_1");
    mp_m_axis_tready_converter_1->vector_in(m_axis_split_tready_out_1);
    mp_m_axis_tready_converter_1->scalar_out(m_m_axis_tready_converter_1_signal);
    mp_M01_AXIS_transactor->TREADY(m_m_axis_tready_converter_1_signal);
    mp_m_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_1");
    mp_m_axis_tdata_converter_1->vector_in(m_m_axis_tdata_converter_1_signal);
    mp_m_axis_tdata_converter_1->vector_out(m_axis_concat_tdata_out_1);
    mp_M01_AXIS_transactor->TDATA(m_m_axis_tdata_converter_1_signal);
    mp_m_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_1");
    mp_m_axis_tstrb_converter_1->vector_in(m_m_axis_tstrb_converter_1_signal);
    mp_m_axis_tstrb_converter_1->vector_out(m_axis_concat_tstrb_out_1);
    mp_M01_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_1_signal);
    mp_m_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_1");
    mp_m_axis_tkeep_converter_1->vector_in(m_m_axis_tkeep_converter_1_signal);
    mp_m_axis_tkeep_converter_1->vector_out(m_axis_concat_tkeep_out_1);
    mp_M01_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_1_signal);
    mp_m_axis_tlast_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_1");
    mp_m_axis_tlast_converter_1->scalar_in(m_m_axis_tlast_converter_1_signal);
    mp_m_axis_tlast_converter_1->vector_out(m_axis_concat_tlast_out_1);
    mp_M01_AXIS_transactor->TLAST(m_m_axis_tlast_converter_1_signal);
    mp_m_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_1");
    mp_m_axis_tid_converter_1->vector_in(m_m_axis_tid_converter_1_signal);
    mp_m_axis_tid_converter_1->vector_out(m_axis_concat_tid_out_1);
    mp_M01_AXIS_transactor->TID(m_m_axis_tid_converter_1_signal);
    mp_m_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_1");
    mp_m_axis_tdest_converter_1->vector_in(m_m_axis_tdest_converter_1_signal);
    mp_m_axis_tdest_converter_1->vector_out(m_axis_concat_tdest_out_1);
    mp_M01_AXIS_transactor->TDEST(m_m_axis_tdest_converter_1_signal);
    mp_m_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_1");
    mp_m_axis_tuser_converter_1->vector_in(m_m_axis_tuser_converter_1_signal);
    mp_m_axis_tuser_converter_1->vector_out(m_axis_concat_tuser_out_1);
    mp_M01_AXIS_transactor->TUSER(m_m_axis_tuser_converter_1_signal);
    mp_M01_AXIS_transactor->CLK(aclk);
    mp_M01_AXIS_transactor->RST(aresetn);

    // M01_AXIS' transactor sockets

    mp_impl->M01_AXIS_INITIATOR_SOCKET->bind(*(mp_M01_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S02_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S02_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S02_AXIS' transactor parameters
    xsc::common_cpp::properties S02_AXIS_transactor_param_props;
    S02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S02_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S02_AXIS_transactor", S02_AXIS_transactor_param_props);

    // S02_AXIS' transactor ports

    mp_s_axis_tvalid_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_2");
    mp_s_axis_tvalid_converter_2->vector_in(s_axis_split_tvalid_out_2);
    mp_s_axis_tvalid_converter_2->scalar_out(m_s_axis_tvalid_converter_2_signal);
    mp_S02_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_2_signal);
    mp_s_axis_tready_converter_2 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_2");
    mp_s_axis_tready_converter_2->scalar_in(m_s_axis_tready_converter_2_signal);
    mp_s_axis_tready_converter_2->vector_out(s_axis_concat_tready_out_2);
    mp_S02_AXIS_transactor->TREADY(m_s_axis_tready_converter_2_signal);
    mp_s_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_2");
    mp_s_axis_tdata_converter_2->vector_in(s_axis_split_tdata_out_2);
    mp_s_axis_tdata_converter_2->vector_out(m_s_axis_tdata_converter_2_signal);
    mp_S02_AXIS_transactor->TDATA(m_s_axis_tdata_converter_2_signal);
    mp_s_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_2");
    mp_s_axis_tstrb_converter_2->vector_in(s_axis_split_tstrb_out_2);
    mp_s_axis_tstrb_converter_2->vector_out(m_s_axis_tstrb_converter_2_signal);
    mp_S02_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_2_signal);
    mp_s_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_2");
    mp_s_axis_tkeep_converter_2->vector_in(s_axis_split_tkeep_out_2);
    mp_s_axis_tkeep_converter_2->vector_out(m_s_axis_tkeep_converter_2_signal);
    mp_S02_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_2_signal);
    mp_s_axis_tlast_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_2");
    mp_s_axis_tlast_converter_2->vector_in(s_axis_split_tlast_out_2);
    mp_s_axis_tlast_converter_2->scalar_out(m_s_axis_tlast_converter_2_signal);
    mp_S02_AXIS_transactor->TLAST(m_s_axis_tlast_converter_2_signal);
    mp_s_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_2");
    mp_s_axis_tid_converter_2->vector_in(s_axis_split_tid_out_2);
    mp_s_axis_tid_converter_2->vector_out(m_s_axis_tid_converter_2_signal);
    mp_S02_AXIS_transactor->TID(m_s_axis_tid_converter_2_signal);
    mp_s_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_2");
    mp_s_axis_tdest_converter_2->vector_in(s_axis_split_tdest_out_2);
    mp_s_axis_tdest_converter_2->vector_out(m_s_axis_tdest_converter_2_signal);
    mp_S02_AXIS_transactor->TDEST(m_s_axis_tdest_converter_2_signal);
    mp_s_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_2");
    mp_s_axis_tuser_converter_2->vector_in(s_axis_split_tuser_out_2);
    mp_s_axis_tuser_converter_2->vector_out(m_s_axis_tuser_converter_2_signal);
    mp_S02_AXIS_transactor->TUSER(m_s_axis_tuser_converter_2_signal);
    mp_S02_AXIS_transactor->CLK(aclk);
    mp_S02_AXIS_transactor->RST(aresetn);

    // S02_AXIS' transactor sockets

    mp_impl->S02_AXIS_TARGET_SOCKET->bind(*(mp_S02_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M02_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M02_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXIS' transactor parameters
    xsc::common_cpp::properties M02_AXIS_transactor_param_props;
    M02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M02_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M02_AXIS_transactor", M02_AXIS_transactor_param_props);

    // M02_AXIS' transactor ports

    mp_m_axis_tvalid_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_2");
    mp_m_axis_tvalid_converter_2->scalar_in(m_m_axis_tvalid_converter_2_signal);
    mp_m_axis_tvalid_converter_2->vector_out(m_axis_concat_tvalid_out_2);
    mp_M02_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_2_signal);
    mp_m_axis_tready_converter_2 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_2");
    mp_m_axis_tready_converter_2->vector_in(m_axis_split_tready_out_2);
    mp_m_axis_tready_converter_2->scalar_out(m_m_axis_tready_converter_2_signal);
    mp_M02_AXIS_transactor->TREADY(m_m_axis_tready_converter_2_signal);
    mp_m_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_2");
    mp_m_axis_tdata_converter_2->vector_in(m_m_axis_tdata_converter_2_signal);
    mp_m_axis_tdata_converter_2->vector_out(m_axis_concat_tdata_out_2);
    mp_M02_AXIS_transactor->TDATA(m_m_axis_tdata_converter_2_signal);
    mp_m_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_2");
    mp_m_axis_tstrb_converter_2->vector_in(m_m_axis_tstrb_converter_2_signal);
    mp_m_axis_tstrb_converter_2->vector_out(m_axis_concat_tstrb_out_2);
    mp_M02_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_2_signal);
    mp_m_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_2");
    mp_m_axis_tkeep_converter_2->vector_in(m_m_axis_tkeep_converter_2_signal);
    mp_m_axis_tkeep_converter_2->vector_out(m_axis_concat_tkeep_out_2);
    mp_M02_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_2_signal);
    mp_m_axis_tlast_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_2");
    mp_m_axis_tlast_converter_2->scalar_in(m_m_axis_tlast_converter_2_signal);
    mp_m_axis_tlast_converter_2->vector_out(m_axis_concat_tlast_out_2);
    mp_M02_AXIS_transactor->TLAST(m_m_axis_tlast_converter_2_signal);
    mp_m_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_2");
    mp_m_axis_tid_converter_2->vector_in(m_m_axis_tid_converter_2_signal);
    mp_m_axis_tid_converter_2->vector_out(m_axis_concat_tid_out_2);
    mp_M02_AXIS_transactor->TID(m_m_axis_tid_converter_2_signal);
    mp_m_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_2");
    mp_m_axis_tdest_converter_2->vector_in(m_m_axis_tdest_converter_2_signal);
    mp_m_axis_tdest_converter_2->vector_out(m_axis_concat_tdest_out_2);
    mp_M02_AXIS_transactor->TDEST(m_m_axis_tdest_converter_2_signal);
    mp_m_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_2");
    mp_m_axis_tuser_converter_2->vector_in(m_m_axis_tuser_converter_2_signal);
    mp_m_axis_tuser_converter_2->vector_out(m_axis_concat_tuser_out_2);
    mp_M02_AXIS_transactor->TUSER(m_m_axis_tuser_converter_2_signal);
    mp_M02_AXIS_transactor->CLK(aclk);
    mp_M02_AXIS_transactor->RST(aresetn);

    // M02_AXIS' transactor sockets

    mp_impl->M02_AXIS_INITIATOR_SOCKET->bind(*(mp_M02_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S03_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S03_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S03_AXIS' transactor parameters
    xsc::common_cpp::properties S03_AXIS_transactor_param_props;
    S03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S03_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S03_AXIS_transactor", S03_AXIS_transactor_param_props);

    // S03_AXIS' transactor ports

    mp_s_axis_tvalid_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_3");
    mp_s_axis_tvalid_converter_3->vector_in(s_axis_split_tvalid_out_3);
    mp_s_axis_tvalid_converter_3->scalar_out(m_s_axis_tvalid_converter_3_signal);
    mp_S03_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_3_signal);
    mp_s_axis_tready_converter_3 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_3");
    mp_s_axis_tready_converter_3->scalar_in(m_s_axis_tready_converter_3_signal);
    mp_s_axis_tready_converter_3->vector_out(s_axis_concat_tready_out_3);
    mp_S03_AXIS_transactor->TREADY(m_s_axis_tready_converter_3_signal);
    mp_s_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_3");
    mp_s_axis_tdata_converter_3->vector_in(s_axis_split_tdata_out_3);
    mp_s_axis_tdata_converter_3->vector_out(m_s_axis_tdata_converter_3_signal);
    mp_S03_AXIS_transactor->TDATA(m_s_axis_tdata_converter_3_signal);
    mp_s_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_3");
    mp_s_axis_tstrb_converter_3->vector_in(s_axis_split_tstrb_out_3);
    mp_s_axis_tstrb_converter_3->vector_out(m_s_axis_tstrb_converter_3_signal);
    mp_S03_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_3_signal);
    mp_s_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_3");
    mp_s_axis_tkeep_converter_3->vector_in(s_axis_split_tkeep_out_3);
    mp_s_axis_tkeep_converter_3->vector_out(m_s_axis_tkeep_converter_3_signal);
    mp_S03_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_3_signal);
    mp_s_axis_tlast_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_3");
    mp_s_axis_tlast_converter_3->vector_in(s_axis_split_tlast_out_3);
    mp_s_axis_tlast_converter_3->scalar_out(m_s_axis_tlast_converter_3_signal);
    mp_S03_AXIS_transactor->TLAST(m_s_axis_tlast_converter_3_signal);
    mp_s_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_3");
    mp_s_axis_tid_converter_3->vector_in(s_axis_split_tid_out_3);
    mp_s_axis_tid_converter_3->vector_out(m_s_axis_tid_converter_3_signal);
    mp_S03_AXIS_transactor->TID(m_s_axis_tid_converter_3_signal);
    mp_s_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_3");
    mp_s_axis_tdest_converter_3->vector_in(s_axis_split_tdest_out_3);
    mp_s_axis_tdest_converter_3->vector_out(m_s_axis_tdest_converter_3_signal);
    mp_S03_AXIS_transactor->TDEST(m_s_axis_tdest_converter_3_signal);
    mp_s_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_3");
    mp_s_axis_tuser_converter_3->vector_in(s_axis_split_tuser_out_3);
    mp_s_axis_tuser_converter_3->vector_out(m_s_axis_tuser_converter_3_signal);
    mp_S03_AXIS_transactor->TUSER(m_s_axis_tuser_converter_3_signal);
    mp_S03_AXIS_transactor->CLK(aclk);
    mp_S03_AXIS_transactor->RST(aresetn);

    // S03_AXIS' transactor sockets

    mp_impl->S03_AXIS_TARGET_SOCKET->bind(*(mp_S03_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M03_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M03_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXIS' transactor parameters
    xsc::common_cpp::properties M03_AXIS_transactor_param_props;
    M03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M03_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M03_AXIS_transactor", M03_AXIS_transactor_param_props);

    // M03_AXIS' transactor ports

    mp_m_axis_tvalid_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_3");
    mp_m_axis_tvalid_converter_3->scalar_in(m_m_axis_tvalid_converter_3_signal);
    mp_m_axis_tvalid_converter_3->vector_out(m_axis_concat_tvalid_out_3);
    mp_M03_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_3_signal);
    mp_m_axis_tready_converter_3 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_3");
    mp_m_axis_tready_converter_3->vector_in(m_axis_split_tready_out_3);
    mp_m_axis_tready_converter_3->scalar_out(m_m_axis_tready_converter_3_signal);
    mp_M03_AXIS_transactor->TREADY(m_m_axis_tready_converter_3_signal);
    mp_m_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_3");
    mp_m_axis_tdata_converter_3->vector_in(m_m_axis_tdata_converter_3_signal);
    mp_m_axis_tdata_converter_3->vector_out(m_axis_concat_tdata_out_3);
    mp_M03_AXIS_transactor->TDATA(m_m_axis_tdata_converter_3_signal);
    mp_m_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_3");
    mp_m_axis_tstrb_converter_3->vector_in(m_m_axis_tstrb_converter_3_signal);
    mp_m_axis_tstrb_converter_3->vector_out(m_axis_concat_tstrb_out_3);
    mp_M03_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_3_signal);
    mp_m_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_3");
    mp_m_axis_tkeep_converter_3->vector_in(m_m_axis_tkeep_converter_3_signal);
    mp_m_axis_tkeep_converter_3->vector_out(m_axis_concat_tkeep_out_3);
    mp_M03_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_3_signal);
    mp_m_axis_tlast_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_3");
    mp_m_axis_tlast_converter_3->scalar_in(m_m_axis_tlast_converter_3_signal);
    mp_m_axis_tlast_converter_3->vector_out(m_axis_concat_tlast_out_3);
    mp_M03_AXIS_transactor->TLAST(m_m_axis_tlast_converter_3_signal);
    mp_m_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_3");
    mp_m_axis_tid_converter_3->vector_in(m_m_axis_tid_converter_3_signal);
    mp_m_axis_tid_converter_3->vector_out(m_axis_concat_tid_out_3);
    mp_M03_AXIS_transactor->TID(m_m_axis_tid_converter_3_signal);
    mp_m_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_3");
    mp_m_axis_tdest_converter_3->vector_in(m_m_axis_tdest_converter_3_signal);
    mp_m_axis_tdest_converter_3->vector_out(m_axis_concat_tdest_out_3);
    mp_M03_AXIS_transactor->TDEST(m_m_axis_tdest_converter_3_signal);
    mp_m_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_3");
    mp_m_axis_tuser_converter_3->vector_in(m_m_axis_tuser_converter_3_signal);
    mp_m_axis_tuser_converter_3->vector_out(m_axis_concat_tuser_out_3);
    mp_M03_AXIS_transactor->TUSER(m_m_axis_tuser_converter_3_signal);
    mp_M03_AXIS_transactor->CLK(aclk);
    mp_M03_AXIS_transactor->RST(aresetn);

    // M03_AXIS' transactor sockets

    mp_impl->M03_AXIS_INITIATOR_SOCKET->bind(*(mp_M03_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S04_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S04_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S04_AXIS' transactor parameters
    xsc::common_cpp::properties S04_AXIS_transactor_param_props;
    S04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S04_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S04_AXIS_transactor", S04_AXIS_transactor_param_props);

    // S04_AXIS' transactor ports

    mp_s_axis_tvalid_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_4");
    mp_s_axis_tvalid_converter_4->vector_in(s_axis_split_tvalid_out_4);
    mp_s_axis_tvalid_converter_4->scalar_out(m_s_axis_tvalid_converter_4_signal);
    mp_S04_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_4_signal);
    mp_s_axis_tready_converter_4 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_4");
    mp_s_axis_tready_converter_4->scalar_in(m_s_axis_tready_converter_4_signal);
    mp_s_axis_tready_converter_4->vector_out(s_axis_concat_tready_out_4);
    mp_S04_AXIS_transactor->TREADY(m_s_axis_tready_converter_4_signal);
    mp_s_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_4");
    mp_s_axis_tdata_converter_4->vector_in(s_axis_split_tdata_out_4);
    mp_s_axis_tdata_converter_4->vector_out(m_s_axis_tdata_converter_4_signal);
    mp_S04_AXIS_transactor->TDATA(m_s_axis_tdata_converter_4_signal);
    mp_s_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_4");
    mp_s_axis_tstrb_converter_4->vector_in(s_axis_split_tstrb_out_4);
    mp_s_axis_tstrb_converter_4->vector_out(m_s_axis_tstrb_converter_4_signal);
    mp_S04_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_4_signal);
    mp_s_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_4");
    mp_s_axis_tkeep_converter_4->vector_in(s_axis_split_tkeep_out_4);
    mp_s_axis_tkeep_converter_4->vector_out(m_s_axis_tkeep_converter_4_signal);
    mp_S04_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_4_signal);
    mp_s_axis_tlast_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_4");
    mp_s_axis_tlast_converter_4->vector_in(s_axis_split_tlast_out_4);
    mp_s_axis_tlast_converter_4->scalar_out(m_s_axis_tlast_converter_4_signal);
    mp_S04_AXIS_transactor->TLAST(m_s_axis_tlast_converter_4_signal);
    mp_s_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_4");
    mp_s_axis_tid_converter_4->vector_in(s_axis_split_tid_out_4);
    mp_s_axis_tid_converter_4->vector_out(m_s_axis_tid_converter_4_signal);
    mp_S04_AXIS_transactor->TID(m_s_axis_tid_converter_4_signal);
    mp_s_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_4");
    mp_s_axis_tdest_converter_4->vector_in(s_axis_split_tdest_out_4);
    mp_s_axis_tdest_converter_4->vector_out(m_s_axis_tdest_converter_4_signal);
    mp_S04_AXIS_transactor->TDEST(m_s_axis_tdest_converter_4_signal);
    mp_s_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_4");
    mp_s_axis_tuser_converter_4->vector_in(s_axis_split_tuser_out_4);
    mp_s_axis_tuser_converter_4->vector_out(m_s_axis_tuser_converter_4_signal);
    mp_S04_AXIS_transactor->TUSER(m_s_axis_tuser_converter_4_signal);
    mp_S04_AXIS_transactor->CLK(aclk);
    mp_S04_AXIS_transactor->RST(aresetn);

    // S04_AXIS' transactor sockets

    mp_impl->S04_AXIS_TARGET_SOCKET->bind(*(mp_S04_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M04_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M04_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXIS' transactor parameters
    xsc::common_cpp::properties M04_AXIS_transactor_param_props;
    M04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M04_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M04_AXIS_transactor", M04_AXIS_transactor_param_props);

    // M04_AXIS' transactor ports

    mp_m_axis_tvalid_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_4");
    mp_m_axis_tvalid_converter_4->scalar_in(m_m_axis_tvalid_converter_4_signal);
    mp_m_axis_tvalid_converter_4->vector_out(m_axis_concat_tvalid_out_4);
    mp_M04_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_4_signal);
    mp_m_axis_tready_converter_4 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_4");
    mp_m_axis_tready_converter_4->vector_in(m_axis_split_tready_out_4);
    mp_m_axis_tready_converter_4->scalar_out(m_m_axis_tready_converter_4_signal);
    mp_M04_AXIS_transactor->TREADY(m_m_axis_tready_converter_4_signal);
    mp_m_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_4");
    mp_m_axis_tdata_converter_4->vector_in(m_m_axis_tdata_converter_4_signal);
    mp_m_axis_tdata_converter_4->vector_out(m_axis_concat_tdata_out_4);
    mp_M04_AXIS_transactor->TDATA(m_m_axis_tdata_converter_4_signal);
    mp_m_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_4");
    mp_m_axis_tstrb_converter_4->vector_in(m_m_axis_tstrb_converter_4_signal);
    mp_m_axis_tstrb_converter_4->vector_out(m_axis_concat_tstrb_out_4);
    mp_M04_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_4_signal);
    mp_m_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_4");
    mp_m_axis_tkeep_converter_4->vector_in(m_m_axis_tkeep_converter_4_signal);
    mp_m_axis_tkeep_converter_4->vector_out(m_axis_concat_tkeep_out_4);
    mp_M04_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_4_signal);
    mp_m_axis_tlast_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_4");
    mp_m_axis_tlast_converter_4->scalar_in(m_m_axis_tlast_converter_4_signal);
    mp_m_axis_tlast_converter_4->vector_out(m_axis_concat_tlast_out_4);
    mp_M04_AXIS_transactor->TLAST(m_m_axis_tlast_converter_4_signal);
    mp_m_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_4");
    mp_m_axis_tid_converter_4->vector_in(m_m_axis_tid_converter_4_signal);
    mp_m_axis_tid_converter_4->vector_out(m_axis_concat_tid_out_4);
    mp_M04_AXIS_transactor->TID(m_m_axis_tid_converter_4_signal);
    mp_m_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_4");
    mp_m_axis_tdest_converter_4->vector_in(m_m_axis_tdest_converter_4_signal);
    mp_m_axis_tdest_converter_4->vector_out(m_axis_concat_tdest_out_4);
    mp_M04_AXIS_transactor->TDEST(m_m_axis_tdest_converter_4_signal);
    mp_m_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_4");
    mp_m_axis_tuser_converter_4->vector_in(m_m_axis_tuser_converter_4_signal);
    mp_m_axis_tuser_converter_4->vector_out(m_axis_concat_tuser_out_4);
    mp_M04_AXIS_transactor->TUSER(m_m_axis_tuser_converter_4_signal);
    mp_M04_AXIS_transactor->CLK(aclk);
    mp_M04_AXIS_transactor->RST(aresetn);

    // M04_AXIS' transactor sockets

    mp_impl->M04_AXIS_INITIATOR_SOCKET->bind(*(mp_M04_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S05_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S05_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S05_AXIS' transactor parameters
    xsc::common_cpp::properties S05_AXIS_transactor_param_props;
    S05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S05_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S05_AXIS_transactor", S05_AXIS_transactor_param_props);

    // S05_AXIS' transactor ports

    mp_s_axis_tvalid_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_5");
    mp_s_axis_tvalid_converter_5->vector_in(s_axis_split_tvalid_out_5);
    mp_s_axis_tvalid_converter_5->scalar_out(m_s_axis_tvalid_converter_5_signal);
    mp_S05_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_5_signal);
    mp_s_axis_tready_converter_5 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_5");
    mp_s_axis_tready_converter_5->scalar_in(m_s_axis_tready_converter_5_signal);
    mp_s_axis_tready_converter_5->vector_out(s_axis_concat_tready_out_5);
    mp_S05_AXIS_transactor->TREADY(m_s_axis_tready_converter_5_signal);
    mp_s_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_5");
    mp_s_axis_tdata_converter_5->vector_in(s_axis_split_tdata_out_5);
    mp_s_axis_tdata_converter_5->vector_out(m_s_axis_tdata_converter_5_signal);
    mp_S05_AXIS_transactor->TDATA(m_s_axis_tdata_converter_5_signal);
    mp_s_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_5");
    mp_s_axis_tstrb_converter_5->vector_in(s_axis_split_tstrb_out_5);
    mp_s_axis_tstrb_converter_5->vector_out(m_s_axis_tstrb_converter_5_signal);
    mp_S05_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_5_signal);
    mp_s_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_5");
    mp_s_axis_tkeep_converter_5->vector_in(s_axis_split_tkeep_out_5);
    mp_s_axis_tkeep_converter_5->vector_out(m_s_axis_tkeep_converter_5_signal);
    mp_S05_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_5_signal);
    mp_s_axis_tlast_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_5");
    mp_s_axis_tlast_converter_5->vector_in(s_axis_split_tlast_out_5);
    mp_s_axis_tlast_converter_5->scalar_out(m_s_axis_tlast_converter_5_signal);
    mp_S05_AXIS_transactor->TLAST(m_s_axis_tlast_converter_5_signal);
    mp_s_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_5");
    mp_s_axis_tid_converter_5->vector_in(s_axis_split_tid_out_5);
    mp_s_axis_tid_converter_5->vector_out(m_s_axis_tid_converter_5_signal);
    mp_S05_AXIS_transactor->TID(m_s_axis_tid_converter_5_signal);
    mp_s_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_5");
    mp_s_axis_tdest_converter_5->vector_in(s_axis_split_tdest_out_5);
    mp_s_axis_tdest_converter_5->vector_out(m_s_axis_tdest_converter_5_signal);
    mp_S05_AXIS_transactor->TDEST(m_s_axis_tdest_converter_5_signal);
    mp_s_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_5");
    mp_s_axis_tuser_converter_5->vector_in(s_axis_split_tuser_out_5);
    mp_s_axis_tuser_converter_5->vector_out(m_s_axis_tuser_converter_5_signal);
    mp_S05_AXIS_transactor->TUSER(m_s_axis_tuser_converter_5_signal);
    mp_S05_AXIS_transactor->CLK(aclk);
    mp_S05_AXIS_transactor->RST(aresetn);

    // S05_AXIS' transactor sockets

    mp_impl->S05_AXIS_TARGET_SOCKET->bind(*(mp_S05_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M05_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M05_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXIS' transactor parameters
    xsc::common_cpp::properties M05_AXIS_transactor_param_props;
    M05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M05_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M05_AXIS_transactor", M05_AXIS_transactor_param_props);

    // M05_AXIS' transactor ports

    mp_m_axis_tvalid_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_5");
    mp_m_axis_tvalid_converter_5->scalar_in(m_m_axis_tvalid_converter_5_signal);
    mp_m_axis_tvalid_converter_5->vector_out(m_axis_concat_tvalid_out_5);
    mp_M05_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_5_signal);
    mp_m_axis_tready_converter_5 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_5");
    mp_m_axis_tready_converter_5->vector_in(m_axis_split_tready_out_5);
    mp_m_axis_tready_converter_5->scalar_out(m_m_axis_tready_converter_5_signal);
    mp_M05_AXIS_transactor->TREADY(m_m_axis_tready_converter_5_signal);
    mp_m_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_5");
    mp_m_axis_tdata_converter_5->vector_in(m_m_axis_tdata_converter_5_signal);
    mp_m_axis_tdata_converter_5->vector_out(m_axis_concat_tdata_out_5);
    mp_M05_AXIS_transactor->TDATA(m_m_axis_tdata_converter_5_signal);
    mp_m_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_5");
    mp_m_axis_tstrb_converter_5->vector_in(m_m_axis_tstrb_converter_5_signal);
    mp_m_axis_tstrb_converter_5->vector_out(m_axis_concat_tstrb_out_5);
    mp_M05_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_5_signal);
    mp_m_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_5");
    mp_m_axis_tkeep_converter_5->vector_in(m_m_axis_tkeep_converter_5_signal);
    mp_m_axis_tkeep_converter_5->vector_out(m_axis_concat_tkeep_out_5);
    mp_M05_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_5_signal);
    mp_m_axis_tlast_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_5");
    mp_m_axis_tlast_converter_5->scalar_in(m_m_axis_tlast_converter_5_signal);
    mp_m_axis_tlast_converter_5->vector_out(m_axis_concat_tlast_out_5);
    mp_M05_AXIS_transactor->TLAST(m_m_axis_tlast_converter_5_signal);
    mp_m_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_5");
    mp_m_axis_tid_converter_5->vector_in(m_m_axis_tid_converter_5_signal);
    mp_m_axis_tid_converter_5->vector_out(m_axis_concat_tid_out_5);
    mp_M05_AXIS_transactor->TID(m_m_axis_tid_converter_5_signal);
    mp_m_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_5");
    mp_m_axis_tdest_converter_5->vector_in(m_m_axis_tdest_converter_5_signal);
    mp_m_axis_tdest_converter_5->vector_out(m_axis_concat_tdest_out_5);
    mp_M05_AXIS_transactor->TDEST(m_m_axis_tdest_converter_5_signal);
    mp_m_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_5");
    mp_m_axis_tuser_converter_5->vector_in(m_m_axis_tuser_converter_5_signal);
    mp_m_axis_tuser_converter_5->vector_out(m_axis_concat_tuser_out_5);
    mp_M05_AXIS_transactor->TUSER(m_m_axis_tuser_converter_5_signal);
    mp_M05_AXIS_transactor->CLK(aclk);
    mp_M05_AXIS_transactor->RST(aresetn);

    // M05_AXIS' transactor sockets

    mp_impl->M05_AXIS_INITIATOR_SOCKET->bind(*(mp_M05_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S06_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S06_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S06_AXIS' transactor parameters
    xsc::common_cpp::properties S06_AXIS_transactor_param_props;
    S06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S06_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S06_AXIS_transactor", S06_AXIS_transactor_param_props);

    // S06_AXIS' transactor ports

    mp_s_axis_tvalid_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_6");
    mp_s_axis_tvalid_converter_6->vector_in(s_axis_split_tvalid_out_6);
    mp_s_axis_tvalid_converter_6->scalar_out(m_s_axis_tvalid_converter_6_signal);
    mp_S06_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_6_signal);
    mp_s_axis_tready_converter_6 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_6");
    mp_s_axis_tready_converter_6->scalar_in(m_s_axis_tready_converter_6_signal);
    mp_s_axis_tready_converter_6->vector_out(s_axis_concat_tready_out_6);
    mp_S06_AXIS_transactor->TREADY(m_s_axis_tready_converter_6_signal);
    mp_s_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_6");
    mp_s_axis_tdata_converter_6->vector_in(s_axis_split_tdata_out_6);
    mp_s_axis_tdata_converter_6->vector_out(m_s_axis_tdata_converter_6_signal);
    mp_S06_AXIS_transactor->TDATA(m_s_axis_tdata_converter_6_signal);
    mp_s_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_6");
    mp_s_axis_tstrb_converter_6->vector_in(s_axis_split_tstrb_out_6);
    mp_s_axis_tstrb_converter_6->vector_out(m_s_axis_tstrb_converter_6_signal);
    mp_S06_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_6_signal);
    mp_s_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_6");
    mp_s_axis_tkeep_converter_6->vector_in(s_axis_split_tkeep_out_6);
    mp_s_axis_tkeep_converter_6->vector_out(m_s_axis_tkeep_converter_6_signal);
    mp_S06_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_6_signal);
    mp_s_axis_tlast_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_6");
    mp_s_axis_tlast_converter_6->vector_in(s_axis_split_tlast_out_6);
    mp_s_axis_tlast_converter_6->scalar_out(m_s_axis_tlast_converter_6_signal);
    mp_S06_AXIS_transactor->TLAST(m_s_axis_tlast_converter_6_signal);
    mp_s_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_6");
    mp_s_axis_tid_converter_6->vector_in(s_axis_split_tid_out_6);
    mp_s_axis_tid_converter_6->vector_out(m_s_axis_tid_converter_6_signal);
    mp_S06_AXIS_transactor->TID(m_s_axis_tid_converter_6_signal);
    mp_s_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_6");
    mp_s_axis_tdest_converter_6->vector_in(s_axis_split_tdest_out_6);
    mp_s_axis_tdest_converter_6->vector_out(m_s_axis_tdest_converter_6_signal);
    mp_S06_AXIS_transactor->TDEST(m_s_axis_tdest_converter_6_signal);
    mp_s_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_6");
    mp_s_axis_tuser_converter_6->vector_in(s_axis_split_tuser_out_6);
    mp_s_axis_tuser_converter_6->vector_out(m_s_axis_tuser_converter_6_signal);
    mp_S06_AXIS_transactor->TUSER(m_s_axis_tuser_converter_6_signal);
    mp_S06_AXIS_transactor->CLK(aclk);
    mp_S06_AXIS_transactor->RST(aresetn);

    // S06_AXIS' transactor sockets

    mp_impl->S06_AXIS_TARGET_SOCKET->bind(*(mp_S06_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M06_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M06_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXIS' transactor parameters
    xsc::common_cpp::properties M06_AXIS_transactor_param_props;
    M06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M06_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M06_AXIS_transactor", M06_AXIS_transactor_param_props);

    // M06_AXIS' transactor ports

    mp_m_axis_tvalid_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_6");
    mp_m_axis_tvalid_converter_6->scalar_in(m_m_axis_tvalid_converter_6_signal);
    mp_m_axis_tvalid_converter_6->vector_out(m_axis_concat_tvalid_out_6);
    mp_M06_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_6_signal);
    mp_m_axis_tready_converter_6 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_6");
    mp_m_axis_tready_converter_6->vector_in(m_axis_split_tready_out_6);
    mp_m_axis_tready_converter_6->scalar_out(m_m_axis_tready_converter_6_signal);
    mp_M06_AXIS_transactor->TREADY(m_m_axis_tready_converter_6_signal);
    mp_m_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_6");
    mp_m_axis_tdata_converter_6->vector_in(m_m_axis_tdata_converter_6_signal);
    mp_m_axis_tdata_converter_6->vector_out(m_axis_concat_tdata_out_6);
    mp_M06_AXIS_transactor->TDATA(m_m_axis_tdata_converter_6_signal);
    mp_m_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_6");
    mp_m_axis_tstrb_converter_6->vector_in(m_m_axis_tstrb_converter_6_signal);
    mp_m_axis_tstrb_converter_6->vector_out(m_axis_concat_tstrb_out_6);
    mp_M06_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_6_signal);
    mp_m_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_6");
    mp_m_axis_tkeep_converter_6->vector_in(m_m_axis_tkeep_converter_6_signal);
    mp_m_axis_tkeep_converter_6->vector_out(m_axis_concat_tkeep_out_6);
    mp_M06_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_6_signal);
    mp_m_axis_tlast_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_6");
    mp_m_axis_tlast_converter_6->scalar_in(m_m_axis_tlast_converter_6_signal);
    mp_m_axis_tlast_converter_6->vector_out(m_axis_concat_tlast_out_6);
    mp_M06_AXIS_transactor->TLAST(m_m_axis_tlast_converter_6_signal);
    mp_m_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_6");
    mp_m_axis_tid_converter_6->vector_in(m_m_axis_tid_converter_6_signal);
    mp_m_axis_tid_converter_6->vector_out(m_axis_concat_tid_out_6);
    mp_M06_AXIS_transactor->TID(m_m_axis_tid_converter_6_signal);
    mp_m_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_6");
    mp_m_axis_tdest_converter_6->vector_in(m_m_axis_tdest_converter_6_signal);
    mp_m_axis_tdest_converter_6->vector_out(m_axis_concat_tdest_out_6);
    mp_M06_AXIS_transactor->TDEST(m_m_axis_tdest_converter_6_signal);
    mp_m_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_6");
    mp_m_axis_tuser_converter_6->vector_in(m_m_axis_tuser_converter_6_signal);
    mp_m_axis_tuser_converter_6->vector_out(m_axis_concat_tuser_out_6);
    mp_M06_AXIS_transactor->TUSER(m_m_axis_tuser_converter_6_signal);
    mp_M06_AXIS_transactor->CLK(aclk);
    mp_M06_AXIS_transactor->RST(aresetn);

    // M06_AXIS' transactor sockets

    mp_impl->M06_AXIS_INITIATOR_SOCKET->bind(*(mp_M06_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S07_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S07_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S07_AXIS' transactor parameters
    xsc::common_cpp::properties S07_AXIS_transactor_param_props;
    S07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S07_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S07_AXIS_transactor", S07_AXIS_transactor_param_props);

    // S07_AXIS' transactor ports

    mp_s_axis_tvalid_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_7");
    mp_s_axis_tvalid_converter_7->vector_in(s_axis_split_tvalid_out_7);
    mp_s_axis_tvalid_converter_7->scalar_out(m_s_axis_tvalid_converter_7_signal);
    mp_S07_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_7_signal);
    mp_s_axis_tready_converter_7 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_7");
    mp_s_axis_tready_converter_7->scalar_in(m_s_axis_tready_converter_7_signal);
    mp_s_axis_tready_converter_7->vector_out(s_axis_concat_tready_out_7);
    mp_S07_AXIS_transactor->TREADY(m_s_axis_tready_converter_7_signal);
    mp_s_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_7");
    mp_s_axis_tdata_converter_7->vector_in(s_axis_split_tdata_out_7);
    mp_s_axis_tdata_converter_7->vector_out(m_s_axis_tdata_converter_7_signal);
    mp_S07_AXIS_transactor->TDATA(m_s_axis_tdata_converter_7_signal);
    mp_s_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_7");
    mp_s_axis_tstrb_converter_7->vector_in(s_axis_split_tstrb_out_7);
    mp_s_axis_tstrb_converter_7->vector_out(m_s_axis_tstrb_converter_7_signal);
    mp_S07_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_7_signal);
    mp_s_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_7");
    mp_s_axis_tkeep_converter_7->vector_in(s_axis_split_tkeep_out_7);
    mp_s_axis_tkeep_converter_7->vector_out(m_s_axis_tkeep_converter_7_signal);
    mp_S07_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_7_signal);
    mp_s_axis_tlast_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_7");
    mp_s_axis_tlast_converter_7->vector_in(s_axis_split_tlast_out_7);
    mp_s_axis_tlast_converter_7->scalar_out(m_s_axis_tlast_converter_7_signal);
    mp_S07_AXIS_transactor->TLAST(m_s_axis_tlast_converter_7_signal);
    mp_s_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_7");
    mp_s_axis_tid_converter_7->vector_in(s_axis_split_tid_out_7);
    mp_s_axis_tid_converter_7->vector_out(m_s_axis_tid_converter_7_signal);
    mp_S07_AXIS_transactor->TID(m_s_axis_tid_converter_7_signal);
    mp_s_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_7");
    mp_s_axis_tdest_converter_7->vector_in(s_axis_split_tdest_out_7);
    mp_s_axis_tdest_converter_7->vector_out(m_s_axis_tdest_converter_7_signal);
    mp_S07_AXIS_transactor->TDEST(m_s_axis_tdest_converter_7_signal);
    mp_s_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_7");
    mp_s_axis_tuser_converter_7->vector_in(s_axis_split_tuser_out_7);
    mp_s_axis_tuser_converter_7->vector_out(m_s_axis_tuser_converter_7_signal);
    mp_S07_AXIS_transactor->TUSER(m_s_axis_tuser_converter_7_signal);
    mp_S07_AXIS_transactor->CLK(aclk);
    mp_S07_AXIS_transactor->RST(aresetn);

    // S07_AXIS' transactor sockets

    mp_impl->S07_AXIS_TARGET_SOCKET->bind(*(mp_S07_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M07_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M07_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXIS' transactor parameters
    xsc::common_cpp::properties M07_AXIS_transactor_param_props;
    M07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M07_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M07_AXIS_transactor", M07_AXIS_transactor_param_props);

    // M07_AXIS' transactor ports

    mp_m_axis_tvalid_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_7");
    mp_m_axis_tvalid_converter_7->scalar_in(m_m_axis_tvalid_converter_7_signal);
    mp_m_axis_tvalid_converter_7->vector_out(m_axis_concat_tvalid_out_7);
    mp_M07_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_7_signal);
    mp_m_axis_tready_converter_7 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_7");
    mp_m_axis_tready_converter_7->vector_in(m_axis_split_tready_out_7);
    mp_m_axis_tready_converter_7->scalar_out(m_m_axis_tready_converter_7_signal);
    mp_M07_AXIS_transactor->TREADY(m_m_axis_tready_converter_7_signal);
    mp_m_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_7");
    mp_m_axis_tdata_converter_7->vector_in(m_m_axis_tdata_converter_7_signal);
    mp_m_axis_tdata_converter_7->vector_out(m_axis_concat_tdata_out_7);
    mp_M07_AXIS_transactor->TDATA(m_m_axis_tdata_converter_7_signal);
    mp_m_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_7");
    mp_m_axis_tstrb_converter_7->vector_in(m_m_axis_tstrb_converter_7_signal);
    mp_m_axis_tstrb_converter_7->vector_out(m_axis_concat_tstrb_out_7);
    mp_M07_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_7_signal);
    mp_m_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_7");
    mp_m_axis_tkeep_converter_7->vector_in(m_m_axis_tkeep_converter_7_signal);
    mp_m_axis_tkeep_converter_7->vector_out(m_axis_concat_tkeep_out_7);
    mp_M07_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_7_signal);
    mp_m_axis_tlast_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_7");
    mp_m_axis_tlast_converter_7->scalar_in(m_m_axis_tlast_converter_7_signal);
    mp_m_axis_tlast_converter_7->vector_out(m_axis_concat_tlast_out_7);
    mp_M07_AXIS_transactor->TLAST(m_m_axis_tlast_converter_7_signal);
    mp_m_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_7");
    mp_m_axis_tid_converter_7->vector_in(m_m_axis_tid_converter_7_signal);
    mp_m_axis_tid_converter_7->vector_out(m_axis_concat_tid_out_7);
    mp_M07_AXIS_transactor->TID(m_m_axis_tid_converter_7_signal);
    mp_m_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_7");
    mp_m_axis_tdest_converter_7->vector_in(m_m_axis_tdest_converter_7_signal);
    mp_m_axis_tdest_converter_7->vector_out(m_axis_concat_tdest_out_7);
    mp_M07_AXIS_transactor->TDEST(m_m_axis_tdest_converter_7_signal);
    mp_m_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_7");
    mp_m_axis_tuser_converter_7->vector_in(m_m_axis_tuser_converter_7_signal);
    mp_m_axis_tuser_converter_7->vector_out(m_axis_concat_tuser_out_7);
    mp_M07_AXIS_transactor->TUSER(m_m_axis_tuser_converter_7_signal);
    mp_M07_AXIS_transactor->CLK(aclk);
    mp_M07_AXIS_transactor->RST(aresetn);

    // M07_AXIS' transactor sockets

    mp_impl->M07_AXIS_INITIATOR_SOCKET->bind(*(mp_M07_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S08_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S08_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S08_AXIS' transactor parameters
    xsc::common_cpp::properties S08_AXIS_transactor_param_props;
    S08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S08_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S08_AXIS_transactor", S08_AXIS_transactor_param_props);

    // S08_AXIS' transactor ports

    mp_s_axis_tvalid_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_8");
    mp_s_axis_tvalid_converter_8->vector_in(s_axis_split_tvalid_out_8);
    mp_s_axis_tvalid_converter_8->scalar_out(m_s_axis_tvalid_converter_8_signal);
    mp_S08_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_8_signal);
    mp_s_axis_tready_converter_8 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_8");
    mp_s_axis_tready_converter_8->scalar_in(m_s_axis_tready_converter_8_signal);
    mp_s_axis_tready_converter_8->vector_out(s_axis_concat_tready_out_8);
    mp_S08_AXIS_transactor->TREADY(m_s_axis_tready_converter_8_signal);
    mp_s_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_8");
    mp_s_axis_tdata_converter_8->vector_in(s_axis_split_tdata_out_8);
    mp_s_axis_tdata_converter_8->vector_out(m_s_axis_tdata_converter_8_signal);
    mp_S08_AXIS_transactor->TDATA(m_s_axis_tdata_converter_8_signal);
    mp_s_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_8");
    mp_s_axis_tstrb_converter_8->vector_in(s_axis_split_tstrb_out_8);
    mp_s_axis_tstrb_converter_8->vector_out(m_s_axis_tstrb_converter_8_signal);
    mp_S08_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_8_signal);
    mp_s_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_8");
    mp_s_axis_tkeep_converter_8->vector_in(s_axis_split_tkeep_out_8);
    mp_s_axis_tkeep_converter_8->vector_out(m_s_axis_tkeep_converter_8_signal);
    mp_S08_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_8_signal);
    mp_s_axis_tlast_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_8");
    mp_s_axis_tlast_converter_8->vector_in(s_axis_split_tlast_out_8);
    mp_s_axis_tlast_converter_8->scalar_out(m_s_axis_tlast_converter_8_signal);
    mp_S08_AXIS_transactor->TLAST(m_s_axis_tlast_converter_8_signal);
    mp_s_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_8");
    mp_s_axis_tid_converter_8->vector_in(s_axis_split_tid_out_8);
    mp_s_axis_tid_converter_8->vector_out(m_s_axis_tid_converter_8_signal);
    mp_S08_AXIS_transactor->TID(m_s_axis_tid_converter_8_signal);
    mp_s_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_8");
    mp_s_axis_tdest_converter_8->vector_in(s_axis_split_tdest_out_8);
    mp_s_axis_tdest_converter_8->vector_out(m_s_axis_tdest_converter_8_signal);
    mp_S08_AXIS_transactor->TDEST(m_s_axis_tdest_converter_8_signal);
    mp_s_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_8");
    mp_s_axis_tuser_converter_8->vector_in(s_axis_split_tuser_out_8);
    mp_s_axis_tuser_converter_8->vector_out(m_s_axis_tuser_converter_8_signal);
    mp_S08_AXIS_transactor->TUSER(m_s_axis_tuser_converter_8_signal);
    mp_S08_AXIS_transactor->CLK(aclk);
    mp_S08_AXIS_transactor->RST(aresetn);

    // S08_AXIS' transactor sockets

    mp_impl->S08_AXIS_TARGET_SOCKET->bind(*(mp_S08_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M08_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M08_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXIS' transactor parameters
    xsc::common_cpp::properties M08_AXIS_transactor_param_props;
    M08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M08_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M08_AXIS_transactor", M08_AXIS_transactor_param_props);

    // M08_AXIS' transactor ports

    mp_m_axis_tvalid_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_8");
    mp_m_axis_tvalid_converter_8->scalar_in(m_m_axis_tvalid_converter_8_signal);
    mp_m_axis_tvalid_converter_8->vector_out(m_axis_concat_tvalid_out_8);
    mp_M08_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_8_signal);
    mp_m_axis_tready_converter_8 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_8");
    mp_m_axis_tready_converter_8->vector_in(m_axis_split_tready_out_8);
    mp_m_axis_tready_converter_8->scalar_out(m_m_axis_tready_converter_8_signal);
    mp_M08_AXIS_transactor->TREADY(m_m_axis_tready_converter_8_signal);
    mp_m_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_8");
    mp_m_axis_tdata_converter_8->vector_in(m_m_axis_tdata_converter_8_signal);
    mp_m_axis_tdata_converter_8->vector_out(m_axis_concat_tdata_out_8);
    mp_M08_AXIS_transactor->TDATA(m_m_axis_tdata_converter_8_signal);
    mp_m_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_8");
    mp_m_axis_tstrb_converter_8->vector_in(m_m_axis_tstrb_converter_8_signal);
    mp_m_axis_tstrb_converter_8->vector_out(m_axis_concat_tstrb_out_8);
    mp_M08_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_8_signal);
    mp_m_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_8");
    mp_m_axis_tkeep_converter_8->vector_in(m_m_axis_tkeep_converter_8_signal);
    mp_m_axis_tkeep_converter_8->vector_out(m_axis_concat_tkeep_out_8);
    mp_M08_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_8_signal);
    mp_m_axis_tlast_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_8");
    mp_m_axis_tlast_converter_8->scalar_in(m_m_axis_tlast_converter_8_signal);
    mp_m_axis_tlast_converter_8->vector_out(m_axis_concat_tlast_out_8);
    mp_M08_AXIS_transactor->TLAST(m_m_axis_tlast_converter_8_signal);
    mp_m_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_8");
    mp_m_axis_tid_converter_8->vector_in(m_m_axis_tid_converter_8_signal);
    mp_m_axis_tid_converter_8->vector_out(m_axis_concat_tid_out_8);
    mp_M08_AXIS_transactor->TID(m_m_axis_tid_converter_8_signal);
    mp_m_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_8");
    mp_m_axis_tdest_converter_8->vector_in(m_m_axis_tdest_converter_8_signal);
    mp_m_axis_tdest_converter_8->vector_out(m_axis_concat_tdest_out_8);
    mp_M08_AXIS_transactor->TDEST(m_m_axis_tdest_converter_8_signal);
    mp_m_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_8");
    mp_m_axis_tuser_converter_8->vector_in(m_m_axis_tuser_converter_8_signal);
    mp_m_axis_tuser_converter_8->vector_out(m_axis_concat_tuser_out_8);
    mp_M08_AXIS_transactor->TUSER(m_m_axis_tuser_converter_8_signal);
    mp_M08_AXIS_transactor->CLK(aclk);
    mp_M08_AXIS_transactor->RST(aresetn);

    // M08_AXIS' transactor sockets

    mp_impl->M08_AXIS_INITIATOR_SOCKET->bind(*(mp_M08_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S09_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S09_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S09_AXIS' transactor parameters
    xsc::common_cpp::properties S09_AXIS_transactor_param_props;
    S09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S09_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S09_AXIS_transactor", S09_AXIS_transactor_param_props);

    // S09_AXIS' transactor ports

    mp_s_axis_tvalid_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_9");
    mp_s_axis_tvalid_converter_9->vector_in(s_axis_split_tvalid_out_9);
    mp_s_axis_tvalid_converter_9->scalar_out(m_s_axis_tvalid_converter_9_signal);
    mp_S09_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_9_signal);
    mp_s_axis_tready_converter_9 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_9");
    mp_s_axis_tready_converter_9->scalar_in(m_s_axis_tready_converter_9_signal);
    mp_s_axis_tready_converter_9->vector_out(s_axis_concat_tready_out_9);
    mp_S09_AXIS_transactor->TREADY(m_s_axis_tready_converter_9_signal);
    mp_s_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_9");
    mp_s_axis_tdata_converter_9->vector_in(s_axis_split_tdata_out_9);
    mp_s_axis_tdata_converter_9->vector_out(m_s_axis_tdata_converter_9_signal);
    mp_S09_AXIS_transactor->TDATA(m_s_axis_tdata_converter_9_signal);
    mp_s_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_9");
    mp_s_axis_tstrb_converter_9->vector_in(s_axis_split_tstrb_out_9);
    mp_s_axis_tstrb_converter_9->vector_out(m_s_axis_tstrb_converter_9_signal);
    mp_S09_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_9_signal);
    mp_s_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_9");
    mp_s_axis_tkeep_converter_9->vector_in(s_axis_split_tkeep_out_9);
    mp_s_axis_tkeep_converter_9->vector_out(m_s_axis_tkeep_converter_9_signal);
    mp_S09_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_9_signal);
    mp_s_axis_tlast_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_9");
    mp_s_axis_tlast_converter_9->vector_in(s_axis_split_tlast_out_9);
    mp_s_axis_tlast_converter_9->scalar_out(m_s_axis_tlast_converter_9_signal);
    mp_S09_AXIS_transactor->TLAST(m_s_axis_tlast_converter_9_signal);
    mp_s_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_9");
    mp_s_axis_tid_converter_9->vector_in(s_axis_split_tid_out_9);
    mp_s_axis_tid_converter_9->vector_out(m_s_axis_tid_converter_9_signal);
    mp_S09_AXIS_transactor->TID(m_s_axis_tid_converter_9_signal);
    mp_s_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_9");
    mp_s_axis_tdest_converter_9->vector_in(s_axis_split_tdest_out_9);
    mp_s_axis_tdest_converter_9->vector_out(m_s_axis_tdest_converter_9_signal);
    mp_S09_AXIS_transactor->TDEST(m_s_axis_tdest_converter_9_signal);
    mp_s_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_9");
    mp_s_axis_tuser_converter_9->vector_in(s_axis_split_tuser_out_9);
    mp_s_axis_tuser_converter_9->vector_out(m_s_axis_tuser_converter_9_signal);
    mp_S09_AXIS_transactor->TUSER(m_s_axis_tuser_converter_9_signal);
    mp_S09_AXIS_transactor->CLK(aclk);
    mp_S09_AXIS_transactor->RST(aresetn);

    // S09_AXIS' transactor sockets

    mp_impl->S09_AXIS_TARGET_SOCKET->bind(*(mp_S09_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M09_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M09_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M09_AXIS' transactor parameters
    xsc::common_cpp::properties M09_AXIS_transactor_param_props;
    M09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M09_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M09_AXIS_transactor", M09_AXIS_transactor_param_props);

    // M09_AXIS' transactor ports

    mp_m_axis_tvalid_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_9");
    mp_m_axis_tvalid_converter_9->scalar_in(m_m_axis_tvalid_converter_9_signal);
    mp_m_axis_tvalid_converter_9->vector_out(m_axis_concat_tvalid_out_9);
    mp_M09_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_9_signal);
    mp_m_axis_tready_converter_9 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_9");
    mp_m_axis_tready_converter_9->vector_in(m_axis_split_tready_out_9);
    mp_m_axis_tready_converter_9->scalar_out(m_m_axis_tready_converter_9_signal);
    mp_M09_AXIS_transactor->TREADY(m_m_axis_tready_converter_9_signal);
    mp_m_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_9");
    mp_m_axis_tdata_converter_9->vector_in(m_m_axis_tdata_converter_9_signal);
    mp_m_axis_tdata_converter_9->vector_out(m_axis_concat_tdata_out_9);
    mp_M09_AXIS_transactor->TDATA(m_m_axis_tdata_converter_9_signal);
    mp_m_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_9");
    mp_m_axis_tstrb_converter_9->vector_in(m_m_axis_tstrb_converter_9_signal);
    mp_m_axis_tstrb_converter_9->vector_out(m_axis_concat_tstrb_out_9);
    mp_M09_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_9_signal);
    mp_m_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_9");
    mp_m_axis_tkeep_converter_9->vector_in(m_m_axis_tkeep_converter_9_signal);
    mp_m_axis_tkeep_converter_9->vector_out(m_axis_concat_tkeep_out_9);
    mp_M09_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_9_signal);
    mp_m_axis_tlast_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_9");
    mp_m_axis_tlast_converter_9->scalar_in(m_m_axis_tlast_converter_9_signal);
    mp_m_axis_tlast_converter_9->vector_out(m_axis_concat_tlast_out_9);
    mp_M09_AXIS_transactor->TLAST(m_m_axis_tlast_converter_9_signal);
    mp_m_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_9");
    mp_m_axis_tid_converter_9->vector_in(m_m_axis_tid_converter_9_signal);
    mp_m_axis_tid_converter_9->vector_out(m_axis_concat_tid_out_9);
    mp_M09_AXIS_transactor->TID(m_m_axis_tid_converter_9_signal);
    mp_m_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_9");
    mp_m_axis_tdest_converter_9->vector_in(m_m_axis_tdest_converter_9_signal);
    mp_m_axis_tdest_converter_9->vector_out(m_axis_concat_tdest_out_9);
    mp_M09_AXIS_transactor->TDEST(m_m_axis_tdest_converter_9_signal);
    mp_m_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_9");
    mp_m_axis_tuser_converter_9->vector_in(m_m_axis_tuser_converter_9_signal);
    mp_m_axis_tuser_converter_9->vector_out(m_axis_concat_tuser_out_9);
    mp_M09_AXIS_transactor->TUSER(m_m_axis_tuser_converter_9_signal);
    mp_M09_AXIS_transactor->CLK(aclk);
    mp_M09_AXIS_transactor->RST(aresetn);

    // M09_AXIS' transactor sockets

    mp_impl->M09_AXIS_INITIATOR_SOCKET->bind(*(mp_M09_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S_AXI_CTRL' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S_AXI_CTRL_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S_AXI_CTRL' transactor parameters
    xsc::common_cpp::properties S_AXI_CTRL_transactor_param_props;
    S_AXI_CTRL_transactor_param_props.addLong("DATA_WIDTH", "32");
    S_AXI_CTRL_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S_AXI_CTRL_transactor_param_props.addLong("ID_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ADDR_WIDTH", "7");
    S_AXI_CTRL_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_LOCK", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_PROT", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_CACHE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_QOS", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_WSTRB", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_SIZE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RESET", "1");
    S_AXI_CTRL_transactor_param_props.addFloat("PHASE", "0.00");
    S_AXI_CTRL_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    S_AXI_CTRL_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_CTRL_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");

    mp_S_AXI_CTRL_transactor = new xtlm::xaximm_pin2xtlm_t<32,7,1,1,1,1,1,1>("S_AXI_CTRL_transactor", S_AXI_CTRL_transactor_param_props);

    // S_AXI_CTRL' transactor ports

    mp_S_AXI_CTRL_transactor->AWVALID(s_axi_ctrl_awvalid);
    mp_S_AXI_CTRL_transactor->AWREADY(s_axi_ctrl_awready);
    mp_S_AXI_CTRL_transactor->AWADDR(s_axi_ctrl_awaddr);
    mp_S_AXI_CTRL_transactor->WVALID(s_axi_ctrl_wvalid);
    mp_S_AXI_CTRL_transactor->WREADY(s_axi_ctrl_wready);
    mp_S_AXI_CTRL_transactor->WDATA(s_axi_ctrl_wdata);
    mp_S_AXI_CTRL_transactor->BVALID(s_axi_ctrl_bvalid);
    mp_S_AXI_CTRL_transactor->BREADY(s_axi_ctrl_bready);
    mp_S_AXI_CTRL_transactor->BRESP(s_axi_ctrl_bresp);
    mp_S_AXI_CTRL_transactor->ARVALID(s_axi_ctrl_arvalid);
    mp_S_AXI_CTRL_transactor->ARREADY(s_axi_ctrl_arready);
    mp_S_AXI_CTRL_transactor->ARADDR(s_axi_ctrl_araddr);
    mp_S_AXI_CTRL_transactor->RVALID(s_axi_ctrl_rvalid);
    mp_S_AXI_CTRL_transactor->RREADY(s_axi_ctrl_rready);
    mp_S_AXI_CTRL_transactor->RDATA(s_axi_ctrl_rdata);
    mp_S_AXI_CTRL_transactor->RRESP(s_axi_ctrl_rresp);
    mp_S_AXI_CTRL_transactor->CLK(s_axi_ctrl_aclk);
    mp_S_AXI_CTRL_transactor->RST(s_axi_ctrl_aresetn);

    // S_AXI_CTRL' transactor sockets

    mp_impl->S_AXI_CTRL_wr_socket->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    mp_impl->S_AXI_CTRL_rd_socket->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
  }
  else
  {
  }

}

#endif // XM_SYSTEMC




#ifdef RIVIERA
bd_d92b_xbar_0::bd_d92b_xbar_0(const sc_core::sc_module_name& nm) : bd_d92b_xbar_0_sc(nm), aclk("aclk"), aresetn("aresetn"), s_axis_tvalid("s_axis_tvalid"), s_axis_tready("s_axis_tready"), s_axis_tdata("s_axis_tdata"), s_axis_tstrb("s_axis_tstrb"), s_axis_tkeep("s_axis_tkeep"), s_axis_tlast("s_axis_tlast"), s_axis_tid("s_axis_tid"), s_axis_tdest("s_axis_tdest"), s_axis_tuser("s_axis_tuser"), m_axis_tvalid("m_axis_tvalid"), m_axis_tready("m_axis_tready"), m_axis_tdata("m_axis_tdata"), m_axis_tstrb("m_axis_tstrb"), m_axis_tkeep("m_axis_tkeep"), m_axis_tlast("m_axis_tlast"), m_axis_tid("m_axis_tid"), m_axis_tdest("m_axis_tdest"), m_axis_tuser("m_axis_tuser"), s_axi_ctrl_aclk("s_axi_ctrl_aclk"), s_axi_ctrl_aresetn("s_axi_ctrl_aresetn"), s_axi_ctrl_awvalid("s_axi_ctrl_awvalid"), s_axi_ctrl_awready("s_axi_ctrl_awready"), s_axi_ctrl_awaddr("s_axi_ctrl_awaddr"), s_axi_ctrl_wvalid("s_axi_ctrl_wvalid"), s_axi_ctrl_wready("s_axi_ctrl_wready"), s_axi_ctrl_wdata("s_axi_ctrl_wdata"), s_axi_ctrl_bvalid("s_axi_ctrl_bvalid"), s_axi_ctrl_bready("s_axi_ctrl_bready"), s_axi_ctrl_bresp("s_axi_ctrl_bresp"), s_axi_ctrl_arvalid("s_axi_ctrl_arvalid"), s_axi_ctrl_arready("s_axi_ctrl_arready"), s_axi_ctrl_araddr("s_axi_ctrl_araddr"), s_axi_ctrl_rvalid("s_axi_ctrl_rvalid"), s_axi_ctrl_rready("s_axi_ctrl_rready"), s_axi_ctrl_rdata("s_axi_ctrl_rdata"), s_axi_ctrl_rresp("s_axi_ctrl_rresp")
{

  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);
  mp_impl->s_axi_ctrl_aclk(s_axi_ctrl_aclk);
  mp_impl->s_axi_ctrl_aresetn(s_axi_ctrl_aresetn);

  // initialize transactors
  mp_S00_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_0 = NULL;
  mp_s_axis_tready_converter_0 = NULL;
  mp_s_axis_tdata_converter_0 = NULL;
  mp_s_axis_tstrb_converter_0 = NULL;
  mp_s_axis_tkeep_converter_0 = NULL;
  mp_s_axis_tlast_converter_0 = NULL;
  mp_s_axis_tid_converter_0 = NULL;
  mp_s_axis_tdest_converter_0 = NULL;
  mp_s_axis_tuser_converter_0 = NULL;
  mp_M00_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_0 = NULL;
  mp_m_axis_tready_converter_0 = NULL;
  mp_m_axis_tdata_converter_0 = NULL;
  mp_m_axis_tstrb_converter_0 = NULL;
  mp_m_axis_tkeep_converter_0 = NULL;
  mp_m_axis_tlast_converter_0 = NULL;
  mp_m_axis_tid_converter_0 = NULL;
  mp_m_axis_tdest_converter_0 = NULL;
  mp_m_axis_tuser_converter_0 = NULL;
  mp_S01_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_1 = NULL;
  mp_s_axis_tready_converter_1 = NULL;
  mp_s_axis_tdata_converter_1 = NULL;
  mp_s_axis_tstrb_converter_1 = NULL;
  mp_s_axis_tkeep_converter_1 = NULL;
  mp_s_axis_tlast_converter_1 = NULL;
  mp_s_axis_tid_converter_1 = NULL;
  mp_s_axis_tdest_converter_1 = NULL;
  mp_s_axis_tuser_converter_1 = NULL;
  mp_M01_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_1 = NULL;
  mp_m_axis_tready_converter_1 = NULL;
  mp_m_axis_tdata_converter_1 = NULL;
  mp_m_axis_tstrb_converter_1 = NULL;
  mp_m_axis_tkeep_converter_1 = NULL;
  mp_m_axis_tlast_converter_1 = NULL;
  mp_m_axis_tid_converter_1 = NULL;
  mp_m_axis_tdest_converter_1 = NULL;
  mp_m_axis_tuser_converter_1 = NULL;
  mp_S02_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_2 = NULL;
  mp_s_axis_tready_converter_2 = NULL;
  mp_s_axis_tdata_converter_2 = NULL;
  mp_s_axis_tstrb_converter_2 = NULL;
  mp_s_axis_tkeep_converter_2 = NULL;
  mp_s_axis_tlast_converter_2 = NULL;
  mp_s_axis_tid_converter_2 = NULL;
  mp_s_axis_tdest_converter_2 = NULL;
  mp_s_axis_tuser_converter_2 = NULL;
  mp_M02_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_2 = NULL;
  mp_m_axis_tready_converter_2 = NULL;
  mp_m_axis_tdata_converter_2 = NULL;
  mp_m_axis_tstrb_converter_2 = NULL;
  mp_m_axis_tkeep_converter_2 = NULL;
  mp_m_axis_tlast_converter_2 = NULL;
  mp_m_axis_tid_converter_2 = NULL;
  mp_m_axis_tdest_converter_2 = NULL;
  mp_m_axis_tuser_converter_2 = NULL;
  mp_S03_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_3 = NULL;
  mp_s_axis_tready_converter_3 = NULL;
  mp_s_axis_tdata_converter_3 = NULL;
  mp_s_axis_tstrb_converter_3 = NULL;
  mp_s_axis_tkeep_converter_3 = NULL;
  mp_s_axis_tlast_converter_3 = NULL;
  mp_s_axis_tid_converter_3 = NULL;
  mp_s_axis_tdest_converter_3 = NULL;
  mp_s_axis_tuser_converter_3 = NULL;
  mp_M03_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_3 = NULL;
  mp_m_axis_tready_converter_3 = NULL;
  mp_m_axis_tdata_converter_3 = NULL;
  mp_m_axis_tstrb_converter_3 = NULL;
  mp_m_axis_tkeep_converter_3 = NULL;
  mp_m_axis_tlast_converter_3 = NULL;
  mp_m_axis_tid_converter_3 = NULL;
  mp_m_axis_tdest_converter_3 = NULL;
  mp_m_axis_tuser_converter_3 = NULL;
  mp_S04_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_4 = NULL;
  mp_s_axis_tready_converter_4 = NULL;
  mp_s_axis_tdata_converter_4 = NULL;
  mp_s_axis_tstrb_converter_4 = NULL;
  mp_s_axis_tkeep_converter_4 = NULL;
  mp_s_axis_tlast_converter_4 = NULL;
  mp_s_axis_tid_converter_4 = NULL;
  mp_s_axis_tdest_converter_4 = NULL;
  mp_s_axis_tuser_converter_4 = NULL;
  mp_M04_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_4 = NULL;
  mp_m_axis_tready_converter_4 = NULL;
  mp_m_axis_tdata_converter_4 = NULL;
  mp_m_axis_tstrb_converter_4 = NULL;
  mp_m_axis_tkeep_converter_4 = NULL;
  mp_m_axis_tlast_converter_4 = NULL;
  mp_m_axis_tid_converter_4 = NULL;
  mp_m_axis_tdest_converter_4 = NULL;
  mp_m_axis_tuser_converter_4 = NULL;
  mp_S05_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_5 = NULL;
  mp_s_axis_tready_converter_5 = NULL;
  mp_s_axis_tdata_converter_5 = NULL;
  mp_s_axis_tstrb_converter_5 = NULL;
  mp_s_axis_tkeep_converter_5 = NULL;
  mp_s_axis_tlast_converter_5 = NULL;
  mp_s_axis_tid_converter_5 = NULL;
  mp_s_axis_tdest_converter_5 = NULL;
  mp_s_axis_tuser_converter_5 = NULL;
  mp_M05_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_5 = NULL;
  mp_m_axis_tready_converter_5 = NULL;
  mp_m_axis_tdata_converter_5 = NULL;
  mp_m_axis_tstrb_converter_5 = NULL;
  mp_m_axis_tkeep_converter_5 = NULL;
  mp_m_axis_tlast_converter_5 = NULL;
  mp_m_axis_tid_converter_5 = NULL;
  mp_m_axis_tdest_converter_5 = NULL;
  mp_m_axis_tuser_converter_5 = NULL;
  mp_S06_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_6 = NULL;
  mp_s_axis_tready_converter_6 = NULL;
  mp_s_axis_tdata_converter_6 = NULL;
  mp_s_axis_tstrb_converter_6 = NULL;
  mp_s_axis_tkeep_converter_6 = NULL;
  mp_s_axis_tlast_converter_6 = NULL;
  mp_s_axis_tid_converter_6 = NULL;
  mp_s_axis_tdest_converter_6 = NULL;
  mp_s_axis_tuser_converter_6 = NULL;
  mp_M06_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_6 = NULL;
  mp_m_axis_tready_converter_6 = NULL;
  mp_m_axis_tdata_converter_6 = NULL;
  mp_m_axis_tstrb_converter_6 = NULL;
  mp_m_axis_tkeep_converter_6 = NULL;
  mp_m_axis_tlast_converter_6 = NULL;
  mp_m_axis_tid_converter_6 = NULL;
  mp_m_axis_tdest_converter_6 = NULL;
  mp_m_axis_tuser_converter_6 = NULL;
  mp_S07_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_7 = NULL;
  mp_s_axis_tready_converter_7 = NULL;
  mp_s_axis_tdata_converter_7 = NULL;
  mp_s_axis_tstrb_converter_7 = NULL;
  mp_s_axis_tkeep_converter_7 = NULL;
  mp_s_axis_tlast_converter_7 = NULL;
  mp_s_axis_tid_converter_7 = NULL;
  mp_s_axis_tdest_converter_7 = NULL;
  mp_s_axis_tuser_converter_7 = NULL;
  mp_M07_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_7 = NULL;
  mp_m_axis_tready_converter_7 = NULL;
  mp_m_axis_tdata_converter_7 = NULL;
  mp_m_axis_tstrb_converter_7 = NULL;
  mp_m_axis_tkeep_converter_7 = NULL;
  mp_m_axis_tlast_converter_7 = NULL;
  mp_m_axis_tid_converter_7 = NULL;
  mp_m_axis_tdest_converter_7 = NULL;
  mp_m_axis_tuser_converter_7 = NULL;
  mp_S08_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_8 = NULL;
  mp_s_axis_tready_converter_8 = NULL;
  mp_s_axis_tdata_converter_8 = NULL;
  mp_s_axis_tstrb_converter_8 = NULL;
  mp_s_axis_tkeep_converter_8 = NULL;
  mp_s_axis_tlast_converter_8 = NULL;
  mp_s_axis_tid_converter_8 = NULL;
  mp_s_axis_tdest_converter_8 = NULL;
  mp_s_axis_tuser_converter_8 = NULL;
  mp_M08_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_8 = NULL;
  mp_m_axis_tready_converter_8 = NULL;
  mp_m_axis_tdata_converter_8 = NULL;
  mp_m_axis_tstrb_converter_8 = NULL;
  mp_m_axis_tkeep_converter_8 = NULL;
  mp_m_axis_tlast_converter_8 = NULL;
  mp_m_axis_tid_converter_8 = NULL;
  mp_m_axis_tdest_converter_8 = NULL;
  mp_m_axis_tuser_converter_8 = NULL;
  mp_S09_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_9 = NULL;
  mp_s_axis_tready_converter_9 = NULL;
  mp_s_axis_tdata_converter_9 = NULL;
  mp_s_axis_tstrb_converter_9 = NULL;
  mp_s_axis_tkeep_converter_9 = NULL;
  mp_s_axis_tlast_converter_9 = NULL;
  mp_s_axis_tid_converter_9 = NULL;
  mp_s_axis_tdest_converter_9 = NULL;
  mp_s_axis_tuser_converter_9 = NULL;
  mp_M09_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_9 = NULL;
  mp_m_axis_tready_converter_9 = NULL;
  mp_m_axis_tdata_converter_9 = NULL;
  mp_m_axis_tstrb_converter_9 = NULL;
  mp_m_axis_tkeep_converter_9 = NULL;
  mp_m_axis_tlast_converter_9 = NULL;
  mp_m_axis_tid_converter_9 = NULL;
  mp_m_axis_tdest_converter_9 = NULL;
  mp_m_axis_tuser_converter_9 = NULL;
  mp_S_AXI_CTRL_transactor = NULL;

  // initialize junctures
  mp_m_axis_concat_tdata = NULL;
  mp_m_axis_concat_tdest = NULL;
  mp_m_axis_concat_tid = NULL;
  mp_m_axis_concat_tkeep = NULL;
  mp_m_axis_concat_tlast = NULL;
  mp_m_axis_concat_tstrb = NULL;
  mp_m_axis_concat_tuser = NULL;
  mp_m_axis_concat_tvalid = NULL;
  mp_m_axis_split_tready = NULL;
  mp_s_axis_concat_tready = NULL;
  mp_s_axis_split_tdata = NULL;
  mp_s_axis_split_tdest = NULL;
  mp_s_axis_split_tid = NULL;
  mp_s_axis_split_tkeep = NULL;
  mp_s_axis_split_tlast = NULL;
  mp_s_axis_split_tstrb = NULL;
  mp_s_axis_split_tuser = NULL;
  mp_s_axis_split_tvalid = NULL;
  mp_s_axis_split_tvalid = new xsc::xsc_split<10, 10>("s_axis_split_tvalid");
  mp_s_axis_split_tvalid->in_port(s_axis_tvalid);
  mp_s_axis_split_tvalid->out_port[0](s_axis_split_tvalid_out_0);
    mp_s_axis_split_tvalid->add_mask(0,1,0);
  mp_s_axis_concat_tready = new xsc::xsc_concatenator<10, 10>("s_axis_concat_tready");
  mp_s_axis_concat_tready->in_port[0](s_axis_concat_tready_out_0);
  mp_s_axis_concat_tready->out_port(s_axis_tready);
    mp_s_axis_concat_tready->offset_port(0, 0);
  mp_s_axis_split_tdata = new xsc::xsc_split<640, 10>("s_axis_split_tdata");
  mp_s_axis_split_tdata->in_port(s_axis_tdata);
  mp_s_axis_split_tdata->out_port[0](s_axis_split_tdata_out_0);
    mp_s_axis_split_tdata->add_mask(0,64,0);
  mp_s_axis_split_tstrb = new xsc::xsc_split<80, 10>("s_axis_split_tstrb");
  mp_s_axis_split_tstrb->in_port(s_axis_tstrb);
  mp_s_axis_split_tstrb->out_port[0](s_axis_split_tstrb_out_0);
    mp_s_axis_split_tstrb->add_mask(0,8,0);
  mp_s_axis_split_tkeep = new xsc::xsc_split<80, 10>("s_axis_split_tkeep");
  mp_s_axis_split_tkeep->in_port(s_axis_tkeep);
  mp_s_axis_split_tkeep->out_port[0](s_axis_split_tkeep_out_0);
    mp_s_axis_split_tkeep->add_mask(0,8,0);
  mp_s_axis_split_tlast = new xsc::xsc_split<10, 10>("s_axis_split_tlast");
  mp_s_axis_split_tlast->in_port(s_axis_tlast);
  mp_s_axis_split_tlast->out_port[0](s_axis_split_tlast_out_0);
    mp_s_axis_split_tlast->add_mask(0,1,0);
  mp_s_axis_split_tid = new xsc::xsc_split<10, 10>("s_axis_split_tid");
  mp_s_axis_split_tid->in_port(s_axis_tid);
  mp_s_axis_split_tid->out_port[0](s_axis_split_tid_out_0);
    mp_s_axis_split_tid->add_mask(0,1,0);
  mp_s_axis_split_tdest = new xsc::xsc_split<40, 10>("s_axis_split_tdest");
  mp_s_axis_split_tdest->in_port(s_axis_tdest);
  mp_s_axis_split_tdest->out_port[0](s_axis_split_tdest_out_0);
    mp_s_axis_split_tdest->add_mask(0,4,0);
  mp_s_axis_split_tuser = new xsc::xsc_split<10, 10>("s_axis_split_tuser");
  mp_s_axis_split_tuser->in_port(s_axis_tuser);
  mp_s_axis_split_tuser->out_port[0](s_axis_split_tuser_out_0);
    mp_s_axis_split_tuser->add_mask(0,1,0);
  mp_m_axis_concat_tvalid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tvalid");
  mp_m_axis_concat_tvalid->in_port[0](m_axis_concat_tvalid_out_0);
  mp_m_axis_concat_tvalid->out_port(m_axis_tvalid);
    mp_m_axis_concat_tvalid->offset_port(0, 0);
  mp_m_axis_split_tready = new xsc::xsc_split<10, 10>("m_axis_split_tready");
  mp_m_axis_split_tready->in_port(m_axis_tready);
  mp_m_axis_split_tready->out_port[0](m_axis_split_tready_out_0);
    mp_m_axis_split_tready->add_mask(0,1,0);
  mp_m_axis_concat_tdata = new xsc::xsc_concatenator<640, 10>("m_axis_concat_tdata");
  mp_m_axis_concat_tdata->in_port[0](m_axis_concat_tdata_out_0);
  mp_m_axis_concat_tdata->out_port(m_axis_tdata);
    mp_m_axis_concat_tdata->offset_port(0, 0);
  mp_m_axis_concat_tstrb = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tstrb");
  mp_m_axis_concat_tstrb->in_port[0](m_axis_concat_tstrb_out_0);
  mp_m_axis_concat_tstrb->out_port(m_axis_tstrb);
    mp_m_axis_concat_tstrb->offset_port(0, 0);
  mp_m_axis_concat_tkeep = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tkeep");
  mp_m_axis_concat_tkeep->in_port[0](m_axis_concat_tkeep_out_0);
  mp_m_axis_concat_tkeep->out_port(m_axis_tkeep);
    mp_m_axis_concat_tkeep->offset_port(0, 0);
  mp_m_axis_concat_tlast = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tlast");
  mp_m_axis_concat_tlast->in_port[0](m_axis_concat_tlast_out_0);
  mp_m_axis_concat_tlast->out_port(m_axis_tlast);
    mp_m_axis_concat_tlast->offset_port(0, 0);
  mp_m_axis_concat_tid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tid");
  mp_m_axis_concat_tid->in_port[0](m_axis_concat_tid_out_0);
  mp_m_axis_concat_tid->out_port(m_axis_tid);
    mp_m_axis_concat_tid->offset_port(0, 0);
  mp_m_axis_concat_tdest = new xsc::xsc_concatenator<40, 10>("m_axis_concat_tdest");
  mp_m_axis_concat_tdest->in_port[0](m_axis_concat_tdest_out_0);
  mp_m_axis_concat_tdest->out_port(m_axis_tdest);
    mp_m_axis_concat_tdest->offset_port(0, 0);
  mp_m_axis_concat_tuser = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tuser");
  mp_m_axis_concat_tuser->in_port[0](m_axis_concat_tuser_out_0);
  mp_m_axis_concat_tuser->out_port(m_axis_tuser);
    mp_m_axis_concat_tuser->offset_port(0, 0);
  
  mp_s_axis_split_tvalid->out_port[1](s_axis_split_tvalid_out_1);
    mp_s_axis_split_tvalid->add_mask(1,2,1);
  mp_s_axis_concat_tready->in_port[1](s_axis_concat_tready_out_1);
  mp_s_axis_concat_tready->offset_port(1, 1);
  
  mp_s_axis_split_tdata->out_port[1](s_axis_split_tdata_out_1);
    mp_s_axis_split_tdata->add_mask(1,128,64);
  
  mp_s_axis_split_tstrb->out_port[1](s_axis_split_tstrb_out_1);
    mp_s_axis_split_tstrb->add_mask(1,16,8);
  
  mp_s_axis_split_tkeep->out_port[1](s_axis_split_tkeep_out_1);
    mp_s_axis_split_tkeep->add_mask(1,16,8);
  
  mp_s_axis_split_tlast->out_port[1](s_axis_split_tlast_out_1);
    mp_s_axis_split_tlast->add_mask(1,2,1);
  
  mp_s_axis_split_tid->out_port[1](s_axis_split_tid_out_1);
    mp_s_axis_split_tid->add_mask(1,2,1);
  
  mp_s_axis_split_tdest->out_port[1](s_axis_split_tdest_out_1);
    mp_s_axis_split_tdest->add_mask(1,8,4);
  
  mp_s_axis_split_tuser->out_port[1](s_axis_split_tuser_out_1);
    mp_s_axis_split_tuser->add_mask(1,2,1);
  mp_m_axis_concat_tvalid->in_port[1](m_axis_concat_tvalid_out_1);
  mp_m_axis_concat_tvalid->offset_port(1, 1);
  
  mp_m_axis_split_tready->out_port[1](m_axis_split_tready_out_1);
    mp_m_axis_split_tready->add_mask(1,2,1);
  mp_m_axis_concat_tdata->in_port[1](m_axis_concat_tdata_out_1);
  mp_m_axis_concat_tdata->offset_port(1, 64);
  mp_m_axis_concat_tstrb->in_port[1](m_axis_concat_tstrb_out_1);
  mp_m_axis_concat_tstrb->offset_port(1, 8);
  mp_m_axis_concat_tkeep->in_port[1](m_axis_concat_tkeep_out_1);
  mp_m_axis_concat_tkeep->offset_port(1, 8);
  mp_m_axis_concat_tlast->in_port[1](m_axis_concat_tlast_out_1);
  mp_m_axis_concat_tlast->offset_port(1, 1);
  mp_m_axis_concat_tid->in_port[1](m_axis_concat_tid_out_1);
  mp_m_axis_concat_tid->offset_port(1, 1);
  mp_m_axis_concat_tdest->in_port[1](m_axis_concat_tdest_out_1);
  mp_m_axis_concat_tdest->offset_port(1, 4);
  mp_m_axis_concat_tuser->in_port[1](m_axis_concat_tuser_out_1);
  mp_m_axis_concat_tuser->offset_port(1, 1);
  
  mp_s_axis_split_tvalid->out_port[2](s_axis_split_tvalid_out_2);
    mp_s_axis_split_tvalid->add_mask(2,3,2);
  mp_s_axis_concat_tready->in_port[2](s_axis_concat_tready_out_2);
  mp_s_axis_concat_tready->offset_port(2, 2);
  
  mp_s_axis_split_tdata->out_port[2](s_axis_split_tdata_out_2);
    mp_s_axis_split_tdata->add_mask(2,192,128);
  
  mp_s_axis_split_tstrb->out_port[2](s_axis_split_tstrb_out_2);
    mp_s_axis_split_tstrb->add_mask(2,24,16);
  
  mp_s_axis_split_tkeep->out_port[2](s_axis_split_tkeep_out_2);
    mp_s_axis_split_tkeep->add_mask(2,24,16);
  
  mp_s_axis_split_tlast->out_port[2](s_axis_split_tlast_out_2);
    mp_s_axis_split_tlast->add_mask(2,3,2);
  
  mp_s_axis_split_tid->out_port[2](s_axis_split_tid_out_2);
    mp_s_axis_split_tid->add_mask(2,3,2);
  
  mp_s_axis_split_tdest->out_port[2](s_axis_split_tdest_out_2);
    mp_s_axis_split_tdest->add_mask(2,12,8);
  
  mp_s_axis_split_tuser->out_port[2](s_axis_split_tuser_out_2);
    mp_s_axis_split_tuser->add_mask(2,3,2);
  mp_m_axis_concat_tvalid->in_port[2](m_axis_concat_tvalid_out_2);
  mp_m_axis_concat_tvalid->offset_port(2, 2);
  
  mp_m_axis_split_tready->out_port[2](m_axis_split_tready_out_2);
    mp_m_axis_split_tready->add_mask(2,3,2);
  mp_m_axis_concat_tdata->in_port[2](m_axis_concat_tdata_out_2);
  mp_m_axis_concat_tdata->offset_port(2, 128);
  mp_m_axis_concat_tstrb->in_port[2](m_axis_concat_tstrb_out_2);
  mp_m_axis_concat_tstrb->offset_port(2, 16);
  mp_m_axis_concat_tkeep->in_port[2](m_axis_concat_tkeep_out_2);
  mp_m_axis_concat_tkeep->offset_port(2, 16);
  mp_m_axis_concat_tlast->in_port[2](m_axis_concat_tlast_out_2);
  mp_m_axis_concat_tlast->offset_port(2, 2);
  mp_m_axis_concat_tid->in_port[2](m_axis_concat_tid_out_2);
  mp_m_axis_concat_tid->offset_port(2, 2);
  mp_m_axis_concat_tdest->in_port[2](m_axis_concat_tdest_out_2);
  mp_m_axis_concat_tdest->offset_port(2, 8);
  mp_m_axis_concat_tuser->in_port[2](m_axis_concat_tuser_out_2);
  mp_m_axis_concat_tuser->offset_port(2, 2);
  
  mp_s_axis_split_tvalid->out_port[3](s_axis_split_tvalid_out_3);
    mp_s_axis_split_tvalid->add_mask(3,4,3);
  mp_s_axis_concat_tready->in_port[3](s_axis_concat_tready_out_3);
  mp_s_axis_concat_tready->offset_port(3, 3);
  
  mp_s_axis_split_tdata->out_port[3](s_axis_split_tdata_out_3);
    mp_s_axis_split_tdata->add_mask(3,256,192);
  
  mp_s_axis_split_tstrb->out_port[3](s_axis_split_tstrb_out_3);
    mp_s_axis_split_tstrb->add_mask(3,32,24);
  
  mp_s_axis_split_tkeep->out_port[3](s_axis_split_tkeep_out_3);
    mp_s_axis_split_tkeep->add_mask(3,32,24);
  
  mp_s_axis_split_tlast->out_port[3](s_axis_split_tlast_out_3);
    mp_s_axis_split_tlast->add_mask(3,4,3);
  
  mp_s_axis_split_tid->out_port[3](s_axis_split_tid_out_3);
    mp_s_axis_split_tid->add_mask(3,4,3);
  
  mp_s_axis_split_tdest->out_port[3](s_axis_split_tdest_out_3);
    mp_s_axis_split_tdest->add_mask(3,16,12);
  
  mp_s_axis_split_tuser->out_port[3](s_axis_split_tuser_out_3);
    mp_s_axis_split_tuser->add_mask(3,4,3);
  mp_m_axis_concat_tvalid->in_port[3](m_axis_concat_tvalid_out_3);
  mp_m_axis_concat_tvalid->offset_port(3, 3);
  
  mp_m_axis_split_tready->out_port[3](m_axis_split_tready_out_3);
    mp_m_axis_split_tready->add_mask(3,4,3);
  mp_m_axis_concat_tdata->in_port[3](m_axis_concat_tdata_out_3);
  mp_m_axis_concat_tdata->offset_port(3, 192);
  mp_m_axis_concat_tstrb->in_port[3](m_axis_concat_tstrb_out_3);
  mp_m_axis_concat_tstrb->offset_port(3, 24);
  mp_m_axis_concat_tkeep->in_port[3](m_axis_concat_tkeep_out_3);
  mp_m_axis_concat_tkeep->offset_port(3, 24);
  mp_m_axis_concat_tlast->in_port[3](m_axis_concat_tlast_out_3);
  mp_m_axis_concat_tlast->offset_port(3, 3);
  mp_m_axis_concat_tid->in_port[3](m_axis_concat_tid_out_3);
  mp_m_axis_concat_tid->offset_port(3, 3);
  mp_m_axis_concat_tdest->in_port[3](m_axis_concat_tdest_out_3);
  mp_m_axis_concat_tdest->offset_port(3, 12);
  mp_m_axis_concat_tuser->in_port[3](m_axis_concat_tuser_out_3);
  mp_m_axis_concat_tuser->offset_port(3, 3);
  
  mp_s_axis_split_tvalid->out_port[4](s_axis_split_tvalid_out_4);
    mp_s_axis_split_tvalid->add_mask(4,5,4);
  mp_s_axis_concat_tready->in_port[4](s_axis_concat_tready_out_4);
  mp_s_axis_concat_tready->offset_port(4, 4);
  
  mp_s_axis_split_tdata->out_port[4](s_axis_split_tdata_out_4);
    mp_s_axis_split_tdata->add_mask(4,320,256);
  
  mp_s_axis_split_tstrb->out_port[4](s_axis_split_tstrb_out_4);
    mp_s_axis_split_tstrb->add_mask(4,40,32);
  
  mp_s_axis_split_tkeep->out_port[4](s_axis_split_tkeep_out_4);
    mp_s_axis_split_tkeep->add_mask(4,40,32);
  
  mp_s_axis_split_tlast->out_port[4](s_axis_split_tlast_out_4);
    mp_s_axis_split_tlast->add_mask(4,5,4);
  
  mp_s_axis_split_tid->out_port[4](s_axis_split_tid_out_4);
    mp_s_axis_split_tid->add_mask(4,5,4);
  
  mp_s_axis_split_tdest->out_port[4](s_axis_split_tdest_out_4);
    mp_s_axis_split_tdest->add_mask(4,20,16);
  
  mp_s_axis_split_tuser->out_port[4](s_axis_split_tuser_out_4);
    mp_s_axis_split_tuser->add_mask(4,5,4);
  mp_m_axis_concat_tvalid->in_port[4](m_axis_concat_tvalid_out_4);
  mp_m_axis_concat_tvalid->offset_port(4, 4);
  
  mp_m_axis_split_tready->out_port[4](m_axis_split_tready_out_4);
    mp_m_axis_split_tready->add_mask(4,5,4);
  mp_m_axis_concat_tdata->in_port[4](m_axis_concat_tdata_out_4);
  mp_m_axis_concat_tdata->offset_port(4, 256);
  mp_m_axis_concat_tstrb->in_port[4](m_axis_concat_tstrb_out_4);
  mp_m_axis_concat_tstrb->offset_port(4, 32);
  mp_m_axis_concat_tkeep->in_port[4](m_axis_concat_tkeep_out_4);
  mp_m_axis_concat_tkeep->offset_port(4, 32);
  mp_m_axis_concat_tlast->in_port[4](m_axis_concat_tlast_out_4);
  mp_m_axis_concat_tlast->offset_port(4, 4);
  mp_m_axis_concat_tid->in_port[4](m_axis_concat_tid_out_4);
  mp_m_axis_concat_tid->offset_port(4, 4);
  mp_m_axis_concat_tdest->in_port[4](m_axis_concat_tdest_out_4);
  mp_m_axis_concat_tdest->offset_port(4, 16);
  mp_m_axis_concat_tuser->in_port[4](m_axis_concat_tuser_out_4);
  mp_m_axis_concat_tuser->offset_port(4, 4);
  
  mp_s_axis_split_tvalid->out_port[5](s_axis_split_tvalid_out_5);
    mp_s_axis_split_tvalid->add_mask(5,6,5);
  mp_s_axis_concat_tready->in_port[5](s_axis_concat_tready_out_5);
  mp_s_axis_concat_tready->offset_port(5, 5);
  
  mp_s_axis_split_tdata->out_port[5](s_axis_split_tdata_out_5);
    mp_s_axis_split_tdata->add_mask(5,384,320);
  
  mp_s_axis_split_tstrb->out_port[5](s_axis_split_tstrb_out_5);
    mp_s_axis_split_tstrb->add_mask(5,48,40);
  
  mp_s_axis_split_tkeep->out_port[5](s_axis_split_tkeep_out_5);
    mp_s_axis_split_tkeep->add_mask(5,48,40);
  
  mp_s_axis_split_tlast->out_port[5](s_axis_split_tlast_out_5);
    mp_s_axis_split_tlast->add_mask(5,6,5);
  
  mp_s_axis_split_tid->out_port[5](s_axis_split_tid_out_5);
    mp_s_axis_split_tid->add_mask(5,6,5);
  
  mp_s_axis_split_tdest->out_port[5](s_axis_split_tdest_out_5);
    mp_s_axis_split_tdest->add_mask(5,24,20);
  
  mp_s_axis_split_tuser->out_port[5](s_axis_split_tuser_out_5);
    mp_s_axis_split_tuser->add_mask(5,6,5);
  mp_m_axis_concat_tvalid->in_port[5](m_axis_concat_tvalid_out_5);
  mp_m_axis_concat_tvalid->offset_port(5, 5);
  
  mp_m_axis_split_tready->out_port[5](m_axis_split_tready_out_5);
    mp_m_axis_split_tready->add_mask(5,6,5);
  mp_m_axis_concat_tdata->in_port[5](m_axis_concat_tdata_out_5);
  mp_m_axis_concat_tdata->offset_port(5, 320);
  mp_m_axis_concat_tstrb->in_port[5](m_axis_concat_tstrb_out_5);
  mp_m_axis_concat_tstrb->offset_port(5, 40);
  mp_m_axis_concat_tkeep->in_port[5](m_axis_concat_tkeep_out_5);
  mp_m_axis_concat_tkeep->offset_port(5, 40);
  mp_m_axis_concat_tlast->in_port[5](m_axis_concat_tlast_out_5);
  mp_m_axis_concat_tlast->offset_port(5, 5);
  mp_m_axis_concat_tid->in_port[5](m_axis_concat_tid_out_5);
  mp_m_axis_concat_tid->offset_port(5, 5);
  mp_m_axis_concat_tdest->in_port[5](m_axis_concat_tdest_out_5);
  mp_m_axis_concat_tdest->offset_port(5, 20);
  mp_m_axis_concat_tuser->in_port[5](m_axis_concat_tuser_out_5);
  mp_m_axis_concat_tuser->offset_port(5, 5);
  
  mp_s_axis_split_tvalid->out_port[6](s_axis_split_tvalid_out_6);
    mp_s_axis_split_tvalid->add_mask(6,7,6);
  mp_s_axis_concat_tready->in_port[6](s_axis_concat_tready_out_6);
  mp_s_axis_concat_tready->offset_port(6, 6);
  
  mp_s_axis_split_tdata->out_port[6](s_axis_split_tdata_out_6);
    mp_s_axis_split_tdata->add_mask(6,448,384);
  
  mp_s_axis_split_tstrb->out_port[6](s_axis_split_tstrb_out_6);
    mp_s_axis_split_tstrb->add_mask(6,56,48);
  
  mp_s_axis_split_tkeep->out_port[6](s_axis_split_tkeep_out_6);
    mp_s_axis_split_tkeep->add_mask(6,56,48);
  
  mp_s_axis_split_tlast->out_port[6](s_axis_split_tlast_out_6);
    mp_s_axis_split_tlast->add_mask(6,7,6);
  
  mp_s_axis_split_tid->out_port[6](s_axis_split_tid_out_6);
    mp_s_axis_split_tid->add_mask(6,7,6);
  
  mp_s_axis_split_tdest->out_port[6](s_axis_split_tdest_out_6);
    mp_s_axis_split_tdest->add_mask(6,28,24);
  
  mp_s_axis_split_tuser->out_port[6](s_axis_split_tuser_out_6);
    mp_s_axis_split_tuser->add_mask(6,7,6);
  mp_m_axis_concat_tvalid->in_port[6](m_axis_concat_tvalid_out_6);
  mp_m_axis_concat_tvalid->offset_port(6, 6);
  
  mp_m_axis_split_tready->out_port[6](m_axis_split_tready_out_6);
    mp_m_axis_split_tready->add_mask(6,7,6);
  mp_m_axis_concat_tdata->in_port[6](m_axis_concat_tdata_out_6);
  mp_m_axis_concat_tdata->offset_port(6, 384);
  mp_m_axis_concat_tstrb->in_port[6](m_axis_concat_tstrb_out_6);
  mp_m_axis_concat_tstrb->offset_port(6, 48);
  mp_m_axis_concat_tkeep->in_port[6](m_axis_concat_tkeep_out_6);
  mp_m_axis_concat_tkeep->offset_port(6, 48);
  mp_m_axis_concat_tlast->in_port[6](m_axis_concat_tlast_out_6);
  mp_m_axis_concat_tlast->offset_port(6, 6);
  mp_m_axis_concat_tid->in_port[6](m_axis_concat_tid_out_6);
  mp_m_axis_concat_tid->offset_port(6, 6);
  mp_m_axis_concat_tdest->in_port[6](m_axis_concat_tdest_out_6);
  mp_m_axis_concat_tdest->offset_port(6, 24);
  mp_m_axis_concat_tuser->in_port[6](m_axis_concat_tuser_out_6);
  mp_m_axis_concat_tuser->offset_port(6, 6);
  
  mp_s_axis_split_tvalid->out_port[7](s_axis_split_tvalid_out_7);
    mp_s_axis_split_tvalid->add_mask(7,8,7);
  mp_s_axis_concat_tready->in_port[7](s_axis_concat_tready_out_7);
  mp_s_axis_concat_tready->offset_port(7, 7);
  
  mp_s_axis_split_tdata->out_port[7](s_axis_split_tdata_out_7);
    mp_s_axis_split_tdata->add_mask(7,512,448);
  
  mp_s_axis_split_tstrb->out_port[7](s_axis_split_tstrb_out_7);
    mp_s_axis_split_tstrb->add_mask(7,64,56);
  
  mp_s_axis_split_tkeep->out_port[7](s_axis_split_tkeep_out_7);
    mp_s_axis_split_tkeep->add_mask(7,64,56);
  
  mp_s_axis_split_tlast->out_port[7](s_axis_split_tlast_out_7);
    mp_s_axis_split_tlast->add_mask(7,8,7);
  
  mp_s_axis_split_tid->out_port[7](s_axis_split_tid_out_7);
    mp_s_axis_split_tid->add_mask(7,8,7);
  
  mp_s_axis_split_tdest->out_port[7](s_axis_split_tdest_out_7);
    mp_s_axis_split_tdest->add_mask(7,32,28);
  
  mp_s_axis_split_tuser->out_port[7](s_axis_split_tuser_out_7);
    mp_s_axis_split_tuser->add_mask(7,8,7);
  mp_m_axis_concat_tvalid->in_port[7](m_axis_concat_tvalid_out_7);
  mp_m_axis_concat_tvalid->offset_port(7, 7);
  
  mp_m_axis_split_tready->out_port[7](m_axis_split_tready_out_7);
    mp_m_axis_split_tready->add_mask(7,8,7);
  mp_m_axis_concat_tdata->in_port[7](m_axis_concat_tdata_out_7);
  mp_m_axis_concat_tdata->offset_port(7, 448);
  mp_m_axis_concat_tstrb->in_port[7](m_axis_concat_tstrb_out_7);
  mp_m_axis_concat_tstrb->offset_port(7, 56);
  mp_m_axis_concat_tkeep->in_port[7](m_axis_concat_tkeep_out_7);
  mp_m_axis_concat_tkeep->offset_port(7, 56);
  mp_m_axis_concat_tlast->in_port[7](m_axis_concat_tlast_out_7);
  mp_m_axis_concat_tlast->offset_port(7, 7);
  mp_m_axis_concat_tid->in_port[7](m_axis_concat_tid_out_7);
  mp_m_axis_concat_tid->offset_port(7, 7);
  mp_m_axis_concat_tdest->in_port[7](m_axis_concat_tdest_out_7);
  mp_m_axis_concat_tdest->offset_port(7, 28);
  mp_m_axis_concat_tuser->in_port[7](m_axis_concat_tuser_out_7);
  mp_m_axis_concat_tuser->offset_port(7, 7);
  
  mp_s_axis_split_tvalid->out_port[8](s_axis_split_tvalid_out_8);
    mp_s_axis_split_tvalid->add_mask(8,9,8);
  mp_s_axis_concat_tready->in_port[8](s_axis_concat_tready_out_8);
  mp_s_axis_concat_tready->offset_port(8, 8);
  
  mp_s_axis_split_tdata->out_port[8](s_axis_split_tdata_out_8);
    mp_s_axis_split_tdata->add_mask(8,576,512);
  
  mp_s_axis_split_tstrb->out_port[8](s_axis_split_tstrb_out_8);
    mp_s_axis_split_tstrb->add_mask(8,72,64);
  
  mp_s_axis_split_tkeep->out_port[8](s_axis_split_tkeep_out_8);
    mp_s_axis_split_tkeep->add_mask(8,72,64);
  
  mp_s_axis_split_tlast->out_port[8](s_axis_split_tlast_out_8);
    mp_s_axis_split_tlast->add_mask(8,9,8);
  
  mp_s_axis_split_tid->out_port[8](s_axis_split_tid_out_8);
    mp_s_axis_split_tid->add_mask(8,9,8);
  
  mp_s_axis_split_tdest->out_port[8](s_axis_split_tdest_out_8);
    mp_s_axis_split_tdest->add_mask(8,36,32);
  
  mp_s_axis_split_tuser->out_port[8](s_axis_split_tuser_out_8);
    mp_s_axis_split_tuser->add_mask(8,9,8);
  mp_m_axis_concat_tvalid->in_port[8](m_axis_concat_tvalid_out_8);
  mp_m_axis_concat_tvalid->offset_port(8, 8);
  
  mp_m_axis_split_tready->out_port[8](m_axis_split_tready_out_8);
    mp_m_axis_split_tready->add_mask(8,9,8);
  mp_m_axis_concat_tdata->in_port[8](m_axis_concat_tdata_out_8);
  mp_m_axis_concat_tdata->offset_port(8, 512);
  mp_m_axis_concat_tstrb->in_port[8](m_axis_concat_tstrb_out_8);
  mp_m_axis_concat_tstrb->offset_port(8, 64);
  mp_m_axis_concat_tkeep->in_port[8](m_axis_concat_tkeep_out_8);
  mp_m_axis_concat_tkeep->offset_port(8, 64);
  mp_m_axis_concat_tlast->in_port[8](m_axis_concat_tlast_out_8);
  mp_m_axis_concat_tlast->offset_port(8, 8);
  mp_m_axis_concat_tid->in_port[8](m_axis_concat_tid_out_8);
  mp_m_axis_concat_tid->offset_port(8, 8);
  mp_m_axis_concat_tdest->in_port[8](m_axis_concat_tdest_out_8);
  mp_m_axis_concat_tdest->offset_port(8, 32);
  mp_m_axis_concat_tuser->in_port[8](m_axis_concat_tuser_out_8);
  mp_m_axis_concat_tuser->offset_port(8, 8);
  
  mp_s_axis_split_tvalid->out_port[9](s_axis_split_tvalid_out_9);
    mp_s_axis_split_tvalid->add_mask(9,10,9);
  mp_s_axis_concat_tready->in_port[9](s_axis_concat_tready_out_9);
  mp_s_axis_concat_tready->offset_port(9, 9);
  
  mp_s_axis_split_tdata->out_port[9](s_axis_split_tdata_out_9);
    mp_s_axis_split_tdata->add_mask(9,640,576);
  
  mp_s_axis_split_tstrb->out_port[9](s_axis_split_tstrb_out_9);
    mp_s_axis_split_tstrb->add_mask(9,80,72);
  
  mp_s_axis_split_tkeep->out_port[9](s_axis_split_tkeep_out_9);
    mp_s_axis_split_tkeep->add_mask(9,80,72);
  
  mp_s_axis_split_tlast->out_port[9](s_axis_split_tlast_out_9);
    mp_s_axis_split_tlast->add_mask(9,10,9);
  
  mp_s_axis_split_tid->out_port[9](s_axis_split_tid_out_9);
    mp_s_axis_split_tid->add_mask(9,10,9);
  
  mp_s_axis_split_tdest->out_port[9](s_axis_split_tdest_out_9);
    mp_s_axis_split_tdest->add_mask(9,40,36);
  
  mp_s_axis_split_tuser->out_port[9](s_axis_split_tuser_out_9);
    mp_s_axis_split_tuser->add_mask(9,10,9);
  mp_m_axis_concat_tvalid->in_port[9](m_axis_concat_tvalid_out_9);
  mp_m_axis_concat_tvalid->offset_port(9, 9);
  
  mp_m_axis_split_tready->out_port[9](m_axis_split_tready_out_9);
    mp_m_axis_split_tready->add_mask(9,10,9);
  mp_m_axis_concat_tdata->in_port[9](m_axis_concat_tdata_out_9);
  mp_m_axis_concat_tdata->offset_port(9, 576);
  mp_m_axis_concat_tstrb->in_port[9](m_axis_concat_tstrb_out_9);
  mp_m_axis_concat_tstrb->offset_port(9, 72);
  mp_m_axis_concat_tkeep->in_port[9](m_axis_concat_tkeep_out_9);
  mp_m_axis_concat_tkeep->offset_port(9, 72);
  mp_m_axis_concat_tlast->in_port[9](m_axis_concat_tlast_out_9);
  mp_m_axis_concat_tlast->offset_port(9, 9);
  mp_m_axis_concat_tid->in_port[9](m_axis_concat_tid_out_9);
  mp_m_axis_concat_tid->offset_port(9, 9);
  mp_m_axis_concat_tdest->in_port[9](m_axis_concat_tdest_out_9);
  mp_m_axis_concat_tdest->offset_port(9, 36);
  mp_m_axis_concat_tuser->in_port[9](m_axis_concat_tuser_out_9);
  mp_m_axis_concat_tuser->offset_port(9, 9);

  // initialize socket stubs

}

void bd_d92b_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S00_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S00_AXIS' transactor parameters
    xsc::common_cpp::properties S00_AXIS_transactor_param_props;
    S00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S00_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S00_AXIS_transactor", S00_AXIS_transactor_param_props);

    // S00_AXIS' transactor ports

    mp_s_axis_tvalid_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_0");
    mp_s_axis_tvalid_converter_0->vector_in(s_axis_split_tvalid_out_0);
    mp_s_axis_tvalid_converter_0->scalar_out(m_s_axis_tvalid_converter_0_signal);
    mp_S00_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_0_signal);
    mp_s_axis_tready_converter_0 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_0");
    mp_s_axis_tready_converter_0->scalar_in(m_s_axis_tready_converter_0_signal);
    mp_s_axis_tready_converter_0->vector_out(s_axis_concat_tready_out_0);
    mp_S00_AXIS_transactor->TREADY(m_s_axis_tready_converter_0_signal);
    mp_s_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_0");
    mp_s_axis_tdata_converter_0->vector_in(s_axis_split_tdata_out_0);
    mp_s_axis_tdata_converter_0->vector_out(m_s_axis_tdata_converter_0_signal);
    mp_S00_AXIS_transactor->TDATA(m_s_axis_tdata_converter_0_signal);
    mp_s_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_0");
    mp_s_axis_tstrb_converter_0->vector_in(s_axis_split_tstrb_out_0);
    mp_s_axis_tstrb_converter_0->vector_out(m_s_axis_tstrb_converter_0_signal);
    mp_S00_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_0_signal);
    mp_s_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_0");
    mp_s_axis_tkeep_converter_0->vector_in(s_axis_split_tkeep_out_0);
    mp_s_axis_tkeep_converter_0->vector_out(m_s_axis_tkeep_converter_0_signal);
    mp_S00_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_0_signal);
    mp_s_axis_tlast_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_0");
    mp_s_axis_tlast_converter_0->vector_in(s_axis_split_tlast_out_0);
    mp_s_axis_tlast_converter_0->scalar_out(m_s_axis_tlast_converter_0_signal);
    mp_S00_AXIS_transactor->TLAST(m_s_axis_tlast_converter_0_signal);
    mp_s_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_0");
    mp_s_axis_tid_converter_0->vector_in(s_axis_split_tid_out_0);
    mp_s_axis_tid_converter_0->vector_out(m_s_axis_tid_converter_0_signal);
    mp_S00_AXIS_transactor->TID(m_s_axis_tid_converter_0_signal);
    mp_s_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_0");
    mp_s_axis_tdest_converter_0->vector_in(s_axis_split_tdest_out_0);
    mp_s_axis_tdest_converter_0->vector_out(m_s_axis_tdest_converter_0_signal);
    mp_S00_AXIS_transactor->TDEST(m_s_axis_tdest_converter_0_signal);
    mp_s_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_0");
    mp_s_axis_tuser_converter_0->vector_in(s_axis_split_tuser_out_0);
    mp_s_axis_tuser_converter_0->vector_out(m_s_axis_tuser_converter_0_signal);
    mp_S00_AXIS_transactor->TUSER(m_s_axis_tuser_converter_0_signal);
    mp_S00_AXIS_transactor->CLK(aclk);
    mp_S00_AXIS_transactor->RST(aresetn);

    // S00_AXIS' transactor sockets

    mp_impl->S00_AXIS_TARGET_SOCKET->bind(*(mp_S00_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M00_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M00_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M00_AXIS' transactor parameters
    xsc::common_cpp::properties M00_AXIS_transactor_param_props;
    M00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M00_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M00_AXIS_transactor", M00_AXIS_transactor_param_props);

    // M00_AXIS' transactor ports

    mp_m_axis_tvalid_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_0");
    mp_m_axis_tvalid_converter_0->scalar_in(m_m_axis_tvalid_converter_0_signal);
    mp_m_axis_tvalid_converter_0->vector_out(m_axis_concat_tvalid_out_0);
    mp_M00_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_0_signal);
    mp_m_axis_tready_converter_0 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_0");
    mp_m_axis_tready_converter_0->vector_in(m_axis_split_tready_out_0);
    mp_m_axis_tready_converter_0->scalar_out(m_m_axis_tready_converter_0_signal);
    mp_M00_AXIS_transactor->TREADY(m_m_axis_tready_converter_0_signal);
    mp_m_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_0");
    mp_m_axis_tdata_converter_0->vector_in(m_m_axis_tdata_converter_0_signal);
    mp_m_axis_tdata_converter_0->vector_out(m_axis_concat_tdata_out_0);
    mp_M00_AXIS_transactor->TDATA(m_m_axis_tdata_converter_0_signal);
    mp_m_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_0");
    mp_m_axis_tstrb_converter_0->vector_in(m_m_axis_tstrb_converter_0_signal);
    mp_m_axis_tstrb_converter_0->vector_out(m_axis_concat_tstrb_out_0);
    mp_M00_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_0_signal);
    mp_m_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_0");
    mp_m_axis_tkeep_converter_0->vector_in(m_m_axis_tkeep_converter_0_signal);
    mp_m_axis_tkeep_converter_0->vector_out(m_axis_concat_tkeep_out_0);
    mp_M00_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_0_signal);
    mp_m_axis_tlast_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_0");
    mp_m_axis_tlast_converter_0->scalar_in(m_m_axis_tlast_converter_0_signal);
    mp_m_axis_tlast_converter_0->vector_out(m_axis_concat_tlast_out_0);
    mp_M00_AXIS_transactor->TLAST(m_m_axis_tlast_converter_0_signal);
    mp_m_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_0");
    mp_m_axis_tid_converter_0->vector_in(m_m_axis_tid_converter_0_signal);
    mp_m_axis_tid_converter_0->vector_out(m_axis_concat_tid_out_0);
    mp_M00_AXIS_transactor->TID(m_m_axis_tid_converter_0_signal);
    mp_m_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_0");
    mp_m_axis_tdest_converter_0->vector_in(m_m_axis_tdest_converter_0_signal);
    mp_m_axis_tdest_converter_0->vector_out(m_axis_concat_tdest_out_0);
    mp_M00_AXIS_transactor->TDEST(m_m_axis_tdest_converter_0_signal);
    mp_m_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_0");
    mp_m_axis_tuser_converter_0->vector_in(m_m_axis_tuser_converter_0_signal);
    mp_m_axis_tuser_converter_0->vector_out(m_axis_concat_tuser_out_0);
    mp_M00_AXIS_transactor->TUSER(m_m_axis_tuser_converter_0_signal);
    mp_M00_AXIS_transactor->CLK(aclk);
    mp_M00_AXIS_transactor->RST(aresetn);

    // M00_AXIS' transactor sockets

    mp_impl->M00_AXIS_INITIATOR_SOCKET->bind(*(mp_M00_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S01_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S01_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S01_AXIS' transactor parameters
    xsc::common_cpp::properties S01_AXIS_transactor_param_props;
    S01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S01_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S01_AXIS_transactor", S01_AXIS_transactor_param_props);

    // S01_AXIS' transactor ports

    mp_s_axis_tvalid_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_1");
    mp_s_axis_tvalid_converter_1->vector_in(s_axis_split_tvalid_out_1);
    mp_s_axis_tvalid_converter_1->scalar_out(m_s_axis_tvalid_converter_1_signal);
    mp_S01_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_1_signal);
    mp_s_axis_tready_converter_1 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_1");
    mp_s_axis_tready_converter_1->scalar_in(m_s_axis_tready_converter_1_signal);
    mp_s_axis_tready_converter_1->vector_out(s_axis_concat_tready_out_1);
    mp_S01_AXIS_transactor->TREADY(m_s_axis_tready_converter_1_signal);
    mp_s_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_1");
    mp_s_axis_tdata_converter_1->vector_in(s_axis_split_tdata_out_1);
    mp_s_axis_tdata_converter_1->vector_out(m_s_axis_tdata_converter_1_signal);
    mp_S01_AXIS_transactor->TDATA(m_s_axis_tdata_converter_1_signal);
    mp_s_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_1");
    mp_s_axis_tstrb_converter_1->vector_in(s_axis_split_tstrb_out_1);
    mp_s_axis_tstrb_converter_1->vector_out(m_s_axis_tstrb_converter_1_signal);
    mp_S01_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_1_signal);
    mp_s_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_1");
    mp_s_axis_tkeep_converter_1->vector_in(s_axis_split_tkeep_out_1);
    mp_s_axis_tkeep_converter_1->vector_out(m_s_axis_tkeep_converter_1_signal);
    mp_S01_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_1_signal);
    mp_s_axis_tlast_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_1");
    mp_s_axis_tlast_converter_1->vector_in(s_axis_split_tlast_out_1);
    mp_s_axis_tlast_converter_1->scalar_out(m_s_axis_tlast_converter_1_signal);
    mp_S01_AXIS_transactor->TLAST(m_s_axis_tlast_converter_1_signal);
    mp_s_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_1");
    mp_s_axis_tid_converter_1->vector_in(s_axis_split_tid_out_1);
    mp_s_axis_tid_converter_1->vector_out(m_s_axis_tid_converter_1_signal);
    mp_S01_AXIS_transactor->TID(m_s_axis_tid_converter_1_signal);
    mp_s_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_1");
    mp_s_axis_tdest_converter_1->vector_in(s_axis_split_tdest_out_1);
    mp_s_axis_tdest_converter_1->vector_out(m_s_axis_tdest_converter_1_signal);
    mp_S01_AXIS_transactor->TDEST(m_s_axis_tdest_converter_1_signal);
    mp_s_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_1");
    mp_s_axis_tuser_converter_1->vector_in(s_axis_split_tuser_out_1);
    mp_s_axis_tuser_converter_1->vector_out(m_s_axis_tuser_converter_1_signal);
    mp_S01_AXIS_transactor->TUSER(m_s_axis_tuser_converter_1_signal);
    mp_S01_AXIS_transactor->CLK(aclk);
    mp_S01_AXIS_transactor->RST(aresetn);

    // S01_AXIS' transactor sockets

    mp_impl->S01_AXIS_TARGET_SOCKET->bind(*(mp_S01_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M01_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M01_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M01_AXIS' transactor parameters
    xsc::common_cpp::properties M01_AXIS_transactor_param_props;
    M01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M01_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M01_AXIS_transactor", M01_AXIS_transactor_param_props);

    // M01_AXIS' transactor ports

    mp_m_axis_tvalid_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_1");
    mp_m_axis_tvalid_converter_1->scalar_in(m_m_axis_tvalid_converter_1_signal);
    mp_m_axis_tvalid_converter_1->vector_out(m_axis_concat_tvalid_out_1);
    mp_M01_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_1_signal);
    mp_m_axis_tready_converter_1 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_1");
    mp_m_axis_tready_converter_1->vector_in(m_axis_split_tready_out_1);
    mp_m_axis_tready_converter_1->scalar_out(m_m_axis_tready_converter_1_signal);
    mp_M01_AXIS_transactor->TREADY(m_m_axis_tready_converter_1_signal);
    mp_m_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_1");
    mp_m_axis_tdata_converter_1->vector_in(m_m_axis_tdata_converter_1_signal);
    mp_m_axis_tdata_converter_1->vector_out(m_axis_concat_tdata_out_1);
    mp_M01_AXIS_transactor->TDATA(m_m_axis_tdata_converter_1_signal);
    mp_m_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_1");
    mp_m_axis_tstrb_converter_1->vector_in(m_m_axis_tstrb_converter_1_signal);
    mp_m_axis_tstrb_converter_1->vector_out(m_axis_concat_tstrb_out_1);
    mp_M01_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_1_signal);
    mp_m_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_1");
    mp_m_axis_tkeep_converter_1->vector_in(m_m_axis_tkeep_converter_1_signal);
    mp_m_axis_tkeep_converter_1->vector_out(m_axis_concat_tkeep_out_1);
    mp_M01_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_1_signal);
    mp_m_axis_tlast_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_1");
    mp_m_axis_tlast_converter_1->scalar_in(m_m_axis_tlast_converter_1_signal);
    mp_m_axis_tlast_converter_1->vector_out(m_axis_concat_tlast_out_1);
    mp_M01_AXIS_transactor->TLAST(m_m_axis_tlast_converter_1_signal);
    mp_m_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_1");
    mp_m_axis_tid_converter_1->vector_in(m_m_axis_tid_converter_1_signal);
    mp_m_axis_tid_converter_1->vector_out(m_axis_concat_tid_out_1);
    mp_M01_AXIS_transactor->TID(m_m_axis_tid_converter_1_signal);
    mp_m_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_1");
    mp_m_axis_tdest_converter_1->vector_in(m_m_axis_tdest_converter_1_signal);
    mp_m_axis_tdest_converter_1->vector_out(m_axis_concat_tdest_out_1);
    mp_M01_AXIS_transactor->TDEST(m_m_axis_tdest_converter_1_signal);
    mp_m_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_1");
    mp_m_axis_tuser_converter_1->vector_in(m_m_axis_tuser_converter_1_signal);
    mp_m_axis_tuser_converter_1->vector_out(m_axis_concat_tuser_out_1);
    mp_M01_AXIS_transactor->TUSER(m_m_axis_tuser_converter_1_signal);
    mp_M01_AXIS_transactor->CLK(aclk);
    mp_M01_AXIS_transactor->RST(aresetn);

    // M01_AXIS' transactor sockets

    mp_impl->M01_AXIS_INITIATOR_SOCKET->bind(*(mp_M01_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S02_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S02_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S02_AXIS' transactor parameters
    xsc::common_cpp::properties S02_AXIS_transactor_param_props;
    S02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S02_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S02_AXIS_transactor", S02_AXIS_transactor_param_props);

    // S02_AXIS' transactor ports

    mp_s_axis_tvalid_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_2");
    mp_s_axis_tvalid_converter_2->vector_in(s_axis_split_tvalid_out_2);
    mp_s_axis_tvalid_converter_2->scalar_out(m_s_axis_tvalid_converter_2_signal);
    mp_S02_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_2_signal);
    mp_s_axis_tready_converter_2 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_2");
    mp_s_axis_tready_converter_2->scalar_in(m_s_axis_tready_converter_2_signal);
    mp_s_axis_tready_converter_2->vector_out(s_axis_concat_tready_out_2);
    mp_S02_AXIS_transactor->TREADY(m_s_axis_tready_converter_2_signal);
    mp_s_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_2");
    mp_s_axis_tdata_converter_2->vector_in(s_axis_split_tdata_out_2);
    mp_s_axis_tdata_converter_2->vector_out(m_s_axis_tdata_converter_2_signal);
    mp_S02_AXIS_transactor->TDATA(m_s_axis_tdata_converter_2_signal);
    mp_s_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_2");
    mp_s_axis_tstrb_converter_2->vector_in(s_axis_split_tstrb_out_2);
    mp_s_axis_tstrb_converter_2->vector_out(m_s_axis_tstrb_converter_2_signal);
    mp_S02_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_2_signal);
    mp_s_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_2");
    mp_s_axis_tkeep_converter_2->vector_in(s_axis_split_tkeep_out_2);
    mp_s_axis_tkeep_converter_2->vector_out(m_s_axis_tkeep_converter_2_signal);
    mp_S02_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_2_signal);
    mp_s_axis_tlast_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_2");
    mp_s_axis_tlast_converter_2->vector_in(s_axis_split_tlast_out_2);
    mp_s_axis_tlast_converter_2->scalar_out(m_s_axis_tlast_converter_2_signal);
    mp_S02_AXIS_transactor->TLAST(m_s_axis_tlast_converter_2_signal);
    mp_s_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_2");
    mp_s_axis_tid_converter_2->vector_in(s_axis_split_tid_out_2);
    mp_s_axis_tid_converter_2->vector_out(m_s_axis_tid_converter_2_signal);
    mp_S02_AXIS_transactor->TID(m_s_axis_tid_converter_2_signal);
    mp_s_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_2");
    mp_s_axis_tdest_converter_2->vector_in(s_axis_split_tdest_out_2);
    mp_s_axis_tdest_converter_2->vector_out(m_s_axis_tdest_converter_2_signal);
    mp_S02_AXIS_transactor->TDEST(m_s_axis_tdest_converter_2_signal);
    mp_s_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_2");
    mp_s_axis_tuser_converter_2->vector_in(s_axis_split_tuser_out_2);
    mp_s_axis_tuser_converter_2->vector_out(m_s_axis_tuser_converter_2_signal);
    mp_S02_AXIS_transactor->TUSER(m_s_axis_tuser_converter_2_signal);
    mp_S02_AXIS_transactor->CLK(aclk);
    mp_S02_AXIS_transactor->RST(aresetn);

    // S02_AXIS' transactor sockets

    mp_impl->S02_AXIS_TARGET_SOCKET->bind(*(mp_S02_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M02_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M02_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M02_AXIS' transactor parameters
    xsc::common_cpp::properties M02_AXIS_transactor_param_props;
    M02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M02_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M02_AXIS_transactor", M02_AXIS_transactor_param_props);

    // M02_AXIS' transactor ports

    mp_m_axis_tvalid_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_2");
    mp_m_axis_tvalid_converter_2->scalar_in(m_m_axis_tvalid_converter_2_signal);
    mp_m_axis_tvalid_converter_2->vector_out(m_axis_concat_tvalid_out_2);
    mp_M02_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_2_signal);
    mp_m_axis_tready_converter_2 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_2");
    mp_m_axis_tready_converter_2->vector_in(m_axis_split_tready_out_2);
    mp_m_axis_tready_converter_2->scalar_out(m_m_axis_tready_converter_2_signal);
    mp_M02_AXIS_transactor->TREADY(m_m_axis_tready_converter_2_signal);
    mp_m_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_2");
    mp_m_axis_tdata_converter_2->vector_in(m_m_axis_tdata_converter_2_signal);
    mp_m_axis_tdata_converter_2->vector_out(m_axis_concat_tdata_out_2);
    mp_M02_AXIS_transactor->TDATA(m_m_axis_tdata_converter_2_signal);
    mp_m_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_2");
    mp_m_axis_tstrb_converter_2->vector_in(m_m_axis_tstrb_converter_2_signal);
    mp_m_axis_tstrb_converter_2->vector_out(m_axis_concat_tstrb_out_2);
    mp_M02_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_2_signal);
    mp_m_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_2");
    mp_m_axis_tkeep_converter_2->vector_in(m_m_axis_tkeep_converter_2_signal);
    mp_m_axis_tkeep_converter_2->vector_out(m_axis_concat_tkeep_out_2);
    mp_M02_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_2_signal);
    mp_m_axis_tlast_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_2");
    mp_m_axis_tlast_converter_2->scalar_in(m_m_axis_tlast_converter_2_signal);
    mp_m_axis_tlast_converter_2->vector_out(m_axis_concat_tlast_out_2);
    mp_M02_AXIS_transactor->TLAST(m_m_axis_tlast_converter_2_signal);
    mp_m_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_2");
    mp_m_axis_tid_converter_2->vector_in(m_m_axis_tid_converter_2_signal);
    mp_m_axis_tid_converter_2->vector_out(m_axis_concat_tid_out_2);
    mp_M02_AXIS_transactor->TID(m_m_axis_tid_converter_2_signal);
    mp_m_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_2");
    mp_m_axis_tdest_converter_2->vector_in(m_m_axis_tdest_converter_2_signal);
    mp_m_axis_tdest_converter_2->vector_out(m_axis_concat_tdest_out_2);
    mp_M02_AXIS_transactor->TDEST(m_m_axis_tdest_converter_2_signal);
    mp_m_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_2");
    mp_m_axis_tuser_converter_2->vector_in(m_m_axis_tuser_converter_2_signal);
    mp_m_axis_tuser_converter_2->vector_out(m_axis_concat_tuser_out_2);
    mp_M02_AXIS_transactor->TUSER(m_m_axis_tuser_converter_2_signal);
    mp_M02_AXIS_transactor->CLK(aclk);
    mp_M02_AXIS_transactor->RST(aresetn);

    // M02_AXIS' transactor sockets

    mp_impl->M02_AXIS_INITIATOR_SOCKET->bind(*(mp_M02_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S03_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S03_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S03_AXIS' transactor parameters
    xsc::common_cpp::properties S03_AXIS_transactor_param_props;
    S03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S03_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S03_AXIS_transactor", S03_AXIS_transactor_param_props);

    // S03_AXIS' transactor ports

    mp_s_axis_tvalid_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_3");
    mp_s_axis_tvalid_converter_3->vector_in(s_axis_split_tvalid_out_3);
    mp_s_axis_tvalid_converter_3->scalar_out(m_s_axis_tvalid_converter_3_signal);
    mp_S03_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_3_signal);
    mp_s_axis_tready_converter_3 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_3");
    mp_s_axis_tready_converter_3->scalar_in(m_s_axis_tready_converter_3_signal);
    mp_s_axis_tready_converter_3->vector_out(s_axis_concat_tready_out_3);
    mp_S03_AXIS_transactor->TREADY(m_s_axis_tready_converter_3_signal);
    mp_s_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_3");
    mp_s_axis_tdata_converter_3->vector_in(s_axis_split_tdata_out_3);
    mp_s_axis_tdata_converter_3->vector_out(m_s_axis_tdata_converter_3_signal);
    mp_S03_AXIS_transactor->TDATA(m_s_axis_tdata_converter_3_signal);
    mp_s_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_3");
    mp_s_axis_tstrb_converter_3->vector_in(s_axis_split_tstrb_out_3);
    mp_s_axis_tstrb_converter_3->vector_out(m_s_axis_tstrb_converter_3_signal);
    mp_S03_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_3_signal);
    mp_s_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_3");
    mp_s_axis_tkeep_converter_3->vector_in(s_axis_split_tkeep_out_3);
    mp_s_axis_tkeep_converter_3->vector_out(m_s_axis_tkeep_converter_3_signal);
    mp_S03_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_3_signal);
    mp_s_axis_tlast_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_3");
    mp_s_axis_tlast_converter_3->vector_in(s_axis_split_tlast_out_3);
    mp_s_axis_tlast_converter_3->scalar_out(m_s_axis_tlast_converter_3_signal);
    mp_S03_AXIS_transactor->TLAST(m_s_axis_tlast_converter_3_signal);
    mp_s_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_3");
    mp_s_axis_tid_converter_3->vector_in(s_axis_split_tid_out_3);
    mp_s_axis_tid_converter_3->vector_out(m_s_axis_tid_converter_3_signal);
    mp_S03_AXIS_transactor->TID(m_s_axis_tid_converter_3_signal);
    mp_s_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_3");
    mp_s_axis_tdest_converter_3->vector_in(s_axis_split_tdest_out_3);
    mp_s_axis_tdest_converter_3->vector_out(m_s_axis_tdest_converter_3_signal);
    mp_S03_AXIS_transactor->TDEST(m_s_axis_tdest_converter_3_signal);
    mp_s_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_3");
    mp_s_axis_tuser_converter_3->vector_in(s_axis_split_tuser_out_3);
    mp_s_axis_tuser_converter_3->vector_out(m_s_axis_tuser_converter_3_signal);
    mp_S03_AXIS_transactor->TUSER(m_s_axis_tuser_converter_3_signal);
    mp_S03_AXIS_transactor->CLK(aclk);
    mp_S03_AXIS_transactor->RST(aresetn);

    // S03_AXIS' transactor sockets

    mp_impl->S03_AXIS_TARGET_SOCKET->bind(*(mp_S03_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M03_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M03_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M03_AXIS' transactor parameters
    xsc::common_cpp::properties M03_AXIS_transactor_param_props;
    M03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M03_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M03_AXIS_transactor", M03_AXIS_transactor_param_props);

    // M03_AXIS' transactor ports

    mp_m_axis_tvalid_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_3");
    mp_m_axis_tvalid_converter_3->scalar_in(m_m_axis_tvalid_converter_3_signal);
    mp_m_axis_tvalid_converter_3->vector_out(m_axis_concat_tvalid_out_3);
    mp_M03_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_3_signal);
    mp_m_axis_tready_converter_3 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_3");
    mp_m_axis_tready_converter_3->vector_in(m_axis_split_tready_out_3);
    mp_m_axis_tready_converter_3->scalar_out(m_m_axis_tready_converter_3_signal);
    mp_M03_AXIS_transactor->TREADY(m_m_axis_tready_converter_3_signal);
    mp_m_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_3");
    mp_m_axis_tdata_converter_3->vector_in(m_m_axis_tdata_converter_3_signal);
    mp_m_axis_tdata_converter_3->vector_out(m_axis_concat_tdata_out_3);
    mp_M03_AXIS_transactor->TDATA(m_m_axis_tdata_converter_3_signal);
    mp_m_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_3");
    mp_m_axis_tstrb_converter_3->vector_in(m_m_axis_tstrb_converter_3_signal);
    mp_m_axis_tstrb_converter_3->vector_out(m_axis_concat_tstrb_out_3);
    mp_M03_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_3_signal);
    mp_m_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_3");
    mp_m_axis_tkeep_converter_3->vector_in(m_m_axis_tkeep_converter_3_signal);
    mp_m_axis_tkeep_converter_3->vector_out(m_axis_concat_tkeep_out_3);
    mp_M03_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_3_signal);
    mp_m_axis_tlast_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_3");
    mp_m_axis_tlast_converter_3->scalar_in(m_m_axis_tlast_converter_3_signal);
    mp_m_axis_tlast_converter_3->vector_out(m_axis_concat_tlast_out_3);
    mp_M03_AXIS_transactor->TLAST(m_m_axis_tlast_converter_3_signal);
    mp_m_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_3");
    mp_m_axis_tid_converter_3->vector_in(m_m_axis_tid_converter_3_signal);
    mp_m_axis_tid_converter_3->vector_out(m_axis_concat_tid_out_3);
    mp_M03_AXIS_transactor->TID(m_m_axis_tid_converter_3_signal);
    mp_m_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_3");
    mp_m_axis_tdest_converter_3->vector_in(m_m_axis_tdest_converter_3_signal);
    mp_m_axis_tdest_converter_3->vector_out(m_axis_concat_tdest_out_3);
    mp_M03_AXIS_transactor->TDEST(m_m_axis_tdest_converter_3_signal);
    mp_m_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_3");
    mp_m_axis_tuser_converter_3->vector_in(m_m_axis_tuser_converter_3_signal);
    mp_m_axis_tuser_converter_3->vector_out(m_axis_concat_tuser_out_3);
    mp_M03_AXIS_transactor->TUSER(m_m_axis_tuser_converter_3_signal);
    mp_M03_AXIS_transactor->CLK(aclk);
    mp_M03_AXIS_transactor->RST(aresetn);

    // M03_AXIS' transactor sockets

    mp_impl->M03_AXIS_INITIATOR_SOCKET->bind(*(mp_M03_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S04_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S04_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S04_AXIS' transactor parameters
    xsc::common_cpp::properties S04_AXIS_transactor_param_props;
    S04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S04_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S04_AXIS_transactor", S04_AXIS_transactor_param_props);

    // S04_AXIS' transactor ports

    mp_s_axis_tvalid_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_4");
    mp_s_axis_tvalid_converter_4->vector_in(s_axis_split_tvalid_out_4);
    mp_s_axis_tvalid_converter_4->scalar_out(m_s_axis_tvalid_converter_4_signal);
    mp_S04_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_4_signal);
    mp_s_axis_tready_converter_4 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_4");
    mp_s_axis_tready_converter_4->scalar_in(m_s_axis_tready_converter_4_signal);
    mp_s_axis_tready_converter_4->vector_out(s_axis_concat_tready_out_4);
    mp_S04_AXIS_transactor->TREADY(m_s_axis_tready_converter_4_signal);
    mp_s_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_4");
    mp_s_axis_tdata_converter_4->vector_in(s_axis_split_tdata_out_4);
    mp_s_axis_tdata_converter_4->vector_out(m_s_axis_tdata_converter_4_signal);
    mp_S04_AXIS_transactor->TDATA(m_s_axis_tdata_converter_4_signal);
    mp_s_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_4");
    mp_s_axis_tstrb_converter_4->vector_in(s_axis_split_tstrb_out_4);
    mp_s_axis_tstrb_converter_4->vector_out(m_s_axis_tstrb_converter_4_signal);
    mp_S04_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_4_signal);
    mp_s_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_4");
    mp_s_axis_tkeep_converter_4->vector_in(s_axis_split_tkeep_out_4);
    mp_s_axis_tkeep_converter_4->vector_out(m_s_axis_tkeep_converter_4_signal);
    mp_S04_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_4_signal);
    mp_s_axis_tlast_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_4");
    mp_s_axis_tlast_converter_4->vector_in(s_axis_split_tlast_out_4);
    mp_s_axis_tlast_converter_4->scalar_out(m_s_axis_tlast_converter_4_signal);
    mp_S04_AXIS_transactor->TLAST(m_s_axis_tlast_converter_4_signal);
    mp_s_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_4");
    mp_s_axis_tid_converter_4->vector_in(s_axis_split_tid_out_4);
    mp_s_axis_tid_converter_4->vector_out(m_s_axis_tid_converter_4_signal);
    mp_S04_AXIS_transactor->TID(m_s_axis_tid_converter_4_signal);
    mp_s_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_4");
    mp_s_axis_tdest_converter_4->vector_in(s_axis_split_tdest_out_4);
    mp_s_axis_tdest_converter_4->vector_out(m_s_axis_tdest_converter_4_signal);
    mp_S04_AXIS_transactor->TDEST(m_s_axis_tdest_converter_4_signal);
    mp_s_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_4");
    mp_s_axis_tuser_converter_4->vector_in(s_axis_split_tuser_out_4);
    mp_s_axis_tuser_converter_4->vector_out(m_s_axis_tuser_converter_4_signal);
    mp_S04_AXIS_transactor->TUSER(m_s_axis_tuser_converter_4_signal);
    mp_S04_AXIS_transactor->CLK(aclk);
    mp_S04_AXIS_transactor->RST(aresetn);

    // S04_AXIS' transactor sockets

    mp_impl->S04_AXIS_TARGET_SOCKET->bind(*(mp_S04_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M04_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M04_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M04_AXIS' transactor parameters
    xsc::common_cpp::properties M04_AXIS_transactor_param_props;
    M04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M04_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M04_AXIS_transactor", M04_AXIS_transactor_param_props);

    // M04_AXIS' transactor ports

    mp_m_axis_tvalid_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_4");
    mp_m_axis_tvalid_converter_4->scalar_in(m_m_axis_tvalid_converter_4_signal);
    mp_m_axis_tvalid_converter_4->vector_out(m_axis_concat_tvalid_out_4);
    mp_M04_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_4_signal);
    mp_m_axis_tready_converter_4 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_4");
    mp_m_axis_tready_converter_4->vector_in(m_axis_split_tready_out_4);
    mp_m_axis_tready_converter_4->scalar_out(m_m_axis_tready_converter_4_signal);
    mp_M04_AXIS_transactor->TREADY(m_m_axis_tready_converter_4_signal);
    mp_m_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_4");
    mp_m_axis_tdata_converter_4->vector_in(m_m_axis_tdata_converter_4_signal);
    mp_m_axis_tdata_converter_4->vector_out(m_axis_concat_tdata_out_4);
    mp_M04_AXIS_transactor->TDATA(m_m_axis_tdata_converter_4_signal);
    mp_m_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_4");
    mp_m_axis_tstrb_converter_4->vector_in(m_m_axis_tstrb_converter_4_signal);
    mp_m_axis_tstrb_converter_4->vector_out(m_axis_concat_tstrb_out_4);
    mp_M04_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_4_signal);
    mp_m_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_4");
    mp_m_axis_tkeep_converter_4->vector_in(m_m_axis_tkeep_converter_4_signal);
    mp_m_axis_tkeep_converter_4->vector_out(m_axis_concat_tkeep_out_4);
    mp_M04_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_4_signal);
    mp_m_axis_tlast_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_4");
    mp_m_axis_tlast_converter_4->scalar_in(m_m_axis_tlast_converter_4_signal);
    mp_m_axis_tlast_converter_4->vector_out(m_axis_concat_tlast_out_4);
    mp_M04_AXIS_transactor->TLAST(m_m_axis_tlast_converter_4_signal);
    mp_m_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_4");
    mp_m_axis_tid_converter_4->vector_in(m_m_axis_tid_converter_4_signal);
    mp_m_axis_tid_converter_4->vector_out(m_axis_concat_tid_out_4);
    mp_M04_AXIS_transactor->TID(m_m_axis_tid_converter_4_signal);
    mp_m_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_4");
    mp_m_axis_tdest_converter_4->vector_in(m_m_axis_tdest_converter_4_signal);
    mp_m_axis_tdest_converter_4->vector_out(m_axis_concat_tdest_out_4);
    mp_M04_AXIS_transactor->TDEST(m_m_axis_tdest_converter_4_signal);
    mp_m_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_4");
    mp_m_axis_tuser_converter_4->vector_in(m_m_axis_tuser_converter_4_signal);
    mp_m_axis_tuser_converter_4->vector_out(m_axis_concat_tuser_out_4);
    mp_M04_AXIS_transactor->TUSER(m_m_axis_tuser_converter_4_signal);
    mp_M04_AXIS_transactor->CLK(aclk);
    mp_M04_AXIS_transactor->RST(aresetn);

    // M04_AXIS' transactor sockets

    mp_impl->M04_AXIS_INITIATOR_SOCKET->bind(*(mp_M04_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S05_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S05_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S05_AXIS' transactor parameters
    xsc::common_cpp::properties S05_AXIS_transactor_param_props;
    S05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S05_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S05_AXIS_transactor", S05_AXIS_transactor_param_props);

    // S05_AXIS' transactor ports

    mp_s_axis_tvalid_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_5");
    mp_s_axis_tvalid_converter_5->vector_in(s_axis_split_tvalid_out_5);
    mp_s_axis_tvalid_converter_5->scalar_out(m_s_axis_tvalid_converter_5_signal);
    mp_S05_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_5_signal);
    mp_s_axis_tready_converter_5 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_5");
    mp_s_axis_tready_converter_5->scalar_in(m_s_axis_tready_converter_5_signal);
    mp_s_axis_tready_converter_5->vector_out(s_axis_concat_tready_out_5);
    mp_S05_AXIS_transactor->TREADY(m_s_axis_tready_converter_5_signal);
    mp_s_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_5");
    mp_s_axis_tdata_converter_5->vector_in(s_axis_split_tdata_out_5);
    mp_s_axis_tdata_converter_5->vector_out(m_s_axis_tdata_converter_5_signal);
    mp_S05_AXIS_transactor->TDATA(m_s_axis_tdata_converter_5_signal);
    mp_s_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_5");
    mp_s_axis_tstrb_converter_5->vector_in(s_axis_split_tstrb_out_5);
    mp_s_axis_tstrb_converter_5->vector_out(m_s_axis_tstrb_converter_5_signal);
    mp_S05_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_5_signal);
    mp_s_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_5");
    mp_s_axis_tkeep_converter_5->vector_in(s_axis_split_tkeep_out_5);
    mp_s_axis_tkeep_converter_5->vector_out(m_s_axis_tkeep_converter_5_signal);
    mp_S05_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_5_signal);
    mp_s_axis_tlast_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_5");
    mp_s_axis_tlast_converter_5->vector_in(s_axis_split_tlast_out_5);
    mp_s_axis_tlast_converter_5->scalar_out(m_s_axis_tlast_converter_5_signal);
    mp_S05_AXIS_transactor->TLAST(m_s_axis_tlast_converter_5_signal);
    mp_s_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_5");
    mp_s_axis_tid_converter_5->vector_in(s_axis_split_tid_out_5);
    mp_s_axis_tid_converter_5->vector_out(m_s_axis_tid_converter_5_signal);
    mp_S05_AXIS_transactor->TID(m_s_axis_tid_converter_5_signal);
    mp_s_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_5");
    mp_s_axis_tdest_converter_5->vector_in(s_axis_split_tdest_out_5);
    mp_s_axis_tdest_converter_5->vector_out(m_s_axis_tdest_converter_5_signal);
    mp_S05_AXIS_transactor->TDEST(m_s_axis_tdest_converter_5_signal);
    mp_s_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_5");
    mp_s_axis_tuser_converter_5->vector_in(s_axis_split_tuser_out_5);
    mp_s_axis_tuser_converter_5->vector_out(m_s_axis_tuser_converter_5_signal);
    mp_S05_AXIS_transactor->TUSER(m_s_axis_tuser_converter_5_signal);
    mp_S05_AXIS_transactor->CLK(aclk);
    mp_S05_AXIS_transactor->RST(aresetn);

    // S05_AXIS' transactor sockets

    mp_impl->S05_AXIS_TARGET_SOCKET->bind(*(mp_S05_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M05_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M05_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M05_AXIS' transactor parameters
    xsc::common_cpp::properties M05_AXIS_transactor_param_props;
    M05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M05_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M05_AXIS_transactor", M05_AXIS_transactor_param_props);

    // M05_AXIS' transactor ports

    mp_m_axis_tvalid_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_5");
    mp_m_axis_tvalid_converter_5->scalar_in(m_m_axis_tvalid_converter_5_signal);
    mp_m_axis_tvalid_converter_5->vector_out(m_axis_concat_tvalid_out_5);
    mp_M05_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_5_signal);
    mp_m_axis_tready_converter_5 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_5");
    mp_m_axis_tready_converter_5->vector_in(m_axis_split_tready_out_5);
    mp_m_axis_tready_converter_5->scalar_out(m_m_axis_tready_converter_5_signal);
    mp_M05_AXIS_transactor->TREADY(m_m_axis_tready_converter_5_signal);
    mp_m_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_5");
    mp_m_axis_tdata_converter_5->vector_in(m_m_axis_tdata_converter_5_signal);
    mp_m_axis_tdata_converter_5->vector_out(m_axis_concat_tdata_out_5);
    mp_M05_AXIS_transactor->TDATA(m_m_axis_tdata_converter_5_signal);
    mp_m_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_5");
    mp_m_axis_tstrb_converter_5->vector_in(m_m_axis_tstrb_converter_5_signal);
    mp_m_axis_tstrb_converter_5->vector_out(m_axis_concat_tstrb_out_5);
    mp_M05_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_5_signal);
    mp_m_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_5");
    mp_m_axis_tkeep_converter_5->vector_in(m_m_axis_tkeep_converter_5_signal);
    mp_m_axis_tkeep_converter_5->vector_out(m_axis_concat_tkeep_out_5);
    mp_M05_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_5_signal);
    mp_m_axis_tlast_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_5");
    mp_m_axis_tlast_converter_5->scalar_in(m_m_axis_tlast_converter_5_signal);
    mp_m_axis_tlast_converter_5->vector_out(m_axis_concat_tlast_out_5);
    mp_M05_AXIS_transactor->TLAST(m_m_axis_tlast_converter_5_signal);
    mp_m_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_5");
    mp_m_axis_tid_converter_5->vector_in(m_m_axis_tid_converter_5_signal);
    mp_m_axis_tid_converter_5->vector_out(m_axis_concat_tid_out_5);
    mp_M05_AXIS_transactor->TID(m_m_axis_tid_converter_5_signal);
    mp_m_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_5");
    mp_m_axis_tdest_converter_5->vector_in(m_m_axis_tdest_converter_5_signal);
    mp_m_axis_tdest_converter_5->vector_out(m_axis_concat_tdest_out_5);
    mp_M05_AXIS_transactor->TDEST(m_m_axis_tdest_converter_5_signal);
    mp_m_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_5");
    mp_m_axis_tuser_converter_5->vector_in(m_m_axis_tuser_converter_5_signal);
    mp_m_axis_tuser_converter_5->vector_out(m_axis_concat_tuser_out_5);
    mp_M05_AXIS_transactor->TUSER(m_m_axis_tuser_converter_5_signal);
    mp_M05_AXIS_transactor->CLK(aclk);
    mp_M05_AXIS_transactor->RST(aresetn);

    // M05_AXIS' transactor sockets

    mp_impl->M05_AXIS_INITIATOR_SOCKET->bind(*(mp_M05_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S06_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S06_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S06_AXIS' transactor parameters
    xsc::common_cpp::properties S06_AXIS_transactor_param_props;
    S06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S06_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S06_AXIS_transactor", S06_AXIS_transactor_param_props);

    // S06_AXIS' transactor ports

    mp_s_axis_tvalid_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_6");
    mp_s_axis_tvalid_converter_6->vector_in(s_axis_split_tvalid_out_6);
    mp_s_axis_tvalid_converter_6->scalar_out(m_s_axis_tvalid_converter_6_signal);
    mp_S06_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_6_signal);
    mp_s_axis_tready_converter_6 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_6");
    mp_s_axis_tready_converter_6->scalar_in(m_s_axis_tready_converter_6_signal);
    mp_s_axis_tready_converter_6->vector_out(s_axis_concat_tready_out_6);
    mp_S06_AXIS_transactor->TREADY(m_s_axis_tready_converter_6_signal);
    mp_s_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_6");
    mp_s_axis_tdata_converter_6->vector_in(s_axis_split_tdata_out_6);
    mp_s_axis_tdata_converter_6->vector_out(m_s_axis_tdata_converter_6_signal);
    mp_S06_AXIS_transactor->TDATA(m_s_axis_tdata_converter_6_signal);
    mp_s_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_6");
    mp_s_axis_tstrb_converter_6->vector_in(s_axis_split_tstrb_out_6);
    mp_s_axis_tstrb_converter_6->vector_out(m_s_axis_tstrb_converter_6_signal);
    mp_S06_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_6_signal);
    mp_s_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_6");
    mp_s_axis_tkeep_converter_6->vector_in(s_axis_split_tkeep_out_6);
    mp_s_axis_tkeep_converter_6->vector_out(m_s_axis_tkeep_converter_6_signal);
    mp_S06_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_6_signal);
    mp_s_axis_tlast_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_6");
    mp_s_axis_tlast_converter_6->vector_in(s_axis_split_tlast_out_6);
    mp_s_axis_tlast_converter_6->scalar_out(m_s_axis_tlast_converter_6_signal);
    mp_S06_AXIS_transactor->TLAST(m_s_axis_tlast_converter_6_signal);
    mp_s_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_6");
    mp_s_axis_tid_converter_6->vector_in(s_axis_split_tid_out_6);
    mp_s_axis_tid_converter_6->vector_out(m_s_axis_tid_converter_6_signal);
    mp_S06_AXIS_transactor->TID(m_s_axis_tid_converter_6_signal);
    mp_s_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_6");
    mp_s_axis_tdest_converter_6->vector_in(s_axis_split_tdest_out_6);
    mp_s_axis_tdest_converter_6->vector_out(m_s_axis_tdest_converter_6_signal);
    mp_S06_AXIS_transactor->TDEST(m_s_axis_tdest_converter_6_signal);
    mp_s_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_6");
    mp_s_axis_tuser_converter_6->vector_in(s_axis_split_tuser_out_6);
    mp_s_axis_tuser_converter_6->vector_out(m_s_axis_tuser_converter_6_signal);
    mp_S06_AXIS_transactor->TUSER(m_s_axis_tuser_converter_6_signal);
    mp_S06_AXIS_transactor->CLK(aclk);
    mp_S06_AXIS_transactor->RST(aresetn);

    // S06_AXIS' transactor sockets

    mp_impl->S06_AXIS_TARGET_SOCKET->bind(*(mp_S06_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M06_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M06_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M06_AXIS' transactor parameters
    xsc::common_cpp::properties M06_AXIS_transactor_param_props;
    M06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M06_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M06_AXIS_transactor", M06_AXIS_transactor_param_props);

    // M06_AXIS' transactor ports

    mp_m_axis_tvalid_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_6");
    mp_m_axis_tvalid_converter_6->scalar_in(m_m_axis_tvalid_converter_6_signal);
    mp_m_axis_tvalid_converter_6->vector_out(m_axis_concat_tvalid_out_6);
    mp_M06_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_6_signal);
    mp_m_axis_tready_converter_6 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_6");
    mp_m_axis_tready_converter_6->vector_in(m_axis_split_tready_out_6);
    mp_m_axis_tready_converter_6->scalar_out(m_m_axis_tready_converter_6_signal);
    mp_M06_AXIS_transactor->TREADY(m_m_axis_tready_converter_6_signal);
    mp_m_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_6");
    mp_m_axis_tdata_converter_6->vector_in(m_m_axis_tdata_converter_6_signal);
    mp_m_axis_tdata_converter_6->vector_out(m_axis_concat_tdata_out_6);
    mp_M06_AXIS_transactor->TDATA(m_m_axis_tdata_converter_6_signal);
    mp_m_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_6");
    mp_m_axis_tstrb_converter_6->vector_in(m_m_axis_tstrb_converter_6_signal);
    mp_m_axis_tstrb_converter_6->vector_out(m_axis_concat_tstrb_out_6);
    mp_M06_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_6_signal);
    mp_m_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_6");
    mp_m_axis_tkeep_converter_6->vector_in(m_m_axis_tkeep_converter_6_signal);
    mp_m_axis_tkeep_converter_6->vector_out(m_axis_concat_tkeep_out_6);
    mp_M06_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_6_signal);
    mp_m_axis_tlast_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_6");
    mp_m_axis_tlast_converter_6->scalar_in(m_m_axis_tlast_converter_6_signal);
    mp_m_axis_tlast_converter_6->vector_out(m_axis_concat_tlast_out_6);
    mp_M06_AXIS_transactor->TLAST(m_m_axis_tlast_converter_6_signal);
    mp_m_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_6");
    mp_m_axis_tid_converter_6->vector_in(m_m_axis_tid_converter_6_signal);
    mp_m_axis_tid_converter_6->vector_out(m_axis_concat_tid_out_6);
    mp_M06_AXIS_transactor->TID(m_m_axis_tid_converter_6_signal);
    mp_m_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_6");
    mp_m_axis_tdest_converter_6->vector_in(m_m_axis_tdest_converter_6_signal);
    mp_m_axis_tdest_converter_6->vector_out(m_axis_concat_tdest_out_6);
    mp_M06_AXIS_transactor->TDEST(m_m_axis_tdest_converter_6_signal);
    mp_m_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_6");
    mp_m_axis_tuser_converter_6->vector_in(m_m_axis_tuser_converter_6_signal);
    mp_m_axis_tuser_converter_6->vector_out(m_axis_concat_tuser_out_6);
    mp_M06_AXIS_transactor->TUSER(m_m_axis_tuser_converter_6_signal);
    mp_M06_AXIS_transactor->CLK(aclk);
    mp_M06_AXIS_transactor->RST(aresetn);

    // M06_AXIS' transactor sockets

    mp_impl->M06_AXIS_INITIATOR_SOCKET->bind(*(mp_M06_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S07_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S07_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S07_AXIS' transactor parameters
    xsc::common_cpp::properties S07_AXIS_transactor_param_props;
    S07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S07_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S07_AXIS_transactor", S07_AXIS_transactor_param_props);

    // S07_AXIS' transactor ports

    mp_s_axis_tvalid_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_7");
    mp_s_axis_tvalid_converter_7->vector_in(s_axis_split_tvalid_out_7);
    mp_s_axis_tvalid_converter_7->scalar_out(m_s_axis_tvalid_converter_7_signal);
    mp_S07_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_7_signal);
    mp_s_axis_tready_converter_7 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_7");
    mp_s_axis_tready_converter_7->scalar_in(m_s_axis_tready_converter_7_signal);
    mp_s_axis_tready_converter_7->vector_out(s_axis_concat_tready_out_7);
    mp_S07_AXIS_transactor->TREADY(m_s_axis_tready_converter_7_signal);
    mp_s_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_7");
    mp_s_axis_tdata_converter_7->vector_in(s_axis_split_tdata_out_7);
    mp_s_axis_tdata_converter_7->vector_out(m_s_axis_tdata_converter_7_signal);
    mp_S07_AXIS_transactor->TDATA(m_s_axis_tdata_converter_7_signal);
    mp_s_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_7");
    mp_s_axis_tstrb_converter_7->vector_in(s_axis_split_tstrb_out_7);
    mp_s_axis_tstrb_converter_7->vector_out(m_s_axis_tstrb_converter_7_signal);
    mp_S07_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_7_signal);
    mp_s_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_7");
    mp_s_axis_tkeep_converter_7->vector_in(s_axis_split_tkeep_out_7);
    mp_s_axis_tkeep_converter_7->vector_out(m_s_axis_tkeep_converter_7_signal);
    mp_S07_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_7_signal);
    mp_s_axis_tlast_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_7");
    mp_s_axis_tlast_converter_7->vector_in(s_axis_split_tlast_out_7);
    mp_s_axis_tlast_converter_7->scalar_out(m_s_axis_tlast_converter_7_signal);
    mp_S07_AXIS_transactor->TLAST(m_s_axis_tlast_converter_7_signal);
    mp_s_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_7");
    mp_s_axis_tid_converter_7->vector_in(s_axis_split_tid_out_7);
    mp_s_axis_tid_converter_7->vector_out(m_s_axis_tid_converter_7_signal);
    mp_S07_AXIS_transactor->TID(m_s_axis_tid_converter_7_signal);
    mp_s_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_7");
    mp_s_axis_tdest_converter_7->vector_in(s_axis_split_tdest_out_7);
    mp_s_axis_tdest_converter_7->vector_out(m_s_axis_tdest_converter_7_signal);
    mp_S07_AXIS_transactor->TDEST(m_s_axis_tdest_converter_7_signal);
    mp_s_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_7");
    mp_s_axis_tuser_converter_7->vector_in(s_axis_split_tuser_out_7);
    mp_s_axis_tuser_converter_7->vector_out(m_s_axis_tuser_converter_7_signal);
    mp_S07_AXIS_transactor->TUSER(m_s_axis_tuser_converter_7_signal);
    mp_S07_AXIS_transactor->CLK(aclk);
    mp_S07_AXIS_transactor->RST(aresetn);

    // S07_AXIS' transactor sockets

    mp_impl->S07_AXIS_TARGET_SOCKET->bind(*(mp_S07_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M07_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M07_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M07_AXIS' transactor parameters
    xsc::common_cpp::properties M07_AXIS_transactor_param_props;
    M07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M07_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M07_AXIS_transactor", M07_AXIS_transactor_param_props);

    // M07_AXIS' transactor ports

    mp_m_axis_tvalid_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_7");
    mp_m_axis_tvalid_converter_7->scalar_in(m_m_axis_tvalid_converter_7_signal);
    mp_m_axis_tvalid_converter_7->vector_out(m_axis_concat_tvalid_out_7);
    mp_M07_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_7_signal);
    mp_m_axis_tready_converter_7 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_7");
    mp_m_axis_tready_converter_7->vector_in(m_axis_split_tready_out_7);
    mp_m_axis_tready_converter_7->scalar_out(m_m_axis_tready_converter_7_signal);
    mp_M07_AXIS_transactor->TREADY(m_m_axis_tready_converter_7_signal);
    mp_m_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_7");
    mp_m_axis_tdata_converter_7->vector_in(m_m_axis_tdata_converter_7_signal);
    mp_m_axis_tdata_converter_7->vector_out(m_axis_concat_tdata_out_7);
    mp_M07_AXIS_transactor->TDATA(m_m_axis_tdata_converter_7_signal);
    mp_m_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_7");
    mp_m_axis_tstrb_converter_7->vector_in(m_m_axis_tstrb_converter_7_signal);
    mp_m_axis_tstrb_converter_7->vector_out(m_axis_concat_tstrb_out_7);
    mp_M07_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_7_signal);
    mp_m_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_7");
    mp_m_axis_tkeep_converter_7->vector_in(m_m_axis_tkeep_converter_7_signal);
    mp_m_axis_tkeep_converter_7->vector_out(m_axis_concat_tkeep_out_7);
    mp_M07_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_7_signal);
    mp_m_axis_tlast_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_7");
    mp_m_axis_tlast_converter_7->scalar_in(m_m_axis_tlast_converter_7_signal);
    mp_m_axis_tlast_converter_7->vector_out(m_axis_concat_tlast_out_7);
    mp_M07_AXIS_transactor->TLAST(m_m_axis_tlast_converter_7_signal);
    mp_m_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_7");
    mp_m_axis_tid_converter_7->vector_in(m_m_axis_tid_converter_7_signal);
    mp_m_axis_tid_converter_7->vector_out(m_axis_concat_tid_out_7);
    mp_M07_AXIS_transactor->TID(m_m_axis_tid_converter_7_signal);
    mp_m_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_7");
    mp_m_axis_tdest_converter_7->vector_in(m_m_axis_tdest_converter_7_signal);
    mp_m_axis_tdest_converter_7->vector_out(m_axis_concat_tdest_out_7);
    mp_M07_AXIS_transactor->TDEST(m_m_axis_tdest_converter_7_signal);
    mp_m_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_7");
    mp_m_axis_tuser_converter_7->vector_in(m_m_axis_tuser_converter_7_signal);
    mp_m_axis_tuser_converter_7->vector_out(m_axis_concat_tuser_out_7);
    mp_M07_AXIS_transactor->TUSER(m_m_axis_tuser_converter_7_signal);
    mp_M07_AXIS_transactor->CLK(aclk);
    mp_M07_AXIS_transactor->RST(aresetn);

    // M07_AXIS' transactor sockets

    mp_impl->M07_AXIS_INITIATOR_SOCKET->bind(*(mp_M07_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S08_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S08_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S08_AXIS' transactor parameters
    xsc::common_cpp::properties S08_AXIS_transactor_param_props;
    S08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S08_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S08_AXIS_transactor", S08_AXIS_transactor_param_props);

    // S08_AXIS' transactor ports

    mp_s_axis_tvalid_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_8");
    mp_s_axis_tvalid_converter_8->vector_in(s_axis_split_tvalid_out_8);
    mp_s_axis_tvalid_converter_8->scalar_out(m_s_axis_tvalid_converter_8_signal);
    mp_S08_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_8_signal);
    mp_s_axis_tready_converter_8 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_8");
    mp_s_axis_tready_converter_8->scalar_in(m_s_axis_tready_converter_8_signal);
    mp_s_axis_tready_converter_8->vector_out(s_axis_concat_tready_out_8);
    mp_S08_AXIS_transactor->TREADY(m_s_axis_tready_converter_8_signal);
    mp_s_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_8");
    mp_s_axis_tdata_converter_8->vector_in(s_axis_split_tdata_out_8);
    mp_s_axis_tdata_converter_8->vector_out(m_s_axis_tdata_converter_8_signal);
    mp_S08_AXIS_transactor->TDATA(m_s_axis_tdata_converter_8_signal);
    mp_s_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_8");
    mp_s_axis_tstrb_converter_8->vector_in(s_axis_split_tstrb_out_8);
    mp_s_axis_tstrb_converter_8->vector_out(m_s_axis_tstrb_converter_8_signal);
    mp_S08_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_8_signal);
    mp_s_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_8");
    mp_s_axis_tkeep_converter_8->vector_in(s_axis_split_tkeep_out_8);
    mp_s_axis_tkeep_converter_8->vector_out(m_s_axis_tkeep_converter_8_signal);
    mp_S08_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_8_signal);
    mp_s_axis_tlast_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_8");
    mp_s_axis_tlast_converter_8->vector_in(s_axis_split_tlast_out_8);
    mp_s_axis_tlast_converter_8->scalar_out(m_s_axis_tlast_converter_8_signal);
    mp_S08_AXIS_transactor->TLAST(m_s_axis_tlast_converter_8_signal);
    mp_s_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_8");
    mp_s_axis_tid_converter_8->vector_in(s_axis_split_tid_out_8);
    mp_s_axis_tid_converter_8->vector_out(m_s_axis_tid_converter_8_signal);
    mp_S08_AXIS_transactor->TID(m_s_axis_tid_converter_8_signal);
    mp_s_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_8");
    mp_s_axis_tdest_converter_8->vector_in(s_axis_split_tdest_out_8);
    mp_s_axis_tdest_converter_8->vector_out(m_s_axis_tdest_converter_8_signal);
    mp_S08_AXIS_transactor->TDEST(m_s_axis_tdest_converter_8_signal);
    mp_s_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_8");
    mp_s_axis_tuser_converter_8->vector_in(s_axis_split_tuser_out_8);
    mp_s_axis_tuser_converter_8->vector_out(m_s_axis_tuser_converter_8_signal);
    mp_S08_AXIS_transactor->TUSER(m_s_axis_tuser_converter_8_signal);
    mp_S08_AXIS_transactor->CLK(aclk);
    mp_S08_AXIS_transactor->RST(aresetn);

    // S08_AXIS' transactor sockets

    mp_impl->S08_AXIS_TARGET_SOCKET->bind(*(mp_S08_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M08_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M08_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M08_AXIS' transactor parameters
    xsc::common_cpp::properties M08_AXIS_transactor_param_props;
    M08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M08_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M08_AXIS_transactor", M08_AXIS_transactor_param_props);

    // M08_AXIS' transactor ports

    mp_m_axis_tvalid_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_8");
    mp_m_axis_tvalid_converter_8->scalar_in(m_m_axis_tvalid_converter_8_signal);
    mp_m_axis_tvalid_converter_8->vector_out(m_axis_concat_tvalid_out_8);
    mp_M08_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_8_signal);
    mp_m_axis_tready_converter_8 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_8");
    mp_m_axis_tready_converter_8->vector_in(m_axis_split_tready_out_8);
    mp_m_axis_tready_converter_8->scalar_out(m_m_axis_tready_converter_8_signal);
    mp_M08_AXIS_transactor->TREADY(m_m_axis_tready_converter_8_signal);
    mp_m_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_8");
    mp_m_axis_tdata_converter_8->vector_in(m_m_axis_tdata_converter_8_signal);
    mp_m_axis_tdata_converter_8->vector_out(m_axis_concat_tdata_out_8);
    mp_M08_AXIS_transactor->TDATA(m_m_axis_tdata_converter_8_signal);
    mp_m_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_8");
    mp_m_axis_tstrb_converter_8->vector_in(m_m_axis_tstrb_converter_8_signal);
    mp_m_axis_tstrb_converter_8->vector_out(m_axis_concat_tstrb_out_8);
    mp_M08_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_8_signal);
    mp_m_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_8");
    mp_m_axis_tkeep_converter_8->vector_in(m_m_axis_tkeep_converter_8_signal);
    mp_m_axis_tkeep_converter_8->vector_out(m_axis_concat_tkeep_out_8);
    mp_M08_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_8_signal);
    mp_m_axis_tlast_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_8");
    mp_m_axis_tlast_converter_8->scalar_in(m_m_axis_tlast_converter_8_signal);
    mp_m_axis_tlast_converter_8->vector_out(m_axis_concat_tlast_out_8);
    mp_M08_AXIS_transactor->TLAST(m_m_axis_tlast_converter_8_signal);
    mp_m_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_8");
    mp_m_axis_tid_converter_8->vector_in(m_m_axis_tid_converter_8_signal);
    mp_m_axis_tid_converter_8->vector_out(m_axis_concat_tid_out_8);
    mp_M08_AXIS_transactor->TID(m_m_axis_tid_converter_8_signal);
    mp_m_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_8");
    mp_m_axis_tdest_converter_8->vector_in(m_m_axis_tdest_converter_8_signal);
    mp_m_axis_tdest_converter_8->vector_out(m_axis_concat_tdest_out_8);
    mp_M08_AXIS_transactor->TDEST(m_m_axis_tdest_converter_8_signal);
    mp_m_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_8");
    mp_m_axis_tuser_converter_8->vector_in(m_m_axis_tuser_converter_8_signal);
    mp_m_axis_tuser_converter_8->vector_out(m_axis_concat_tuser_out_8);
    mp_M08_AXIS_transactor->TUSER(m_m_axis_tuser_converter_8_signal);
    mp_M08_AXIS_transactor->CLK(aclk);
    mp_M08_AXIS_transactor->RST(aresetn);

    // M08_AXIS' transactor sockets

    mp_impl->M08_AXIS_INITIATOR_SOCKET->bind(*(mp_M08_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S09_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S09_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S09_AXIS' transactor parameters
    xsc::common_cpp::properties S09_AXIS_transactor_param_props;
    S09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S09_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S09_AXIS_transactor", S09_AXIS_transactor_param_props);

    // S09_AXIS' transactor ports

    mp_s_axis_tvalid_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_9");
    mp_s_axis_tvalid_converter_9->vector_in(s_axis_split_tvalid_out_9);
    mp_s_axis_tvalid_converter_9->scalar_out(m_s_axis_tvalid_converter_9_signal);
    mp_S09_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_9_signal);
    mp_s_axis_tready_converter_9 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_9");
    mp_s_axis_tready_converter_9->scalar_in(m_s_axis_tready_converter_9_signal);
    mp_s_axis_tready_converter_9->vector_out(s_axis_concat_tready_out_9);
    mp_S09_AXIS_transactor->TREADY(m_s_axis_tready_converter_9_signal);
    mp_s_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_9");
    mp_s_axis_tdata_converter_9->vector_in(s_axis_split_tdata_out_9);
    mp_s_axis_tdata_converter_9->vector_out(m_s_axis_tdata_converter_9_signal);
    mp_S09_AXIS_transactor->TDATA(m_s_axis_tdata_converter_9_signal);
    mp_s_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_9");
    mp_s_axis_tstrb_converter_9->vector_in(s_axis_split_tstrb_out_9);
    mp_s_axis_tstrb_converter_9->vector_out(m_s_axis_tstrb_converter_9_signal);
    mp_S09_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_9_signal);
    mp_s_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_9");
    mp_s_axis_tkeep_converter_9->vector_in(s_axis_split_tkeep_out_9);
    mp_s_axis_tkeep_converter_9->vector_out(m_s_axis_tkeep_converter_9_signal);
    mp_S09_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_9_signal);
    mp_s_axis_tlast_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_9");
    mp_s_axis_tlast_converter_9->vector_in(s_axis_split_tlast_out_9);
    mp_s_axis_tlast_converter_9->scalar_out(m_s_axis_tlast_converter_9_signal);
    mp_S09_AXIS_transactor->TLAST(m_s_axis_tlast_converter_9_signal);
    mp_s_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_9");
    mp_s_axis_tid_converter_9->vector_in(s_axis_split_tid_out_9);
    mp_s_axis_tid_converter_9->vector_out(m_s_axis_tid_converter_9_signal);
    mp_S09_AXIS_transactor->TID(m_s_axis_tid_converter_9_signal);
    mp_s_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_9");
    mp_s_axis_tdest_converter_9->vector_in(s_axis_split_tdest_out_9);
    mp_s_axis_tdest_converter_9->vector_out(m_s_axis_tdest_converter_9_signal);
    mp_S09_AXIS_transactor->TDEST(m_s_axis_tdest_converter_9_signal);
    mp_s_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_9");
    mp_s_axis_tuser_converter_9->vector_in(s_axis_split_tuser_out_9);
    mp_s_axis_tuser_converter_9->vector_out(m_s_axis_tuser_converter_9_signal);
    mp_S09_AXIS_transactor->TUSER(m_s_axis_tuser_converter_9_signal);
    mp_S09_AXIS_transactor->CLK(aclk);
    mp_S09_AXIS_transactor->RST(aresetn);

    // S09_AXIS' transactor sockets

    mp_impl->S09_AXIS_TARGET_SOCKET->bind(*(mp_S09_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'M09_AXIS' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M09_AXIS_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'M09_AXIS' transactor parameters
    xsc::common_cpp::properties M09_AXIS_transactor_param_props;
    M09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M09_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M09_AXIS_transactor", M09_AXIS_transactor_param_props);

    // M09_AXIS' transactor ports

    mp_m_axis_tvalid_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_9");
    mp_m_axis_tvalid_converter_9->scalar_in(m_m_axis_tvalid_converter_9_signal);
    mp_m_axis_tvalid_converter_9->vector_out(m_axis_concat_tvalid_out_9);
    mp_M09_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_9_signal);
    mp_m_axis_tready_converter_9 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_9");
    mp_m_axis_tready_converter_9->vector_in(m_axis_split_tready_out_9);
    mp_m_axis_tready_converter_9->scalar_out(m_m_axis_tready_converter_9_signal);
    mp_M09_AXIS_transactor->TREADY(m_m_axis_tready_converter_9_signal);
    mp_m_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_9");
    mp_m_axis_tdata_converter_9->vector_in(m_m_axis_tdata_converter_9_signal);
    mp_m_axis_tdata_converter_9->vector_out(m_axis_concat_tdata_out_9);
    mp_M09_AXIS_transactor->TDATA(m_m_axis_tdata_converter_9_signal);
    mp_m_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_9");
    mp_m_axis_tstrb_converter_9->vector_in(m_m_axis_tstrb_converter_9_signal);
    mp_m_axis_tstrb_converter_9->vector_out(m_axis_concat_tstrb_out_9);
    mp_M09_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_9_signal);
    mp_m_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_9");
    mp_m_axis_tkeep_converter_9->vector_in(m_m_axis_tkeep_converter_9_signal);
    mp_m_axis_tkeep_converter_9->vector_out(m_axis_concat_tkeep_out_9);
    mp_M09_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_9_signal);
    mp_m_axis_tlast_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_9");
    mp_m_axis_tlast_converter_9->scalar_in(m_m_axis_tlast_converter_9_signal);
    mp_m_axis_tlast_converter_9->vector_out(m_axis_concat_tlast_out_9);
    mp_M09_AXIS_transactor->TLAST(m_m_axis_tlast_converter_9_signal);
    mp_m_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_9");
    mp_m_axis_tid_converter_9->vector_in(m_m_axis_tid_converter_9_signal);
    mp_m_axis_tid_converter_9->vector_out(m_axis_concat_tid_out_9);
    mp_M09_AXIS_transactor->TID(m_m_axis_tid_converter_9_signal);
    mp_m_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_9");
    mp_m_axis_tdest_converter_9->vector_in(m_m_axis_tdest_converter_9_signal);
    mp_m_axis_tdest_converter_9->vector_out(m_axis_concat_tdest_out_9);
    mp_M09_AXIS_transactor->TDEST(m_m_axis_tdest_converter_9_signal);
    mp_m_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_9");
    mp_m_axis_tuser_converter_9->vector_in(m_m_axis_tuser_converter_9_signal);
    mp_m_axis_tuser_converter_9->vector_out(m_axis_concat_tuser_out_9);
    mp_M09_AXIS_transactor->TUSER(m_m_axis_tuser_converter_9_signal);
    mp_M09_AXIS_transactor->CLK(aclk);
    mp_M09_AXIS_transactor->RST(aresetn);

    // M09_AXIS' transactor sockets

    mp_impl->M09_AXIS_INITIATOR_SOCKET->bind(*(mp_M09_AXIS_transactor->socket));
  }
  else
  {
  }

  // configure 'S_AXI_CTRL' transactor

  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S_AXI_CTRL_TLM_MODE") != 1)
  {
    // Instantiate Socket Stubs

  // 'S_AXI_CTRL' transactor parameters
    xsc::common_cpp::properties S_AXI_CTRL_transactor_param_props;
    S_AXI_CTRL_transactor_param_props.addLong("DATA_WIDTH", "32");
    S_AXI_CTRL_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S_AXI_CTRL_transactor_param_props.addLong("ID_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ADDR_WIDTH", "7");
    S_AXI_CTRL_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_LOCK", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_PROT", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_CACHE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_QOS", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_WSTRB", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_SIZE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RESET", "1");
    S_AXI_CTRL_transactor_param_props.addFloat("PHASE", "0.00");
    S_AXI_CTRL_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    S_AXI_CTRL_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_CTRL_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");

    mp_S_AXI_CTRL_transactor = new xtlm::xaximm_pin2xtlm_t<32,7,1,1,1,1,1,1>("S_AXI_CTRL_transactor", S_AXI_CTRL_transactor_param_props);

    // S_AXI_CTRL' transactor ports

    mp_S_AXI_CTRL_transactor->AWVALID(s_axi_ctrl_awvalid);
    mp_S_AXI_CTRL_transactor->AWREADY(s_axi_ctrl_awready);
    mp_S_AXI_CTRL_transactor->AWADDR(s_axi_ctrl_awaddr);
    mp_S_AXI_CTRL_transactor->WVALID(s_axi_ctrl_wvalid);
    mp_S_AXI_CTRL_transactor->WREADY(s_axi_ctrl_wready);
    mp_S_AXI_CTRL_transactor->WDATA(s_axi_ctrl_wdata);
    mp_S_AXI_CTRL_transactor->BVALID(s_axi_ctrl_bvalid);
    mp_S_AXI_CTRL_transactor->BREADY(s_axi_ctrl_bready);
    mp_S_AXI_CTRL_transactor->BRESP(s_axi_ctrl_bresp);
    mp_S_AXI_CTRL_transactor->ARVALID(s_axi_ctrl_arvalid);
    mp_S_AXI_CTRL_transactor->ARREADY(s_axi_ctrl_arready);
    mp_S_AXI_CTRL_transactor->ARADDR(s_axi_ctrl_araddr);
    mp_S_AXI_CTRL_transactor->RVALID(s_axi_ctrl_rvalid);
    mp_S_AXI_CTRL_transactor->RREADY(s_axi_ctrl_rready);
    mp_S_AXI_CTRL_transactor->RDATA(s_axi_ctrl_rdata);
    mp_S_AXI_CTRL_transactor->RRESP(s_axi_ctrl_rresp);
    mp_S_AXI_CTRL_transactor->CLK(s_axi_ctrl_aclk);
    mp_S_AXI_CTRL_transactor->RST(s_axi_ctrl_aresetn);

    // S_AXI_CTRL' transactor sockets

    mp_impl->S_AXI_CTRL_wr_socket->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    mp_impl->S_AXI_CTRL_rd_socket->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
  }
  else
  {
  }

}

#endif // RIVIERA




#ifdef VCSSYSTEMC
bd_d92b_xbar_0::bd_d92b_xbar_0(const sc_core::sc_module_name& nm) : bd_d92b_xbar_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), s_axis_tvalid("s_axis_tvalid"), s_axis_tready("s_axis_tready"), s_axis_tdata("s_axis_tdata"), s_axis_tstrb("s_axis_tstrb"), s_axis_tkeep("s_axis_tkeep"), s_axis_tlast("s_axis_tlast"), s_axis_tid("s_axis_tid"), s_axis_tdest("s_axis_tdest"), s_axis_tuser("s_axis_tuser"), m_axis_tvalid("m_axis_tvalid"), m_axis_tready("m_axis_tready"), m_axis_tdata("m_axis_tdata"), m_axis_tstrb("m_axis_tstrb"), m_axis_tkeep("m_axis_tkeep"), m_axis_tlast("m_axis_tlast"), m_axis_tid("m_axis_tid"), m_axis_tdest("m_axis_tdest"), m_axis_tuser("m_axis_tuser"), s_axi_ctrl_aclk("s_axi_ctrl_aclk"), s_axi_ctrl_aresetn("s_axi_ctrl_aresetn"), s_axi_ctrl_awvalid("s_axi_ctrl_awvalid"), s_axi_ctrl_awready("s_axi_ctrl_awready"), s_axi_ctrl_awaddr("s_axi_ctrl_awaddr"), s_axi_ctrl_wvalid("s_axi_ctrl_wvalid"), s_axi_ctrl_wready("s_axi_ctrl_wready"), s_axi_ctrl_wdata("s_axi_ctrl_wdata"), s_axi_ctrl_bvalid("s_axi_ctrl_bvalid"), s_axi_ctrl_bready("s_axi_ctrl_bready"), s_axi_ctrl_bresp("s_axi_ctrl_bresp"), s_axi_ctrl_arvalid("s_axi_ctrl_arvalid"), s_axi_ctrl_arready("s_axi_ctrl_arready"), s_axi_ctrl_araddr("s_axi_ctrl_araddr"), s_axi_ctrl_rvalid("s_axi_ctrl_rvalid"), s_axi_ctrl_rready("s_axi_ctrl_rready"), s_axi_ctrl_rdata("s_axi_ctrl_rdata"), s_axi_ctrl_rresp("s_axi_ctrl_rresp")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);
  mp_impl->s_axi_ctrl_aclk(s_axi_ctrl_aclk);
  mp_impl->s_axi_ctrl_aresetn(s_axi_ctrl_aresetn);

  // initialize transactors
  mp_S00_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_0 = NULL;
  mp_s_axis_tready_converter_0 = NULL;
  mp_s_axis_tdata_converter_0 = NULL;
  mp_s_axis_tstrb_converter_0 = NULL;
  mp_s_axis_tkeep_converter_0 = NULL;
  mp_s_axis_tlast_converter_0 = NULL;
  mp_s_axis_tid_converter_0 = NULL;
  mp_s_axis_tdest_converter_0 = NULL;
  mp_s_axis_tuser_converter_0 = NULL;
  mp_M00_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_0 = NULL;
  mp_m_axis_tready_converter_0 = NULL;
  mp_m_axis_tdata_converter_0 = NULL;
  mp_m_axis_tstrb_converter_0 = NULL;
  mp_m_axis_tkeep_converter_0 = NULL;
  mp_m_axis_tlast_converter_0 = NULL;
  mp_m_axis_tid_converter_0 = NULL;
  mp_m_axis_tdest_converter_0 = NULL;
  mp_m_axis_tuser_converter_0 = NULL;
  mp_S01_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_1 = NULL;
  mp_s_axis_tready_converter_1 = NULL;
  mp_s_axis_tdata_converter_1 = NULL;
  mp_s_axis_tstrb_converter_1 = NULL;
  mp_s_axis_tkeep_converter_1 = NULL;
  mp_s_axis_tlast_converter_1 = NULL;
  mp_s_axis_tid_converter_1 = NULL;
  mp_s_axis_tdest_converter_1 = NULL;
  mp_s_axis_tuser_converter_1 = NULL;
  mp_M01_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_1 = NULL;
  mp_m_axis_tready_converter_1 = NULL;
  mp_m_axis_tdata_converter_1 = NULL;
  mp_m_axis_tstrb_converter_1 = NULL;
  mp_m_axis_tkeep_converter_1 = NULL;
  mp_m_axis_tlast_converter_1 = NULL;
  mp_m_axis_tid_converter_1 = NULL;
  mp_m_axis_tdest_converter_1 = NULL;
  mp_m_axis_tuser_converter_1 = NULL;
  mp_S02_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_2 = NULL;
  mp_s_axis_tready_converter_2 = NULL;
  mp_s_axis_tdata_converter_2 = NULL;
  mp_s_axis_tstrb_converter_2 = NULL;
  mp_s_axis_tkeep_converter_2 = NULL;
  mp_s_axis_tlast_converter_2 = NULL;
  mp_s_axis_tid_converter_2 = NULL;
  mp_s_axis_tdest_converter_2 = NULL;
  mp_s_axis_tuser_converter_2 = NULL;
  mp_M02_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_2 = NULL;
  mp_m_axis_tready_converter_2 = NULL;
  mp_m_axis_tdata_converter_2 = NULL;
  mp_m_axis_tstrb_converter_2 = NULL;
  mp_m_axis_tkeep_converter_2 = NULL;
  mp_m_axis_tlast_converter_2 = NULL;
  mp_m_axis_tid_converter_2 = NULL;
  mp_m_axis_tdest_converter_2 = NULL;
  mp_m_axis_tuser_converter_2 = NULL;
  mp_S03_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_3 = NULL;
  mp_s_axis_tready_converter_3 = NULL;
  mp_s_axis_tdata_converter_3 = NULL;
  mp_s_axis_tstrb_converter_3 = NULL;
  mp_s_axis_tkeep_converter_3 = NULL;
  mp_s_axis_tlast_converter_3 = NULL;
  mp_s_axis_tid_converter_3 = NULL;
  mp_s_axis_tdest_converter_3 = NULL;
  mp_s_axis_tuser_converter_3 = NULL;
  mp_M03_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_3 = NULL;
  mp_m_axis_tready_converter_3 = NULL;
  mp_m_axis_tdata_converter_3 = NULL;
  mp_m_axis_tstrb_converter_3 = NULL;
  mp_m_axis_tkeep_converter_3 = NULL;
  mp_m_axis_tlast_converter_3 = NULL;
  mp_m_axis_tid_converter_3 = NULL;
  mp_m_axis_tdest_converter_3 = NULL;
  mp_m_axis_tuser_converter_3 = NULL;
  mp_S04_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_4 = NULL;
  mp_s_axis_tready_converter_4 = NULL;
  mp_s_axis_tdata_converter_4 = NULL;
  mp_s_axis_tstrb_converter_4 = NULL;
  mp_s_axis_tkeep_converter_4 = NULL;
  mp_s_axis_tlast_converter_4 = NULL;
  mp_s_axis_tid_converter_4 = NULL;
  mp_s_axis_tdest_converter_4 = NULL;
  mp_s_axis_tuser_converter_4 = NULL;
  mp_M04_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_4 = NULL;
  mp_m_axis_tready_converter_4 = NULL;
  mp_m_axis_tdata_converter_4 = NULL;
  mp_m_axis_tstrb_converter_4 = NULL;
  mp_m_axis_tkeep_converter_4 = NULL;
  mp_m_axis_tlast_converter_4 = NULL;
  mp_m_axis_tid_converter_4 = NULL;
  mp_m_axis_tdest_converter_4 = NULL;
  mp_m_axis_tuser_converter_4 = NULL;
  mp_S05_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_5 = NULL;
  mp_s_axis_tready_converter_5 = NULL;
  mp_s_axis_tdata_converter_5 = NULL;
  mp_s_axis_tstrb_converter_5 = NULL;
  mp_s_axis_tkeep_converter_5 = NULL;
  mp_s_axis_tlast_converter_5 = NULL;
  mp_s_axis_tid_converter_5 = NULL;
  mp_s_axis_tdest_converter_5 = NULL;
  mp_s_axis_tuser_converter_5 = NULL;
  mp_M05_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_5 = NULL;
  mp_m_axis_tready_converter_5 = NULL;
  mp_m_axis_tdata_converter_5 = NULL;
  mp_m_axis_tstrb_converter_5 = NULL;
  mp_m_axis_tkeep_converter_5 = NULL;
  mp_m_axis_tlast_converter_5 = NULL;
  mp_m_axis_tid_converter_5 = NULL;
  mp_m_axis_tdest_converter_5 = NULL;
  mp_m_axis_tuser_converter_5 = NULL;
  mp_S06_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_6 = NULL;
  mp_s_axis_tready_converter_6 = NULL;
  mp_s_axis_tdata_converter_6 = NULL;
  mp_s_axis_tstrb_converter_6 = NULL;
  mp_s_axis_tkeep_converter_6 = NULL;
  mp_s_axis_tlast_converter_6 = NULL;
  mp_s_axis_tid_converter_6 = NULL;
  mp_s_axis_tdest_converter_6 = NULL;
  mp_s_axis_tuser_converter_6 = NULL;
  mp_M06_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_6 = NULL;
  mp_m_axis_tready_converter_6 = NULL;
  mp_m_axis_tdata_converter_6 = NULL;
  mp_m_axis_tstrb_converter_6 = NULL;
  mp_m_axis_tkeep_converter_6 = NULL;
  mp_m_axis_tlast_converter_6 = NULL;
  mp_m_axis_tid_converter_6 = NULL;
  mp_m_axis_tdest_converter_6 = NULL;
  mp_m_axis_tuser_converter_6 = NULL;
  mp_S07_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_7 = NULL;
  mp_s_axis_tready_converter_7 = NULL;
  mp_s_axis_tdata_converter_7 = NULL;
  mp_s_axis_tstrb_converter_7 = NULL;
  mp_s_axis_tkeep_converter_7 = NULL;
  mp_s_axis_tlast_converter_7 = NULL;
  mp_s_axis_tid_converter_7 = NULL;
  mp_s_axis_tdest_converter_7 = NULL;
  mp_s_axis_tuser_converter_7 = NULL;
  mp_M07_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_7 = NULL;
  mp_m_axis_tready_converter_7 = NULL;
  mp_m_axis_tdata_converter_7 = NULL;
  mp_m_axis_tstrb_converter_7 = NULL;
  mp_m_axis_tkeep_converter_7 = NULL;
  mp_m_axis_tlast_converter_7 = NULL;
  mp_m_axis_tid_converter_7 = NULL;
  mp_m_axis_tdest_converter_7 = NULL;
  mp_m_axis_tuser_converter_7 = NULL;
  mp_S08_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_8 = NULL;
  mp_s_axis_tready_converter_8 = NULL;
  mp_s_axis_tdata_converter_8 = NULL;
  mp_s_axis_tstrb_converter_8 = NULL;
  mp_s_axis_tkeep_converter_8 = NULL;
  mp_s_axis_tlast_converter_8 = NULL;
  mp_s_axis_tid_converter_8 = NULL;
  mp_s_axis_tdest_converter_8 = NULL;
  mp_s_axis_tuser_converter_8 = NULL;
  mp_M08_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_8 = NULL;
  mp_m_axis_tready_converter_8 = NULL;
  mp_m_axis_tdata_converter_8 = NULL;
  mp_m_axis_tstrb_converter_8 = NULL;
  mp_m_axis_tkeep_converter_8 = NULL;
  mp_m_axis_tlast_converter_8 = NULL;
  mp_m_axis_tid_converter_8 = NULL;
  mp_m_axis_tdest_converter_8 = NULL;
  mp_m_axis_tuser_converter_8 = NULL;
  mp_S09_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_9 = NULL;
  mp_s_axis_tready_converter_9 = NULL;
  mp_s_axis_tdata_converter_9 = NULL;
  mp_s_axis_tstrb_converter_9 = NULL;
  mp_s_axis_tkeep_converter_9 = NULL;
  mp_s_axis_tlast_converter_9 = NULL;
  mp_s_axis_tid_converter_9 = NULL;
  mp_s_axis_tdest_converter_9 = NULL;
  mp_s_axis_tuser_converter_9 = NULL;
  mp_M09_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_9 = NULL;
  mp_m_axis_tready_converter_9 = NULL;
  mp_m_axis_tdata_converter_9 = NULL;
  mp_m_axis_tstrb_converter_9 = NULL;
  mp_m_axis_tkeep_converter_9 = NULL;
  mp_m_axis_tlast_converter_9 = NULL;
  mp_m_axis_tid_converter_9 = NULL;
  mp_m_axis_tdest_converter_9 = NULL;
  mp_m_axis_tuser_converter_9 = NULL;
  mp_S_AXI_CTRL_transactor = NULL;

  // initialize port junctures
  mp_m_axis_concat_tdata = NULL;
  mp_m_axis_concat_tdest = NULL;
  mp_m_axis_concat_tid = NULL;
  mp_m_axis_concat_tkeep = NULL;
  mp_m_axis_concat_tlast = NULL;
  mp_m_axis_concat_tstrb = NULL;
  mp_m_axis_concat_tuser = NULL;
  mp_m_axis_concat_tvalid = NULL;
  mp_m_axis_split_tready = NULL;
  mp_s_axis_concat_tready = NULL;
  mp_s_axis_split_tdata = NULL;
  mp_s_axis_split_tdest = NULL;
  mp_s_axis_split_tid = NULL;
  mp_s_axis_split_tkeep = NULL;
  mp_s_axis_split_tlast = NULL;
  mp_s_axis_split_tstrb = NULL;
  mp_s_axis_split_tuser = NULL;
  mp_s_axis_split_tvalid = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXIS_transactor
    xsc::common_cpp::properties S00_AXIS_transactor_param_props;
    S00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S00_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S00_AXIS_transactor", S00_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_0");
  mp_s_axis_split_tvalid = new xsc::xsc_split<10, 10>("s_axis_split_tvalid");
  mp_s_axis_split_tvalid->in_port(s_axis_tvalid);
  mp_s_axis_split_tvalid->out_port[0](s_axis_split_tvalid_out_0);
    mp_s_axis_split_tvalid->add_mask(0,1,0);
  mp_s_axis_tvalid_converter_0->vector_in(s_axis_split_tvalid_out_0);
  mp_s_axis_tvalid_converter_0->scalar_out(m_s_axis_tvalid_converter_0_signal);
  mp_S00_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_0_signal);
  mp_s_axis_tready_converter_0 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_0");
  mp_s_axis_concat_tready = new xsc::xsc_concatenator<10, 10>("s_axis_concat_tready");
  mp_s_axis_concat_tready->in_port[0](s_axis_concat_tready_out_0);
  mp_s_axis_concat_tready->out_port(s_axis_tready);
    mp_s_axis_concat_tready->offset_port(0, 0);
  mp_s_axis_tready_converter_0->scalar_in(m_s_axis_tready_converter_0_signal);
  mp_s_axis_tready_converter_0->vector_out(s_axis_concat_tready_out_0);
  mp_S00_AXIS_transactor->TREADY(m_s_axis_tready_converter_0_signal);
  mp_s_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_0");
  mp_s_axis_split_tdata = new xsc::xsc_split<640, 10>("s_axis_split_tdata");
  mp_s_axis_split_tdata->in_port(s_axis_tdata);
  mp_s_axis_split_tdata->out_port[0](s_axis_split_tdata_out_0);
    mp_s_axis_split_tdata->add_mask(0,64,0);
  mp_s_axis_tdata_converter_0->vector_in(s_axis_split_tdata_out_0);
  mp_s_axis_tdata_converter_0->vector_out(m_s_axis_tdata_converter_0_signal);
  mp_S00_AXIS_transactor->TDATA(m_s_axis_tdata_converter_0_signal);
  mp_s_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_0");
  mp_s_axis_split_tstrb = new xsc::xsc_split<80, 10>("s_axis_split_tstrb");
  mp_s_axis_split_tstrb->in_port(s_axis_tstrb);
  mp_s_axis_split_tstrb->out_port[0](s_axis_split_tstrb_out_0);
    mp_s_axis_split_tstrb->add_mask(0,8,0);
  mp_s_axis_tstrb_converter_0->vector_in(s_axis_split_tstrb_out_0);
  mp_s_axis_tstrb_converter_0->vector_out(m_s_axis_tstrb_converter_0_signal);
  mp_S00_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_0_signal);
  mp_s_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_0");
  mp_s_axis_split_tkeep = new xsc::xsc_split<80, 10>("s_axis_split_tkeep");
  mp_s_axis_split_tkeep->in_port(s_axis_tkeep);
  mp_s_axis_split_tkeep->out_port[0](s_axis_split_tkeep_out_0);
    mp_s_axis_split_tkeep->add_mask(0,8,0);
  mp_s_axis_tkeep_converter_0->vector_in(s_axis_split_tkeep_out_0);
  mp_s_axis_tkeep_converter_0->vector_out(m_s_axis_tkeep_converter_0_signal);
  mp_S00_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_0_signal);
  mp_s_axis_tlast_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_0");
  mp_s_axis_split_tlast = new xsc::xsc_split<10, 10>("s_axis_split_tlast");
  mp_s_axis_split_tlast->in_port(s_axis_tlast);
  mp_s_axis_split_tlast->out_port[0](s_axis_split_tlast_out_0);
    mp_s_axis_split_tlast->add_mask(0,1,0);
  mp_s_axis_tlast_converter_0->vector_in(s_axis_split_tlast_out_0);
  mp_s_axis_tlast_converter_0->scalar_out(m_s_axis_tlast_converter_0_signal);
  mp_S00_AXIS_transactor->TLAST(m_s_axis_tlast_converter_0_signal);
  mp_s_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_0");
  mp_s_axis_split_tid = new xsc::xsc_split<10, 10>("s_axis_split_tid");
  mp_s_axis_split_tid->in_port(s_axis_tid);
  mp_s_axis_split_tid->out_port[0](s_axis_split_tid_out_0);
    mp_s_axis_split_tid->add_mask(0,1,0);
  mp_s_axis_tid_converter_0->vector_in(s_axis_split_tid_out_0);
  mp_s_axis_tid_converter_0->vector_out(m_s_axis_tid_converter_0_signal);
  mp_S00_AXIS_transactor->TID(m_s_axis_tid_converter_0_signal);
  mp_s_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_0");
  mp_s_axis_split_tdest = new xsc::xsc_split<40, 10>("s_axis_split_tdest");
  mp_s_axis_split_tdest->in_port(s_axis_tdest);
  mp_s_axis_split_tdest->out_port[0](s_axis_split_tdest_out_0);
    mp_s_axis_split_tdest->add_mask(0,4,0);
  mp_s_axis_tdest_converter_0->vector_in(s_axis_split_tdest_out_0);
  mp_s_axis_tdest_converter_0->vector_out(m_s_axis_tdest_converter_0_signal);
  mp_S00_AXIS_transactor->TDEST(m_s_axis_tdest_converter_0_signal);
  mp_s_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_0");
  mp_s_axis_split_tuser = new xsc::xsc_split<10, 10>("s_axis_split_tuser");
  mp_s_axis_split_tuser->in_port(s_axis_tuser);
  mp_s_axis_split_tuser->out_port[0](s_axis_split_tuser_out_0);
    mp_s_axis_split_tuser->add_mask(0,1,0);
  mp_s_axis_tuser_converter_0->vector_in(s_axis_split_tuser_out_0);
  mp_s_axis_tuser_converter_0->vector_out(m_s_axis_tuser_converter_0_signal);
  mp_S00_AXIS_transactor->TUSER(m_s_axis_tuser_converter_0_signal);
  mp_S00_AXIS_transactor->CLK(aclk);
  mp_S00_AXIS_transactor->RST(aresetn);
  // configure M00_AXIS_transactor
    xsc::common_cpp::properties M00_AXIS_transactor_param_props;
    M00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M00_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M00_AXIS_transactor", M00_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_0");
  mp_m_axis_concat_tvalid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tvalid");
  mp_m_axis_concat_tvalid->in_port[0](m_axis_concat_tvalid_out_0);
  mp_m_axis_concat_tvalid->out_port(m_axis_tvalid);
    mp_m_axis_concat_tvalid->offset_port(0, 0);
  mp_m_axis_tvalid_converter_0->scalar_in(m_m_axis_tvalid_converter_0_signal);
  mp_m_axis_tvalid_converter_0->vector_out(m_axis_concat_tvalid_out_0);
  mp_M00_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_0_signal);
  mp_m_axis_tready_converter_0 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_0");
  mp_m_axis_split_tready = new xsc::xsc_split<10, 10>("m_axis_split_tready");
  mp_m_axis_split_tready->in_port(m_axis_tready);
  mp_m_axis_split_tready->out_port[0](m_axis_split_tready_out_0);
    mp_m_axis_split_tready->add_mask(0,1,0);
  mp_m_axis_tready_converter_0->vector_in(m_axis_split_tready_out_0);
  mp_m_axis_tready_converter_0->scalar_out(m_m_axis_tready_converter_0_signal);
  mp_M00_AXIS_transactor->TREADY(m_m_axis_tready_converter_0_signal);
  mp_m_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_0");
  mp_m_axis_concat_tdata = new xsc::xsc_concatenator<640, 10>("m_axis_concat_tdata");
  mp_m_axis_concat_tdata->in_port[0](m_axis_concat_tdata_out_0);
  mp_m_axis_concat_tdata->out_port(m_axis_tdata);
    mp_m_axis_concat_tdata->offset_port(0, 0);
  mp_m_axis_tdata_converter_0->vector_in(m_m_axis_tdata_converter_0_signal);
  mp_m_axis_tdata_converter_0->vector_out(m_axis_concat_tdata_out_0);
  mp_M00_AXIS_transactor->TDATA(m_m_axis_tdata_converter_0_signal);
  mp_m_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_0");
  mp_m_axis_concat_tstrb = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tstrb");
  mp_m_axis_concat_tstrb->in_port[0](m_axis_concat_tstrb_out_0);
  mp_m_axis_concat_tstrb->out_port(m_axis_tstrb);
    mp_m_axis_concat_tstrb->offset_port(0, 0);
  mp_m_axis_tstrb_converter_0->vector_in(m_m_axis_tstrb_converter_0_signal);
  mp_m_axis_tstrb_converter_0->vector_out(m_axis_concat_tstrb_out_0);
  mp_M00_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_0_signal);
  mp_m_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_0");
  mp_m_axis_concat_tkeep = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tkeep");
  mp_m_axis_concat_tkeep->in_port[0](m_axis_concat_tkeep_out_0);
  mp_m_axis_concat_tkeep->out_port(m_axis_tkeep);
    mp_m_axis_concat_tkeep->offset_port(0, 0);
  mp_m_axis_tkeep_converter_0->vector_in(m_m_axis_tkeep_converter_0_signal);
  mp_m_axis_tkeep_converter_0->vector_out(m_axis_concat_tkeep_out_0);
  mp_M00_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_0_signal);
  mp_m_axis_tlast_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_0");
  mp_m_axis_concat_tlast = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tlast");
  mp_m_axis_concat_tlast->in_port[0](m_axis_concat_tlast_out_0);
  mp_m_axis_concat_tlast->out_port(m_axis_tlast);
    mp_m_axis_concat_tlast->offset_port(0, 0);
  mp_m_axis_tlast_converter_0->scalar_in(m_m_axis_tlast_converter_0_signal);
  mp_m_axis_tlast_converter_0->vector_out(m_axis_concat_tlast_out_0);
  mp_M00_AXIS_transactor->TLAST(m_m_axis_tlast_converter_0_signal);
  mp_m_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_0");
  mp_m_axis_concat_tid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tid");
  mp_m_axis_concat_tid->in_port[0](m_axis_concat_tid_out_0);
  mp_m_axis_concat_tid->out_port(m_axis_tid);
    mp_m_axis_concat_tid->offset_port(0, 0);
  mp_m_axis_tid_converter_0->vector_in(m_m_axis_tid_converter_0_signal);
  mp_m_axis_tid_converter_0->vector_out(m_axis_concat_tid_out_0);
  mp_M00_AXIS_transactor->TID(m_m_axis_tid_converter_0_signal);
  mp_m_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_0");
  mp_m_axis_concat_tdest = new xsc::xsc_concatenator<40, 10>("m_axis_concat_tdest");
  mp_m_axis_concat_tdest->in_port[0](m_axis_concat_tdest_out_0);
  mp_m_axis_concat_tdest->out_port(m_axis_tdest);
    mp_m_axis_concat_tdest->offset_port(0, 0);
  mp_m_axis_tdest_converter_0->vector_in(m_m_axis_tdest_converter_0_signal);
  mp_m_axis_tdest_converter_0->vector_out(m_axis_concat_tdest_out_0);
  mp_M00_AXIS_transactor->TDEST(m_m_axis_tdest_converter_0_signal);
  mp_m_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_0");
  mp_m_axis_concat_tuser = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tuser");
  mp_m_axis_concat_tuser->in_port[0](m_axis_concat_tuser_out_0);
  mp_m_axis_concat_tuser->out_port(m_axis_tuser);
    mp_m_axis_concat_tuser->offset_port(0, 0);
  mp_m_axis_tuser_converter_0->vector_in(m_m_axis_tuser_converter_0_signal);
  mp_m_axis_tuser_converter_0->vector_out(m_axis_concat_tuser_out_0);
  mp_M00_AXIS_transactor->TUSER(m_m_axis_tuser_converter_0_signal);
  mp_M00_AXIS_transactor->CLK(aclk);
  mp_M00_AXIS_transactor->RST(aresetn);
  // configure S01_AXIS_transactor
    xsc::common_cpp::properties S01_AXIS_transactor_param_props;
    S01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S01_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S01_AXIS_transactor", S01_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_1");
  
  mp_s_axis_split_tvalid->out_port[1](s_axis_split_tvalid_out_1);
    mp_s_axis_split_tvalid->add_mask(1,2,1);
  mp_s_axis_tvalid_converter_1->vector_in(s_axis_split_tvalid_out_1);
  mp_s_axis_tvalid_converter_1->scalar_out(m_s_axis_tvalid_converter_1_signal);
  mp_S01_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_1_signal);
  mp_s_axis_tready_converter_1 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_1");
  mp_s_axis_concat_tready->in_port[1](s_axis_concat_tready_out_1);
  mp_s_axis_concat_tready->offset_port(1, 1);
  mp_s_axis_tready_converter_1->scalar_in(m_s_axis_tready_converter_1_signal);
  mp_s_axis_tready_converter_1->vector_out(s_axis_concat_tready_out_1);
  mp_S01_AXIS_transactor->TREADY(m_s_axis_tready_converter_1_signal);
  mp_s_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_1");
  
  mp_s_axis_split_tdata->out_port[1](s_axis_split_tdata_out_1);
    mp_s_axis_split_tdata->add_mask(1,128,64);
  mp_s_axis_tdata_converter_1->vector_in(s_axis_split_tdata_out_1);
  mp_s_axis_tdata_converter_1->vector_out(m_s_axis_tdata_converter_1_signal);
  mp_S01_AXIS_transactor->TDATA(m_s_axis_tdata_converter_1_signal);
  mp_s_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_1");
  
  mp_s_axis_split_tstrb->out_port[1](s_axis_split_tstrb_out_1);
    mp_s_axis_split_tstrb->add_mask(1,16,8);
  mp_s_axis_tstrb_converter_1->vector_in(s_axis_split_tstrb_out_1);
  mp_s_axis_tstrb_converter_1->vector_out(m_s_axis_tstrb_converter_1_signal);
  mp_S01_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_1_signal);
  mp_s_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_1");
  
  mp_s_axis_split_tkeep->out_port[1](s_axis_split_tkeep_out_1);
    mp_s_axis_split_tkeep->add_mask(1,16,8);
  mp_s_axis_tkeep_converter_1->vector_in(s_axis_split_tkeep_out_1);
  mp_s_axis_tkeep_converter_1->vector_out(m_s_axis_tkeep_converter_1_signal);
  mp_S01_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_1_signal);
  mp_s_axis_tlast_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_1");
  
  mp_s_axis_split_tlast->out_port[1](s_axis_split_tlast_out_1);
    mp_s_axis_split_tlast->add_mask(1,2,1);
  mp_s_axis_tlast_converter_1->vector_in(s_axis_split_tlast_out_1);
  mp_s_axis_tlast_converter_1->scalar_out(m_s_axis_tlast_converter_1_signal);
  mp_S01_AXIS_transactor->TLAST(m_s_axis_tlast_converter_1_signal);
  mp_s_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_1");
  
  mp_s_axis_split_tid->out_port[1](s_axis_split_tid_out_1);
    mp_s_axis_split_tid->add_mask(1,2,1);
  mp_s_axis_tid_converter_1->vector_in(s_axis_split_tid_out_1);
  mp_s_axis_tid_converter_1->vector_out(m_s_axis_tid_converter_1_signal);
  mp_S01_AXIS_transactor->TID(m_s_axis_tid_converter_1_signal);
  mp_s_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_1");
  
  mp_s_axis_split_tdest->out_port[1](s_axis_split_tdest_out_1);
    mp_s_axis_split_tdest->add_mask(1,8,4);
  mp_s_axis_tdest_converter_1->vector_in(s_axis_split_tdest_out_1);
  mp_s_axis_tdest_converter_1->vector_out(m_s_axis_tdest_converter_1_signal);
  mp_S01_AXIS_transactor->TDEST(m_s_axis_tdest_converter_1_signal);
  mp_s_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_1");
  
  mp_s_axis_split_tuser->out_port[1](s_axis_split_tuser_out_1);
    mp_s_axis_split_tuser->add_mask(1,2,1);
  mp_s_axis_tuser_converter_1->vector_in(s_axis_split_tuser_out_1);
  mp_s_axis_tuser_converter_1->vector_out(m_s_axis_tuser_converter_1_signal);
  mp_S01_AXIS_transactor->TUSER(m_s_axis_tuser_converter_1_signal);
  mp_S01_AXIS_transactor->CLK(aclk);
  mp_S01_AXIS_transactor->RST(aresetn);
  // configure M01_AXIS_transactor
    xsc::common_cpp::properties M01_AXIS_transactor_param_props;
    M01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M01_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M01_AXIS_transactor", M01_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_1");
  mp_m_axis_concat_tvalid->in_port[1](m_axis_concat_tvalid_out_1);
  mp_m_axis_concat_tvalid->offset_port(1, 1);
  mp_m_axis_tvalid_converter_1->scalar_in(m_m_axis_tvalid_converter_1_signal);
  mp_m_axis_tvalid_converter_1->vector_out(m_axis_concat_tvalid_out_1);
  mp_M01_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_1_signal);
  mp_m_axis_tready_converter_1 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_1");
  
  mp_m_axis_split_tready->out_port[1](m_axis_split_tready_out_1);
    mp_m_axis_split_tready->add_mask(1,2,1);
  mp_m_axis_tready_converter_1->vector_in(m_axis_split_tready_out_1);
  mp_m_axis_tready_converter_1->scalar_out(m_m_axis_tready_converter_1_signal);
  mp_M01_AXIS_transactor->TREADY(m_m_axis_tready_converter_1_signal);
  mp_m_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_1");
  mp_m_axis_concat_tdata->in_port[1](m_axis_concat_tdata_out_1);
  mp_m_axis_concat_tdata->offset_port(1, 64);
  mp_m_axis_tdata_converter_1->vector_in(m_m_axis_tdata_converter_1_signal);
  mp_m_axis_tdata_converter_1->vector_out(m_axis_concat_tdata_out_1);
  mp_M01_AXIS_transactor->TDATA(m_m_axis_tdata_converter_1_signal);
  mp_m_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_1");
  mp_m_axis_concat_tstrb->in_port[1](m_axis_concat_tstrb_out_1);
  mp_m_axis_concat_tstrb->offset_port(1, 8);
  mp_m_axis_tstrb_converter_1->vector_in(m_m_axis_tstrb_converter_1_signal);
  mp_m_axis_tstrb_converter_1->vector_out(m_axis_concat_tstrb_out_1);
  mp_M01_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_1_signal);
  mp_m_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_1");
  mp_m_axis_concat_tkeep->in_port[1](m_axis_concat_tkeep_out_1);
  mp_m_axis_concat_tkeep->offset_port(1, 8);
  mp_m_axis_tkeep_converter_1->vector_in(m_m_axis_tkeep_converter_1_signal);
  mp_m_axis_tkeep_converter_1->vector_out(m_axis_concat_tkeep_out_1);
  mp_M01_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_1_signal);
  mp_m_axis_tlast_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_1");
  mp_m_axis_concat_tlast->in_port[1](m_axis_concat_tlast_out_1);
  mp_m_axis_concat_tlast->offset_port(1, 1);
  mp_m_axis_tlast_converter_1->scalar_in(m_m_axis_tlast_converter_1_signal);
  mp_m_axis_tlast_converter_1->vector_out(m_axis_concat_tlast_out_1);
  mp_M01_AXIS_transactor->TLAST(m_m_axis_tlast_converter_1_signal);
  mp_m_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_1");
  mp_m_axis_concat_tid->in_port[1](m_axis_concat_tid_out_1);
  mp_m_axis_concat_tid->offset_port(1, 1);
  mp_m_axis_tid_converter_1->vector_in(m_m_axis_tid_converter_1_signal);
  mp_m_axis_tid_converter_1->vector_out(m_axis_concat_tid_out_1);
  mp_M01_AXIS_transactor->TID(m_m_axis_tid_converter_1_signal);
  mp_m_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_1");
  mp_m_axis_concat_tdest->in_port[1](m_axis_concat_tdest_out_1);
  mp_m_axis_concat_tdest->offset_port(1, 4);
  mp_m_axis_tdest_converter_1->vector_in(m_m_axis_tdest_converter_1_signal);
  mp_m_axis_tdest_converter_1->vector_out(m_axis_concat_tdest_out_1);
  mp_M01_AXIS_transactor->TDEST(m_m_axis_tdest_converter_1_signal);
  mp_m_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_1");
  mp_m_axis_concat_tuser->in_port[1](m_axis_concat_tuser_out_1);
  mp_m_axis_concat_tuser->offset_port(1, 1);
  mp_m_axis_tuser_converter_1->vector_in(m_m_axis_tuser_converter_1_signal);
  mp_m_axis_tuser_converter_1->vector_out(m_axis_concat_tuser_out_1);
  mp_M01_AXIS_transactor->TUSER(m_m_axis_tuser_converter_1_signal);
  mp_M01_AXIS_transactor->CLK(aclk);
  mp_M01_AXIS_transactor->RST(aresetn);
  // configure S02_AXIS_transactor
    xsc::common_cpp::properties S02_AXIS_transactor_param_props;
    S02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S02_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S02_AXIS_transactor", S02_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_2");
  
  mp_s_axis_split_tvalid->out_port[2](s_axis_split_tvalid_out_2);
    mp_s_axis_split_tvalid->add_mask(2,3,2);
  mp_s_axis_tvalid_converter_2->vector_in(s_axis_split_tvalid_out_2);
  mp_s_axis_tvalid_converter_2->scalar_out(m_s_axis_tvalid_converter_2_signal);
  mp_S02_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_2_signal);
  mp_s_axis_tready_converter_2 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_2");
  mp_s_axis_concat_tready->in_port[2](s_axis_concat_tready_out_2);
  mp_s_axis_concat_tready->offset_port(2, 2);
  mp_s_axis_tready_converter_2->scalar_in(m_s_axis_tready_converter_2_signal);
  mp_s_axis_tready_converter_2->vector_out(s_axis_concat_tready_out_2);
  mp_S02_AXIS_transactor->TREADY(m_s_axis_tready_converter_2_signal);
  mp_s_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_2");
  
  mp_s_axis_split_tdata->out_port[2](s_axis_split_tdata_out_2);
    mp_s_axis_split_tdata->add_mask(2,192,128);
  mp_s_axis_tdata_converter_2->vector_in(s_axis_split_tdata_out_2);
  mp_s_axis_tdata_converter_2->vector_out(m_s_axis_tdata_converter_2_signal);
  mp_S02_AXIS_transactor->TDATA(m_s_axis_tdata_converter_2_signal);
  mp_s_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_2");
  
  mp_s_axis_split_tstrb->out_port[2](s_axis_split_tstrb_out_2);
    mp_s_axis_split_tstrb->add_mask(2,24,16);
  mp_s_axis_tstrb_converter_2->vector_in(s_axis_split_tstrb_out_2);
  mp_s_axis_tstrb_converter_2->vector_out(m_s_axis_tstrb_converter_2_signal);
  mp_S02_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_2_signal);
  mp_s_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_2");
  
  mp_s_axis_split_tkeep->out_port[2](s_axis_split_tkeep_out_2);
    mp_s_axis_split_tkeep->add_mask(2,24,16);
  mp_s_axis_tkeep_converter_2->vector_in(s_axis_split_tkeep_out_2);
  mp_s_axis_tkeep_converter_2->vector_out(m_s_axis_tkeep_converter_2_signal);
  mp_S02_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_2_signal);
  mp_s_axis_tlast_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_2");
  
  mp_s_axis_split_tlast->out_port[2](s_axis_split_tlast_out_2);
    mp_s_axis_split_tlast->add_mask(2,3,2);
  mp_s_axis_tlast_converter_2->vector_in(s_axis_split_tlast_out_2);
  mp_s_axis_tlast_converter_2->scalar_out(m_s_axis_tlast_converter_2_signal);
  mp_S02_AXIS_transactor->TLAST(m_s_axis_tlast_converter_2_signal);
  mp_s_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_2");
  
  mp_s_axis_split_tid->out_port[2](s_axis_split_tid_out_2);
    mp_s_axis_split_tid->add_mask(2,3,2);
  mp_s_axis_tid_converter_2->vector_in(s_axis_split_tid_out_2);
  mp_s_axis_tid_converter_2->vector_out(m_s_axis_tid_converter_2_signal);
  mp_S02_AXIS_transactor->TID(m_s_axis_tid_converter_2_signal);
  mp_s_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_2");
  
  mp_s_axis_split_tdest->out_port[2](s_axis_split_tdest_out_2);
    mp_s_axis_split_tdest->add_mask(2,12,8);
  mp_s_axis_tdest_converter_2->vector_in(s_axis_split_tdest_out_2);
  mp_s_axis_tdest_converter_2->vector_out(m_s_axis_tdest_converter_2_signal);
  mp_S02_AXIS_transactor->TDEST(m_s_axis_tdest_converter_2_signal);
  mp_s_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_2");
  
  mp_s_axis_split_tuser->out_port[2](s_axis_split_tuser_out_2);
    mp_s_axis_split_tuser->add_mask(2,3,2);
  mp_s_axis_tuser_converter_2->vector_in(s_axis_split_tuser_out_2);
  mp_s_axis_tuser_converter_2->vector_out(m_s_axis_tuser_converter_2_signal);
  mp_S02_AXIS_transactor->TUSER(m_s_axis_tuser_converter_2_signal);
  mp_S02_AXIS_transactor->CLK(aclk);
  mp_S02_AXIS_transactor->RST(aresetn);
  // configure M02_AXIS_transactor
    xsc::common_cpp::properties M02_AXIS_transactor_param_props;
    M02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M02_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M02_AXIS_transactor", M02_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_2");
  mp_m_axis_concat_tvalid->in_port[2](m_axis_concat_tvalid_out_2);
  mp_m_axis_concat_tvalid->offset_port(2, 2);
  mp_m_axis_tvalid_converter_2->scalar_in(m_m_axis_tvalid_converter_2_signal);
  mp_m_axis_tvalid_converter_2->vector_out(m_axis_concat_tvalid_out_2);
  mp_M02_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_2_signal);
  mp_m_axis_tready_converter_2 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_2");
  
  mp_m_axis_split_tready->out_port[2](m_axis_split_tready_out_2);
    mp_m_axis_split_tready->add_mask(2,3,2);
  mp_m_axis_tready_converter_2->vector_in(m_axis_split_tready_out_2);
  mp_m_axis_tready_converter_2->scalar_out(m_m_axis_tready_converter_2_signal);
  mp_M02_AXIS_transactor->TREADY(m_m_axis_tready_converter_2_signal);
  mp_m_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_2");
  mp_m_axis_concat_tdata->in_port[2](m_axis_concat_tdata_out_2);
  mp_m_axis_concat_tdata->offset_port(2, 128);
  mp_m_axis_tdata_converter_2->vector_in(m_m_axis_tdata_converter_2_signal);
  mp_m_axis_tdata_converter_2->vector_out(m_axis_concat_tdata_out_2);
  mp_M02_AXIS_transactor->TDATA(m_m_axis_tdata_converter_2_signal);
  mp_m_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_2");
  mp_m_axis_concat_tstrb->in_port[2](m_axis_concat_tstrb_out_2);
  mp_m_axis_concat_tstrb->offset_port(2, 16);
  mp_m_axis_tstrb_converter_2->vector_in(m_m_axis_tstrb_converter_2_signal);
  mp_m_axis_tstrb_converter_2->vector_out(m_axis_concat_tstrb_out_2);
  mp_M02_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_2_signal);
  mp_m_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_2");
  mp_m_axis_concat_tkeep->in_port[2](m_axis_concat_tkeep_out_2);
  mp_m_axis_concat_tkeep->offset_port(2, 16);
  mp_m_axis_tkeep_converter_2->vector_in(m_m_axis_tkeep_converter_2_signal);
  mp_m_axis_tkeep_converter_2->vector_out(m_axis_concat_tkeep_out_2);
  mp_M02_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_2_signal);
  mp_m_axis_tlast_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_2");
  mp_m_axis_concat_tlast->in_port[2](m_axis_concat_tlast_out_2);
  mp_m_axis_concat_tlast->offset_port(2, 2);
  mp_m_axis_tlast_converter_2->scalar_in(m_m_axis_tlast_converter_2_signal);
  mp_m_axis_tlast_converter_2->vector_out(m_axis_concat_tlast_out_2);
  mp_M02_AXIS_transactor->TLAST(m_m_axis_tlast_converter_2_signal);
  mp_m_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_2");
  mp_m_axis_concat_tid->in_port[2](m_axis_concat_tid_out_2);
  mp_m_axis_concat_tid->offset_port(2, 2);
  mp_m_axis_tid_converter_2->vector_in(m_m_axis_tid_converter_2_signal);
  mp_m_axis_tid_converter_2->vector_out(m_axis_concat_tid_out_2);
  mp_M02_AXIS_transactor->TID(m_m_axis_tid_converter_2_signal);
  mp_m_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_2");
  mp_m_axis_concat_tdest->in_port[2](m_axis_concat_tdest_out_2);
  mp_m_axis_concat_tdest->offset_port(2, 8);
  mp_m_axis_tdest_converter_2->vector_in(m_m_axis_tdest_converter_2_signal);
  mp_m_axis_tdest_converter_2->vector_out(m_axis_concat_tdest_out_2);
  mp_M02_AXIS_transactor->TDEST(m_m_axis_tdest_converter_2_signal);
  mp_m_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_2");
  mp_m_axis_concat_tuser->in_port[2](m_axis_concat_tuser_out_2);
  mp_m_axis_concat_tuser->offset_port(2, 2);
  mp_m_axis_tuser_converter_2->vector_in(m_m_axis_tuser_converter_2_signal);
  mp_m_axis_tuser_converter_2->vector_out(m_axis_concat_tuser_out_2);
  mp_M02_AXIS_transactor->TUSER(m_m_axis_tuser_converter_2_signal);
  mp_M02_AXIS_transactor->CLK(aclk);
  mp_M02_AXIS_transactor->RST(aresetn);
  // configure S03_AXIS_transactor
    xsc::common_cpp::properties S03_AXIS_transactor_param_props;
    S03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S03_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S03_AXIS_transactor", S03_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_3");
  
  mp_s_axis_split_tvalid->out_port[3](s_axis_split_tvalid_out_3);
    mp_s_axis_split_tvalid->add_mask(3,4,3);
  mp_s_axis_tvalid_converter_3->vector_in(s_axis_split_tvalid_out_3);
  mp_s_axis_tvalid_converter_3->scalar_out(m_s_axis_tvalid_converter_3_signal);
  mp_S03_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_3_signal);
  mp_s_axis_tready_converter_3 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_3");
  mp_s_axis_concat_tready->in_port[3](s_axis_concat_tready_out_3);
  mp_s_axis_concat_tready->offset_port(3, 3);
  mp_s_axis_tready_converter_3->scalar_in(m_s_axis_tready_converter_3_signal);
  mp_s_axis_tready_converter_3->vector_out(s_axis_concat_tready_out_3);
  mp_S03_AXIS_transactor->TREADY(m_s_axis_tready_converter_3_signal);
  mp_s_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_3");
  
  mp_s_axis_split_tdata->out_port[3](s_axis_split_tdata_out_3);
    mp_s_axis_split_tdata->add_mask(3,256,192);
  mp_s_axis_tdata_converter_3->vector_in(s_axis_split_tdata_out_3);
  mp_s_axis_tdata_converter_3->vector_out(m_s_axis_tdata_converter_3_signal);
  mp_S03_AXIS_transactor->TDATA(m_s_axis_tdata_converter_3_signal);
  mp_s_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_3");
  
  mp_s_axis_split_tstrb->out_port[3](s_axis_split_tstrb_out_3);
    mp_s_axis_split_tstrb->add_mask(3,32,24);
  mp_s_axis_tstrb_converter_3->vector_in(s_axis_split_tstrb_out_3);
  mp_s_axis_tstrb_converter_3->vector_out(m_s_axis_tstrb_converter_3_signal);
  mp_S03_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_3_signal);
  mp_s_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_3");
  
  mp_s_axis_split_tkeep->out_port[3](s_axis_split_tkeep_out_3);
    mp_s_axis_split_tkeep->add_mask(3,32,24);
  mp_s_axis_tkeep_converter_3->vector_in(s_axis_split_tkeep_out_3);
  mp_s_axis_tkeep_converter_3->vector_out(m_s_axis_tkeep_converter_3_signal);
  mp_S03_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_3_signal);
  mp_s_axis_tlast_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_3");
  
  mp_s_axis_split_tlast->out_port[3](s_axis_split_tlast_out_3);
    mp_s_axis_split_tlast->add_mask(3,4,3);
  mp_s_axis_tlast_converter_3->vector_in(s_axis_split_tlast_out_3);
  mp_s_axis_tlast_converter_3->scalar_out(m_s_axis_tlast_converter_3_signal);
  mp_S03_AXIS_transactor->TLAST(m_s_axis_tlast_converter_3_signal);
  mp_s_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_3");
  
  mp_s_axis_split_tid->out_port[3](s_axis_split_tid_out_3);
    mp_s_axis_split_tid->add_mask(3,4,3);
  mp_s_axis_tid_converter_3->vector_in(s_axis_split_tid_out_3);
  mp_s_axis_tid_converter_3->vector_out(m_s_axis_tid_converter_3_signal);
  mp_S03_AXIS_transactor->TID(m_s_axis_tid_converter_3_signal);
  mp_s_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_3");
  
  mp_s_axis_split_tdest->out_port[3](s_axis_split_tdest_out_3);
    mp_s_axis_split_tdest->add_mask(3,16,12);
  mp_s_axis_tdest_converter_3->vector_in(s_axis_split_tdest_out_3);
  mp_s_axis_tdest_converter_3->vector_out(m_s_axis_tdest_converter_3_signal);
  mp_S03_AXIS_transactor->TDEST(m_s_axis_tdest_converter_3_signal);
  mp_s_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_3");
  
  mp_s_axis_split_tuser->out_port[3](s_axis_split_tuser_out_3);
    mp_s_axis_split_tuser->add_mask(3,4,3);
  mp_s_axis_tuser_converter_3->vector_in(s_axis_split_tuser_out_3);
  mp_s_axis_tuser_converter_3->vector_out(m_s_axis_tuser_converter_3_signal);
  mp_S03_AXIS_transactor->TUSER(m_s_axis_tuser_converter_3_signal);
  mp_S03_AXIS_transactor->CLK(aclk);
  mp_S03_AXIS_transactor->RST(aresetn);
  // configure M03_AXIS_transactor
    xsc::common_cpp::properties M03_AXIS_transactor_param_props;
    M03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M03_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M03_AXIS_transactor", M03_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_3");
  mp_m_axis_concat_tvalid->in_port[3](m_axis_concat_tvalid_out_3);
  mp_m_axis_concat_tvalid->offset_port(3, 3);
  mp_m_axis_tvalid_converter_3->scalar_in(m_m_axis_tvalid_converter_3_signal);
  mp_m_axis_tvalid_converter_3->vector_out(m_axis_concat_tvalid_out_3);
  mp_M03_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_3_signal);
  mp_m_axis_tready_converter_3 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_3");
  
  mp_m_axis_split_tready->out_port[3](m_axis_split_tready_out_3);
    mp_m_axis_split_tready->add_mask(3,4,3);
  mp_m_axis_tready_converter_3->vector_in(m_axis_split_tready_out_3);
  mp_m_axis_tready_converter_3->scalar_out(m_m_axis_tready_converter_3_signal);
  mp_M03_AXIS_transactor->TREADY(m_m_axis_tready_converter_3_signal);
  mp_m_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_3");
  mp_m_axis_concat_tdata->in_port[3](m_axis_concat_tdata_out_3);
  mp_m_axis_concat_tdata->offset_port(3, 192);
  mp_m_axis_tdata_converter_3->vector_in(m_m_axis_tdata_converter_3_signal);
  mp_m_axis_tdata_converter_3->vector_out(m_axis_concat_tdata_out_3);
  mp_M03_AXIS_transactor->TDATA(m_m_axis_tdata_converter_3_signal);
  mp_m_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_3");
  mp_m_axis_concat_tstrb->in_port[3](m_axis_concat_tstrb_out_3);
  mp_m_axis_concat_tstrb->offset_port(3, 24);
  mp_m_axis_tstrb_converter_3->vector_in(m_m_axis_tstrb_converter_3_signal);
  mp_m_axis_tstrb_converter_3->vector_out(m_axis_concat_tstrb_out_3);
  mp_M03_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_3_signal);
  mp_m_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_3");
  mp_m_axis_concat_tkeep->in_port[3](m_axis_concat_tkeep_out_3);
  mp_m_axis_concat_tkeep->offset_port(3, 24);
  mp_m_axis_tkeep_converter_3->vector_in(m_m_axis_tkeep_converter_3_signal);
  mp_m_axis_tkeep_converter_3->vector_out(m_axis_concat_tkeep_out_3);
  mp_M03_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_3_signal);
  mp_m_axis_tlast_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_3");
  mp_m_axis_concat_tlast->in_port[3](m_axis_concat_tlast_out_3);
  mp_m_axis_concat_tlast->offset_port(3, 3);
  mp_m_axis_tlast_converter_3->scalar_in(m_m_axis_tlast_converter_3_signal);
  mp_m_axis_tlast_converter_3->vector_out(m_axis_concat_tlast_out_3);
  mp_M03_AXIS_transactor->TLAST(m_m_axis_tlast_converter_3_signal);
  mp_m_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_3");
  mp_m_axis_concat_tid->in_port[3](m_axis_concat_tid_out_3);
  mp_m_axis_concat_tid->offset_port(3, 3);
  mp_m_axis_tid_converter_3->vector_in(m_m_axis_tid_converter_3_signal);
  mp_m_axis_tid_converter_3->vector_out(m_axis_concat_tid_out_3);
  mp_M03_AXIS_transactor->TID(m_m_axis_tid_converter_3_signal);
  mp_m_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_3");
  mp_m_axis_concat_tdest->in_port[3](m_axis_concat_tdest_out_3);
  mp_m_axis_concat_tdest->offset_port(3, 12);
  mp_m_axis_tdest_converter_3->vector_in(m_m_axis_tdest_converter_3_signal);
  mp_m_axis_tdest_converter_3->vector_out(m_axis_concat_tdest_out_3);
  mp_M03_AXIS_transactor->TDEST(m_m_axis_tdest_converter_3_signal);
  mp_m_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_3");
  mp_m_axis_concat_tuser->in_port[3](m_axis_concat_tuser_out_3);
  mp_m_axis_concat_tuser->offset_port(3, 3);
  mp_m_axis_tuser_converter_3->vector_in(m_m_axis_tuser_converter_3_signal);
  mp_m_axis_tuser_converter_3->vector_out(m_axis_concat_tuser_out_3);
  mp_M03_AXIS_transactor->TUSER(m_m_axis_tuser_converter_3_signal);
  mp_M03_AXIS_transactor->CLK(aclk);
  mp_M03_AXIS_transactor->RST(aresetn);
  // configure S04_AXIS_transactor
    xsc::common_cpp::properties S04_AXIS_transactor_param_props;
    S04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S04_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S04_AXIS_transactor", S04_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_4");
  
  mp_s_axis_split_tvalid->out_port[4](s_axis_split_tvalid_out_4);
    mp_s_axis_split_tvalid->add_mask(4,5,4);
  mp_s_axis_tvalid_converter_4->vector_in(s_axis_split_tvalid_out_4);
  mp_s_axis_tvalid_converter_4->scalar_out(m_s_axis_tvalid_converter_4_signal);
  mp_S04_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_4_signal);
  mp_s_axis_tready_converter_4 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_4");
  mp_s_axis_concat_tready->in_port[4](s_axis_concat_tready_out_4);
  mp_s_axis_concat_tready->offset_port(4, 4);
  mp_s_axis_tready_converter_4->scalar_in(m_s_axis_tready_converter_4_signal);
  mp_s_axis_tready_converter_4->vector_out(s_axis_concat_tready_out_4);
  mp_S04_AXIS_transactor->TREADY(m_s_axis_tready_converter_4_signal);
  mp_s_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_4");
  
  mp_s_axis_split_tdata->out_port[4](s_axis_split_tdata_out_4);
    mp_s_axis_split_tdata->add_mask(4,320,256);
  mp_s_axis_tdata_converter_4->vector_in(s_axis_split_tdata_out_4);
  mp_s_axis_tdata_converter_4->vector_out(m_s_axis_tdata_converter_4_signal);
  mp_S04_AXIS_transactor->TDATA(m_s_axis_tdata_converter_4_signal);
  mp_s_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_4");
  
  mp_s_axis_split_tstrb->out_port[4](s_axis_split_tstrb_out_4);
    mp_s_axis_split_tstrb->add_mask(4,40,32);
  mp_s_axis_tstrb_converter_4->vector_in(s_axis_split_tstrb_out_4);
  mp_s_axis_tstrb_converter_4->vector_out(m_s_axis_tstrb_converter_4_signal);
  mp_S04_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_4_signal);
  mp_s_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_4");
  
  mp_s_axis_split_tkeep->out_port[4](s_axis_split_tkeep_out_4);
    mp_s_axis_split_tkeep->add_mask(4,40,32);
  mp_s_axis_tkeep_converter_4->vector_in(s_axis_split_tkeep_out_4);
  mp_s_axis_tkeep_converter_4->vector_out(m_s_axis_tkeep_converter_4_signal);
  mp_S04_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_4_signal);
  mp_s_axis_tlast_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_4");
  
  mp_s_axis_split_tlast->out_port[4](s_axis_split_tlast_out_4);
    mp_s_axis_split_tlast->add_mask(4,5,4);
  mp_s_axis_tlast_converter_4->vector_in(s_axis_split_tlast_out_4);
  mp_s_axis_tlast_converter_4->scalar_out(m_s_axis_tlast_converter_4_signal);
  mp_S04_AXIS_transactor->TLAST(m_s_axis_tlast_converter_4_signal);
  mp_s_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_4");
  
  mp_s_axis_split_tid->out_port[4](s_axis_split_tid_out_4);
    mp_s_axis_split_tid->add_mask(4,5,4);
  mp_s_axis_tid_converter_4->vector_in(s_axis_split_tid_out_4);
  mp_s_axis_tid_converter_4->vector_out(m_s_axis_tid_converter_4_signal);
  mp_S04_AXIS_transactor->TID(m_s_axis_tid_converter_4_signal);
  mp_s_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_4");
  
  mp_s_axis_split_tdest->out_port[4](s_axis_split_tdest_out_4);
    mp_s_axis_split_tdest->add_mask(4,20,16);
  mp_s_axis_tdest_converter_4->vector_in(s_axis_split_tdest_out_4);
  mp_s_axis_tdest_converter_4->vector_out(m_s_axis_tdest_converter_4_signal);
  mp_S04_AXIS_transactor->TDEST(m_s_axis_tdest_converter_4_signal);
  mp_s_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_4");
  
  mp_s_axis_split_tuser->out_port[4](s_axis_split_tuser_out_4);
    mp_s_axis_split_tuser->add_mask(4,5,4);
  mp_s_axis_tuser_converter_4->vector_in(s_axis_split_tuser_out_4);
  mp_s_axis_tuser_converter_4->vector_out(m_s_axis_tuser_converter_4_signal);
  mp_S04_AXIS_transactor->TUSER(m_s_axis_tuser_converter_4_signal);
  mp_S04_AXIS_transactor->CLK(aclk);
  mp_S04_AXIS_transactor->RST(aresetn);
  // configure M04_AXIS_transactor
    xsc::common_cpp::properties M04_AXIS_transactor_param_props;
    M04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M04_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M04_AXIS_transactor", M04_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_4");
  mp_m_axis_concat_tvalid->in_port[4](m_axis_concat_tvalid_out_4);
  mp_m_axis_concat_tvalid->offset_port(4, 4);
  mp_m_axis_tvalid_converter_4->scalar_in(m_m_axis_tvalid_converter_4_signal);
  mp_m_axis_tvalid_converter_4->vector_out(m_axis_concat_tvalid_out_4);
  mp_M04_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_4_signal);
  mp_m_axis_tready_converter_4 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_4");
  
  mp_m_axis_split_tready->out_port[4](m_axis_split_tready_out_4);
    mp_m_axis_split_tready->add_mask(4,5,4);
  mp_m_axis_tready_converter_4->vector_in(m_axis_split_tready_out_4);
  mp_m_axis_tready_converter_4->scalar_out(m_m_axis_tready_converter_4_signal);
  mp_M04_AXIS_transactor->TREADY(m_m_axis_tready_converter_4_signal);
  mp_m_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_4");
  mp_m_axis_concat_tdata->in_port[4](m_axis_concat_tdata_out_4);
  mp_m_axis_concat_tdata->offset_port(4, 256);
  mp_m_axis_tdata_converter_4->vector_in(m_m_axis_tdata_converter_4_signal);
  mp_m_axis_tdata_converter_4->vector_out(m_axis_concat_tdata_out_4);
  mp_M04_AXIS_transactor->TDATA(m_m_axis_tdata_converter_4_signal);
  mp_m_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_4");
  mp_m_axis_concat_tstrb->in_port[4](m_axis_concat_tstrb_out_4);
  mp_m_axis_concat_tstrb->offset_port(4, 32);
  mp_m_axis_tstrb_converter_4->vector_in(m_m_axis_tstrb_converter_4_signal);
  mp_m_axis_tstrb_converter_4->vector_out(m_axis_concat_tstrb_out_4);
  mp_M04_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_4_signal);
  mp_m_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_4");
  mp_m_axis_concat_tkeep->in_port[4](m_axis_concat_tkeep_out_4);
  mp_m_axis_concat_tkeep->offset_port(4, 32);
  mp_m_axis_tkeep_converter_4->vector_in(m_m_axis_tkeep_converter_4_signal);
  mp_m_axis_tkeep_converter_4->vector_out(m_axis_concat_tkeep_out_4);
  mp_M04_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_4_signal);
  mp_m_axis_tlast_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_4");
  mp_m_axis_concat_tlast->in_port[4](m_axis_concat_tlast_out_4);
  mp_m_axis_concat_tlast->offset_port(4, 4);
  mp_m_axis_tlast_converter_4->scalar_in(m_m_axis_tlast_converter_4_signal);
  mp_m_axis_tlast_converter_4->vector_out(m_axis_concat_tlast_out_4);
  mp_M04_AXIS_transactor->TLAST(m_m_axis_tlast_converter_4_signal);
  mp_m_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_4");
  mp_m_axis_concat_tid->in_port[4](m_axis_concat_tid_out_4);
  mp_m_axis_concat_tid->offset_port(4, 4);
  mp_m_axis_tid_converter_4->vector_in(m_m_axis_tid_converter_4_signal);
  mp_m_axis_tid_converter_4->vector_out(m_axis_concat_tid_out_4);
  mp_M04_AXIS_transactor->TID(m_m_axis_tid_converter_4_signal);
  mp_m_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_4");
  mp_m_axis_concat_tdest->in_port[4](m_axis_concat_tdest_out_4);
  mp_m_axis_concat_tdest->offset_port(4, 16);
  mp_m_axis_tdest_converter_4->vector_in(m_m_axis_tdest_converter_4_signal);
  mp_m_axis_tdest_converter_4->vector_out(m_axis_concat_tdest_out_4);
  mp_M04_AXIS_transactor->TDEST(m_m_axis_tdest_converter_4_signal);
  mp_m_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_4");
  mp_m_axis_concat_tuser->in_port[4](m_axis_concat_tuser_out_4);
  mp_m_axis_concat_tuser->offset_port(4, 4);
  mp_m_axis_tuser_converter_4->vector_in(m_m_axis_tuser_converter_4_signal);
  mp_m_axis_tuser_converter_4->vector_out(m_axis_concat_tuser_out_4);
  mp_M04_AXIS_transactor->TUSER(m_m_axis_tuser_converter_4_signal);
  mp_M04_AXIS_transactor->CLK(aclk);
  mp_M04_AXIS_transactor->RST(aresetn);
  // configure S05_AXIS_transactor
    xsc::common_cpp::properties S05_AXIS_transactor_param_props;
    S05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S05_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S05_AXIS_transactor", S05_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_5");
  
  mp_s_axis_split_tvalid->out_port[5](s_axis_split_tvalid_out_5);
    mp_s_axis_split_tvalid->add_mask(5,6,5);
  mp_s_axis_tvalid_converter_5->vector_in(s_axis_split_tvalid_out_5);
  mp_s_axis_tvalid_converter_5->scalar_out(m_s_axis_tvalid_converter_5_signal);
  mp_S05_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_5_signal);
  mp_s_axis_tready_converter_5 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_5");
  mp_s_axis_concat_tready->in_port[5](s_axis_concat_tready_out_5);
  mp_s_axis_concat_tready->offset_port(5, 5);
  mp_s_axis_tready_converter_5->scalar_in(m_s_axis_tready_converter_5_signal);
  mp_s_axis_tready_converter_5->vector_out(s_axis_concat_tready_out_5);
  mp_S05_AXIS_transactor->TREADY(m_s_axis_tready_converter_5_signal);
  mp_s_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_5");
  
  mp_s_axis_split_tdata->out_port[5](s_axis_split_tdata_out_5);
    mp_s_axis_split_tdata->add_mask(5,384,320);
  mp_s_axis_tdata_converter_5->vector_in(s_axis_split_tdata_out_5);
  mp_s_axis_tdata_converter_5->vector_out(m_s_axis_tdata_converter_5_signal);
  mp_S05_AXIS_transactor->TDATA(m_s_axis_tdata_converter_5_signal);
  mp_s_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_5");
  
  mp_s_axis_split_tstrb->out_port[5](s_axis_split_tstrb_out_5);
    mp_s_axis_split_tstrb->add_mask(5,48,40);
  mp_s_axis_tstrb_converter_5->vector_in(s_axis_split_tstrb_out_5);
  mp_s_axis_tstrb_converter_5->vector_out(m_s_axis_tstrb_converter_5_signal);
  mp_S05_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_5_signal);
  mp_s_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_5");
  
  mp_s_axis_split_tkeep->out_port[5](s_axis_split_tkeep_out_5);
    mp_s_axis_split_tkeep->add_mask(5,48,40);
  mp_s_axis_tkeep_converter_5->vector_in(s_axis_split_tkeep_out_5);
  mp_s_axis_tkeep_converter_5->vector_out(m_s_axis_tkeep_converter_5_signal);
  mp_S05_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_5_signal);
  mp_s_axis_tlast_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_5");
  
  mp_s_axis_split_tlast->out_port[5](s_axis_split_tlast_out_5);
    mp_s_axis_split_tlast->add_mask(5,6,5);
  mp_s_axis_tlast_converter_5->vector_in(s_axis_split_tlast_out_5);
  mp_s_axis_tlast_converter_5->scalar_out(m_s_axis_tlast_converter_5_signal);
  mp_S05_AXIS_transactor->TLAST(m_s_axis_tlast_converter_5_signal);
  mp_s_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_5");
  
  mp_s_axis_split_tid->out_port[5](s_axis_split_tid_out_5);
    mp_s_axis_split_tid->add_mask(5,6,5);
  mp_s_axis_tid_converter_5->vector_in(s_axis_split_tid_out_5);
  mp_s_axis_tid_converter_5->vector_out(m_s_axis_tid_converter_5_signal);
  mp_S05_AXIS_transactor->TID(m_s_axis_tid_converter_5_signal);
  mp_s_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_5");
  
  mp_s_axis_split_tdest->out_port[5](s_axis_split_tdest_out_5);
    mp_s_axis_split_tdest->add_mask(5,24,20);
  mp_s_axis_tdest_converter_5->vector_in(s_axis_split_tdest_out_5);
  mp_s_axis_tdest_converter_5->vector_out(m_s_axis_tdest_converter_5_signal);
  mp_S05_AXIS_transactor->TDEST(m_s_axis_tdest_converter_5_signal);
  mp_s_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_5");
  
  mp_s_axis_split_tuser->out_port[5](s_axis_split_tuser_out_5);
    mp_s_axis_split_tuser->add_mask(5,6,5);
  mp_s_axis_tuser_converter_5->vector_in(s_axis_split_tuser_out_5);
  mp_s_axis_tuser_converter_5->vector_out(m_s_axis_tuser_converter_5_signal);
  mp_S05_AXIS_transactor->TUSER(m_s_axis_tuser_converter_5_signal);
  mp_S05_AXIS_transactor->CLK(aclk);
  mp_S05_AXIS_transactor->RST(aresetn);
  // configure M05_AXIS_transactor
    xsc::common_cpp::properties M05_AXIS_transactor_param_props;
    M05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M05_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M05_AXIS_transactor", M05_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_5");
  mp_m_axis_concat_tvalid->in_port[5](m_axis_concat_tvalid_out_5);
  mp_m_axis_concat_tvalid->offset_port(5, 5);
  mp_m_axis_tvalid_converter_5->scalar_in(m_m_axis_tvalid_converter_5_signal);
  mp_m_axis_tvalid_converter_5->vector_out(m_axis_concat_tvalid_out_5);
  mp_M05_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_5_signal);
  mp_m_axis_tready_converter_5 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_5");
  
  mp_m_axis_split_tready->out_port[5](m_axis_split_tready_out_5);
    mp_m_axis_split_tready->add_mask(5,6,5);
  mp_m_axis_tready_converter_5->vector_in(m_axis_split_tready_out_5);
  mp_m_axis_tready_converter_5->scalar_out(m_m_axis_tready_converter_5_signal);
  mp_M05_AXIS_transactor->TREADY(m_m_axis_tready_converter_5_signal);
  mp_m_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_5");
  mp_m_axis_concat_tdata->in_port[5](m_axis_concat_tdata_out_5);
  mp_m_axis_concat_tdata->offset_port(5, 320);
  mp_m_axis_tdata_converter_5->vector_in(m_m_axis_tdata_converter_5_signal);
  mp_m_axis_tdata_converter_5->vector_out(m_axis_concat_tdata_out_5);
  mp_M05_AXIS_transactor->TDATA(m_m_axis_tdata_converter_5_signal);
  mp_m_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_5");
  mp_m_axis_concat_tstrb->in_port[5](m_axis_concat_tstrb_out_5);
  mp_m_axis_concat_tstrb->offset_port(5, 40);
  mp_m_axis_tstrb_converter_5->vector_in(m_m_axis_tstrb_converter_5_signal);
  mp_m_axis_tstrb_converter_5->vector_out(m_axis_concat_tstrb_out_5);
  mp_M05_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_5_signal);
  mp_m_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_5");
  mp_m_axis_concat_tkeep->in_port[5](m_axis_concat_tkeep_out_5);
  mp_m_axis_concat_tkeep->offset_port(5, 40);
  mp_m_axis_tkeep_converter_5->vector_in(m_m_axis_tkeep_converter_5_signal);
  mp_m_axis_tkeep_converter_5->vector_out(m_axis_concat_tkeep_out_5);
  mp_M05_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_5_signal);
  mp_m_axis_tlast_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_5");
  mp_m_axis_concat_tlast->in_port[5](m_axis_concat_tlast_out_5);
  mp_m_axis_concat_tlast->offset_port(5, 5);
  mp_m_axis_tlast_converter_5->scalar_in(m_m_axis_tlast_converter_5_signal);
  mp_m_axis_tlast_converter_5->vector_out(m_axis_concat_tlast_out_5);
  mp_M05_AXIS_transactor->TLAST(m_m_axis_tlast_converter_5_signal);
  mp_m_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_5");
  mp_m_axis_concat_tid->in_port[5](m_axis_concat_tid_out_5);
  mp_m_axis_concat_tid->offset_port(5, 5);
  mp_m_axis_tid_converter_5->vector_in(m_m_axis_tid_converter_5_signal);
  mp_m_axis_tid_converter_5->vector_out(m_axis_concat_tid_out_5);
  mp_M05_AXIS_transactor->TID(m_m_axis_tid_converter_5_signal);
  mp_m_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_5");
  mp_m_axis_concat_tdest->in_port[5](m_axis_concat_tdest_out_5);
  mp_m_axis_concat_tdest->offset_port(5, 20);
  mp_m_axis_tdest_converter_5->vector_in(m_m_axis_tdest_converter_5_signal);
  mp_m_axis_tdest_converter_5->vector_out(m_axis_concat_tdest_out_5);
  mp_M05_AXIS_transactor->TDEST(m_m_axis_tdest_converter_5_signal);
  mp_m_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_5");
  mp_m_axis_concat_tuser->in_port[5](m_axis_concat_tuser_out_5);
  mp_m_axis_concat_tuser->offset_port(5, 5);
  mp_m_axis_tuser_converter_5->vector_in(m_m_axis_tuser_converter_5_signal);
  mp_m_axis_tuser_converter_5->vector_out(m_axis_concat_tuser_out_5);
  mp_M05_AXIS_transactor->TUSER(m_m_axis_tuser_converter_5_signal);
  mp_M05_AXIS_transactor->CLK(aclk);
  mp_M05_AXIS_transactor->RST(aresetn);
  // configure S06_AXIS_transactor
    xsc::common_cpp::properties S06_AXIS_transactor_param_props;
    S06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S06_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S06_AXIS_transactor", S06_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_6");
  
  mp_s_axis_split_tvalid->out_port[6](s_axis_split_tvalid_out_6);
    mp_s_axis_split_tvalid->add_mask(6,7,6);
  mp_s_axis_tvalid_converter_6->vector_in(s_axis_split_tvalid_out_6);
  mp_s_axis_tvalid_converter_6->scalar_out(m_s_axis_tvalid_converter_6_signal);
  mp_S06_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_6_signal);
  mp_s_axis_tready_converter_6 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_6");
  mp_s_axis_concat_tready->in_port[6](s_axis_concat_tready_out_6);
  mp_s_axis_concat_tready->offset_port(6, 6);
  mp_s_axis_tready_converter_6->scalar_in(m_s_axis_tready_converter_6_signal);
  mp_s_axis_tready_converter_6->vector_out(s_axis_concat_tready_out_6);
  mp_S06_AXIS_transactor->TREADY(m_s_axis_tready_converter_6_signal);
  mp_s_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_6");
  
  mp_s_axis_split_tdata->out_port[6](s_axis_split_tdata_out_6);
    mp_s_axis_split_tdata->add_mask(6,448,384);
  mp_s_axis_tdata_converter_6->vector_in(s_axis_split_tdata_out_6);
  mp_s_axis_tdata_converter_6->vector_out(m_s_axis_tdata_converter_6_signal);
  mp_S06_AXIS_transactor->TDATA(m_s_axis_tdata_converter_6_signal);
  mp_s_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_6");
  
  mp_s_axis_split_tstrb->out_port[6](s_axis_split_tstrb_out_6);
    mp_s_axis_split_tstrb->add_mask(6,56,48);
  mp_s_axis_tstrb_converter_6->vector_in(s_axis_split_tstrb_out_6);
  mp_s_axis_tstrb_converter_6->vector_out(m_s_axis_tstrb_converter_6_signal);
  mp_S06_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_6_signal);
  mp_s_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_6");
  
  mp_s_axis_split_tkeep->out_port[6](s_axis_split_tkeep_out_6);
    mp_s_axis_split_tkeep->add_mask(6,56,48);
  mp_s_axis_tkeep_converter_6->vector_in(s_axis_split_tkeep_out_6);
  mp_s_axis_tkeep_converter_6->vector_out(m_s_axis_tkeep_converter_6_signal);
  mp_S06_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_6_signal);
  mp_s_axis_tlast_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_6");
  
  mp_s_axis_split_tlast->out_port[6](s_axis_split_tlast_out_6);
    mp_s_axis_split_tlast->add_mask(6,7,6);
  mp_s_axis_tlast_converter_6->vector_in(s_axis_split_tlast_out_6);
  mp_s_axis_tlast_converter_6->scalar_out(m_s_axis_tlast_converter_6_signal);
  mp_S06_AXIS_transactor->TLAST(m_s_axis_tlast_converter_6_signal);
  mp_s_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_6");
  
  mp_s_axis_split_tid->out_port[6](s_axis_split_tid_out_6);
    mp_s_axis_split_tid->add_mask(6,7,6);
  mp_s_axis_tid_converter_6->vector_in(s_axis_split_tid_out_6);
  mp_s_axis_tid_converter_6->vector_out(m_s_axis_tid_converter_6_signal);
  mp_S06_AXIS_transactor->TID(m_s_axis_tid_converter_6_signal);
  mp_s_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_6");
  
  mp_s_axis_split_tdest->out_port[6](s_axis_split_tdest_out_6);
    mp_s_axis_split_tdest->add_mask(6,28,24);
  mp_s_axis_tdest_converter_6->vector_in(s_axis_split_tdest_out_6);
  mp_s_axis_tdest_converter_6->vector_out(m_s_axis_tdest_converter_6_signal);
  mp_S06_AXIS_transactor->TDEST(m_s_axis_tdest_converter_6_signal);
  mp_s_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_6");
  
  mp_s_axis_split_tuser->out_port[6](s_axis_split_tuser_out_6);
    mp_s_axis_split_tuser->add_mask(6,7,6);
  mp_s_axis_tuser_converter_6->vector_in(s_axis_split_tuser_out_6);
  mp_s_axis_tuser_converter_6->vector_out(m_s_axis_tuser_converter_6_signal);
  mp_S06_AXIS_transactor->TUSER(m_s_axis_tuser_converter_6_signal);
  mp_S06_AXIS_transactor->CLK(aclk);
  mp_S06_AXIS_transactor->RST(aresetn);
  // configure M06_AXIS_transactor
    xsc::common_cpp::properties M06_AXIS_transactor_param_props;
    M06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M06_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M06_AXIS_transactor", M06_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_6");
  mp_m_axis_concat_tvalid->in_port[6](m_axis_concat_tvalid_out_6);
  mp_m_axis_concat_tvalid->offset_port(6, 6);
  mp_m_axis_tvalid_converter_6->scalar_in(m_m_axis_tvalid_converter_6_signal);
  mp_m_axis_tvalid_converter_6->vector_out(m_axis_concat_tvalid_out_6);
  mp_M06_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_6_signal);
  mp_m_axis_tready_converter_6 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_6");
  
  mp_m_axis_split_tready->out_port[6](m_axis_split_tready_out_6);
    mp_m_axis_split_tready->add_mask(6,7,6);
  mp_m_axis_tready_converter_6->vector_in(m_axis_split_tready_out_6);
  mp_m_axis_tready_converter_6->scalar_out(m_m_axis_tready_converter_6_signal);
  mp_M06_AXIS_transactor->TREADY(m_m_axis_tready_converter_6_signal);
  mp_m_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_6");
  mp_m_axis_concat_tdata->in_port[6](m_axis_concat_tdata_out_6);
  mp_m_axis_concat_tdata->offset_port(6, 384);
  mp_m_axis_tdata_converter_6->vector_in(m_m_axis_tdata_converter_6_signal);
  mp_m_axis_tdata_converter_6->vector_out(m_axis_concat_tdata_out_6);
  mp_M06_AXIS_transactor->TDATA(m_m_axis_tdata_converter_6_signal);
  mp_m_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_6");
  mp_m_axis_concat_tstrb->in_port[6](m_axis_concat_tstrb_out_6);
  mp_m_axis_concat_tstrb->offset_port(6, 48);
  mp_m_axis_tstrb_converter_6->vector_in(m_m_axis_tstrb_converter_6_signal);
  mp_m_axis_tstrb_converter_6->vector_out(m_axis_concat_tstrb_out_6);
  mp_M06_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_6_signal);
  mp_m_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_6");
  mp_m_axis_concat_tkeep->in_port[6](m_axis_concat_tkeep_out_6);
  mp_m_axis_concat_tkeep->offset_port(6, 48);
  mp_m_axis_tkeep_converter_6->vector_in(m_m_axis_tkeep_converter_6_signal);
  mp_m_axis_tkeep_converter_6->vector_out(m_axis_concat_tkeep_out_6);
  mp_M06_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_6_signal);
  mp_m_axis_tlast_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_6");
  mp_m_axis_concat_tlast->in_port[6](m_axis_concat_tlast_out_6);
  mp_m_axis_concat_tlast->offset_port(6, 6);
  mp_m_axis_tlast_converter_6->scalar_in(m_m_axis_tlast_converter_6_signal);
  mp_m_axis_tlast_converter_6->vector_out(m_axis_concat_tlast_out_6);
  mp_M06_AXIS_transactor->TLAST(m_m_axis_tlast_converter_6_signal);
  mp_m_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_6");
  mp_m_axis_concat_tid->in_port[6](m_axis_concat_tid_out_6);
  mp_m_axis_concat_tid->offset_port(6, 6);
  mp_m_axis_tid_converter_6->vector_in(m_m_axis_tid_converter_6_signal);
  mp_m_axis_tid_converter_6->vector_out(m_axis_concat_tid_out_6);
  mp_M06_AXIS_transactor->TID(m_m_axis_tid_converter_6_signal);
  mp_m_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_6");
  mp_m_axis_concat_tdest->in_port[6](m_axis_concat_tdest_out_6);
  mp_m_axis_concat_tdest->offset_port(6, 24);
  mp_m_axis_tdest_converter_6->vector_in(m_m_axis_tdest_converter_6_signal);
  mp_m_axis_tdest_converter_6->vector_out(m_axis_concat_tdest_out_6);
  mp_M06_AXIS_transactor->TDEST(m_m_axis_tdest_converter_6_signal);
  mp_m_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_6");
  mp_m_axis_concat_tuser->in_port[6](m_axis_concat_tuser_out_6);
  mp_m_axis_concat_tuser->offset_port(6, 6);
  mp_m_axis_tuser_converter_6->vector_in(m_m_axis_tuser_converter_6_signal);
  mp_m_axis_tuser_converter_6->vector_out(m_axis_concat_tuser_out_6);
  mp_M06_AXIS_transactor->TUSER(m_m_axis_tuser_converter_6_signal);
  mp_M06_AXIS_transactor->CLK(aclk);
  mp_M06_AXIS_transactor->RST(aresetn);
  // configure S07_AXIS_transactor
    xsc::common_cpp::properties S07_AXIS_transactor_param_props;
    S07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S07_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S07_AXIS_transactor", S07_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_7");
  
  mp_s_axis_split_tvalid->out_port[7](s_axis_split_tvalid_out_7);
    mp_s_axis_split_tvalid->add_mask(7,8,7);
  mp_s_axis_tvalid_converter_7->vector_in(s_axis_split_tvalid_out_7);
  mp_s_axis_tvalid_converter_7->scalar_out(m_s_axis_tvalid_converter_7_signal);
  mp_S07_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_7_signal);
  mp_s_axis_tready_converter_7 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_7");
  mp_s_axis_concat_tready->in_port[7](s_axis_concat_tready_out_7);
  mp_s_axis_concat_tready->offset_port(7, 7);
  mp_s_axis_tready_converter_7->scalar_in(m_s_axis_tready_converter_7_signal);
  mp_s_axis_tready_converter_7->vector_out(s_axis_concat_tready_out_7);
  mp_S07_AXIS_transactor->TREADY(m_s_axis_tready_converter_7_signal);
  mp_s_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_7");
  
  mp_s_axis_split_tdata->out_port[7](s_axis_split_tdata_out_7);
    mp_s_axis_split_tdata->add_mask(7,512,448);
  mp_s_axis_tdata_converter_7->vector_in(s_axis_split_tdata_out_7);
  mp_s_axis_tdata_converter_7->vector_out(m_s_axis_tdata_converter_7_signal);
  mp_S07_AXIS_transactor->TDATA(m_s_axis_tdata_converter_7_signal);
  mp_s_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_7");
  
  mp_s_axis_split_tstrb->out_port[7](s_axis_split_tstrb_out_7);
    mp_s_axis_split_tstrb->add_mask(7,64,56);
  mp_s_axis_tstrb_converter_7->vector_in(s_axis_split_tstrb_out_7);
  mp_s_axis_tstrb_converter_7->vector_out(m_s_axis_tstrb_converter_7_signal);
  mp_S07_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_7_signal);
  mp_s_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_7");
  
  mp_s_axis_split_tkeep->out_port[7](s_axis_split_tkeep_out_7);
    mp_s_axis_split_tkeep->add_mask(7,64,56);
  mp_s_axis_tkeep_converter_7->vector_in(s_axis_split_tkeep_out_7);
  mp_s_axis_tkeep_converter_7->vector_out(m_s_axis_tkeep_converter_7_signal);
  mp_S07_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_7_signal);
  mp_s_axis_tlast_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_7");
  
  mp_s_axis_split_tlast->out_port[7](s_axis_split_tlast_out_7);
    mp_s_axis_split_tlast->add_mask(7,8,7);
  mp_s_axis_tlast_converter_7->vector_in(s_axis_split_tlast_out_7);
  mp_s_axis_tlast_converter_7->scalar_out(m_s_axis_tlast_converter_7_signal);
  mp_S07_AXIS_transactor->TLAST(m_s_axis_tlast_converter_7_signal);
  mp_s_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_7");
  
  mp_s_axis_split_tid->out_port[7](s_axis_split_tid_out_7);
    mp_s_axis_split_tid->add_mask(7,8,7);
  mp_s_axis_tid_converter_7->vector_in(s_axis_split_tid_out_7);
  mp_s_axis_tid_converter_7->vector_out(m_s_axis_tid_converter_7_signal);
  mp_S07_AXIS_transactor->TID(m_s_axis_tid_converter_7_signal);
  mp_s_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_7");
  
  mp_s_axis_split_tdest->out_port[7](s_axis_split_tdest_out_7);
    mp_s_axis_split_tdest->add_mask(7,32,28);
  mp_s_axis_tdest_converter_7->vector_in(s_axis_split_tdest_out_7);
  mp_s_axis_tdest_converter_7->vector_out(m_s_axis_tdest_converter_7_signal);
  mp_S07_AXIS_transactor->TDEST(m_s_axis_tdest_converter_7_signal);
  mp_s_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_7");
  
  mp_s_axis_split_tuser->out_port[7](s_axis_split_tuser_out_7);
    mp_s_axis_split_tuser->add_mask(7,8,7);
  mp_s_axis_tuser_converter_7->vector_in(s_axis_split_tuser_out_7);
  mp_s_axis_tuser_converter_7->vector_out(m_s_axis_tuser_converter_7_signal);
  mp_S07_AXIS_transactor->TUSER(m_s_axis_tuser_converter_7_signal);
  mp_S07_AXIS_transactor->CLK(aclk);
  mp_S07_AXIS_transactor->RST(aresetn);
  // configure M07_AXIS_transactor
    xsc::common_cpp::properties M07_AXIS_transactor_param_props;
    M07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M07_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M07_AXIS_transactor", M07_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_7");
  mp_m_axis_concat_tvalid->in_port[7](m_axis_concat_tvalid_out_7);
  mp_m_axis_concat_tvalid->offset_port(7, 7);
  mp_m_axis_tvalid_converter_7->scalar_in(m_m_axis_tvalid_converter_7_signal);
  mp_m_axis_tvalid_converter_7->vector_out(m_axis_concat_tvalid_out_7);
  mp_M07_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_7_signal);
  mp_m_axis_tready_converter_7 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_7");
  
  mp_m_axis_split_tready->out_port[7](m_axis_split_tready_out_7);
    mp_m_axis_split_tready->add_mask(7,8,7);
  mp_m_axis_tready_converter_7->vector_in(m_axis_split_tready_out_7);
  mp_m_axis_tready_converter_7->scalar_out(m_m_axis_tready_converter_7_signal);
  mp_M07_AXIS_transactor->TREADY(m_m_axis_tready_converter_7_signal);
  mp_m_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_7");
  mp_m_axis_concat_tdata->in_port[7](m_axis_concat_tdata_out_7);
  mp_m_axis_concat_tdata->offset_port(7, 448);
  mp_m_axis_tdata_converter_7->vector_in(m_m_axis_tdata_converter_7_signal);
  mp_m_axis_tdata_converter_7->vector_out(m_axis_concat_tdata_out_7);
  mp_M07_AXIS_transactor->TDATA(m_m_axis_tdata_converter_7_signal);
  mp_m_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_7");
  mp_m_axis_concat_tstrb->in_port[7](m_axis_concat_tstrb_out_7);
  mp_m_axis_concat_tstrb->offset_port(7, 56);
  mp_m_axis_tstrb_converter_7->vector_in(m_m_axis_tstrb_converter_7_signal);
  mp_m_axis_tstrb_converter_7->vector_out(m_axis_concat_tstrb_out_7);
  mp_M07_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_7_signal);
  mp_m_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_7");
  mp_m_axis_concat_tkeep->in_port[7](m_axis_concat_tkeep_out_7);
  mp_m_axis_concat_tkeep->offset_port(7, 56);
  mp_m_axis_tkeep_converter_7->vector_in(m_m_axis_tkeep_converter_7_signal);
  mp_m_axis_tkeep_converter_7->vector_out(m_axis_concat_tkeep_out_7);
  mp_M07_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_7_signal);
  mp_m_axis_tlast_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_7");
  mp_m_axis_concat_tlast->in_port[7](m_axis_concat_tlast_out_7);
  mp_m_axis_concat_tlast->offset_port(7, 7);
  mp_m_axis_tlast_converter_7->scalar_in(m_m_axis_tlast_converter_7_signal);
  mp_m_axis_tlast_converter_7->vector_out(m_axis_concat_tlast_out_7);
  mp_M07_AXIS_transactor->TLAST(m_m_axis_tlast_converter_7_signal);
  mp_m_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_7");
  mp_m_axis_concat_tid->in_port[7](m_axis_concat_tid_out_7);
  mp_m_axis_concat_tid->offset_port(7, 7);
  mp_m_axis_tid_converter_7->vector_in(m_m_axis_tid_converter_7_signal);
  mp_m_axis_tid_converter_7->vector_out(m_axis_concat_tid_out_7);
  mp_M07_AXIS_transactor->TID(m_m_axis_tid_converter_7_signal);
  mp_m_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_7");
  mp_m_axis_concat_tdest->in_port[7](m_axis_concat_tdest_out_7);
  mp_m_axis_concat_tdest->offset_port(7, 28);
  mp_m_axis_tdest_converter_7->vector_in(m_m_axis_tdest_converter_7_signal);
  mp_m_axis_tdest_converter_7->vector_out(m_axis_concat_tdest_out_7);
  mp_M07_AXIS_transactor->TDEST(m_m_axis_tdest_converter_7_signal);
  mp_m_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_7");
  mp_m_axis_concat_tuser->in_port[7](m_axis_concat_tuser_out_7);
  mp_m_axis_concat_tuser->offset_port(7, 7);
  mp_m_axis_tuser_converter_7->vector_in(m_m_axis_tuser_converter_7_signal);
  mp_m_axis_tuser_converter_7->vector_out(m_axis_concat_tuser_out_7);
  mp_M07_AXIS_transactor->TUSER(m_m_axis_tuser_converter_7_signal);
  mp_M07_AXIS_transactor->CLK(aclk);
  mp_M07_AXIS_transactor->RST(aresetn);
  // configure S08_AXIS_transactor
    xsc::common_cpp::properties S08_AXIS_transactor_param_props;
    S08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S08_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S08_AXIS_transactor", S08_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_8");
  
  mp_s_axis_split_tvalid->out_port[8](s_axis_split_tvalid_out_8);
    mp_s_axis_split_tvalid->add_mask(8,9,8);
  mp_s_axis_tvalid_converter_8->vector_in(s_axis_split_tvalid_out_8);
  mp_s_axis_tvalid_converter_8->scalar_out(m_s_axis_tvalid_converter_8_signal);
  mp_S08_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_8_signal);
  mp_s_axis_tready_converter_8 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_8");
  mp_s_axis_concat_tready->in_port[8](s_axis_concat_tready_out_8);
  mp_s_axis_concat_tready->offset_port(8, 8);
  mp_s_axis_tready_converter_8->scalar_in(m_s_axis_tready_converter_8_signal);
  mp_s_axis_tready_converter_8->vector_out(s_axis_concat_tready_out_8);
  mp_S08_AXIS_transactor->TREADY(m_s_axis_tready_converter_8_signal);
  mp_s_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_8");
  
  mp_s_axis_split_tdata->out_port[8](s_axis_split_tdata_out_8);
    mp_s_axis_split_tdata->add_mask(8,576,512);
  mp_s_axis_tdata_converter_8->vector_in(s_axis_split_tdata_out_8);
  mp_s_axis_tdata_converter_8->vector_out(m_s_axis_tdata_converter_8_signal);
  mp_S08_AXIS_transactor->TDATA(m_s_axis_tdata_converter_8_signal);
  mp_s_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_8");
  
  mp_s_axis_split_tstrb->out_port[8](s_axis_split_tstrb_out_8);
    mp_s_axis_split_tstrb->add_mask(8,72,64);
  mp_s_axis_tstrb_converter_8->vector_in(s_axis_split_tstrb_out_8);
  mp_s_axis_tstrb_converter_8->vector_out(m_s_axis_tstrb_converter_8_signal);
  mp_S08_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_8_signal);
  mp_s_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_8");
  
  mp_s_axis_split_tkeep->out_port[8](s_axis_split_tkeep_out_8);
    mp_s_axis_split_tkeep->add_mask(8,72,64);
  mp_s_axis_tkeep_converter_8->vector_in(s_axis_split_tkeep_out_8);
  mp_s_axis_tkeep_converter_8->vector_out(m_s_axis_tkeep_converter_8_signal);
  mp_S08_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_8_signal);
  mp_s_axis_tlast_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_8");
  
  mp_s_axis_split_tlast->out_port[8](s_axis_split_tlast_out_8);
    mp_s_axis_split_tlast->add_mask(8,9,8);
  mp_s_axis_tlast_converter_8->vector_in(s_axis_split_tlast_out_8);
  mp_s_axis_tlast_converter_8->scalar_out(m_s_axis_tlast_converter_8_signal);
  mp_S08_AXIS_transactor->TLAST(m_s_axis_tlast_converter_8_signal);
  mp_s_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_8");
  
  mp_s_axis_split_tid->out_port[8](s_axis_split_tid_out_8);
    mp_s_axis_split_tid->add_mask(8,9,8);
  mp_s_axis_tid_converter_8->vector_in(s_axis_split_tid_out_8);
  mp_s_axis_tid_converter_8->vector_out(m_s_axis_tid_converter_8_signal);
  mp_S08_AXIS_transactor->TID(m_s_axis_tid_converter_8_signal);
  mp_s_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_8");
  
  mp_s_axis_split_tdest->out_port[8](s_axis_split_tdest_out_8);
    mp_s_axis_split_tdest->add_mask(8,36,32);
  mp_s_axis_tdest_converter_8->vector_in(s_axis_split_tdest_out_8);
  mp_s_axis_tdest_converter_8->vector_out(m_s_axis_tdest_converter_8_signal);
  mp_S08_AXIS_transactor->TDEST(m_s_axis_tdest_converter_8_signal);
  mp_s_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_8");
  
  mp_s_axis_split_tuser->out_port[8](s_axis_split_tuser_out_8);
    mp_s_axis_split_tuser->add_mask(8,9,8);
  mp_s_axis_tuser_converter_8->vector_in(s_axis_split_tuser_out_8);
  mp_s_axis_tuser_converter_8->vector_out(m_s_axis_tuser_converter_8_signal);
  mp_S08_AXIS_transactor->TUSER(m_s_axis_tuser_converter_8_signal);
  mp_S08_AXIS_transactor->CLK(aclk);
  mp_S08_AXIS_transactor->RST(aresetn);
  // configure M08_AXIS_transactor
    xsc::common_cpp::properties M08_AXIS_transactor_param_props;
    M08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M08_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M08_AXIS_transactor", M08_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_8");
  mp_m_axis_concat_tvalid->in_port[8](m_axis_concat_tvalid_out_8);
  mp_m_axis_concat_tvalid->offset_port(8, 8);
  mp_m_axis_tvalid_converter_8->scalar_in(m_m_axis_tvalid_converter_8_signal);
  mp_m_axis_tvalid_converter_8->vector_out(m_axis_concat_tvalid_out_8);
  mp_M08_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_8_signal);
  mp_m_axis_tready_converter_8 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_8");
  
  mp_m_axis_split_tready->out_port[8](m_axis_split_tready_out_8);
    mp_m_axis_split_tready->add_mask(8,9,8);
  mp_m_axis_tready_converter_8->vector_in(m_axis_split_tready_out_8);
  mp_m_axis_tready_converter_8->scalar_out(m_m_axis_tready_converter_8_signal);
  mp_M08_AXIS_transactor->TREADY(m_m_axis_tready_converter_8_signal);
  mp_m_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_8");
  mp_m_axis_concat_tdata->in_port[8](m_axis_concat_tdata_out_8);
  mp_m_axis_concat_tdata->offset_port(8, 512);
  mp_m_axis_tdata_converter_8->vector_in(m_m_axis_tdata_converter_8_signal);
  mp_m_axis_tdata_converter_8->vector_out(m_axis_concat_tdata_out_8);
  mp_M08_AXIS_transactor->TDATA(m_m_axis_tdata_converter_8_signal);
  mp_m_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_8");
  mp_m_axis_concat_tstrb->in_port[8](m_axis_concat_tstrb_out_8);
  mp_m_axis_concat_tstrb->offset_port(8, 64);
  mp_m_axis_tstrb_converter_8->vector_in(m_m_axis_tstrb_converter_8_signal);
  mp_m_axis_tstrb_converter_8->vector_out(m_axis_concat_tstrb_out_8);
  mp_M08_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_8_signal);
  mp_m_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_8");
  mp_m_axis_concat_tkeep->in_port[8](m_axis_concat_tkeep_out_8);
  mp_m_axis_concat_tkeep->offset_port(8, 64);
  mp_m_axis_tkeep_converter_8->vector_in(m_m_axis_tkeep_converter_8_signal);
  mp_m_axis_tkeep_converter_8->vector_out(m_axis_concat_tkeep_out_8);
  mp_M08_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_8_signal);
  mp_m_axis_tlast_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_8");
  mp_m_axis_concat_tlast->in_port[8](m_axis_concat_tlast_out_8);
  mp_m_axis_concat_tlast->offset_port(8, 8);
  mp_m_axis_tlast_converter_8->scalar_in(m_m_axis_tlast_converter_8_signal);
  mp_m_axis_tlast_converter_8->vector_out(m_axis_concat_tlast_out_8);
  mp_M08_AXIS_transactor->TLAST(m_m_axis_tlast_converter_8_signal);
  mp_m_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_8");
  mp_m_axis_concat_tid->in_port[8](m_axis_concat_tid_out_8);
  mp_m_axis_concat_tid->offset_port(8, 8);
  mp_m_axis_tid_converter_8->vector_in(m_m_axis_tid_converter_8_signal);
  mp_m_axis_tid_converter_8->vector_out(m_axis_concat_tid_out_8);
  mp_M08_AXIS_transactor->TID(m_m_axis_tid_converter_8_signal);
  mp_m_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_8");
  mp_m_axis_concat_tdest->in_port[8](m_axis_concat_tdest_out_8);
  mp_m_axis_concat_tdest->offset_port(8, 32);
  mp_m_axis_tdest_converter_8->vector_in(m_m_axis_tdest_converter_8_signal);
  mp_m_axis_tdest_converter_8->vector_out(m_axis_concat_tdest_out_8);
  mp_M08_AXIS_transactor->TDEST(m_m_axis_tdest_converter_8_signal);
  mp_m_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_8");
  mp_m_axis_concat_tuser->in_port[8](m_axis_concat_tuser_out_8);
  mp_m_axis_concat_tuser->offset_port(8, 8);
  mp_m_axis_tuser_converter_8->vector_in(m_m_axis_tuser_converter_8_signal);
  mp_m_axis_tuser_converter_8->vector_out(m_axis_concat_tuser_out_8);
  mp_M08_AXIS_transactor->TUSER(m_m_axis_tuser_converter_8_signal);
  mp_M08_AXIS_transactor->CLK(aclk);
  mp_M08_AXIS_transactor->RST(aresetn);
  // configure S09_AXIS_transactor
    xsc::common_cpp::properties S09_AXIS_transactor_param_props;
    S09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S09_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S09_AXIS_transactor", S09_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_9");
  
  mp_s_axis_split_tvalid->out_port[9](s_axis_split_tvalid_out_9);
    mp_s_axis_split_tvalid->add_mask(9,10,9);
  mp_s_axis_tvalid_converter_9->vector_in(s_axis_split_tvalid_out_9);
  mp_s_axis_tvalid_converter_9->scalar_out(m_s_axis_tvalid_converter_9_signal);
  mp_S09_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_9_signal);
  mp_s_axis_tready_converter_9 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_9");
  mp_s_axis_concat_tready->in_port[9](s_axis_concat_tready_out_9);
  mp_s_axis_concat_tready->offset_port(9, 9);
  mp_s_axis_tready_converter_9->scalar_in(m_s_axis_tready_converter_9_signal);
  mp_s_axis_tready_converter_9->vector_out(s_axis_concat_tready_out_9);
  mp_S09_AXIS_transactor->TREADY(m_s_axis_tready_converter_9_signal);
  mp_s_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_9");
  
  mp_s_axis_split_tdata->out_port[9](s_axis_split_tdata_out_9);
    mp_s_axis_split_tdata->add_mask(9,640,576);
  mp_s_axis_tdata_converter_9->vector_in(s_axis_split_tdata_out_9);
  mp_s_axis_tdata_converter_9->vector_out(m_s_axis_tdata_converter_9_signal);
  mp_S09_AXIS_transactor->TDATA(m_s_axis_tdata_converter_9_signal);
  mp_s_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_9");
  
  mp_s_axis_split_tstrb->out_port[9](s_axis_split_tstrb_out_9);
    mp_s_axis_split_tstrb->add_mask(9,80,72);
  mp_s_axis_tstrb_converter_9->vector_in(s_axis_split_tstrb_out_9);
  mp_s_axis_tstrb_converter_9->vector_out(m_s_axis_tstrb_converter_9_signal);
  mp_S09_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_9_signal);
  mp_s_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_9");
  
  mp_s_axis_split_tkeep->out_port[9](s_axis_split_tkeep_out_9);
    mp_s_axis_split_tkeep->add_mask(9,80,72);
  mp_s_axis_tkeep_converter_9->vector_in(s_axis_split_tkeep_out_9);
  mp_s_axis_tkeep_converter_9->vector_out(m_s_axis_tkeep_converter_9_signal);
  mp_S09_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_9_signal);
  mp_s_axis_tlast_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_9");
  
  mp_s_axis_split_tlast->out_port[9](s_axis_split_tlast_out_9);
    mp_s_axis_split_tlast->add_mask(9,10,9);
  mp_s_axis_tlast_converter_9->vector_in(s_axis_split_tlast_out_9);
  mp_s_axis_tlast_converter_9->scalar_out(m_s_axis_tlast_converter_9_signal);
  mp_S09_AXIS_transactor->TLAST(m_s_axis_tlast_converter_9_signal);
  mp_s_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_9");
  
  mp_s_axis_split_tid->out_port[9](s_axis_split_tid_out_9);
    mp_s_axis_split_tid->add_mask(9,10,9);
  mp_s_axis_tid_converter_9->vector_in(s_axis_split_tid_out_9);
  mp_s_axis_tid_converter_9->vector_out(m_s_axis_tid_converter_9_signal);
  mp_S09_AXIS_transactor->TID(m_s_axis_tid_converter_9_signal);
  mp_s_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_9");
  
  mp_s_axis_split_tdest->out_port[9](s_axis_split_tdest_out_9);
    mp_s_axis_split_tdest->add_mask(9,40,36);
  mp_s_axis_tdest_converter_9->vector_in(s_axis_split_tdest_out_9);
  mp_s_axis_tdest_converter_9->vector_out(m_s_axis_tdest_converter_9_signal);
  mp_S09_AXIS_transactor->TDEST(m_s_axis_tdest_converter_9_signal);
  mp_s_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_9");
  
  mp_s_axis_split_tuser->out_port[9](s_axis_split_tuser_out_9);
    mp_s_axis_split_tuser->add_mask(9,10,9);
  mp_s_axis_tuser_converter_9->vector_in(s_axis_split_tuser_out_9);
  mp_s_axis_tuser_converter_9->vector_out(m_s_axis_tuser_converter_9_signal);
  mp_S09_AXIS_transactor->TUSER(m_s_axis_tuser_converter_9_signal);
  mp_S09_AXIS_transactor->CLK(aclk);
  mp_S09_AXIS_transactor->RST(aresetn);
  // configure M09_AXIS_transactor
    xsc::common_cpp::properties M09_AXIS_transactor_param_props;
    M09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M09_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M09_AXIS_transactor", M09_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_9");
  mp_m_axis_concat_tvalid->in_port[9](m_axis_concat_tvalid_out_9);
  mp_m_axis_concat_tvalid->offset_port(9, 9);
  mp_m_axis_tvalid_converter_9->scalar_in(m_m_axis_tvalid_converter_9_signal);
  mp_m_axis_tvalid_converter_9->vector_out(m_axis_concat_tvalid_out_9);
  mp_M09_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_9_signal);
  mp_m_axis_tready_converter_9 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_9");
  
  mp_m_axis_split_tready->out_port[9](m_axis_split_tready_out_9);
    mp_m_axis_split_tready->add_mask(9,10,9);
  mp_m_axis_tready_converter_9->vector_in(m_axis_split_tready_out_9);
  mp_m_axis_tready_converter_9->scalar_out(m_m_axis_tready_converter_9_signal);
  mp_M09_AXIS_transactor->TREADY(m_m_axis_tready_converter_9_signal);
  mp_m_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_9");
  mp_m_axis_concat_tdata->in_port[9](m_axis_concat_tdata_out_9);
  mp_m_axis_concat_tdata->offset_port(9, 576);
  mp_m_axis_tdata_converter_9->vector_in(m_m_axis_tdata_converter_9_signal);
  mp_m_axis_tdata_converter_9->vector_out(m_axis_concat_tdata_out_9);
  mp_M09_AXIS_transactor->TDATA(m_m_axis_tdata_converter_9_signal);
  mp_m_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_9");
  mp_m_axis_concat_tstrb->in_port[9](m_axis_concat_tstrb_out_9);
  mp_m_axis_concat_tstrb->offset_port(9, 72);
  mp_m_axis_tstrb_converter_9->vector_in(m_m_axis_tstrb_converter_9_signal);
  mp_m_axis_tstrb_converter_9->vector_out(m_axis_concat_tstrb_out_9);
  mp_M09_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_9_signal);
  mp_m_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_9");
  mp_m_axis_concat_tkeep->in_port[9](m_axis_concat_tkeep_out_9);
  mp_m_axis_concat_tkeep->offset_port(9, 72);
  mp_m_axis_tkeep_converter_9->vector_in(m_m_axis_tkeep_converter_9_signal);
  mp_m_axis_tkeep_converter_9->vector_out(m_axis_concat_tkeep_out_9);
  mp_M09_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_9_signal);
  mp_m_axis_tlast_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_9");
  mp_m_axis_concat_tlast->in_port[9](m_axis_concat_tlast_out_9);
  mp_m_axis_concat_tlast->offset_port(9, 9);
  mp_m_axis_tlast_converter_9->scalar_in(m_m_axis_tlast_converter_9_signal);
  mp_m_axis_tlast_converter_9->vector_out(m_axis_concat_tlast_out_9);
  mp_M09_AXIS_transactor->TLAST(m_m_axis_tlast_converter_9_signal);
  mp_m_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_9");
  mp_m_axis_concat_tid->in_port[9](m_axis_concat_tid_out_9);
  mp_m_axis_concat_tid->offset_port(9, 9);
  mp_m_axis_tid_converter_9->vector_in(m_m_axis_tid_converter_9_signal);
  mp_m_axis_tid_converter_9->vector_out(m_axis_concat_tid_out_9);
  mp_M09_AXIS_transactor->TID(m_m_axis_tid_converter_9_signal);
  mp_m_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_9");
  mp_m_axis_concat_tdest->in_port[9](m_axis_concat_tdest_out_9);
  mp_m_axis_concat_tdest->offset_port(9, 36);
  mp_m_axis_tdest_converter_9->vector_in(m_m_axis_tdest_converter_9_signal);
  mp_m_axis_tdest_converter_9->vector_out(m_axis_concat_tdest_out_9);
  mp_M09_AXIS_transactor->TDEST(m_m_axis_tdest_converter_9_signal);
  mp_m_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_9");
  mp_m_axis_concat_tuser->in_port[9](m_axis_concat_tuser_out_9);
  mp_m_axis_concat_tuser->offset_port(9, 9);
  mp_m_axis_tuser_converter_9->vector_in(m_m_axis_tuser_converter_9_signal);
  mp_m_axis_tuser_converter_9->vector_out(m_axis_concat_tuser_out_9);
  mp_M09_AXIS_transactor->TUSER(m_m_axis_tuser_converter_9_signal);
  mp_M09_AXIS_transactor->CLK(aclk);
  mp_M09_AXIS_transactor->RST(aresetn);
  // configure S_AXI_CTRL_transactor
    xsc::common_cpp::properties S_AXI_CTRL_transactor_param_props;
    S_AXI_CTRL_transactor_param_props.addLong("DATA_WIDTH", "32");
    S_AXI_CTRL_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S_AXI_CTRL_transactor_param_props.addLong("ID_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ADDR_WIDTH", "7");
    S_AXI_CTRL_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_LOCK", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_PROT", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_CACHE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_QOS", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_WSTRB", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_SIZE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RESET", "1");
    S_AXI_CTRL_transactor_param_props.addFloat("PHASE", "0.00");
    S_AXI_CTRL_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    S_AXI_CTRL_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_CTRL_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");

    mp_S_AXI_CTRL_transactor = new xtlm::xaximm_pin2xtlm_t<32,7,1,1,1,1,1,1>("S_AXI_CTRL_transactor", S_AXI_CTRL_transactor_param_props);
  mp_S_AXI_CTRL_transactor->AWVALID(s_axi_ctrl_awvalid);
  mp_S_AXI_CTRL_transactor->AWREADY(s_axi_ctrl_awready);
  mp_S_AXI_CTRL_transactor->AWADDR(s_axi_ctrl_awaddr);
  mp_S_AXI_CTRL_transactor->WVALID(s_axi_ctrl_wvalid);
  mp_S_AXI_CTRL_transactor->WREADY(s_axi_ctrl_wready);
  mp_S_AXI_CTRL_transactor->WDATA(s_axi_ctrl_wdata);
  mp_S_AXI_CTRL_transactor->BVALID(s_axi_ctrl_bvalid);
  mp_S_AXI_CTRL_transactor->BREADY(s_axi_ctrl_bready);
  mp_S_AXI_CTRL_transactor->BRESP(s_axi_ctrl_bresp);
  mp_S_AXI_CTRL_transactor->ARVALID(s_axi_ctrl_arvalid);
  mp_S_AXI_CTRL_transactor->ARREADY(s_axi_ctrl_arready);
  mp_S_AXI_CTRL_transactor->ARADDR(s_axi_ctrl_araddr);
  mp_S_AXI_CTRL_transactor->RVALID(s_axi_ctrl_rvalid);
  mp_S_AXI_CTRL_transactor->RREADY(s_axi_ctrl_rready);
  mp_S_AXI_CTRL_transactor->RDATA(s_axi_ctrl_rdata);
  mp_S_AXI_CTRL_transactor->RRESP(s_axi_ctrl_rresp);
  mp_S_AXI_CTRL_transactor->CLK(s_axi_ctrl_aclk);
  mp_S_AXI_CTRL_transactor->RST(s_axi_ctrl_aresetn);

  // initialize transactors stubs
  S00_AXIS_transactor_target_socket_stub = nullptr;
  M00_AXIS_transactor_initiator_socket_stub = nullptr;
  S01_AXIS_transactor_target_socket_stub = nullptr;
  M01_AXIS_transactor_initiator_socket_stub = nullptr;
  S02_AXIS_transactor_target_socket_stub = nullptr;
  M02_AXIS_transactor_initiator_socket_stub = nullptr;
  S03_AXIS_transactor_target_socket_stub = nullptr;
  M03_AXIS_transactor_initiator_socket_stub = nullptr;
  S04_AXIS_transactor_target_socket_stub = nullptr;
  M04_AXIS_transactor_initiator_socket_stub = nullptr;
  S05_AXIS_transactor_target_socket_stub = nullptr;
  M05_AXIS_transactor_initiator_socket_stub = nullptr;
  S06_AXIS_transactor_target_socket_stub = nullptr;
  M06_AXIS_transactor_initiator_socket_stub = nullptr;
  S07_AXIS_transactor_target_socket_stub = nullptr;
  M07_AXIS_transactor_initiator_socket_stub = nullptr;
  S08_AXIS_transactor_target_socket_stub = nullptr;
  M08_AXIS_transactor_initiator_socket_stub = nullptr;
  S09_AXIS_transactor_target_socket_stub = nullptr;
  M09_AXIS_transactor_initiator_socket_stub = nullptr;
  S_AXI_CTRL_transactor_target_wr_socket_stub = nullptr;
  S_AXI_CTRL_transactor_target_rd_socket_stub = nullptr;

}

void bd_d92b_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S00_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S00_AXIS_TARGET_SOCKET->bind(*(mp_S00_AXIS_transactor->socket));
  
  }
  else
  {
    S00_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S00_AXIS_transactor_target_socket_stub->bind(*(mp_S00_AXIS_transactor->socket));
    mp_S00_AXIS_transactor->disable_transactor();
  }

  // configure 'M00_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M00_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M00_AXIS_INITIATOR_SOCKET->bind(*(mp_M00_AXIS_transactor->socket));
  
  }
  else
  {
    M00_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M00_AXIS_transactor_initiator_socket_stub->bind(*(mp_M00_AXIS_transactor->socket));
    mp_M00_AXIS_transactor->disable_transactor();
  }

  // configure 'S01_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S01_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S01_AXIS_TARGET_SOCKET->bind(*(mp_S01_AXIS_transactor->socket));
  
  }
  else
  {
    S01_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S01_AXIS_transactor_target_socket_stub->bind(*(mp_S01_AXIS_transactor->socket));
    mp_S01_AXIS_transactor->disable_transactor();
  }

  // configure 'M01_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M01_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M01_AXIS_INITIATOR_SOCKET->bind(*(mp_M01_AXIS_transactor->socket));
  
  }
  else
  {
    M01_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M01_AXIS_transactor_initiator_socket_stub->bind(*(mp_M01_AXIS_transactor->socket));
    mp_M01_AXIS_transactor->disable_transactor();
  }

  // configure 'S02_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S02_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S02_AXIS_TARGET_SOCKET->bind(*(mp_S02_AXIS_transactor->socket));
  
  }
  else
  {
    S02_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S02_AXIS_transactor_target_socket_stub->bind(*(mp_S02_AXIS_transactor->socket));
    mp_S02_AXIS_transactor->disable_transactor();
  }

  // configure 'M02_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M02_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M02_AXIS_INITIATOR_SOCKET->bind(*(mp_M02_AXIS_transactor->socket));
  
  }
  else
  {
    M02_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M02_AXIS_transactor_initiator_socket_stub->bind(*(mp_M02_AXIS_transactor->socket));
    mp_M02_AXIS_transactor->disable_transactor();
  }

  // configure 'S03_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S03_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S03_AXIS_TARGET_SOCKET->bind(*(mp_S03_AXIS_transactor->socket));
  
  }
  else
  {
    S03_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S03_AXIS_transactor_target_socket_stub->bind(*(mp_S03_AXIS_transactor->socket));
    mp_S03_AXIS_transactor->disable_transactor();
  }

  // configure 'M03_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M03_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M03_AXIS_INITIATOR_SOCKET->bind(*(mp_M03_AXIS_transactor->socket));
  
  }
  else
  {
    M03_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M03_AXIS_transactor_initiator_socket_stub->bind(*(mp_M03_AXIS_transactor->socket));
    mp_M03_AXIS_transactor->disable_transactor();
  }

  // configure 'S04_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S04_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S04_AXIS_TARGET_SOCKET->bind(*(mp_S04_AXIS_transactor->socket));
  
  }
  else
  {
    S04_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S04_AXIS_transactor_target_socket_stub->bind(*(mp_S04_AXIS_transactor->socket));
    mp_S04_AXIS_transactor->disable_transactor();
  }

  // configure 'M04_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M04_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M04_AXIS_INITIATOR_SOCKET->bind(*(mp_M04_AXIS_transactor->socket));
  
  }
  else
  {
    M04_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M04_AXIS_transactor_initiator_socket_stub->bind(*(mp_M04_AXIS_transactor->socket));
    mp_M04_AXIS_transactor->disable_transactor();
  }

  // configure 'S05_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S05_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S05_AXIS_TARGET_SOCKET->bind(*(mp_S05_AXIS_transactor->socket));
  
  }
  else
  {
    S05_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S05_AXIS_transactor_target_socket_stub->bind(*(mp_S05_AXIS_transactor->socket));
    mp_S05_AXIS_transactor->disable_transactor();
  }

  // configure 'M05_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M05_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M05_AXIS_INITIATOR_SOCKET->bind(*(mp_M05_AXIS_transactor->socket));
  
  }
  else
  {
    M05_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M05_AXIS_transactor_initiator_socket_stub->bind(*(mp_M05_AXIS_transactor->socket));
    mp_M05_AXIS_transactor->disable_transactor();
  }

  // configure 'S06_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S06_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S06_AXIS_TARGET_SOCKET->bind(*(mp_S06_AXIS_transactor->socket));
  
  }
  else
  {
    S06_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S06_AXIS_transactor_target_socket_stub->bind(*(mp_S06_AXIS_transactor->socket));
    mp_S06_AXIS_transactor->disable_transactor();
  }

  // configure 'M06_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M06_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M06_AXIS_INITIATOR_SOCKET->bind(*(mp_M06_AXIS_transactor->socket));
  
  }
  else
  {
    M06_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M06_AXIS_transactor_initiator_socket_stub->bind(*(mp_M06_AXIS_transactor->socket));
    mp_M06_AXIS_transactor->disable_transactor();
  }

  // configure 'S07_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S07_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S07_AXIS_TARGET_SOCKET->bind(*(mp_S07_AXIS_transactor->socket));
  
  }
  else
  {
    S07_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S07_AXIS_transactor_target_socket_stub->bind(*(mp_S07_AXIS_transactor->socket));
    mp_S07_AXIS_transactor->disable_transactor();
  }

  // configure 'M07_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M07_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M07_AXIS_INITIATOR_SOCKET->bind(*(mp_M07_AXIS_transactor->socket));
  
  }
  else
  {
    M07_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M07_AXIS_transactor_initiator_socket_stub->bind(*(mp_M07_AXIS_transactor->socket));
    mp_M07_AXIS_transactor->disable_transactor();
  }

  // configure 'S08_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S08_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S08_AXIS_TARGET_SOCKET->bind(*(mp_S08_AXIS_transactor->socket));
  
  }
  else
  {
    S08_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S08_AXIS_transactor_target_socket_stub->bind(*(mp_S08_AXIS_transactor->socket));
    mp_S08_AXIS_transactor->disable_transactor();
  }

  // configure 'M08_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M08_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M08_AXIS_INITIATOR_SOCKET->bind(*(mp_M08_AXIS_transactor->socket));
  
  }
  else
  {
    M08_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M08_AXIS_transactor_initiator_socket_stub->bind(*(mp_M08_AXIS_transactor->socket));
    mp_M08_AXIS_transactor->disable_transactor();
  }

  // configure 'S09_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S09_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S09_AXIS_TARGET_SOCKET->bind(*(mp_S09_AXIS_transactor->socket));
  
  }
  else
  {
    S09_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S09_AXIS_transactor_target_socket_stub->bind(*(mp_S09_AXIS_transactor->socket));
    mp_S09_AXIS_transactor->disable_transactor();
  }

  // configure 'M09_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M09_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M09_AXIS_INITIATOR_SOCKET->bind(*(mp_M09_AXIS_transactor->socket));
  
  }
  else
  {
    M09_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M09_AXIS_transactor_initiator_socket_stub->bind(*(mp_M09_AXIS_transactor->socket));
    mp_M09_AXIS_transactor->disable_transactor();
  }

  // configure 'S_AXI_CTRL' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S_AXI_CTRL_TLM_MODE") != 1)
  {
    mp_impl->S_AXI_CTRL_wr_socket->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    mp_impl->S_AXI_CTRL_rd_socket->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
  
  }
  else
  {
    S_AXI_CTRL_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S_AXI_CTRL_transactor_target_wr_socket_stub->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    S_AXI_CTRL_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S_AXI_CTRL_transactor_target_rd_socket_stub->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
    mp_S_AXI_CTRL_transactor->disable_transactor();
  }

}

#endif // VCSSYSTEMC




#ifdef MTI_SYSTEMC
bd_d92b_xbar_0::bd_d92b_xbar_0(const sc_core::sc_module_name& nm) : bd_d92b_xbar_0_sc(nm),  aclk("aclk"), aresetn("aresetn"), s_axis_tvalid("s_axis_tvalid"), s_axis_tready("s_axis_tready"), s_axis_tdata("s_axis_tdata"), s_axis_tstrb("s_axis_tstrb"), s_axis_tkeep("s_axis_tkeep"), s_axis_tlast("s_axis_tlast"), s_axis_tid("s_axis_tid"), s_axis_tdest("s_axis_tdest"), s_axis_tuser("s_axis_tuser"), m_axis_tvalid("m_axis_tvalid"), m_axis_tready("m_axis_tready"), m_axis_tdata("m_axis_tdata"), m_axis_tstrb("m_axis_tstrb"), m_axis_tkeep("m_axis_tkeep"), m_axis_tlast("m_axis_tlast"), m_axis_tid("m_axis_tid"), m_axis_tdest("m_axis_tdest"), m_axis_tuser("m_axis_tuser"), s_axi_ctrl_aclk("s_axi_ctrl_aclk"), s_axi_ctrl_aresetn("s_axi_ctrl_aresetn"), s_axi_ctrl_awvalid("s_axi_ctrl_awvalid"), s_axi_ctrl_awready("s_axi_ctrl_awready"), s_axi_ctrl_awaddr("s_axi_ctrl_awaddr"), s_axi_ctrl_wvalid("s_axi_ctrl_wvalid"), s_axi_ctrl_wready("s_axi_ctrl_wready"), s_axi_ctrl_wdata("s_axi_ctrl_wdata"), s_axi_ctrl_bvalid("s_axi_ctrl_bvalid"), s_axi_ctrl_bready("s_axi_ctrl_bready"), s_axi_ctrl_bresp("s_axi_ctrl_bresp"), s_axi_ctrl_arvalid("s_axi_ctrl_arvalid"), s_axi_ctrl_arready("s_axi_ctrl_arready"), s_axi_ctrl_araddr("s_axi_ctrl_araddr"), s_axi_ctrl_rvalid("s_axi_ctrl_rvalid"), s_axi_ctrl_rready("s_axi_ctrl_rready"), s_axi_ctrl_rdata("s_axi_ctrl_rdata"), s_axi_ctrl_rresp("s_axi_ctrl_rresp")
{
  // initialize pins
  mp_impl->aclk(aclk);
  mp_impl->aresetn(aresetn);
  mp_impl->s_axi_ctrl_aclk(s_axi_ctrl_aclk);
  mp_impl->s_axi_ctrl_aresetn(s_axi_ctrl_aresetn);

  // initialize transactors
  mp_S00_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_0 = NULL;
  mp_s_axis_tready_converter_0 = NULL;
  mp_s_axis_tdata_converter_0 = NULL;
  mp_s_axis_tstrb_converter_0 = NULL;
  mp_s_axis_tkeep_converter_0 = NULL;
  mp_s_axis_tlast_converter_0 = NULL;
  mp_s_axis_tid_converter_0 = NULL;
  mp_s_axis_tdest_converter_0 = NULL;
  mp_s_axis_tuser_converter_0 = NULL;
  mp_M00_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_0 = NULL;
  mp_m_axis_tready_converter_0 = NULL;
  mp_m_axis_tdata_converter_0 = NULL;
  mp_m_axis_tstrb_converter_0 = NULL;
  mp_m_axis_tkeep_converter_0 = NULL;
  mp_m_axis_tlast_converter_0 = NULL;
  mp_m_axis_tid_converter_0 = NULL;
  mp_m_axis_tdest_converter_0 = NULL;
  mp_m_axis_tuser_converter_0 = NULL;
  mp_S01_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_1 = NULL;
  mp_s_axis_tready_converter_1 = NULL;
  mp_s_axis_tdata_converter_1 = NULL;
  mp_s_axis_tstrb_converter_1 = NULL;
  mp_s_axis_tkeep_converter_1 = NULL;
  mp_s_axis_tlast_converter_1 = NULL;
  mp_s_axis_tid_converter_1 = NULL;
  mp_s_axis_tdest_converter_1 = NULL;
  mp_s_axis_tuser_converter_1 = NULL;
  mp_M01_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_1 = NULL;
  mp_m_axis_tready_converter_1 = NULL;
  mp_m_axis_tdata_converter_1 = NULL;
  mp_m_axis_tstrb_converter_1 = NULL;
  mp_m_axis_tkeep_converter_1 = NULL;
  mp_m_axis_tlast_converter_1 = NULL;
  mp_m_axis_tid_converter_1 = NULL;
  mp_m_axis_tdest_converter_1 = NULL;
  mp_m_axis_tuser_converter_1 = NULL;
  mp_S02_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_2 = NULL;
  mp_s_axis_tready_converter_2 = NULL;
  mp_s_axis_tdata_converter_2 = NULL;
  mp_s_axis_tstrb_converter_2 = NULL;
  mp_s_axis_tkeep_converter_2 = NULL;
  mp_s_axis_tlast_converter_2 = NULL;
  mp_s_axis_tid_converter_2 = NULL;
  mp_s_axis_tdest_converter_2 = NULL;
  mp_s_axis_tuser_converter_2 = NULL;
  mp_M02_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_2 = NULL;
  mp_m_axis_tready_converter_2 = NULL;
  mp_m_axis_tdata_converter_2 = NULL;
  mp_m_axis_tstrb_converter_2 = NULL;
  mp_m_axis_tkeep_converter_2 = NULL;
  mp_m_axis_tlast_converter_2 = NULL;
  mp_m_axis_tid_converter_2 = NULL;
  mp_m_axis_tdest_converter_2 = NULL;
  mp_m_axis_tuser_converter_2 = NULL;
  mp_S03_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_3 = NULL;
  mp_s_axis_tready_converter_3 = NULL;
  mp_s_axis_tdata_converter_3 = NULL;
  mp_s_axis_tstrb_converter_3 = NULL;
  mp_s_axis_tkeep_converter_3 = NULL;
  mp_s_axis_tlast_converter_3 = NULL;
  mp_s_axis_tid_converter_3 = NULL;
  mp_s_axis_tdest_converter_3 = NULL;
  mp_s_axis_tuser_converter_3 = NULL;
  mp_M03_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_3 = NULL;
  mp_m_axis_tready_converter_3 = NULL;
  mp_m_axis_tdata_converter_3 = NULL;
  mp_m_axis_tstrb_converter_3 = NULL;
  mp_m_axis_tkeep_converter_3 = NULL;
  mp_m_axis_tlast_converter_3 = NULL;
  mp_m_axis_tid_converter_3 = NULL;
  mp_m_axis_tdest_converter_3 = NULL;
  mp_m_axis_tuser_converter_3 = NULL;
  mp_S04_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_4 = NULL;
  mp_s_axis_tready_converter_4 = NULL;
  mp_s_axis_tdata_converter_4 = NULL;
  mp_s_axis_tstrb_converter_4 = NULL;
  mp_s_axis_tkeep_converter_4 = NULL;
  mp_s_axis_tlast_converter_4 = NULL;
  mp_s_axis_tid_converter_4 = NULL;
  mp_s_axis_tdest_converter_4 = NULL;
  mp_s_axis_tuser_converter_4 = NULL;
  mp_M04_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_4 = NULL;
  mp_m_axis_tready_converter_4 = NULL;
  mp_m_axis_tdata_converter_4 = NULL;
  mp_m_axis_tstrb_converter_4 = NULL;
  mp_m_axis_tkeep_converter_4 = NULL;
  mp_m_axis_tlast_converter_4 = NULL;
  mp_m_axis_tid_converter_4 = NULL;
  mp_m_axis_tdest_converter_4 = NULL;
  mp_m_axis_tuser_converter_4 = NULL;
  mp_S05_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_5 = NULL;
  mp_s_axis_tready_converter_5 = NULL;
  mp_s_axis_tdata_converter_5 = NULL;
  mp_s_axis_tstrb_converter_5 = NULL;
  mp_s_axis_tkeep_converter_5 = NULL;
  mp_s_axis_tlast_converter_5 = NULL;
  mp_s_axis_tid_converter_5 = NULL;
  mp_s_axis_tdest_converter_5 = NULL;
  mp_s_axis_tuser_converter_5 = NULL;
  mp_M05_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_5 = NULL;
  mp_m_axis_tready_converter_5 = NULL;
  mp_m_axis_tdata_converter_5 = NULL;
  mp_m_axis_tstrb_converter_5 = NULL;
  mp_m_axis_tkeep_converter_5 = NULL;
  mp_m_axis_tlast_converter_5 = NULL;
  mp_m_axis_tid_converter_5 = NULL;
  mp_m_axis_tdest_converter_5 = NULL;
  mp_m_axis_tuser_converter_5 = NULL;
  mp_S06_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_6 = NULL;
  mp_s_axis_tready_converter_6 = NULL;
  mp_s_axis_tdata_converter_6 = NULL;
  mp_s_axis_tstrb_converter_6 = NULL;
  mp_s_axis_tkeep_converter_6 = NULL;
  mp_s_axis_tlast_converter_6 = NULL;
  mp_s_axis_tid_converter_6 = NULL;
  mp_s_axis_tdest_converter_6 = NULL;
  mp_s_axis_tuser_converter_6 = NULL;
  mp_M06_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_6 = NULL;
  mp_m_axis_tready_converter_6 = NULL;
  mp_m_axis_tdata_converter_6 = NULL;
  mp_m_axis_tstrb_converter_6 = NULL;
  mp_m_axis_tkeep_converter_6 = NULL;
  mp_m_axis_tlast_converter_6 = NULL;
  mp_m_axis_tid_converter_6 = NULL;
  mp_m_axis_tdest_converter_6 = NULL;
  mp_m_axis_tuser_converter_6 = NULL;
  mp_S07_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_7 = NULL;
  mp_s_axis_tready_converter_7 = NULL;
  mp_s_axis_tdata_converter_7 = NULL;
  mp_s_axis_tstrb_converter_7 = NULL;
  mp_s_axis_tkeep_converter_7 = NULL;
  mp_s_axis_tlast_converter_7 = NULL;
  mp_s_axis_tid_converter_7 = NULL;
  mp_s_axis_tdest_converter_7 = NULL;
  mp_s_axis_tuser_converter_7 = NULL;
  mp_M07_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_7 = NULL;
  mp_m_axis_tready_converter_7 = NULL;
  mp_m_axis_tdata_converter_7 = NULL;
  mp_m_axis_tstrb_converter_7 = NULL;
  mp_m_axis_tkeep_converter_7 = NULL;
  mp_m_axis_tlast_converter_7 = NULL;
  mp_m_axis_tid_converter_7 = NULL;
  mp_m_axis_tdest_converter_7 = NULL;
  mp_m_axis_tuser_converter_7 = NULL;
  mp_S08_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_8 = NULL;
  mp_s_axis_tready_converter_8 = NULL;
  mp_s_axis_tdata_converter_8 = NULL;
  mp_s_axis_tstrb_converter_8 = NULL;
  mp_s_axis_tkeep_converter_8 = NULL;
  mp_s_axis_tlast_converter_8 = NULL;
  mp_s_axis_tid_converter_8 = NULL;
  mp_s_axis_tdest_converter_8 = NULL;
  mp_s_axis_tuser_converter_8 = NULL;
  mp_M08_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_8 = NULL;
  mp_m_axis_tready_converter_8 = NULL;
  mp_m_axis_tdata_converter_8 = NULL;
  mp_m_axis_tstrb_converter_8 = NULL;
  mp_m_axis_tkeep_converter_8 = NULL;
  mp_m_axis_tlast_converter_8 = NULL;
  mp_m_axis_tid_converter_8 = NULL;
  mp_m_axis_tdest_converter_8 = NULL;
  mp_m_axis_tuser_converter_8 = NULL;
  mp_S09_AXIS_transactor = NULL;
  mp_s_axis_tvalid_converter_9 = NULL;
  mp_s_axis_tready_converter_9 = NULL;
  mp_s_axis_tdata_converter_9 = NULL;
  mp_s_axis_tstrb_converter_9 = NULL;
  mp_s_axis_tkeep_converter_9 = NULL;
  mp_s_axis_tlast_converter_9 = NULL;
  mp_s_axis_tid_converter_9 = NULL;
  mp_s_axis_tdest_converter_9 = NULL;
  mp_s_axis_tuser_converter_9 = NULL;
  mp_M09_AXIS_transactor = NULL;
  mp_m_axis_tvalid_converter_9 = NULL;
  mp_m_axis_tready_converter_9 = NULL;
  mp_m_axis_tdata_converter_9 = NULL;
  mp_m_axis_tstrb_converter_9 = NULL;
  mp_m_axis_tkeep_converter_9 = NULL;
  mp_m_axis_tlast_converter_9 = NULL;
  mp_m_axis_tid_converter_9 = NULL;
  mp_m_axis_tdest_converter_9 = NULL;
  mp_m_axis_tuser_converter_9 = NULL;
  mp_S_AXI_CTRL_transactor = NULL;

  // initialize port junctures
  mp_m_axis_concat_tdata = NULL;
  mp_m_axis_concat_tdest = NULL;
  mp_m_axis_concat_tid = NULL;
  mp_m_axis_concat_tkeep = NULL;
  mp_m_axis_concat_tlast = NULL;
  mp_m_axis_concat_tstrb = NULL;
  mp_m_axis_concat_tuser = NULL;
  mp_m_axis_concat_tvalid = NULL;
  mp_m_axis_split_tready = NULL;
  mp_s_axis_concat_tready = NULL;
  mp_s_axis_split_tdata = NULL;
  mp_s_axis_split_tdest = NULL;
  mp_s_axis_split_tid = NULL;
  mp_s_axis_split_tkeep = NULL;
  mp_s_axis_split_tlast = NULL;
  mp_s_axis_split_tstrb = NULL;
  mp_s_axis_split_tuser = NULL;
  mp_s_axis_split_tvalid = NULL;

  // Instantiate Socket Stubs

  // configure S00_AXIS_transactor
    xsc::common_cpp::properties S00_AXIS_transactor_param_props;
    S00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S00_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S00_AXIS_transactor", S00_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_0");
  mp_s_axis_split_tvalid = new xsc::xsc_split<10, 10>("s_axis_split_tvalid");
  mp_s_axis_split_tvalid->in_port(s_axis_tvalid);
  mp_s_axis_split_tvalid->out_port[0](s_axis_split_tvalid_out_0);
    mp_s_axis_split_tvalid->add_mask(0,1,0);
  mp_s_axis_tvalid_converter_0->vector_in(s_axis_split_tvalid_out_0);
  mp_s_axis_tvalid_converter_0->scalar_out(m_s_axis_tvalid_converter_0_signal);
  mp_S00_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_0_signal);
  mp_s_axis_tready_converter_0 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_0");
  mp_s_axis_concat_tready = new xsc::xsc_concatenator<10, 10>("s_axis_concat_tready");
  mp_s_axis_concat_tready->in_port[0](s_axis_concat_tready_out_0);
  mp_s_axis_concat_tready->out_port(s_axis_tready);
    mp_s_axis_concat_tready->offset_port(0, 0);
  mp_s_axis_tready_converter_0->scalar_in(m_s_axis_tready_converter_0_signal);
  mp_s_axis_tready_converter_0->vector_out(s_axis_concat_tready_out_0);
  mp_S00_AXIS_transactor->TREADY(m_s_axis_tready_converter_0_signal);
  mp_s_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_0");
  mp_s_axis_split_tdata = new xsc::xsc_split<640, 10>("s_axis_split_tdata");
  mp_s_axis_split_tdata->in_port(s_axis_tdata);
  mp_s_axis_split_tdata->out_port[0](s_axis_split_tdata_out_0);
    mp_s_axis_split_tdata->add_mask(0,64,0);
  mp_s_axis_tdata_converter_0->vector_in(s_axis_split_tdata_out_0);
  mp_s_axis_tdata_converter_0->vector_out(m_s_axis_tdata_converter_0_signal);
  mp_S00_AXIS_transactor->TDATA(m_s_axis_tdata_converter_0_signal);
  mp_s_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_0");
  mp_s_axis_split_tstrb = new xsc::xsc_split<80, 10>("s_axis_split_tstrb");
  mp_s_axis_split_tstrb->in_port(s_axis_tstrb);
  mp_s_axis_split_tstrb->out_port[0](s_axis_split_tstrb_out_0);
    mp_s_axis_split_tstrb->add_mask(0,8,0);
  mp_s_axis_tstrb_converter_0->vector_in(s_axis_split_tstrb_out_0);
  mp_s_axis_tstrb_converter_0->vector_out(m_s_axis_tstrb_converter_0_signal);
  mp_S00_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_0_signal);
  mp_s_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_0");
  mp_s_axis_split_tkeep = new xsc::xsc_split<80, 10>("s_axis_split_tkeep");
  mp_s_axis_split_tkeep->in_port(s_axis_tkeep);
  mp_s_axis_split_tkeep->out_port[0](s_axis_split_tkeep_out_0);
    mp_s_axis_split_tkeep->add_mask(0,8,0);
  mp_s_axis_tkeep_converter_0->vector_in(s_axis_split_tkeep_out_0);
  mp_s_axis_tkeep_converter_0->vector_out(m_s_axis_tkeep_converter_0_signal);
  mp_S00_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_0_signal);
  mp_s_axis_tlast_converter_0 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_0");
  mp_s_axis_split_tlast = new xsc::xsc_split<10, 10>("s_axis_split_tlast");
  mp_s_axis_split_tlast->in_port(s_axis_tlast);
  mp_s_axis_split_tlast->out_port[0](s_axis_split_tlast_out_0);
    mp_s_axis_split_tlast->add_mask(0,1,0);
  mp_s_axis_tlast_converter_0->vector_in(s_axis_split_tlast_out_0);
  mp_s_axis_tlast_converter_0->scalar_out(m_s_axis_tlast_converter_0_signal);
  mp_S00_AXIS_transactor->TLAST(m_s_axis_tlast_converter_0_signal);
  mp_s_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_0");
  mp_s_axis_split_tid = new xsc::xsc_split<10, 10>("s_axis_split_tid");
  mp_s_axis_split_tid->in_port(s_axis_tid);
  mp_s_axis_split_tid->out_port[0](s_axis_split_tid_out_0);
    mp_s_axis_split_tid->add_mask(0,1,0);
  mp_s_axis_tid_converter_0->vector_in(s_axis_split_tid_out_0);
  mp_s_axis_tid_converter_0->vector_out(m_s_axis_tid_converter_0_signal);
  mp_S00_AXIS_transactor->TID(m_s_axis_tid_converter_0_signal);
  mp_s_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_0");
  mp_s_axis_split_tdest = new xsc::xsc_split<40, 10>("s_axis_split_tdest");
  mp_s_axis_split_tdest->in_port(s_axis_tdest);
  mp_s_axis_split_tdest->out_port[0](s_axis_split_tdest_out_0);
    mp_s_axis_split_tdest->add_mask(0,4,0);
  mp_s_axis_tdest_converter_0->vector_in(s_axis_split_tdest_out_0);
  mp_s_axis_tdest_converter_0->vector_out(m_s_axis_tdest_converter_0_signal);
  mp_S00_AXIS_transactor->TDEST(m_s_axis_tdest_converter_0_signal);
  mp_s_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_0");
  mp_s_axis_split_tuser = new xsc::xsc_split<10, 10>("s_axis_split_tuser");
  mp_s_axis_split_tuser->in_port(s_axis_tuser);
  mp_s_axis_split_tuser->out_port[0](s_axis_split_tuser_out_0);
    mp_s_axis_split_tuser->add_mask(0,1,0);
  mp_s_axis_tuser_converter_0->vector_in(s_axis_split_tuser_out_0);
  mp_s_axis_tuser_converter_0->vector_out(m_s_axis_tuser_converter_0_signal);
  mp_S00_AXIS_transactor->TUSER(m_s_axis_tuser_converter_0_signal);
  mp_S00_AXIS_transactor->CLK(aclk);
  mp_S00_AXIS_transactor->RST(aresetn);
  // configure M00_AXIS_transactor
    xsc::common_cpp::properties M00_AXIS_transactor_param_props;
    M00_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M00_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M00_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M00_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M00_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M00_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M00_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M00_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M00_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M00_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M00_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M00_AXIS_transactor", M00_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_0");
  mp_m_axis_concat_tvalid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tvalid");
  mp_m_axis_concat_tvalid->in_port[0](m_axis_concat_tvalid_out_0);
  mp_m_axis_concat_tvalid->out_port(m_axis_tvalid);
    mp_m_axis_concat_tvalid->offset_port(0, 0);
  mp_m_axis_tvalid_converter_0->scalar_in(m_m_axis_tvalid_converter_0_signal);
  mp_m_axis_tvalid_converter_0->vector_out(m_axis_concat_tvalid_out_0);
  mp_M00_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_0_signal);
  mp_m_axis_tready_converter_0 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_0");
  mp_m_axis_split_tready = new xsc::xsc_split<10, 10>("m_axis_split_tready");
  mp_m_axis_split_tready->in_port(m_axis_tready);
  mp_m_axis_split_tready->out_port[0](m_axis_split_tready_out_0);
    mp_m_axis_split_tready->add_mask(0,1,0);
  mp_m_axis_tready_converter_0->vector_in(m_axis_split_tready_out_0);
  mp_m_axis_tready_converter_0->scalar_out(m_m_axis_tready_converter_0_signal);
  mp_M00_AXIS_transactor->TREADY(m_m_axis_tready_converter_0_signal);
  mp_m_axis_tdata_converter_0 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_0");
  mp_m_axis_concat_tdata = new xsc::xsc_concatenator<640, 10>("m_axis_concat_tdata");
  mp_m_axis_concat_tdata->in_port[0](m_axis_concat_tdata_out_0);
  mp_m_axis_concat_tdata->out_port(m_axis_tdata);
    mp_m_axis_concat_tdata->offset_port(0, 0);
  mp_m_axis_tdata_converter_0->vector_in(m_m_axis_tdata_converter_0_signal);
  mp_m_axis_tdata_converter_0->vector_out(m_axis_concat_tdata_out_0);
  mp_M00_AXIS_transactor->TDATA(m_m_axis_tdata_converter_0_signal);
  mp_m_axis_tstrb_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_0");
  mp_m_axis_concat_tstrb = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tstrb");
  mp_m_axis_concat_tstrb->in_port[0](m_axis_concat_tstrb_out_0);
  mp_m_axis_concat_tstrb->out_port(m_axis_tstrb);
    mp_m_axis_concat_tstrb->offset_port(0, 0);
  mp_m_axis_tstrb_converter_0->vector_in(m_m_axis_tstrb_converter_0_signal);
  mp_m_axis_tstrb_converter_0->vector_out(m_axis_concat_tstrb_out_0);
  mp_M00_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_0_signal);
  mp_m_axis_tkeep_converter_0 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_0");
  mp_m_axis_concat_tkeep = new xsc::xsc_concatenator<80, 10>("m_axis_concat_tkeep");
  mp_m_axis_concat_tkeep->in_port[0](m_axis_concat_tkeep_out_0);
  mp_m_axis_concat_tkeep->out_port(m_axis_tkeep);
    mp_m_axis_concat_tkeep->offset_port(0, 0);
  mp_m_axis_tkeep_converter_0->vector_in(m_m_axis_tkeep_converter_0_signal);
  mp_m_axis_tkeep_converter_0->vector_out(m_axis_concat_tkeep_out_0);
  mp_M00_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_0_signal);
  mp_m_axis_tlast_converter_0 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_0");
  mp_m_axis_concat_tlast = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tlast");
  mp_m_axis_concat_tlast->in_port[0](m_axis_concat_tlast_out_0);
  mp_m_axis_concat_tlast->out_port(m_axis_tlast);
    mp_m_axis_concat_tlast->offset_port(0, 0);
  mp_m_axis_tlast_converter_0->scalar_in(m_m_axis_tlast_converter_0_signal);
  mp_m_axis_tlast_converter_0->vector_out(m_axis_concat_tlast_out_0);
  mp_M00_AXIS_transactor->TLAST(m_m_axis_tlast_converter_0_signal);
  mp_m_axis_tid_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_0");
  mp_m_axis_concat_tid = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tid");
  mp_m_axis_concat_tid->in_port[0](m_axis_concat_tid_out_0);
  mp_m_axis_concat_tid->out_port(m_axis_tid);
    mp_m_axis_concat_tid->offset_port(0, 0);
  mp_m_axis_tid_converter_0->vector_in(m_m_axis_tid_converter_0_signal);
  mp_m_axis_tid_converter_0->vector_out(m_axis_concat_tid_out_0);
  mp_M00_AXIS_transactor->TID(m_m_axis_tid_converter_0_signal);
  mp_m_axis_tdest_converter_0 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_0");
  mp_m_axis_concat_tdest = new xsc::xsc_concatenator<40, 10>("m_axis_concat_tdest");
  mp_m_axis_concat_tdest->in_port[0](m_axis_concat_tdest_out_0);
  mp_m_axis_concat_tdest->out_port(m_axis_tdest);
    mp_m_axis_concat_tdest->offset_port(0, 0);
  mp_m_axis_tdest_converter_0->vector_in(m_m_axis_tdest_converter_0_signal);
  mp_m_axis_tdest_converter_0->vector_out(m_axis_concat_tdest_out_0);
  mp_M00_AXIS_transactor->TDEST(m_m_axis_tdest_converter_0_signal);
  mp_m_axis_tuser_converter_0 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_0");
  mp_m_axis_concat_tuser = new xsc::xsc_concatenator<10, 10>("m_axis_concat_tuser");
  mp_m_axis_concat_tuser->in_port[0](m_axis_concat_tuser_out_0);
  mp_m_axis_concat_tuser->out_port(m_axis_tuser);
    mp_m_axis_concat_tuser->offset_port(0, 0);
  mp_m_axis_tuser_converter_0->vector_in(m_m_axis_tuser_converter_0_signal);
  mp_m_axis_tuser_converter_0->vector_out(m_axis_concat_tuser_out_0);
  mp_M00_AXIS_transactor->TUSER(m_m_axis_tuser_converter_0_signal);
  mp_M00_AXIS_transactor->CLK(aclk);
  mp_M00_AXIS_transactor->RST(aresetn);
  // configure S01_AXIS_transactor
    xsc::common_cpp::properties S01_AXIS_transactor_param_props;
    S01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S01_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S01_AXIS_transactor", S01_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_1");
  
  mp_s_axis_split_tvalid->out_port[1](s_axis_split_tvalid_out_1);
    mp_s_axis_split_tvalid->add_mask(1,2,1);
  mp_s_axis_tvalid_converter_1->vector_in(s_axis_split_tvalid_out_1);
  mp_s_axis_tvalid_converter_1->scalar_out(m_s_axis_tvalid_converter_1_signal);
  mp_S01_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_1_signal);
  mp_s_axis_tready_converter_1 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_1");
  mp_s_axis_concat_tready->in_port[1](s_axis_concat_tready_out_1);
  mp_s_axis_concat_tready->offset_port(1, 1);
  mp_s_axis_tready_converter_1->scalar_in(m_s_axis_tready_converter_1_signal);
  mp_s_axis_tready_converter_1->vector_out(s_axis_concat_tready_out_1);
  mp_S01_AXIS_transactor->TREADY(m_s_axis_tready_converter_1_signal);
  mp_s_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_1");
  
  mp_s_axis_split_tdata->out_port[1](s_axis_split_tdata_out_1);
    mp_s_axis_split_tdata->add_mask(1,128,64);
  mp_s_axis_tdata_converter_1->vector_in(s_axis_split_tdata_out_1);
  mp_s_axis_tdata_converter_1->vector_out(m_s_axis_tdata_converter_1_signal);
  mp_S01_AXIS_transactor->TDATA(m_s_axis_tdata_converter_1_signal);
  mp_s_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_1");
  
  mp_s_axis_split_tstrb->out_port[1](s_axis_split_tstrb_out_1);
    mp_s_axis_split_tstrb->add_mask(1,16,8);
  mp_s_axis_tstrb_converter_1->vector_in(s_axis_split_tstrb_out_1);
  mp_s_axis_tstrb_converter_1->vector_out(m_s_axis_tstrb_converter_1_signal);
  mp_S01_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_1_signal);
  mp_s_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_1");
  
  mp_s_axis_split_tkeep->out_port[1](s_axis_split_tkeep_out_1);
    mp_s_axis_split_tkeep->add_mask(1,16,8);
  mp_s_axis_tkeep_converter_1->vector_in(s_axis_split_tkeep_out_1);
  mp_s_axis_tkeep_converter_1->vector_out(m_s_axis_tkeep_converter_1_signal);
  mp_S01_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_1_signal);
  mp_s_axis_tlast_converter_1 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_1");
  
  mp_s_axis_split_tlast->out_port[1](s_axis_split_tlast_out_1);
    mp_s_axis_split_tlast->add_mask(1,2,1);
  mp_s_axis_tlast_converter_1->vector_in(s_axis_split_tlast_out_1);
  mp_s_axis_tlast_converter_1->scalar_out(m_s_axis_tlast_converter_1_signal);
  mp_S01_AXIS_transactor->TLAST(m_s_axis_tlast_converter_1_signal);
  mp_s_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_1");
  
  mp_s_axis_split_tid->out_port[1](s_axis_split_tid_out_1);
    mp_s_axis_split_tid->add_mask(1,2,1);
  mp_s_axis_tid_converter_1->vector_in(s_axis_split_tid_out_1);
  mp_s_axis_tid_converter_1->vector_out(m_s_axis_tid_converter_1_signal);
  mp_S01_AXIS_transactor->TID(m_s_axis_tid_converter_1_signal);
  mp_s_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_1");
  
  mp_s_axis_split_tdest->out_port[1](s_axis_split_tdest_out_1);
    mp_s_axis_split_tdest->add_mask(1,8,4);
  mp_s_axis_tdest_converter_1->vector_in(s_axis_split_tdest_out_1);
  mp_s_axis_tdest_converter_1->vector_out(m_s_axis_tdest_converter_1_signal);
  mp_S01_AXIS_transactor->TDEST(m_s_axis_tdest_converter_1_signal);
  mp_s_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_1");
  
  mp_s_axis_split_tuser->out_port[1](s_axis_split_tuser_out_1);
    mp_s_axis_split_tuser->add_mask(1,2,1);
  mp_s_axis_tuser_converter_1->vector_in(s_axis_split_tuser_out_1);
  mp_s_axis_tuser_converter_1->vector_out(m_s_axis_tuser_converter_1_signal);
  mp_S01_AXIS_transactor->TUSER(m_s_axis_tuser_converter_1_signal);
  mp_S01_AXIS_transactor->CLK(aclk);
  mp_S01_AXIS_transactor->RST(aresetn);
  // configure M01_AXIS_transactor
    xsc::common_cpp::properties M01_AXIS_transactor_param_props;
    M01_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M01_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M01_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M01_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M01_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M01_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M01_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M01_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M01_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M01_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M01_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M01_AXIS_transactor", M01_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_1");
  mp_m_axis_concat_tvalid->in_port[1](m_axis_concat_tvalid_out_1);
  mp_m_axis_concat_tvalid->offset_port(1, 1);
  mp_m_axis_tvalid_converter_1->scalar_in(m_m_axis_tvalid_converter_1_signal);
  mp_m_axis_tvalid_converter_1->vector_out(m_axis_concat_tvalid_out_1);
  mp_M01_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_1_signal);
  mp_m_axis_tready_converter_1 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_1");
  
  mp_m_axis_split_tready->out_port[1](m_axis_split_tready_out_1);
    mp_m_axis_split_tready->add_mask(1,2,1);
  mp_m_axis_tready_converter_1->vector_in(m_axis_split_tready_out_1);
  mp_m_axis_tready_converter_1->scalar_out(m_m_axis_tready_converter_1_signal);
  mp_M01_AXIS_transactor->TREADY(m_m_axis_tready_converter_1_signal);
  mp_m_axis_tdata_converter_1 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_1");
  mp_m_axis_concat_tdata->in_port[1](m_axis_concat_tdata_out_1);
  mp_m_axis_concat_tdata->offset_port(1, 64);
  mp_m_axis_tdata_converter_1->vector_in(m_m_axis_tdata_converter_1_signal);
  mp_m_axis_tdata_converter_1->vector_out(m_axis_concat_tdata_out_1);
  mp_M01_AXIS_transactor->TDATA(m_m_axis_tdata_converter_1_signal);
  mp_m_axis_tstrb_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_1");
  mp_m_axis_concat_tstrb->in_port[1](m_axis_concat_tstrb_out_1);
  mp_m_axis_concat_tstrb->offset_port(1, 8);
  mp_m_axis_tstrb_converter_1->vector_in(m_m_axis_tstrb_converter_1_signal);
  mp_m_axis_tstrb_converter_1->vector_out(m_axis_concat_tstrb_out_1);
  mp_M01_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_1_signal);
  mp_m_axis_tkeep_converter_1 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_1");
  mp_m_axis_concat_tkeep->in_port[1](m_axis_concat_tkeep_out_1);
  mp_m_axis_concat_tkeep->offset_port(1, 8);
  mp_m_axis_tkeep_converter_1->vector_in(m_m_axis_tkeep_converter_1_signal);
  mp_m_axis_tkeep_converter_1->vector_out(m_axis_concat_tkeep_out_1);
  mp_M01_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_1_signal);
  mp_m_axis_tlast_converter_1 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_1");
  mp_m_axis_concat_tlast->in_port[1](m_axis_concat_tlast_out_1);
  mp_m_axis_concat_tlast->offset_port(1, 1);
  mp_m_axis_tlast_converter_1->scalar_in(m_m_axis_tlast_converter_1_signal);
  mp_m_axis_tlast_converter_1->vector_out(m_axis_concat_tlast_out_1);
  mp_M01_AXIS_transactor->TLAST(m_m_axis_tlast_converter_1_signal);
  mp_m_axis_tid_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_1");
  mp_m_axis_concat_tid->in_port[1](m_axis_concat_tid_out_1);
  mp_m_axis_concat_tid->offset_port(1, 1);
  mp_m_axis_tid_converter_1->vector_in(m_m_axis_tid_converter_1_signal);
  mp_m_axis_tid_converter_1->vector_out(m_axis_concat_tid_out_1);
  mp_M01_AXIS_transactor->TID(m_m_axis_tid_converter_1_signal);
  mp_m_axis_tdest_converter_1 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_1");
  mp_m_axis_concat_tdest->in_port[1](m_axis_concat_tdest_out_1);
  mp_m_axis_concat_tdest->offset_port(1, 4);
  mp_m_axis_tdest_converter_1->vector_in(m_m_axis_tdest_converter_1_signal);
  mp_m_axis_tdest_converter_1->vector_out(m_axis_concat_tdest_out_1);
  mp_M01_AXIS_transactor->TDEST(m_m_axis_tdest_converter_1_signal);
  mp_m_axis_tuser_converter_1 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_1");
  mp_m_axis_concat_tuser->in_port[1](m_axis_concat_tuser_out_1);
  mp_m_axis_concat_tuser->offset_port(1, 1);
  mp_m_axis_tuser_converter_1->vector_in(m_m_axis_tuser_converter_1_signal);
  mp_m_axis_tuser_converter_1->vector_out(m_axis_concat_tuser_out_1);
  mp_M01_AXIS_transactor->TUSER(m_m_axis_tuser_converter_1_signal);
  mp_M01_AXIS_transactor->CLK(aclk);
  mp_M01_AXIS_transactor->RST(aresetn);
  // configure S02_AXIS_transactor
    xsc::common_cpp::properties S02_AXIS_transactor_param_props;
    S02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S02_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S02_AXIS_transactor", S02_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_2");
  
  mp_s_axis_split_tvalid->out_port[2](s_axis_split_tvalid_out_2);
    mp_s_axis_split_tvalid->add_mask(2,3,2);
  mp_s_axis_tvalid_converter_2->vector_in(s_axis_split_tvalid_out_2);
  mp_s_axis_tvalid_converter_2->scalar_out(m_s_axis_tvalid_converter_2_signal);
  mp_S02_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_2_signal);
  mp_s_axis_tready_converter_2 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_2");
  mp_s_axis_concat_tready->in_port[2](s_axis_concat_tready_out_2);
  mp_s_axis_concat_tready->offset_port(2, 2);
  mp_s_axis_tready_converter_2->scalar_in(m_s_axis_tready_converter_2_signal);
  mp_s_axis_tready_converter_2->vector_out(s_axis_concat_tready_out_2);
  mp_S02_AXIS_transactor->TREADY(m_s_axis_tready_converter_2_signal);
  mp_s_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_2");
  
  mp_s_axis_split_tdata->out_port[2](s_axis_split_tdata_out_2);
    mp_s_axis_split_tdata->add_mask(2,192,128);
  mp_s_axis_tdata_converter_2->vector_in(s_axis_split_tdata_out_2);
  mp_s_axis_tdata_converter_2->vector_out(m_s_axis_tdata_converter_2_signal);
  mp_S02_AXIS_transactor->TDATA(m_s_axis_tdata_converter_2_signal);
  mp_s_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_2");
  
  mp_s_axis_split_tstrb->out_port[2](s_axis_split_tstrb_out_2);
    mp_s_axis_split_tstrb->add_mask(2,24,16);
  mp_s_axis_tstrb_converter_2->vector_in(s_axis_split_tstrb_out_2);
  mp_s_axis_tstrb_converter_2->vector_out(m_s_axis_tstrb_converter_2_signal);
  mp_S02_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_2_signal);
  mp_s_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_2");
  
  mp_s_axis_split_tkeep->out_port[2](s_axis_split_tkeep_out_2);
    mp_s_axis_split_tkeep->add_mask(2,24,16);
  mp_s_axis_tkeep_converter_2->vector_in(s_axis_split_tkeep_out_2);
  mp_s_axis_tkeep_converter_2->vector_out(m_s_axis_tkeep_converter_2_signal);
  mp_S02_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_2_signal);
  mp_s_axis_tlast_converter_2 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_2");
  
  mp_s_axis_split_tlast->out_port[2](s_axis_split_tlast_out_2);
    mp_s_axis_split_tlast->add_mask(2,3,2);
  mp_s_axis_tlast_converter_2->vector_in(s_axis_split_tlast_out_2);
  mp_s_axis_tlast_converter_2->scalar_out(m_s_axis_tlast_converter_2_signal);
  mp_S02_AXIS_transactor->TLAST(m_s_axis_tlast_converter_2_signal);
  mp_s_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_2");
  
  mp_s_axis_split_tid->out_port[2](s_axis_split_tid_out_2);
    mp_s_axis_split_tid->add_mask(2,3,2);
  mp_s_axis_tid_converter_2->vector_in(s_axis_split_tid_out_2);
  mp_s_axis_tid_converter_2->vector_out(m_s_axis_tid_converter_2_signal);
  mp_S02_AXIS_transactor->TID(m_s_axis_tid_converter_2_signal);
  mp_s_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_2");
  
  mp_s_axis_split_tdest->out_port[2](s_axis_split_tdest_out_2);
    mp_s_axis_split_tdest->add_mask(2,12,8);
  mp_s_axis_tdest_converter_2->vector_in(s_axis_split_tdest_out_2);
  mp_s_axis_tdest_converter_2->vector_out(m_s_axis_tdest_converter_2_signal);
  mp_S02_AXIS_transactor->TDEST(m_s_axis_tdest_converter_2_signal);
  mp_s_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_2");
  
  mp_s_axis_split_tuser->out_port[2](s_axis_split_tuser_out_2);
    mp_s_axis_split_tuser->add_mask(2,3,2);
  mp_s_axis_tuser_converter_2->vector_in(s_axis_split_tuser_out_2);
  mp_s_axis_tuser_converter_2->vector_out(m_s_axis_tuser_converter_2_signal);
  mp_S02_AXIS_transactor->TUSER(m_s_axis_tuser_converter_2_signal);
  mp_S02_AXIS_transactor->CLK(aclk);
  mp_S02_AXIS_transactor->RST(aresetn);
  // configure M02_AXIS_transactor
    xsc::common_cpp::properties M02_AXIS_transactor_param_props;
    M02_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M02_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M02_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M02_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M02_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M02_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M02_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M02_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M02_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M02_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M02_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M02_AXIS_transactor", M02_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_2");
  mp_m_axis_concat_tvalid->in_port[2](m_axis_concat_tvalid_out_2);
  mp_m_axis_concat_tvalid->offset_port(2, 2);
  mp_m_axis_tvalid_converter_2->scalar_in(m_m_axis_tvalid_converter_2_signal);
  mp_m_axis_tvalid_converter_2->vector_out(m_axis_concat_tvalid_out_2);
  mp_M02_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_2_signal);
  mp_m_axis_tready_converter_2 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_2");
  
  mp_m_axis_split_tready->out_port[2](m_axis_split_tready_out_2);
    mp_m_axis_split_tready->add_mask(2,3,2);
  mp_m_axis_tready_converter_2->vector_in(m_axis_split_tready_out_2);
  mp_m_axis_tready_converter_2->scalar_out(m_m_axis_tready_converter_2_signal);
  mp_M02_AXIS_transactor->TREADY(m_m_axis_tready_converter_2_signal);
  mp_m_axis_tdata_converter_2 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_2");
  mp_m_axis_concat_tdata->in_port[2](m_axis_concat_tdata_out_2);
  mp_m_axis_concat_tdata->offset_port(2, 128);
  mp_m_axis_tdata_converter_2->vector_in(m_m_axis_tdata_converter_2_signal);
  mp_m_axis_tdata_converter_2->vector_out(m_axis_concat_tdata_out_2);
  mp_M02_AXIS_transactor->TDATA(m_m_axis_tdata_converter_2_signal);
  mp_m_axis_tstrb_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_2");
  mp_m_axis_concat_tstrb->in_port[2](m_axis_concat_tstrb_out_2);
  mp_m_axis_concat_tstrb->offset_port(2, 16);
  mp_m_axis_tstrb_converter_2->vector_in(m_m_axis_tstrb_converter_2_signal);
  mp_m_axis_tstrb_converter_2->vector_out(m_axis_concat_tstrb_out_2);
  mp_M02_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_2_signal);
  mp_m_axis_tkeep_converter_2 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_2");
  mp_m_axis_concat_tkeep->in_port[2](m_axis_concat_tkeep_out_2);
  mp_m_axis_concat_tkeep->offset_port(2, 16);
  mp_m_axis_tkeep_converter_2->vector_in(m_m_axis_tkeep_converter_2_signal);
  mp_m_axis_tkeep_converter_2->vector_out(m_axis_concat_tkeep_out_2);
  mp_M02_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_2_signal);
  mp_m_axis_tlast_converter_2 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_2");
  mp_m_axis_concat_tlast->in_port[2](m_axis_concat_tlast_out_2);
  mp_m_axis_concat_tlast->offset_port(2, 2);
  mp_m_axis_tlast_converter_2->scalar_in(m_m_axis_tlast_converter_2_signal);
  mp_m_axis_tlast_converter_2->vector_out(m_axis_concat_tlast_out_2);
  mp_M02_AXIS_transactor->TLAST(m_m_axis_tlast_converter_2_signal);
  mp_m_axis_tid_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_2");
  mp_m_axis_concat_tid->in_port[2](m_axis_concat_tid_out_2);
  mp_m_axis_concat_tid->offset_port(2, 2);
  mp_m_axis_tid_converter_2->vector_in(m_m_axis_tid_converter_2_signal);
  mp_m_axis_tid_converter_2->vector_out(m_axis_concat_tid_out_2);
  mp_M02_AXIS_transactor->TID(m_m_axis_tid_converter_2_signal);
  mp_m_axis_tdest_converter_2 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_2");
  mp_m_axis_concat_tdest->in_port[2](m_axis_concat_tdest_out_2);
  mp_m_axis_concat_tdest->offset_port(2, 8);
  mp_m_axis_tdest_converter_2->vector_in(m_m_axis_tdest_converter_2_signal);
  mp_m_axis_tdest_converter_2->vector_out(m_axis_concat_tdest_out_2);
  mp_M02_AXIS_transactor->TDEST(m_m_axis_tdest_converter_2_signal);
  mp_m_axis_tuser_converter_2 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_2");
  mp_m_axis_concat_tuser->in_port[2](m_axis_concat_tuser_out_2);
  mp_m_axis_concat_tuser->offset_port(2, 2);
  mp_m_axis_tuser_converter_2->vector_in(m_m_axis_tuser_converter_2_signal);
  mp_m_axis_tuser_converter_2->vector_out(m_axis_concat_tuser_out_2);
  mp_M02_AXIS_transactor->TUSER(m_m_axis_tuser_converter_2_signal);
  mp_M02_AXIS_transactor->CLK(aclk);
  mp_M02_AXIS_transactor->RST(aresetn);
  // configure S03_AXIS_transactor
    xsc::common_cpp::properties S03_AXIS_transactor_param_props;
    S03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S03_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S03_AXIS_transactor", S03_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_3");
  
  mp_s_axis_split_tvalid->out_port[3](s_axis_split_tvalid_out_3);
    mp_s_axis_split_tvalid->add_mask(3,4,3);
  mp_s_axis_tvalid_converter_3->vector_in(s_axis_split_tvalid_out_3);
  mp_s_axis_tvalid_converter_3->scalar_out(m_s_axis_tvalid_converter_3_signal);
  mp_S03_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_3_signal);
  mp_s_axis_tready_converter_3 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_3");
  mp_s_axis_concat_tready->in_port[3](s_axis_concat_tready_out_3);
  mp_s_axis_concat_tready->offset_port(3, 3);
  mp_s_axis_tready_converter_3->scalar_in(m_s_axis_tready_converter_3_signal);
  mp_s_axis_tready_converter_3->vector_out(s_axis_concat_tready_out_3);
  mp_S03_AXIS_transactor->TREADY(m_s_axis_tready_converter_3_signal);
  mp_s_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_3");
  
  mp_s_axis_split_tdata->out_port[3](s_axis_split_tdata_out_3);
    mp_s_axis_split_tdata->add_mask(3,256,192);
  mp_s_axis_tdata_converter_3->vector_in(s_axis_split_tdata_out_3);
  mp_s_axis_tdata_converter_3->vector_out(m_s_axis_tdata_converter_3_signal);
  mp_S03_AXIS_transactor->TDATA(m_s_axis_tdata_converter_3_signal);
  mp_s_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_3");
  
  mp_s_axis_split_tstrb->out_port[3](s_axis_split_tstrb_out_3);
    mp_s_axis_split_tstrb->add_mask(3,32,24);
  mp_s_axis_tstrb_converter_3->vector_in(s_axis_split_tstrb_out_3);
  mp_s_axis_tstrb_converter_3->vector_out(m_s_axis_tstrb_converter_3_signal);
  mp_S03_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_3_signal);
  mp_s_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_3");
  
  mp_s_axis_split_tkeep->out_port[3](s_axis_split_tkeep_out_3);
    mp_s_axis_split_tkeep->add_mask(3,32,24);
  mp_s_axis_tkeep_converter_3->vector_in(s_axis_split_tkeep_out_3);
  mp_s_axis_tkeep_converter_3->vector_out(m_s_axis_tkeep_converter_3_signal);
  mp_S03_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_3_signal);
  mp_s_axis_tlast_converter_3 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_3");
  
  mp_s_axis_split_tlast->out_port[3](s_axis_split_tlast_out_3);
    mp_s_axis_split_tlast->add_mask(3,4,3);
  mp_s_axis_tlast_converter_3->vector_in(s_axis_split_tlast_out_3);
  mp_s_axis_tlast_converter_3->scalar_out(m_s_axis_tlast_converter_3_signal);
  mp_S03_AXIS_transactor->TLAST(m_s_axis_tlast_converter_3_signal);
  mp_s_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_3");
  
  mp_s_axis_split_tid->out_port[3](s_axis_split_tid_out_3);
    mp_s_axis_split_tid->add_mask(3,4,3);
  mp_s_axis_tid_converter_3->vector_in(s_axis_split_tid_out_3);
  mp_s_axis_tid_converter_3->vector_out(m_s_axis_tid_converter_3_signal);
  mp_S03_AXIS_transactor->TID(m_s_axis_tid_converter_3_signal);
  mp_s_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_3");
  
  mp_s_axis_split_tdest->out_port[3](s_axis_split_tdest_out_3);
    mp_s_axis_split_tdest->add_mask(3,16,12);
  mp_s_axis_tdest_converter_3->vector_in(s_axis_split_tdest_out_3);
  mp_s_axis_tdest_converter_3->vector_out(m_s_axis_tdest_converter_3_signal);
  mp_S03_AXIS_transactor->TDEST(m_s_axis_tdest_converter_3_signal);
  mp_s_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_3");
  
  mp_s_axis_split_tuser->out_port[3](s_axis_split_tuser_out_3);
    mp_s_axis_split_tuser->add_mask(3,4,3);
  mp_s_axis_tuser_converter_3->vector_in(s_axis_split_tuser_out_3);
  mp_s_axis_tuser_converter_3->vector_out(m_s_axis_tuser_converter_3_signal);
  mp_S03_AXIS_transactor->TUSER(m_s_axis_tuser_converter_3_signal);
  mp_S03_AXIS_transactor->CLK(aclk);
  mp_S03_AXIS_transactor->RST(aresetn);
  // configure M03_AXIS_transactor
    xsc::common_cpp::properties M03_AXIS_transactor_param_props;
    M03_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M03_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M03_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M03_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M03_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M03_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M03_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M03_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M03_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M03_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M03_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M03_AXIS_transactor", M03_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_3");
  mp_m_axis_concat_tvalid->in_port[3](m_axis_concat_tvalid_out_3);
  mp_m_axis_concat_tvalid->offset_port(3, 3);
  mp_m_axis_tvalid_converter_3->scalar_in(m_m_axis_tvalid_converter_3_signal);
  mp_m_axis_tvalid_converter_3->vector_out(m_axis_concat_tvalid_out_3);
  mp_M03_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_3_signal);
  mp_m_axis_tready_converter_3 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_3");
  
  mp_m_axis_split_tready->out_port[3](m_axis_split_tready_out_3);
    mp_m_axis_split_tready->add_mask(3,4,3);
  mp_m_axis_tready_converter_3->vector_in(m_axis_split_tready_out_3);
  mp_m_axis_tready_converter_3->scalar_out(m_m_axis_tready_converter_3_signal);
  mp_M03_AXIS_transactor->TREADY(m_m_axis_tready_converter_3_signal);
  mp_m_axis_tdata_converter_3 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_3");
  mp_m_axis_concat_tdata->in_port[3](m_axis_concat_tdata_out_3);
  mp_m_axis_concat_tdata->offset_port(3, 192);
  mp_m_axis_tdata_converter_3->vector_in(m_m_axis_tdata_converter_3_signal);
  mp_m_axis_tdata_converter_3->vector_out(m_axis_concat_tdata_out_3);
  mp_M03_AXIS_transactor->TDATA(m_m_axis_tdata_converter_3_signal);
  mp_m_axis_tstrb_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_3");
  mp_m_axis_concat_tstrb->in_port[3](m_axis_concat_tstrb_out_3);
  mp_m_axis_concat_tstrb->offset_port(3, 24);
  mp_m_axis_tstrb_converter_3->vector_in(m_m_axis_tstrb_converter_3_signal);
  mp_m_axis_tstrb_converter_3->vector_out(m_axis_concat_tstrb_out_3);
  mp_M03_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_3_signal);
  mp_m_axis_tkeep_converter_3 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_3");
  mp_m_axis_concat_tkeep->in_port[3](m_axis_concat_tkeep_out_3);
  mp_m_axis_concat_tkeep->offset_port(3, 24);
  mp_m_axis_tkeep_converter_3->vector_in(m_m_axis_tkeep_converter_3_signal);
  mp_m_axis_tkeep_converter_3->vector_out(m_axis_concat_tkeep_out_3);
  mp_M03_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_3_signal);
  mp_m_axis_tlast_converter_3 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_3");
  mp_m_axis_concat_tlast->in_port[3](m_axis_concat_tlast_out_3);
  mp_m_axis_concat_tlast->offset_port(3, 3);
  mp_m_axis_tlast_converter_3->scalar_in(m_m_axis_tlast_converter_3_signal);
  mp_m_axis_tlast_converter_3->vector_out(m_axis_concat_tlast_out_3);
  mp_M03_AXIS_transactor->TLAST(m_m_axis_tlast_converter_3_signal);
  mp_m_axis_tid_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_3");
  mp_m_axis_concat_tid->in_port[3](m_axis_concat_tid_out_3);
  mp_m_axis_concat_tid->offset_port(3, 3);
  mp_m_axis_tid_converter_3->vector_in(m_m_axis_tid_converter_3_signal);
  mp_m_axis_tid_converter_3->vector_out(m_axis_concat_tid_out_3);
  mp_M03_AXIS_transactor->TID(m_m_axis_tid_converter_3_signal);
  mp_m_axis_tdest_converter_3 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_3");
  mp_m_axis_concat_tdest->in_port[3](m_axis_concat_tdest_out_3);
  mp_m_axis_concat_tdest->offset_port(3, 12);
  mp_m_axis_tdest_converter_3->vector_in(m_m_axis_tdest_converter_3_signal);
  mp_m_axis_tdest_converter_3->vector_out(m_axis_concat_tdest_out_3);
  mp_M03_AXIS_transactor->TDEST(m_m_axis_tdest_converter_3_signal);
  mp_m_axis_tuser_converter_3 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_3");
  mp_m_axis_concat_tuser->in_port[3](m_axis_concat_tuser_out_3);
  mp_m_axis_concat_tuser->offset_port(3, 3);
  mp_m_axis_tuser_converter_3->vector_in(m_m_axis_tuser_converter_3_signal);
  mp_m_axis_tuser_converter_3->vector_out(m_axis_concat_tuser_out_3);
  mp_M03_AXIS_transactor->TUSER(m_m_axis_tuser_converter_3_signal);
  mp_M03_AXIS_transactor->CLK(aclk);
  mp_M03_AXIS_transactor->RST(aresetn);
  // configure S04_AXIS_transactor
    xsc::common_cpp::properties S04_AXIS_transactor_param_props;
    S04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S04_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S04_AXIS_transactor", S04_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_4");
  
  mp_s_axis_split_tvalid->out_port[4](s_axis_split_tvalid_out_4);
    mp_s_axis_split_tvalid->add_mask(4,5,4);
  mp_s_axis_tvalid_converter_4->vector_in(s_axis_split_tvalid_out_4);
  mp_s_axis_tvalid_converter_4->scalar_out(m_s_axis_tvalid_converter_4_signal);
  mp_S04_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_4_signal);
  mp_s_axis_tready_converter_4 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_4");
  mp_s_axis_concat_tready->in_port[4](s_axis_concat_tready_out_4);
  mp_s_axis_concat_tready->offset_port(4, 4);
  mp_s_axis_tready_converter_4->scalar_in(m_s_axis_tready_converter_4_signal);
  mp_s_axis_tready_converter_4->vector_out(s_axis_concat_tready_out_4);
  mp_S04_AXIS_transactor->TREADY(m_s_axis_tready_converter_4_signal);
  mp_s_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_4");
  
  mp_s_axis_split_tdata->out_port[4](s_axis_split_tdata_out_4);
    mp_s_axis_split_tdata->add_mask(4,320,256);
  mp_s_axis_tdata_converter_4->vector_in(s_axis_split_tdata_out_4);
  mp_s_axis_tdata_converter_4->vector_out(m_s_axis_tdata_converter_4_signal);
  mp_S04_AXIS_transactor->TDATA(m_s_axis_tdata_converter_4_signal);
  mp_s_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_4");
  
  mp_s_axis_split_tstrb->out_port[4](s_axis_split_tstrb_out_4);
    mp_s_axis_split_tstrb->add_mask(4,40,32);
  mp_s_axis_tstrb_converter_4->vector_in(s_axis_split_tstrb_out_4);
  mp_s_axis_tstrb_converter_4->vector_out(m_s_axis_tstrb_converter_4_signal);
  mp_S04_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_4_signal);
  mp_s_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_4");
  
  mp_s_axis_split_tkeep->out_port[4](s_axis_split_tkeep_out_4);
    mp_s_axis_split_tkeep->add_mask(4,40,32);
  mp_s_axis_tkeep_converter_4->vector_in(s_axis_split_tkeep_out_4);
  mp_s_axis_tkeep_converter_4->vector_out(m_s_axis_tkeep_converter_4_signal);
  mp_S04_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_4_signal);
  mp_s_axis_tlast_converter_4 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_4");
  
  mp_s_axis_split_tlast->out_port[4](s_axis_split_tlast_out_4);
    mp_s_axis_split_tlast->add_mask(4,5,4);
  mp_s_axis_tlast_converter_4->vector_in(s_axis_split_tlast_out_4);
  mp_s_axis_tlast_converter_4->scalar_out(m_s_axis_tlast_converter_4_signal);
  mp_S04_AXIS_transactor->TLAST(m_s_axis_tlast_converter_4_signal);
  mp_s_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_4");
  
  mp_s_axis_split_tid->out_port[4](s_axis_split_tid_out_4);
    mp_s_axis_split_tid->add_mask(4,5,4);
  mp_s_axis_tid_converter_4->vector_in(s_axis_split_tid_out_4);
  mp_s_axis_tid_converter_4->vector_out(m_s_axis_tid_converter_4_signal);
  mp_S04_AXIS_transactor->TID(m_s_axis_tid_converter_4_signal);
  mp_s_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_4");
  
  mp_s_axis_split_tdest->out_port[4](s_axis_split_tdest_out_4);
    mp_s_axis_split_tdest->add_mask(4,20,16);
  mp_s_axis_tdest_converter_4->vector_in(s_axis_split_tdest_out_4);
  mp_s_axis_tdest_converter_4->vector_out(m_s_axis_tdest_converter_4_signal);
  mp_S04_AXIS_transactor->TDEST(m_s_axis_tdest_converter_4_signal);
  mp_s_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_4");
  
  mp_s_axis_split_tuser->out_port[4](s_axis_split_tuser_out_4);
    mp_s_axis_split_tuser->add_mask(4,5,4);
  mp_s_axis_tuser_converter_4->vector_in(s_axis_split_tuser_out_4);
  mp_s_axis_tuser_converter_4->vector_out(m_s_axis_tuser_converter_4_signal);
  mp_S04_AXIS_transactor->TUSER(m_s_axis_tuser_converter_4_signal);
  mp_S04_AXIS_transactor->CLK(aclk);
  mp_S04_AXIS_transactor->RST(aresetn);
  // configure M04_AXIS_transactor
    xsc::common_cpp::properties M04_AXIS_transactor_param_props;
    M04_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M04_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M04_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M04_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M04_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M04_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M04_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M04_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M04_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M04_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M04_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M04_AXIS_transactor", M04_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_4");
  mp_m_axis_concat_tvalid->in_port[4](m_axis_concat_tvalid_out_4);
  mp_m_axis_concat_tvalid->offset_port(4, 4);
  mp_m_axis_tvalid_converter_4->scalar_in(m_m_axis_tvalid_converter_4_signal);
  mp_m_axis_tvalid_converter_4->vector_out(m_axis_concat_tvalid_out_4);
  mp_M04_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_4_signal);
  mp_m_axis_tready_converter_4 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_4");
  
  mp_m_axis_split_tready->out_port[4](m_axis_split_tready_out_4);
    mp_m_axis_split_tready->add_mask(4,5,4);
  mp_m_axis_tready_converter_4->vector_in(m_axis_split_tready_out_4);
  mp_m_axis_tready_converter_4->scalar_out(m_m_axis_tready_converter_4_signal);
  mp_M04_AXIS_transactor->TREADY(m_m_axis_tready_converter_4_signal);
  mp_m_axis_tdata_converter_4 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_4");
  mp_m_axis_concat_tdata->in_port[4](m_axis_concat_tdata_out_4);
  mp_m_axis_concat_tdata->offset_port(4, 256);
  mp_m_axis_tdata_converter_4->vector_in(m_m_axis_tdata_converter_4_signal);
  mp_m_axis_tdata_converter_4->vector_out(m_axis_concat_tdata_out_4);
  mp_M04_AXIS_transactor->TDATA(m_m_axis_tdata_converter_4_signal);
  mp_m_axis_tstrb_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_4");
  mp_m_axis_concat_tstrb->in_port[4](m_axis_concat_tstrb_out_4);
  mp_m_axis_concat_tstrb->offset_port(4, 32);
  mp_m_axis_tstrb_converter_4->vector_in(m_m_axis_tstrb_converter_4_signal);
  mp_m_axis_tstrb_converter_4->vector_out(m_axis_concat_tstrb_out_4);
  mp_M04_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_4_signal);
  mp_m_axis_tkeep_converter_4 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_4");
  mp_m_axis_concat_tkeep->in_port[4](m_axis_concat_tkeep_out_4);
  mp_m_axis_concat_tkeep->offset_port(4, 32);
  mp_m_axis_tkeep_converter_4->vector_in(m_m_axis_tkeep_converter_4_signal);
  mp_m_axis_tkeep_converter_4->vector_out(m_axis_concat_tkeep_out_4);
  mp_M04_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_4_signal);
  mp_m_axis_tlast_converter_4 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_4");
  mp_m_axis_concat_tlast->in_port[4](m_axis_concat_tlast_out_4);
  mp_m_axis_concat_tlast->offset_port(4, 4);
  mp_m_axis_tlast_converter_4->scalar_in(m_m_axis_tlast_converter_4_signal);
  mp_m_axis_tlast_converter_4->vector_out(m_axis_concat_tlast_out_4);
  mp_M04_AXIS_transactor->TLAST(m_m_axis_tlast_converter_4_signal);
  mp_m_axis_tid_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_4");
  mp_m_axis_concat_tid->in_port[4](m_axis_concat_tid_out_4);
  mp_m_axis_concat_tid->offset_port(4, 4);
  mp_m_axis_tid_converter_4->vector_in(m_m_axis_tid_converter_4_signal);
  mp_m_axis_tid_converter_4->vector_out(m_axis_concat_tid_out_4);
  mp_M04_AXIS_transactor->TID(m_m_axis_tid_converter_4_signal);
  mp_m_axis_tdest_converter_4 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_4");
  mp_m_axis_concat_tdest->in_port[4](m_axis_concat_tdest_out_4);
  mp_m_axis_concat_tdest->offset_port(4, 16);
  mp_m_axis_tdest_converter_4->vector_in(m_m_axis_tdest_converter_4_signal);
  mp_m_axis_tdest_converter_4->vector_out(m_axis_concat_tdest_out_4);
  mp_M04_AXIS_transactor->TDEST(m_m_axis_tdest_converter_4_signal);
  mp_m_axis_tuser_converter_4 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_4");
  mp_m_axis_concat_tuser->in_port[4](m_axis_concat_tuser_out_4);
  mp_m_axis_concat_tuser->offset_port(4, 4);
  mp_m_axis_tuser_converter_4->vector_in(m_m_axis_tuser_converter_4_signal);
  mp_m_axis_tuser_converter_4->vector_out(m_axis_concat_tuser_out_4);
  mp_M04_AXIS_transactor->TUSER(m_m_axis_tuser_converter_4_signal);
  mp_M04_AXIS_transactor->CLK(aclk);
  mp_M04_AXIS_transactor->RST(aresetn);
  // configure S05_AXIS_transactor
    xsc::common_cpp::properties S05_AXIS_transactor_param_props;
    S05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S05_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S05_AXIS_transactor", S05_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_5");
  
  mp_s_axis_split_tvalid->out_port[5](s_axis_split_tvalid_out_5);
    mp_s_axis_split_tvalid->add_mask(5,6,5);
  mp_s_axis_tvalid_converter_5->vector_in(s_axis_split_tvalid_out_5);
  mp_s_axis_tvalid_converter_5->scalar_out(m_s_axis_tvalid_converter_5_signal);
  mp_S05_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_5_signal);
  mp_s_axis_tready_converter_5 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_5");
  mp_s_axis_concat_tready->in_port[5](s_axis_concat_tready_out_5);
  mp_s_axis_concat_tready->offset_port(5, 5);
  mp_s_axis_tready_converter_5->scalar_in(m_s_axis_tready_converter_5_signal);
  mp_s_axis_tready_converter_5->vector_out(s_axis_concat_tready_out_5);
  mp_S05_AXIS_transactor->TREADY(m_s_axis_tready_converter_5_signal);
  mp_s_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_5");
  
  mp_s_axis_split_tdata->out_port[5](s_axis_split_tdata_out_5);
    mp_s_axis_split_tdata->add_mask(5,384,320);
  mp_s_axis_tdata_converter_5->vector_in(s_axis_split_tdata_out_5);
  mp_s_axis_tdata_converter_5->vector_out(m_s_axis_tdata_converter_5_signal);
  mp_S05_AXIS_transactor->TDATA(m_s_axis_tdata_converter_5_signal);
  mp_s_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_5");
  
  mp_s_axis_split_tstrb->out_port[5](s_axis_split_tstrb_out_5);
    mp_s_axis_split_tstrb->add_mask(5,48,40);
  mp_s_axis_tstrb_converter_5->vector_in(s_axis_split_tstrb_out_5);
  mp_s_axis_tstrb_converter_5->vector_out(m_s_axis_tstrb_converter_5_signal);
  mp_S05_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_5_signal);
  mp_s_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_5");
  
  mp_s_axis_split_tkeep->out_port[5](s_axis_split_tkeep_out_5);
    mp_s_axis_split_tkeep->add_mask(5,48,40);
  mp_s_axis_tkeep_converter_5->vector_in(s_axis_split_tkeep_out_5);
  mp_s_axis_tkeep_converter_5->vector_out(m_s_axis_tkeep_converter_5_signal);
  mp_S05_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_5_signal);
  mp_s_axis_tlast_converter_5 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_5");
  
  mp_s_axis_split_tlast->out_port[5](s_axis_split_tlast_out_5);
    mp_s_axis_split_tlast->add_mask(5,6,5);
  mp_s_axis_tlast_converter_5->vector_in(s_axis_split_tlast_out_5);
  mp_s_axis_tlast_converter_5->scalar_out(m_s_axis_tlast_converter_5_signal);
  mp_S05_AXIS_transactor->TLAST(m_s_axis_tlast_converter_5_signal);
  mp_s_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_5");
  
  mp_s_axis_split_tid->out_port[5](s_axis_split_tid_out_5);
    mp_s_axis_split_tid->add_mask(5,6,5);
  mp_s_axis_tid_converter_5->vector_in(s_axis_split_tid_out_5);
  mp_s_axis_tid_converter_5->vector_out(m_s_axis_tid_converter_5_signal);
  mp_S05_AXIS_transactor->TID(m_s_axis_tid_converter_5_signal);
  mp_s_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_5");
  
  mp_s_axis_split_tdest->out_port[5](s_axis_split_tdest_out_5);
    mp_s_axis_split_tdest->add_mask(5,24,20);
  mp_s_axis_tdest_converter_5->vector_in(s_axis_split_tdest_out_5);
  mp_s_axis_tdest_converter_5->vector_out(m_s_axis_tdest_converter_5_signal);
  mp_S05_AXIS_transactor->TDEST(m_s_axis_tdest_converter_5_signal);
  mp_s_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_5");
  
  mp_s_axis_split_tuser->out_port[5](s_axis_split_tuser_out_5);
    mp_s_axis_split_tuser->add_mask(5,6,5);
  mp_s_axis_tuser_converter_5->vector_in(s_axis_split_tuser_out_5);
  mp_s_axis_tuser_converter_5->vector_out(m_s_axis_tuser_converter_5_signal);
  mp_S05_AXIS_transactor->TUSER(m_s_axis_tuser_converter_5_signal);
  mp_S05_AXIS_transactor->CLK(aclk);
  mp_S05_AXIS_transactor->RST(aresetn);
  // configure M05_AXIS_transactor
    xsc::common_cpp::properties M05_AXIS_transactor_param_props;
    M05_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M05_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M05_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M05_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M05_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M05_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M05_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M05_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M05_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M05_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M05_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M05_AXIS_transactor", M05_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_5");
  mp_m_axis_concat_tvalid->in_port[5](m_axis_concat_tvalid_out_5);
  mp_m_axis_concat_tvalid->offset_port(5, 5);
  mp_m_axis_tvalid_converter_5->scalar_in(m_m_axis_tvalid_converter_5_signal);
  mp_m_axis_tvalid_converter_5->vector_out(m_axis_concat_tvalid_out_5);
  mp_M05_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_5_signal);
  mp_m_axis_tready_converter_5 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_5");
  
  mp_m_axis_split_tready->out_port[5](m_axis_split_tready_out_5);
    mp_m_axis_split_tready->add_mask(5,6,5);
  mp_m_axis_tready_converter_5->vector_in(m_axis_split_tready_out_5);
  mp_m_axis_tready_converter_5->scalar_out(m_m_axis_tready_converter_5_signal);
  mp_M05_AXIS_transactor->TREADY(m_m_axis_tready_converter_5_signal);
  mp_m_axis_tdata_converter_5 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_5");
  mp_m_axis_concat_tdata->in_port[5](m_axis_concat_tdata_out_5);
  mp_m_axis_concat_tdata->offset_port(5, 320);
  mp_m_axis_tdata_converter_5->vector_in(m_m_axis_tdata_converter_5_signal);
  mp_m_axis_tdata_converter_5->vector_out(m_axis_concat_tdata_out_5);
  mp_M05_AXIS_transactor->TDATA(m_m_axis_tdata_converter_5_signal);
  mp_m_axis_tstrb_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_5");
  mp_m_axis_concat_tstrb->in_port[5](m_axis_concat_tstrb_out_5);
  mp_m_axis_concat_tstrb->offset_port(5, 40);
  mp_m_axis_tstrb_converter_5->vector_in(m_m_axis_tstrb_converter_5_signal);
  mp_m_axis_tstrb_converter_5->vector_out(m_axis_concat_tstrb_out_5);
  mp_M05_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_5_signal);
  mp_m_axis_tkeep_converter_5 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_5");
  mp_m_axis_concat_tkeep->in_port[5](m_axis_concat_tkeep_out_5);
  mp_m_axis_concat_tkeep->offset_port(5, 40);
  mp_m_axis_tkeep_converter_5->vector_in(m_m_axis_tkeep_converter_5_signal);
  mp_m_axis_tkeep_converter_5->vector_out(m_axis_concat_tkeep_out_5);
  mp_M05_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_5_signal);
  mp_m_axis_tlast_converter_5 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_5");
  mp_m_axis_concat_tlast->in_port[5](m_axis_concat_tlast_out_5);
  mp_m_axis_concat_tlast->offset_port(5, 5);
  mp_m_axis_tlast_converter_5->scalar_in(m_m_axis_tlast_converter_5_signal);
  mp_m_axis_tlast_converter_5->vector_out(m_axis_concat_tlast_out_5);
  mp_M05_AXIS_transactor->TLAST(m_m_axis_tlast_converter_5_signal);
  mp_m_axis_tid_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_5");
  mp_m_axis_concat_tid->in_port[5](m_axis_concat_tid_out_5);
  mp_m_axis_concat_tid->offset_port(5, 5);
  mp_m_axis_tid_converter_5->vector_in(m_m_axis_tid_converter_5_signal);
  mp_m_axis_tid_converter_5->vector_out(m_axis_concat_tid_out_5);
  mp_M05_AXIS_transactor->TID(m_m_axis_tid_converter_5_signal);
  mp_m_axis_tdest_converter_5 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_5");
  mp_m_axis_concat_tdest->in_port[5](m_axis_concat_tdest_out_5);
  mp_m_axis_concat_tdest->offset_port(5, 20);
  mp_m_axis_tdest_converter_5->vector_in(m_m_axis_tdest_converter_5_signal);
  mp_m_axis_tdest_converter_5->vector_out(m_axis_concat_tdest_out_5);
  mp_M05_AXIS_transactor->TDEST(m_m_axis_tdest_converter_5_signal);
  mp_m_axis_tuser_converter_5 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_5");
  mp_m_axis_concat_tuser->in_port[5](m_axis_concat_tuser_out_5);
  mp_m_axis_concat_tuser->offset_port(5, 5);
  mp_m_axis_tuser_converter_5->vector_in(m_m_axis_tuser_converter_5_signal);
  mp_m_axis_tuser_converter_5->vector_out(m_axis_concat_tuser_out_5);
  mp_M05_AXIS_transactor->TUSER(m_m_axis_tuser_converter_5_signal);
  mp_M05_AXIS_transactor->CLK(aclk);
  mp_M05_AXIS_transactor->RST(aresetn);
  // configure S06_AXIS_transactor
    xsc::common_cpp::properties S06_AXIS_transactor_param_props;
    S06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S06_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S06_AXIS_transactor", S06_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_6");
  
  mp_s_axis_split_tvalid->out_port[6](s_axis_split_tvalid_out_6);
    mp_s_axis_split_tvalid->add_mask(6,7,6);
  mp_s_axis_tvalid_converter_6->vector_in(s_axis_split_tvalid_out_6);
  mp_s_axis_tvalid_converter_6->scalar_out(m_s_axis_tvalid_converter_6_signal);
  mp_S06_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_6_signal);
  mp_s_axis_tready_converter_6 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_6");
  mp_s_axis_concat_tready->in_port[6](s_axis_concat_tready_out_6);
  mp_s_axis_concat_tready->offset_port(6, 6);
  mp_s_axis_tready_converter_6->scalar_in(m_s_axis_tready_converter_6_signal);
  mp_s_axis_tready_converter_6->vector_out(s_axis_concat_tready_out_6);
  mp_S06_AXIS_transactor->TREADY(m_s_axis_tready_converter_6_signal);
  mp_s_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_6");
  
  mp_s_axis_split_tdata->out_port[6](s_axis_split_tdata_out_6);
    mp_s_axis_split_tdata->add_mask(6,448,384);
  mp_s_axis_tdata_converter_6->vector_in(s_axis_split_tdata_out_6);
  mp_s_axis_tdata_converter_6->vector_out(m_s_axis_tdata_converter_6_signal);
  mp_S06_AXIS_transactor->TDATA(m_s_axis_tdata_converter_6_signal);
  mp_s_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_6");
  
  mp_s_axis_split_tstrb->out_port[6](s_axis_split_tstrb_out_6);
    mp_s_axis_split_tstrb->add_mask(6,56,48);
  mp_s_axis_tstrb_converter_6->vector_in(s_axis_split_tstrb_out_6);
  mp_s_axis_tstrb_converter_6->vector_out(m_s_axis_tstrb_converter_6_signal);
  mp_S06_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_6_signal);
  mp_s_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_6");
  
  mp_s_axis_split_tkeep->out_port[6](s_axis_split_tkeep_out_6);
    mp_s_axis_split_tkeep->add_mask(6,56,48);
  mp_s_axis_tkeep_converter_6->vector_in(s_axis_split_tkeep_out_6);
  mp_s_axis_tkeep_converter_6->vector_out(m_s_axis_tkeep_converter_6_signal);
  mp_S06_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_6_signal);
  mp_s_axis_tlast_converter_6 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_6");
  
  mp_s_axis_split_tlast->out_port[6](s_axis_split_tlast_out_6);
    mp_s_axis_split_tlast->add_mask(6,7,6);
  mp_s_axis_tlast_converter_6->vector_in(s_axis_split_tlast_out_6);
  mp_s_axis_tlast_converter_6->scalar_out(m_s_axis_tlast_converter_6_signal);
  mp_S06_AXIS_transactor->TLAST(m_s_axis_tlast_converter_6_signal);
  mp_s_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_6");
  
  mp_s_axis_split_tid->out_port[6](s_axis_split_tid_out_6);
    mp_s_axis_split_tid->add_mask(6,7,6);
  mp_s_axis_tid_converter_6->vector_in(s_axis_split_tid_out_6);
  mp_s_axis_tid_converter_6->vector_out(m_s_axis_tid_converter_6_signal);
  mp_S06_AXIS_transactor->TID(m_s_axis_tid_converter_6_signal);
  mp_s_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_6");
  
  mp_s_axis_split_tdest->out_port[6](s_axis_split_tdest_out_6);
    mp_s_axis_split_tdest->add_mask(6,28,24);
  mp_s_axis_tdest_converter_6->vector_in(s_axis_split_tdest_out_6);
  mp_s_axis_tdest_converter_6->vector_out(m_s_axis_tdest_converter_6_signal);
  mp_S06_AXIS_transactor->TDEST(m_s_axis_tdest_converter_6_signal);
  mp_s_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_6");
  
  mp_s_axis_split_tuser->out_port[6](s_axis_split_tuser_out_6);
    mp_s_axis_split_tuser->add_mask(6,7,6);
  mp_s_axis_tuser_converter_6->vector_in(s_axis_split_tuser_out_6);
  mp_s_axis_tuser_converter_6->vector_out(m_s_axis_tuser_converter_6_signal);
  mp_S06_AXIS_transactor->TUSER(m_s_axis_tuser_converter_6_signal);
  mp_S06_AXIS_transactor->CLK(aclk);
  mp_S06_AXIS_transactor->RST(aresetn);
  // configure M06_AXIS_transactor
    xsc::common_cpp::properties M06_AXIS_transactor_param_props;
    M06_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M06_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M06_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M06_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M06_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M06_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M06_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M06_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M06_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M06_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M06_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M06_AXIS_transactor", M06_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_6");
  mp_m_axis_concat_tvalid->in_port[6](m_axis_concat_tvalid_out_6);
  mp_m_axis_concat_tvalid->offset_port(6, 6);
  mp_m_axis_tvalid_converter_6->scalar_in(m_m_axis_tvalid_converter_6_signal);
  mp_m_axis_tvalid_converter_6->vector_out(m_axis_concat_tvalid_out_6);
  mp_M06_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_6_signal);
  mp_m_axis_tready_converter_6 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_6");
  
  mp_m_axis_split_tready->out_port[6](m_axis_split_tready_out_6);
    mp_m_axis_split_tready->add_mask(6,7,6);
  mp_m_axis_tready_converter_6->vector_in(m_axis_split_tready_out_6);
  mp_m_axis_tready_converter_6->scalar_out(m_m_axis_tready_converter_6_signal);
  mp_M06_AXIS_transactor->TREADY(m_m_axis_tready_converter_6_signal);
  mp_m_axis_tdata_converter_6 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_6");
  mp_m_axis_concat_tdata->in_port[6](m_axis_concat_tdata_out_6);
  mp_m_axis_concat_tdata->offset_port(6, 384);
  mp_m_axis_tdata_converter_6->vector_in(m_m_axis_tdata_converter_6_signal);
  mp_m_axis_tdata_converter_6->vector_out(m_axis_concat_tdata_out_6);
  mp_M06_AXIS_transactor->TDATA(m_m_axis_tdata_converter_6_signal);
  mp_m_axis_tstrb_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_6");
  mp_m_axis_concat_tstrb->in_port[6](m_axis_concat_tstrb_out_6);
  mp_m_axis_concat_tstrb->offset_port(6, 48);
  mp_m_axis_tstrb_converter_6->vector_in(m_m_axis_tstrb_converter_6_signal);
  mp_m_axis_tstrb_converter_6->vector_out(m_axis_concat_tstrb_out_6);
  mp_M06_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_6_signal);
  mp_m_axis_tkeep_converter_6 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_6");
  mp_m_axis_concat_tkeep->in_port[6](m_axis_concat_tkeep_out_6);
  mp_m_axis_concat_tkeep->offset_port(6, 48);
  mp_m_axis_tkeep_converter_6->vector_in(m_m_axis_tkeep_converter_6_signal);
  mp_m_axis_tkeep_converter_6->vector_out(m_axis_concat_tkeep_out_6);
  mp_M06_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_6_signal);
  mp_m_axis_tlast_converter_6 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_6");
  mp_m_axis_concat_tlast->in_port[6](m_axis_concat_tlast_out_6);
  mp_m_axis_concat_tlast->offset_port(6, 6);
  mp_m_axis_tlast_converter_6->scalar_in(m_m_axis_tlast_converter_6_signal);
  mp_m_axis_tlast_converter_6->vector_out(m_axis_concat_tlast_out_6);
  mp_M06_AXIS_transactor->TLAST(m_m_axis_tlast_converter_6_signal);
  mp_m_axis_tid_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_6");
  mp_m_axis_concat_tid->in_port[6](m_axis_concat_tid_out_6);
  mp_m_axis_concat_tid->offset_port(6, 6);
  mp_m_axis_tid_converter_6->vector_in(m_m_axis_tid_converter_6_signal);
  mp_m_axis_tid_converter_6->vector_out(m_axis_concat_tid_out_6);
  mp_M06_AXIS_transactor->TID(m_m_axis_tid_converter_6_signal);
  mp_m_axis_tdest_converter_6 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_6");
  mp_m_axis_concat_tdest->in_port[6](m_axis_concat_tdest_out_6);
  mp_m_axis_concat_tdest->offset_port(6, 24);
  mp_m_axis_tdest_converter_6->vector_in(m_m_axis_tdest_converter_6_signal);
  mp_m_axis_tdest_converter_6->vector_out(m_axis_concat_tdest_out_6);
  mp_M06_AXIS_transactor->TDEST(m_m_axis_tdest_converter_6_signal);
  mp_m_axis_tuser_converter_6 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_6");
  mp_m_axis_concat_tuser->in_port[6](m_axis_concat_tuser_out_6);
  mp_m_axis_concat_tuser->offset_port(6, 6);
  mp_m_axis_tuser_converter_6->vector_in(m_m_axis_tuser_converter_6_signal);
  mp_m_axis_tuser_converter_6->vector_out(m_axis_concat_tuser_out_6);
  mp_M06_AXIS_transactor->TUSER(m_m_axis_tuser_converter_6_signal);
  mp_M06_AXIS_transactor->CLK(aclk);
  mp_M06_AXIS_transactor->RST(aresetn);
  // configure S07_AXIS_transactor
    xsc::common_cpp::properties S07_AXIS_transactor_param_props;
    S07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S07_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S07_AXIS_transactor", S07_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_7");
  
  mp_s_axis_split_tvalid->out_port[7](s_axis_split_tvalid_out_7);
    mp_s_axis_split_tvalid->add_mask(7,8,7);
  mp_s_axis_tvalid_converter_7->vector_in(s_axis_split_tvalid_out_7);
  mp_s_axis_tvalid_converter_7->scalar_out(m_s_axis_tvalid_converter_7_signal);
  mp_S07_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_7_signal);
  mp_s_axis_tready_converter_7 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_7");
  mp_s_axis_concat_tready->in_port[7](s_axis_concat_tready_out_7);
  mp_s_axis_concat_tready->offset_port(7, 7);
  mp_s_axis_tready_converter_7->scalar_in(m_s_axis_tready_converter_7_signal);
  mp_s_axis_tready_converter_7->vector_out(s_axis_concat_tready_out_7);
  mp_S07_AXIS_transactor->TREADY(m_s_axis_tready_converter_7_signal);
  mp_s_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_7");
  
  mp_s_axis_split_tdata->out_port[7](s_axis_split_tdata_out_7);
    mp_s_axis_split_tdata->add_mask(7,512,448);
  mp_s_axis_tdata_converter_7->vector_in(s_axis_split_tdata_out_7);
  mp_s_axis_tdata_converter_7->vector_out(m_s_axis_tdata_converter_7_signal);
  mp_S07_AXIS_transactor->TDATA(m_s_axis_tdata_converter_7_signal);
  mp_s_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_7");
  
  mp_s_axis_split_tstrb->out_port[7](s_axis_split_tstrb_out_7);
    mp_s_axis_split_tstrb->add_mask(7,64,56);
  mp_s_axis_tstrb_converter_7->vector_in(s_axis_split_tstrb_out_7);
  mp_s_axis_tstrb_converter_7->vector_out(m_s_axis_tstrb_converter_7_signal);
  mp_S07_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_7_signal);
  mp_s_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_7");
  
  mp_s_axis_split_tkeep->out_port[7](s_axis_split_tkeep_out_7);
    mp_s_axis_split_tkeep->add_mask(7,64,56);
  mp_s_axis_tkeep_converter_7->vector_in(s_axis_split_tkeep_out_7);
  mp_s_axis_tkeep_converter_7->vector_out(m_s_axis_tkeep_converter_7_signal);
  mp_S07_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_7_signal);
  mp_s_axis_tlast_converter_7 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_7");
  
  mp_s_axis_split_tlast->out_port[7](s_axis_split_tlast_out_7);
    mp_s_axis_split_tlast->add_mask(7,8,7);
  mp_s_axis_tlast_converter_7->vector_in(s_axis_split_tlast_out_7);
  mp_s_axis_tlast_converter_7->scalar_out(m_s_axis_tlast_converter_7_signal);
  mp_S07_AXIS_transactor->TLAST(m_s_axis_tlast_converter_7_signal);
  mp_s_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_7");
  
  mp_s_axis_split_tid->out_port[7](s_axis_split_tid_out_7);
    mp_s_axis_split_tid->add_mask(7,8,7);
  mp_s_axis_tid_converter_7->vector_in(s_axis_split_tid_out_7);
  mp_s_axis_tid_converter_7->vector_out(m_s_axis_tid_converter_7_signal);
  mp_S07_AXIS_transactor->TID(m_s_axis_tid_converter_7_signal);
  mp_s_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_7");
  
  mp_s_axis_split_tdest->out_port[7](s_axis_split_tdest_out_7);
    mp_s_axis_split_tdest->add_mask(7,32,28);
  mp_s_axis_tdest_converter_7->vector_in(s_axis_split_tdest_out_7);
  mp_s_axis_tdest_converter_7->vector_out(m_s_axis_tdest_converter_7_signal);
  mp_S07_AXIS_transactor->TDEST(m_s_axis_tdest_converter_7_signal);
  mp_s_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_7");
  
  mp_s_axis_split_tuser->out_port[7](s_axis_split_tuser_out_7);
    mp_s_axis_split_tuser->add_mask(7,8,7);
  mp_s_axis_tuser_converter_7->vector_in(s_axis_split_tuser_out_7);
  mp_s_axis_tuser_converter_7->vector_out(m_s_axis_tuser_converter_7_signal);
  mp_S07_AXIS_transactor->TUSER(m_s_axis_tuser_converter_7_signal);
  mp_S07_AXIS_transactor->CLK(aclk);
  mp_S07_AXIS_transactor->RST(aresetn);
  // configure M07_AXIS_transactor
    xsc::common_cpp::properties M07_AXIS_transactor_param_props;
    M07_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M07_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M07_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M07_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M07_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M07_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M07_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M07_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M07_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M07_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M07_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M07_AXIS_transactor", M07_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_7");
  mp_m_axis_concat_tvalid->in_port[7](m_axis_concat_tvalid_out_7);
  mp_m_axis_concat_tvalid->offset_port(7, 7);
  mp_m_axis_tvalid_converter_7->scalar_in(m_m_axis_tvalid_converter_7_signal);
  mp_m_axis_tvalid_converter_7->vector_out(m_axis_concat_tvalid_out_7);
  mp_M07_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_7_signal);
  mp_m_axis_tready_converter_7 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_7");
  
  mp_m_axis_split_tready->out_port[7](m_axis_split_tready_out_7);
    mp_m_axis_split_tready->add_mask(7,8,7);
  mp_m_axis_tready_converter_7->vector_in(m_axis_split_tready_out_7);
  mp_m_axis_tready_converter_7->scalar_out(m_m_axis_tready_converter_7_signal);
  mp_M07_AXIS_transactor->TREADY(m_m_axis_tready_converter_7_signal);
  mp_m_axis_tdata_converter_7 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_7");
  mp_m_axis_concat_tdata->in_port[7](m_axis_concat_tdata_out_7);
  mp_m_axis_concat_tdata->offset_port(7, 448);
  mp_m_axis_tdata_converter_7->vector_in(m_m_axis_tdata_converter_7_signal);
  mp_m_axis_tdata_converter_7->vector_out(m_axis_concat_tdata_out_7);
  mp_M07_AXIS_transactor->TDATA(m_m_axis_tdata_converter_7_signal);
  mp_m_axis_tstrb_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_7");
  mp_m_axis_concat_tstrb->in_port[7](m_axis_concat_tstrb_out_7);
  mp_m_axis_concat_tstrb->offset_port(7, 56);
  mp_m_axis_tstrb_converter_7->vector_in(m_m_axis_tstrb_converter_7_signal);
  mp_m_axis_tstrb_converter_7->vector_out(m_axis_concat_tstrb_out_7);
  mp_M07_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_7_signal);
  mp_m_axis_tkeep_converter_7 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_7");
  mp_m_axis_concat_tkeep->in_port[7](m_axis_concat_tkeep_out_7);
  mp_m_axis_concat_tkeep->offset_port(7, 56);
  mp_m_axis_tkeep_converter_7->vector_in(m_m_axis_tkeep_converter_7_signal);
  mp_m_axis_tkeep_converter_7->vector_out(m_axis_concat_tkeep_out_7);
  mp_M07_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_7_signal);
  mp_m_axis_tlast_converter_7 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_7");
  mp_m_axis_concat_tlast->in_port[7](m_axis_concat_tlast_out_7);
  mp_m_axis_concat_tlast->offset_port(7, 7);
  mp_m_axis_tlast_converter_7->scalar_in(m_m_axis_tlast_converter_7_signal);
  mp_m_axis_tlast_converter_7->vector_out(m_axis_concat_tlast_out_7);
  mp_M07_AXIS_transactor->TLAST(m_m_axis_tlast_converter_7_signal);
  mp_m_axis_tid_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_7");
  mp_m_axis_concat_tid->in_port[7](m_axis_concat_tid_out_7);
  mp_m_axis_concat_tid->offset_port(7, 7);
  mp_m_axis_tid_converter_7->vector_in(m_m_axis_tid_converter_7_signal);
  mp_m_axis_tid_converter_7->vector_out(m_axis_concat_tid_out_7);
  mp_M07_AXIS_transactor->TID(m_m_axis_tid_converter_7_signal);
  mp_m_axis_tdest_converter_7 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_7");
  mp_m_axis_concat_tdest->in_port[7](m_axis_concat_tdest_out_7);
  mp_m_axis_concat_tdest->offset_port(7, 28);
  mp_m_axis_tdest_converter_7->vector_in(m_m_axis_tdest_converter_7_signal);
  mp_m_axis_tdest_converter_7->vector_out(m_axis_concat_tdest_out_7);
  mp_M07_AXIS_transactor->TDEST(m_m_axis_tdest_converter_7_signal);
  mp_m_axis_tuser_converter_7 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_7");
  mp_m_axis_concat_tuser->in_port[7](m_axis_concat_tuser_out_7);
  mp_m_axis_concat_tuser->offset_port(7, 7);
  mp_m_axis_tuser_converter_7->vector_in(m_m_axis_tuser_converter_7_signal);
  mp_m_axis_tuser_converter_7->vector_out(m_axis_concat_tuser_out_7);
  mp_M07_AXIS_transactor->TUSER(m_m_axis_tuser_converter_7_signal);
  mp_M07_AXIS_transactor->CLK(aclk);
  mp_M07_AXIS_transactor->RST(aresetn);
  // configure S08_AXIS_transactor
    xsc::common_cpp::properties S08_AXIS_transactor_param_props;
    S08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S08_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S08_AXIS_transactor", S08_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_8");
  
  mp_s_axis_split_tvalid->out_port[8](s_axis_split_tvalid_out_8);
    mp_s_axis_split_tvalid->add_mask(8,9,8);
  mp_s_axis_tvalid_converter_8->vector_in(s_axis_split_tvalid_out_8);
  mp_s_axis_tvalid_converter_8->scalar_out(m_s_axis_tvalid_converter_8_signal);
  mp_S08_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_8_signal);
  mp_s_axis_tready_converter_8 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_8");
  mp_s_axis_concat_tready->in_port[8](s_axis_concat_tready_out_8);
  mp_s_axis_concat_tready->offset_port(8, 8);
  mp_s_axis_tready_converter_8->scalar_in(m_s_axis_tready_converter_8_signal);
  mp_s_axis_tready_converter_8->vector_out(s_axis_concat_tready_out_8);
  mp_S08_AXIS_transactor->TREADY(m_s_axis_tready_converter_8_signal);
  mp_s_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_8");
  
  mp_s_axis_split_tdata->out_port[8](s_axis_split_tdata_out_8);
    mp_s_axis_split_tdata->add_mask(8,576,512);
  mp_s_axis_tdata_converter_8->vector_in(s_axis_split_tdata_out_8);
  mp_s_axis_tdata_converter_8->vector_out(m_s_axis_tdata_converter_8_signal);
  mp_S08_AXIS_transactor->TDATA(m_s_axis_tdata_converter_8_signal);
  mp_s_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_8");
  
  mp_s_axis_split_tstrb->out_port[8](s_axis_split_tstrb_out_8);
    mp_s_axis_split_tstrb->add_mask(8,72,64);
  mp_s_axis_tstrb_converter_8->vector_in(s_axis_split_tstrb_out_8);
  mp_s_axis_tstrb_converter_8->vector_out(m_s_axis_tstrb_converter_8_signal);
  mp_S08_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_8_signal);
  mp_s_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_8");
  
  mp_s_axis_split_tkeep->out_port[8](s_axis_split_tkeep_out_8);
    mp_s_axis_split_tkeep->add_mask(8,72,64);
  mp_s_axis_tkeep_converter_8->vector_in(s_axis_split_tkeep_out_8);
  mp_s_axis_tkeep_converter_8->vector_out(m_s_axis_tkeep_converter_8_signal);
  mp_S08_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_8_signal);
  mp_s_axis_tlast_converter_8 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_8");
  
  mp_s_axis_split_tlast->out_port[8](s_axis_split_tlast_out_8);
    mp_s_axis_split_tlast->add_mask(8,9,8);
  mp_s_axis_tlast_converter_8->vector_in(s_axis_split_tlast_out_8);
  mp_s_axis_tlast_converter_8->scalar_out(m_s_axis_tlast_converter_8_signal);
  mp_S08_AXIS_transactor->TLAST(m_s_axis_tlast_converter_8_signal);
  mp_s_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_8");
  
  mp_s_axis_split_tid->out_port[8](s_axis_split_tid_out_8);
    mp_s_axis_split_tid->add_mask(8,9,8);
  mp_s_axis_tid_converter_8->vector_in(s_axis_split_tid_out_8);
  mp_s_axis_tid_converter_8->vector_out(m_s_axis_tid_converter_8_signal);
  mp_S08_AXIS_transactor->TID(m_s_axis_tid_converter_8_signal);
  mp_s_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_8");
  
  mp_s_axis_split_tdest->out_port[8](s_axis_split_tdest_out_8);
    mp_s_axis_split_tdest->add_mask(8,36,32);
  mp_s_axis_tdest_converter_8->vector_in(s_axis_split_tdest_out_8);
  mp_s_axis_tdest_converter_8->vector_out(m_s_axis_tdest_converter_8_signal);
  mp_S08_AXIS_transactor->TDEST(m_s_axis_tdest_converter_8_signal);
  mp_s_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_8");
  
  mp_s_axis_split_tuser->out_port[8](s_axis_split_tuser_out_8);
    mp_s_axis_split_tuser->add_mask(8,9,8);
  mp_s_axis_tuser_converter_8->vector_in(s_axis_split_tuser_out_8);
  mp_s_axis_tuser_converter_8->vector_out(m_s_axis_tuser_converter_8_signal);
  mp_S08_AXIS_transactor->TUSER(m_s_axis_tuser_converter_8_signal);
  mp_S08_AXIS_transactor->CLK(aclk);
  mp_S08_AXIS_transactor->RST(aresetn);
  // configure M08_AXIS_transactor
    xsc::common_cpp::properties M08_AXIS_transactor_param_props;
    M08_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M08_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M08_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M08_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M08_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M08_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M08_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M08_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M08_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M08_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M08_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M08_AXIS_transactor", M08_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_8");
  mp_m_axis_concat_tvalid->in_port[8](m_axis_concat_tvalid_out_8);
  mp_m_axis_concat_tvalid->offset_port(8, 8);
  mp_m_axis_tvalid_converter_8->scalar_in(m_m_axis_tvalid_converter_8_signal);
  mp_m_axis_tvalid_converter_8->vector_out(m_axis_concat_tvalid_out_8);
  mp_M08_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_8_signal);
  mp_m_axis_tready_converter_8 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_8");
  
  mp_m_axis_split_tready->out_port[8](m_axis_split_tready_out_8);
    mp_m_axis_split_tready->add_mask(8,9,8);
  mp_m_axis_tready_converter_8->vector_in(m_axis_split_tready_out_8);
  mp_m_axis_tready_converter_8->scalar_out(m_m_axis_tready_converter_8_signal);
  mp_M08_AXIS_transactor->TREADY(m_m_axis_tready_converter_8_signal);
  mp_m_axis_tdata_converter_8 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_8");
  mp_m_axis_concat_tdata->in_port[8](m_axis_concat_tdata_out_8);
  mp_m_axis_concat_tdata->offset_port(8, 512);
  mp_m_axis_tdata_converter_8->vector_in(m_m_axis_tdata_converter_8_signal);
  mp_m_axis_tdata_converter_8->vector_out(m_axis_concat_tdata_out_8);
  mp_M08_AXIS_transactor->TDATA(m_m_axis_tdata_converter_8_signal);
  mp_m_axis_tstrb_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_8");
  mp_m_axis_concat_tstrb->in_port[8](m_axis_concat_tstrb_out_8);
  mp_m_axis_concat_tstrb->offset_port(8, 64);
  mp_m_axis_tstrb_converter_8->vector_in(m_m_axis_tstrb_converter_8_signal);
  mp_m_axis_tstrb_converter_8->vector_out(m_axis_concat_tstrb_out_8);
  mp_M08_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_8_signal);
  mp_m_axis_tkeep_converter_8 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_8");
  mp_m_axis_concat_tkeep->in_port[8](m_axis_concat_tkeep_out_8);
  mp_m_axis_concat_tkeep->offset_port(8, 64);
  mp_m_axis_tkeep_converter_8->vector_in(m_m_axis_tkeep_converter_8_signal);
  mp_m_axis_tkeep_converter_8->vector_out(m_axis_concat_tkeep_out_8);
  mp_M08_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_8_signal);
  mp_m_axis_tlast_converter_8 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_8");
  mp_m_axis_concat_tlast->in_port[8](m_axis_concat_tlast_out_8);
  mp_m_axis_concat_tlast->offset_port(8, 8);
  mp_m_axis_tlast_converter_8->scalar_in(m_m_axis_tlast_converter_8_signal);
  mp_m_axis_tlast_converter_8->vector_out(m_axis_concat_tlast_out_8);
  mp_M08_AXIS_transactor->TLAST(m_m_axis_tlast_converter_8_signal);
  mp_m_axis_tid_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_8");
  mp_m_axis_concat_tid->in_port[8](m_axis_concat_tid_out_8);
  mp_m_axis_concat_tid->offset_port(8, 8);
  mp_m_axis_tid_converter_8->vector_in(m_m_axis_tid_converter_8_signal);
  mp_m_axis_tid_converter_8->vector_out(m_axis_concat_tid_out_8);
  mp_M08_AXIS_transactor->TID(m_m_axis_tid_converter_8_signal);
  mp_m_axis_tdest_converter_8 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_8");
  mp_m_axis_concat_tdest->in_port[8](m_axis_concat_tdest_out_8);
  mp_m_axis_concat_tdest->offset_port(8, 32);
  mp_m_axis_tdest_converter_8->vector_in(m_m_axis_tdest_converter_8_signal);
  mp_m_axis_tdest_converter_8->vector_out(m_axis_concat_tdest_out_8);
  mp_M08_AXIS_transactor->TDEST(m_m_axis_tdest_converter_8_signal);
  mp_m_axis_tuser_converter_8 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_8");
  mp_m_axis_concat_tuser->in_port[8](m_axis_concat_tuser_out_8);
  mp_m_axis_concat_tuser->offset_port(8, 8);
  mp_m_axis_tuser_converter_8->vector_in(m_m_axis_tuser_converter_8_signal);
  mp_m_axis_tuser_converter_8->vector_out(m_axis_concat_tuser_out_8);
  mp_M08_AXIS_transactor->TUSER(m_m_axis_tuser_converter_8_signal);
  mp_M08_AXIS_transactor->CLK(aclk);
  mp_M08_AXIS_transactor->RST(aresetn);
  // configure S09_AXIS_transactor
    xsc::common_cpp::properties S09_AXIS_transactor_param_props;
    S09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    S09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    S09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    S09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    S09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    S09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    S09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    S09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    S09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_S09_AXIS_transactor = new xtlm::xaxis_pin2xtlm_t<80,10,10,40,1,1>("S09_AXIS_transactor", S09_AXIS_transactor_param_props);
  mp_s_axis_tvalid_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tvalid_converter_9");
  
  mp_s_axis_split_tvalid->out_port[9](s_axis_split_tvalid_out_9);
    mp_s_axis_split_tvalid->add_mask(9,10,9);
  mp_s_axis_tvalid_converter_9->vector_in(s_axis_split_tvalid_out_9);
  mp_s_axis_tvalid_converter_9->scalar_out(m_s_axis_tvalid_converter_9_signal);
  mp_S09_AXIS_transactor->TVALID(m_s_axis_tvalid_converter_9_signal);
  mp_s_axis_tready_converter_9 = new xsc::common::scalar2vectorN_converter<10>("s_axis_tready_converter_9");
  mp_s_axis_concat_tready->in_port[9](s_axis_concat_tready_out_9);
  mp_s_axis_concat_tready->offset_port(9, 9);
  mp_s_axis_tready_converter_9->scalar_in(m_s_axis_tready_converter_9_signal);
  mp_s_axis_tready_converter_9->vector_out(s_axis_concat_tready_out_9);
  mp_S09_AXIS_transactor->TREADY(m_s_axis_tready_converter_9_signal);
  mp_s_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("s_axis_tdata_converter_9");
  
  mp_s_axis_split_tdata->out_port[9](s_axis_split_tdata_out_9);
    mp_s_axis_split_tdata->add_mask(9,640,576);
  mp_s_axis_tdata_converter_9->vector_in(s_axis_split_tdata_out_9);
  mp_s_axis_tdata_converter_9->vector_out(m_s_axis_tdata_converter_9_signal);
  mp_S09_AXIS_transactor->TDATA(m_s_axis_tdata_converter_9_signal);
  mp_s_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tstrb_converter_9");
  
  mp_s_axis_split_tstrb->out_port[9](s_axis_split_tstrb_out_9);
    mp_s_axis_split_tstrb->add_mask(9,80,72);
  mp_s_axis_tstrb_converter_9->vector_in(s_axis_split_tstrb_out_9);
  mp_s_axis_tstrb_converter_9->vector_out(m_s_axis_tstrb_converter_9_signal);
  mp_S09_AXIS_transactor->TSTRB(m_s_axis_tstrb_converter_9_signal);
  mp_s_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("s_axis_tkeep_converter_9");
  
  mp_s_axis_split_tkeep->out_port[9](s_axis_split_tkeep_out_9);
    mp_s_axis_split_tkeep->add_mask(9,80,72);
  mp_s_axis_tkeep_converter_9->vector_in(s_axis_split_tkeep_out_9);
  mp_s_axis_tkeep_converter_9->vector_out(m_s_axis_tkeep_converter_9_signal);
  mp_S09_AXIS_transactor->TKEEP(m_s_axis_tkeep_converter_9_signal);
  mp_s_axis_tlast_converter_9 = new xsc::common::vectorN2scalar_converter<10>("s_axis_tlast_converter_9");
  
  mp_s_axis_split_tlast->out_port[9](s_axis_split_tlast_out_9);
    mp_s_axis_split_tlast->add_mask(9,10,9);
  mp_s_axis_tlast_converter_9->vector_in(s_axis_split_tlast_out_9);
  mp_s_axis_tlast_converter_9->scalar_out(m_s_axis_tlast_converter_9_signal);
  mp_S09_AXIS_transactor->TLAST(m_s_axis_tlast_converter_9_signal);
  mp_s_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tid_converter_9");
  
  mp_s_axis_split_tid->out_port[9](s_axis_split_tid_out_9);
    mp_s_axis_split_tid->add_mask(9,10,9);
  mp_s_axis_tid_converter_9->vector_in(s_axis_split_tid_out_9);
  mp_s_axis_tid_converter_9->vector_out(m_s_axis_tid_converter_9_signal);
  mp_S09_AXIS_transactor->TID(m_s_axis_tid_converter_9_signal);
  mp_s_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("s_axis_tdest_converter_9");
  
  mp_s_axis_split_tdest->out_port[9](s_axis_split_tdest_out_9);
    mp_s_axis_split_tdest->add_mask(9,40,36);
  mp_s_axis_tdest_converter_9->vector_in(s_axis_split_tdest_out_9);
  mp_s_axis_tdest_converter_9->vector_out(m_s_axis_tdest_converter_9_signal);
  mp_S09_AXIS_transactor->TDEST(m_s_axis_tdest_converter_9_signal);
  mp_s_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("s_axis_tuser_converter_9");
  
  mp_s_axis_split_tuser->out_port[9](s_axis_split_tuser_out_9);
    mp_s_axis_split_tuser->add_mask(9,10,9);
  mp_s_axis_tuser_converter_9->vector_in(s_axis_split_tuser_out_9);
  mp_s_axis_tuser_converter_9->vector_out(m_s_axis_tuser_converter_9_signal);
  mp_S09_AXIS_transactor->TUSER(m_s_axis_tuser_converter_9_signal);
  mp_S09_AXIS_transactor->CLK(aclk);
  mp_S09_AXIS_transactor->RST(aresetn);
  // configure M09_AXIS_transactor
    xsc::common_cpp::properties M09_AXIS_transactor_param_props;
    M09_AXIS_transactor_param_props.addLong("TDATA_NUM_BYTES", "8");
    M09_AXIS_transactor_param_props.addLong("TDEST_WIDTH", "4");
    M09_AXIS_transactor_param_props.addLong("TID_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("TUSER_WIDTH", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TREADY", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TSTRB", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TKEEP", "1");
    M09_AXIS_transactor_param_props.addLong("HAS_TLAST", "1");
    M09_AXIS_transactor_param_props.addLong("FREQ_HZ", "300000000");
    M09_AXIS_transactor_param_props.addLong("HAS_RESET", "1");
    M09_AXIS_transactor_param_props.addFloat("PHASE", "0.00");
    M09_AXIS_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");
    M09_AXIS_transactor_param_props.addString("LAYERED_METADATA", "undef");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_1_WIDTH", "0");
    M09_AXIS_transactor_param_props.addLong("TSIDE_BAND_2_WIDTH", "0");

    mp_M09_AXIS_transactor = new xtlm::xaxis_xtlm2pin_t<80,10,10,40,1,1>("M09_AXIS_transactor", M09_AXIS_transactor_param_props);
  mp_m_axis_tvalid_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tvalid_converter_9");
  mp_m_axis_concat_tvalid->in_port[9](m_axis_concat_tvalid_out_9);
  mp_m_axis_concat_tvalid->offset_port(9, 9);
  mp_m_axis_tvalid_converter_9->scalar_in(m_m_axis_tvalid_converter_9_signal);
  mp_m_axis_tvalid_converter_9->vector_out(m_axis_concat_tvalid_out_9);
  mp_M09_AXIS_transactor->TVALID(m_m_axis_tvalid_converter_9_signal);
  mp_m_axis_tready_converter_9 = new xsc::common::vectorN2scalar_converter<10>("m_axis_tready_converter_9");
  
  mp_m_axis_split_tready->out_port[9](m_axis_split_tready_out_9);
    mp_m_axis_split_tready->add_mask(9,10,9);
  mp_m_axis_tready_converter_9->vector_in(m_axis_split_tready_out_9);
  mp_m_axis_tready_converter_9->scalar_out(m_m_axis_tready_converter_9_signal);
  mp_M09_AXIS_transactor->TREADY(m_m_axis_tready_converter_9_signal);
  mp_m_axis_tdata_converter_9 = new xsc::common::vector2vector_converter<640,640>("m_axis_tdata_converter_9");
  mp_m_axis_concat_tdata->in_port[9](m_axis_concat_tdata_out_9);
  mp_m_axis_concat_tdata->offset_port(9, 576);
  mp_m_axis_tdata_converter_9->vector_in(m_m_axis_tdata_converter_9_signal);
  mp_m_axis_tdata_converter_9->vector_out(m_axis_concat_tdata_out_9);
  mp_M09_AXIS_transactor->TDATA(m_m_axis_tdata_converter_9_signal);
  mp_m_axis_tstrb_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tstrb_converter_9");
  mp_m_axis_concat_tstrb->in_port[9](m_axis_concat_tstrb_out_9);
  mp_m_axis_concat_tstrb->offset_port(9, 72);
  mp_m_axis_tstrb_converter_9->vector_in(m_m_axis_tstrb_converter_9_signal);
  mp_m_axis_tstrb_converter_9->vector_out(m_axis_concat_tstrb_out_9);
  mp_M09_AXIS_transactor->TSTRB(m_m_axis_tstrb_converter_9_signal);
  mp_m_axis_tkeep_converter_9 = new xsc::common::vector2vector_converter<80,80>("m_axis_tkeep_converter_9");
  mp_m_axis_concat_tkeep->in_port[9](m_axis_concat_tkeep_out_9);
  mp_m_axis_concat_tkeep->offset_port(9, 72);
  mp_m_axis_tkeep_converter_9->vector_in(m_m_axis_tkeep_converter_9_signal);
  mp_m_axis_tkeep_converter_9->vector_out(m_axis_concat_tkeep_out_9);
  mp_M09_AXIS_transactor->TKEEP(m_m_axis_tkeep_converter_9_signal);
  mp_m_axis_tlast_converter_9 = new xsc::common::scalar2vectorN_converter<10>("m_axis_tlast_converter_9");
  mp_m_axis_concat_tlast->in_port[9](m_axis_concat_tlast_out_9);
  mp_m_axis_concat_tlast->offset_port(9, 9);
  mp_m_axis_tlast_converter_9->scalar_in(m_m_axis_tlast_converter_9_signal);
  mp_m_axis_tlast_converter_9->vector_out(m_axis_concat_tlast_out_9);
  mp_M09_AXIS_transactor->TLAST(m_m_axis_tlast_converter_9_signal);
  mp_m_axis_tid_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tid_converter_9");
  mp_m_axis_concat_tid->in_port[9](m_axis_concat_tid_out_9);
  mp_m_axis_concat_tid->offset_port(9, 9);
  mp_m_axis_tid_converter_9->vector_in(m_m_axis_tid_converter_9_signal);
  mp_m_axis_tid_converter_9->vector_out(m_axis_concat_tid_out_9);
  mp_M09_AXIS_transactor->TID(m_m_axis_tid_converter_9_signal);
  mp_m_axis_tdest_converter_9 = new xsc::common::vector2vector_converter<40,40>("m_axis_tdest_converter_9");
  mp_m_axis_concat_tdest->in_port[9](m_axis_concat_tdest_out_9);
  mp_m_axis_concat_tdest->offset_port(9, 36);
  mp_m_axis_tdest_converter_9->vector_in(m_m_axis_tdest_converter_9_signal);
  mp_m_axis_tdest_converter_9->vector_out(m_axis_concat_tdest_out_9);
  mp_M09_AXIS_transactor->TDEST(m_m_axis_tdest_converter_9_signal);
  mp_m_axis_tuser_converter_9 = new xsc::common::vector2vector_converter<10,10>("m_axis_tuser_converter_9");
  mp_m_axis_concat_tuser->in_port[9](m_axis_concat_tuser_out_9);
  mp_m_axis_concat_tuser->offset_port(9, 9);
  mp_m_axis_tuser_converter_9->vector_in(m_m_axis_tuser_converter_9_signal);
  mp_m_axis_tuser_converter_9->vector_out(m_axis_concat_tuser_out_9);
  mp_M09_AXIS_transactor->TUSER(m_m_axis_tuser_converter_9_signal);
  mp_M09_AXIS_transactor->CLK(aclk);
  mp_M09_AXIS_transactor->RST(aresetn);
  // configure S_AXI_CTRL_transactor
    xsc::common_cpp::properties S_AXI_CTRL_transactor_param_props;
    S_AXI_CTRL_transactor_param_props.addLong("DATA_WIDTH", "32");
    S_AXI_CTRL_transactor_param_props.addLong("FREQ_HZ", "300000000");
    S_AXI_CTRL_transactor_param_props.addLong("ID_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ADDR_WIDTH", "7");
    S_AXI_CTRL_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("BUSER_WIDTH", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_LOCK", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_PROT", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_CACHE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_QOS", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_REGION", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_WSTRB", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_BRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RRESP", "1");
    S_AXI_CTRL_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_OUTSTANDING", "1");
    S_AXI_CTRL_transactor_param_props.addLong("MAX_BURST_LENGTH", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_READ_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("NUM_WRITE_THREADS", "1");
    S_AXI_CTRL_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_SIZE", "0");
    S_AXI_CTRL_transactor_param_props.addLong("HAS_RESET", "1");
    S_AXI_CTRL_transactor_param_props.addFloat("PHASE", "0.00");
    S_AXI_CTRL_transactor_param_props.addString("PROTOCOL", "AXI4LITE");
    S_AXI_CTRL_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    S_AXI_CTRL_transactor_param_props.addString("CLK_DOMAIN", "design_1_ddr4_0_1_c0_ddr4_ui_clk");

    mp_S_AXI_CTRL_transactor = new xtlm::xaximm_pin2xtlm_t<32,7,1,1,1,1,1,1>("S_AXI_CTRL_transactor", S_AXI_CTRL_transactor_param_props);
  mp_S_AXI_CTRL_transactor->AWVALID(s_axi_ctrl_awvalid);
  mp_S_AXI_CTRL_transactor->AWREADY(s_axi_ctrl_awready);
  mp_S_AXI_CTRL_transactor->AWADDR(s_axi_ctrl_awaddr);
  mp_S_AXI_CTRL_transactor->WVALID(s_axi_ctrl_wvalid);
  mp_S_AXI_CTRL_transactor->WREADY(s_axi_ctrl_wready);
  mp_S_AXI_CTRL_transactor->WDATA(s_axi_ctrl_wdata);
  mp_S_AXI_CTRL_transactor->BVALID(s_axi_ctrl_bvalid);
  mp_S_AXI_CTRL_transactor->BREADY(s_axi_ctrl_bready);
  mp_S_AXI_CTRL_transactor->BRESP(s_axi_ctrl_bresp);
  mp_S_AXI_CTRL_transactor->ARVALID(s_axi_ctrl_arvalid);
  mp_S_AXI_CTRL_transactor->ARREADY(s_axi_ctrl_arready);
  mp_S_AXI_CTRL_transactor->ARADDR(s_axi_ctrl_araddr);
  mp_S_AXI_CTRL_transactor->RVALID(s_axi_ctrl_rvalid);
  mp_S_AXI_CTRL_transactor->RREADY(s_axi_ctrl_rready);
  mp_S_AXI_CTRL_transactor->RDATA(s_axi_ctrl_rdata);
  mp_S_AXI_CTRL_transactor->RRESP(s_axi_ctrl_rresp);
  mp_S_AXI_CTRL_transactor->CLK(s_axi_ctrl_aclk);
  mp_S_AXI_CTRL_transactor->RST(s_axi_ctrl_aresetn);

  // initialize transactors stubs
  S00_AXIS_transactor_target_socket_stub = nullptr;
  M00_AXIS_transactor_initiator_socket_stub = nullptr;
  S01_AXIS_transactor_target_socket_stub = nullptr;
  M01_AXIS_transactor_initiator_socket_stub = nullptr;
  S02_AXIS_transactor_target_socket_stub = nullptr;
  M02_AXIS_transactor_initiator_socket_stub = nullptr;
  S03_AXIS_transactor_target_socket_stub = nullptr;
  M03_AXIS_transactor_initiator_socket_stub = nullptr;
  S04_AXIS_transactor_target_socket_stub = nullptr;
  M04_AXIS_transactor_initiator_socket_stub = nullptr;
  S05_AXIS_transactor_target_socket_stub = nullptr;
  M05_AXIS_transactor_initiator_socket_stub = nullptr;
  S06_AXIS_transactor_target_socket_stub = nullptr;
  M06_AXIS_transactor_initiator_socket_stub = nullptr;
  S07_AXIS_transactor_target_socket_stub = nullptr;
  M07_AXIS_transactor_initiator_socket_stub = nullptr;
  S08_AXIS_transactor_target_socket_stub = nullptr;
  M08_AXIS_transactor_initiator_socket_stub = nullptr;
  S09_AXIS_transactor_target_socket_stub = nullptr;
  M09_AXIS_transactor_initiator_socket_stub = nullptr;
  S_AXI_CTRL_transactor_target_wr_socket_stub = nullptr;
  S_AXI_CTRL_transactor_target_rd_socket_stub = nullptr;

}

void bd_d92b_xbar_0::before_end_of_elaboration()
{
  // configure 'S00_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S00_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S00_AXIS_TARGET_SOCKET->bind(*(mp_S00_AXIS_transactor->socket));
  
  }
  else
  {
    S00_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S00_AXIS_transactor_target_socket_stub->bind(*(mp_S00_AXIS_transactor->socket));
    mp_S00_AXIS_transactor->disable_transactor();
  }

  // configure 'M00_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M00_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M00_AXIS_INITIATOR_SOCKET->bind(*(mp_M00_AXIS_transactor->socket));
  
  }
  else
  {
    M00_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M00_AXIS_transactor_initiator_socket_stub->bind(*(mp_M00_AXIS_transactor->socket));
    mp_M00_AXIS_transactor->disable_transactor();
  }

  // configure 'S01_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S01_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S01_AXIS_TARGET_SOCKET->bind(*(mp_S01_AXIS_transactor->socket));
  
  }
  else
  {
    S01_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S01_AXIS_transactor_target_socket_stub->bind(*(mp_S01_AXIS_transactor->socket));
    mp_S01_AXIS_transactor->disable_transactor();
  }

  // configure 'M01_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M01_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M01_AXIS_INITIATOR_SOCKET->bind(*(mp_M01_AXIS_transactor->socket));
  
  }
  else
  {
    M01_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M01_AXIS_transactor_initiator_socket_stub->bind(*(mp_M01_AXIS_transactor->socket));
    mp_M01_AXIS_transactor->disable_transactor();
  }

  // configure 'S02_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S02_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S02_AXIS_TARGET_SOCKET->bind(*(mp_S02_AXIS_transactor->socket));
  
  }
  else
  {
    S02_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S02_AXIS_transactor_target_socket_stub->bind(*(mp_S02_AXIS_transactor->socket));
    mp_S02_AXIS_transactor->disable_transactor();
  }

  // configure 'M02_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M02_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M02_AXIS_INITIATOR_SOCKET->bind(*(mp_M02_AXIS_transactor->socket));
  
  }
  else
  {
    M02_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M02_AXIS_transactor_initiator_socket_stub->bind(*(mp_M02_AXIS_transactor->socket));
    mp_M02_AXIS_transactor->disable_transactor();
  }

  // configure 'S03_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S03_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S03_AXIS_TARGET_SOCKET->bind(*(mp_S03_AXIS_transactor->socket));
  
  }
  else
  {
    S03_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S03_AXIS_transactor_target_socket_stub->bind(*(mp_S03_AXIS_transactor->socket));
    mp_S03_AXIS_transactor->disable_transactor();
  }

  // configure 'M03_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M03_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M03_AXIS_INITIATOR_SOCKET->bind(*(mp_M03_AXIS_transactor->socket));
  
  }
  else
  {
    M03_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M03_AXIS_transactor_initiator_socket_stub->bind(*(mp_M03_AXIS_transactor->socket));
    mp_M03_AXIS_transactor->disable_transactor();
  }

  // configure 'S04_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S04_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S04_AXIS_TARGET_SOCKET->bind(*(mp_S04_AXIS_transactor->socket));
  
  }
  else
  {
    S04_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S04_AXIS_transactor_target_socket_stub->bind(*(mp_S04_AXIS_transactor->socket));
    mp_S04_AXIS_transactor->disable_transactor();
  }

  // configure 'M04_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M04_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M04_AXIS_INITIATOR_SOCKET->bind(*(mp_M04_AXIS_transactor->socket));
  
  }
  else
  {
    M04_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M04_AXIS_transactor_initiator_socket_stub->bind(*(mp_M04_AXIS_transactor->socket));
    mp_M04_AXIS_transactor->disable_transactor();
  }

  // configure 'S05_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S05_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S05_AXIS_TARGET_SOCKET->bind(*(mp_S05_AXIS_transactor->socket));
  
  }
  else
  {
    S05_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S05_AXIS_transactor_target_socket_stub->bind(*(mp_S05_AXIS_transactor->socket));
    mp_S05_AXIS_transactor->disable_transactor();
  }

  // configure 'M05_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M05_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M05_AXIS_INITIATOR_SOCKET->bind(*(mp_M05_AXIS_transactor->socket));
  
  }
  else
  {
    M05_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M05_AXIS_transactor_initiator_socket_stub->bind(*(mp_M05_AXIS_transactor->socket));
    mp_M05_AXIS_transactor->disable_transactor();
  }

  // configure 'S06_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S06_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S06_AXIS_TARGET_SOCKET->bind(*(mp_S06_AXIS_transactor->socket));
  
  }
  else
  {
    S06_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S06_AXIS_transactor_target_socket_stub->bind(*(mp_S06_AXIS_transactor->socket));
    mp_S06_AXIS_transactor->disable_transactor();
  }

  // configure 'M06_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M06_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M06_AXIS_INITIATOR_SOCKET->bind(*(mp_M06_AXIS_transactor->socket));
  
  }
  else
  {
    M06_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M06_AXIS_transactor_initiator_socket_stub->bind(*(mp_M06_AXIS_transactor->socket));
    mp_M06_AXIS_transactor->disable_transactor();
  }

  // configure 'S07_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S07_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S07_AXIS_TARGET_SOCKET->bind(*(mp_S07_AXIS_transactor->socket));
  
  }
  else
  {
    S07_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S07_AXIS_transactor_target_socket_stub->bind(*(mp_S07_AXIS_transactor->socket));
    mp_S07_AXIS_transactor->disable_transactor();
  }

  // configure 'M07_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M07_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M07_AXIS_INITIATOR_SOCKET->bind(*(mp_M07_AXIS_transactor->socket));
  
  }
  else
  {
    M07_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M07_AXIS_transactor_initiator_socket_stub->bind(*(mp_M07_AXIS_transactor->socket));
    mp_M07_AXIS_transactor->disable_transactor();
  }

  // configure 'S08_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S08_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S08_AXIS_TARGET_SOCKET->bind(*(mp_S08_AXIS_transactor->socket));
  
  }
  else
  {
    S08_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S08_AXIS_transactor_target_socket_stub->bind(*(mp_S08_AXIS_transactor->socket));
    mp_S08_AXIS_transactor->disable_transactor();
  }

  // configure 'M08_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M08_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M08_AXIS_INITIATOR_SOCKET->bind(*(mp_M08_AXIS_transactor->socket));
  
  }
  else
  {
    M08_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M08_AXIS_transactor_initiator_socket_stub->bind(*(mp_M08_AXIS_transactor->socket));
    mp_M08_AXIS_transactor->disable_transactor();
  }

  // configure 'S09_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S09_AXIS_TLM_MODE") != 1)
  {
    mp_impl->S09_AXIS_TARGET_SOCKET->bind(*(mp_S09_AXIS_transactor->socket));
  
  }
  else
  {
    S09_AXIS_transactor_target_socket_stub = new xtlm::xtlm_axis_target_stub("socket",0);
    S09_AXIS_transactor_target_socket_stub->bind(*(mp_S09_AXIS_transactor->socket));
    mp_S09_AXIS_transactor->disable_transactor();
  }

  // configure 'M09_AXIS' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "M09_AXIS_TLM_MODE") != 1)
  {
    mp_impl->M09_AXIS_INITIATOR_SOCKET->bind(*(mp_M09_AXIS_transactor->socket));
  
  }
  else
  {
    M09_AXIS_transactor_initiator_socket_stub = new xtlm::xtlm_axis_initiator_stub("socket",0);
    M09_AXIS_transactor_initiator_socket_stub->bind(*(mp_M09_AXIS_transactor->socket));
    mp_M09_AXIS_transactor->disable_transactor();
  }

  // configure 'S_AXI_CTRL' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("bd_d92b_xbar_0", "S_AXI_CTRL_TLM_MODE") != 1)
  {
    mp_impl->S_AXI_CTRL_wr_socket->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    mp_impl->S_AXI_CTRL_rd_socket->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
  
  }
  else
  {
    S_AXI_CTRL_transactor_target_wr_socket_stub = new xtlm::xtlm_aximm_target_stub("wr_socket",0);
    S_AXI_CTRL_transactor_target_wr_socket_stub->bind(*(mp_S_AXI_CTRL_transactor->wr_socket));
    S_AXI_CTRL_transactor_target_rd_socket_stub = new xtlm::xtlm_aximm_target_stub("rd_socket",0);
    S_AXI_CTRL_transactor_target_rd_socket_stub->bind(*(mp_S_AXI_CTRL_transactor->rd_socket));
    mp_S_AXI_CTRL_transactor->disable_transactor();
  }

}

#endif // MTI_SYSTEMC




bd_d92b_xbar_0::~bd_d92b_xbar_0()
{
  delete mp_S00_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_0;
  delete mp_s_axis_tready_converter_0;
  delete mp_s_axis_tdata_converter_0;
  delete mp_s_axis_tstrb_converter_0;
  delete mp_s_axis_tkeep_converter_0;
  delete mp_s_axis_tlast_converter_0;
  delete mp_s_axis_tid_converter_0;
  delete mp_s_axis_tdest_converter_0;
  delete mp_s_axis_tuser_converter_0;

  delete mp_M00_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_0;
  delete mp_m_axis_tready_converter_0;
  delete mp_m_axis_tdata_converter_0;
  delete mp_m_axis_tstrb_converter_0;
  delete mp_m_axis_tkeep_converter_0;
  delete mp_m_axis_tlast_converter_0;
  delete mp_m_axis_tid_converter_0;
  delete mp_m_axis_tdest_converter_0;
  delete mp_m_axis_tuser_converter_0;

  delete mp_S01_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_1;
  delete mp_s_axis_tready_converter_1;
  delete mp_s_axis_tdata_converter_1;
  delete mp_s_axis_tstrb_converter_1;
  delete mp_s_axis_tkeep_converter_1;
  delete mp_s_axis_tlast_converter_1;
  delete mp_s_axis_tid_converter_1;
  delete mp_s_axis_tdest_converter_1;
  delete mp_s_axis_tuser_converter_1;

  delete mp_M01_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_1;
  delete mp_m_axis_tready_converter_1;
  delete mp_m_axis_tdata_converter_1;
  delete mp_m_axis_tstrb_converter_1;
  delete mp_m_axis_tkeep_converter_1;
  delete mp_m_axis_tlast_converter_1;
  delete mp_m_axis_tid_converter_1;
  delete mp_m_axis_tdest_converter_1;
  delete mp_m_axis_tuser_converter_1;

  delete mp_S02_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_2;
  delete mp_s_axis_tready_converter_2;
  delete mp_s_axis_tdata_converter_2;
  delete mp_s_axis_tstrb_converter_2;
  delete mp_s_axis_tkeep_converter_2;
  delete mp_s_axis_tlast_converter_2;
  delete mp_s_axis_tid_converter_2;
  delete mp_s_axis_tdest_converter_2;
  delete mp_s_axis_tuser_converter_2;

  delete mp_M02_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_2;
  delete mp_m_axis_tready_converter_2;
  delete mp_m_axis_tdata_converter_2;
  delete mp_m_axis_tstrb_converter_2;
  delete mp_m_axis_tkeep_converter_2;
  delete mp_m_axis_tlast_converter_2;
  delete mp_m_axis_tid_converter_2;
  delete mp_m_axis_tdest_converter_2;
  delete mp_m_axis_tuser_converter_2;

  delete mp_S03_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_3;
  delete mp_s_axis_tready_converter_3;
  delete mp_s_axis_tdata_converter_3;
  delete mp_s_axis_tstrb_converter_3;
  delete mp_s_axis_tkeep_converter_3;
  delete mp_s_axis_tlast_converter_3;
  delete mp_s_axis_tid_converter_3;
  delete mp_s_axis_tdest_converter_3;
  delete mp_s_axis_tuser_converter_3;

  delete mp_M03_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_3;
  delete mp_m_axis_tready_converter_3;
  delete mp_m_axis_tdata_converter_3;
  delete mp_m_axis_tstrb_converter_3;
  delete mp_m_axis_tkeep_converter_3;
  delete mp_m_axis_tlast_converter_3;
  delete mp_m_axis_tid_converter_3;
  delete mp_m_axis_tdest_converter_3;
  delete mp_m_axis_tuser_converter_3;

  delete mp_S04_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_4;
  delete mp_s_axis_tready_converter_4;
  delete mp_s_axis_tdata_converter_4;
  delete mp_s_axis_tstrb_converter_4;
  delete mp_s_axis_tkeep_converter_4;
  delete mp_s_axis_tlast_converter_4;
  delete mp_s_axis_tid_converter_4;
  delete mp_s_axis_tdest_converter_4;
  delete mp_s_axis_tuser_converter_4;

  delete mp_M04_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_4;
  delete mp_m_axis_tready_converter_4;
  delete mp_m_axis_tdata_converter_4;
  delete mp_m_axis_tstrb_converter_4;
  delete mp_m_axis_tkeep_converter_4;
  delete mp_m_axis_tlast_converter_4;
  delete mp_m_axis_tid_converter_4;
  delete mp_m_axis_tdest_converter_4;
  delete mp_m_axis_tuser_converter_4;

  delete mp_S05_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_5;
  delete mp_s_axis_tready_converter_5;
  delete mp_s_axis_tdata_converter_5;
  delete mp_s_axis_tstrb_converter_5;
  delete mp_s_axis_tkeep_converter_5;
  delete mp_s_axis_tlast_converter_5;
  delete mp_s_axis_tid_converter_5;
  delete mp_s_axis_tdest_converter_5;
  delete mp_s_axis_tuser_converter_5;

  delete mp_M05_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_5;
  delete mp_m_axis_tready_converter_5;
  delete mp_m_axis_tdata_converter_5;
  delete mp_m_axis_tstrb_converter_5;
  delete mp_m_axis_tkeep_converter_5;
  delete mp_m_axis_tlast_converter_5;
  delete mp_m_axis_tid_converter_5;
  delete mp_m_axis_tdest_converter_5;
  delete mp_m_axis_tuser_converter_5;

  delete mp_S06_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_6;
  delete mp_s_axis_tready_converter_6;
  delete mp_s_axis_tdata_converter_6;
  delete mp_s_axis_tstrb_converter_6;
  delete mp_s_axis_tkeep_converter_6;
  delete mp_s_axis_tlast_converter_6;
  delete mp_s_axis_tid_converter_6;
  delete mp_s_axis_tdest_converter_6;
  delete mp_s_axis_tuser_converter_6;

  delete mp_M06_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_6;
  delete mp_m_axis_tready_converter_6;
  delete mp_m_axis_tdata_converter_6;
  delete mp_m_axis_tstrb_converter_6;
  delete mp_m_axis_tkeep_converter_6;
  delete mp_m_axis_tlast_converter_6;
  delete mp_m_axis_tid_converter_6;
  delete mp_m_axis_tdest_converter_6;
  delete mp_m_axis_tuser_converter_6;

  delete mp_S07_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_7;
  delete mp_s_axis_tready_converter_7;
  delete mp_s_axis_tdata_converter_7;
  delete mp_s_axis_tstrb_converter_7;
  delete mp_s_axis_tkeep_converter_7;
  delete mp_s_axis_tlast_converter_7;
  delete mp_s_axis_tid_converter_7;
  delete mp_s_axis_tdest_converter_7;
  delete mp_s_axis_tuser_converter_7;

  delete mp_M07_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_7;
  delete mp_m_axis_tready_converter_7;
  delete mp_m_axis_tdata_converter_7;
  delete mp_m_axis_tstrb_converter_7;
  delete mp_m_axis_tkeep_converter_7;
  delete mp_m_axis_tlast_converter_7;
  delete mp_m_axis_tid_converter_7;
  delete mp_m_axis_tdest_converter_7;
  delete mp_m_axis_tuser_converter_7;

  delete mp_S08_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_8;
  delete mp_s_axis_tready_converter_8;
  delete mp_s_axis_tdata_converter_8;
  delete mp_s_axis_tstrb_converter_8;
  delete mp_s_axis_tkeep_converter_8;
  delete mp_s_axis_tlast_converter_8;
  delete mp_s_axis_tid_converter_8;
  delete mp_s_axis_tdest_converter_8;
  delete mp_s_axis_tuser_converter_8;

  delete mp_M08_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_8;
  delete mp_m_axis_tready_converter_8;
  delete mp_m_axis_tdata_converter_8;
  delete mp_m_axis_tstrb_converter_8;
  delete mp_m_axis_tkeep_converter_8;
  delete mp_m_axis_tlast_converter_8;
  delete mp_m_axis_tid_converter_8;
  delete mp_m_axis_tdest_converter_8;
  delete mp_m_axis_tuser_converter_8;

  delete mp_S09_AXIS_transactor;
  delete mp_s_axis_tvalid_converter_9;
  delete mp_s_axis_tready_converter_9;
  delete mp_s_axis_tdata_converter_9;
  delete mp_s_axis_tstrb_converter_9;
  delete mp_s_axis_tkeep_converter_9;
  delete mp_s_axis_tlast_converter_9;
  delete mp_s_axis_tid_converter_9;
  delete mp_s_axis_tdest_converter_9;
  delete mp_s_axis_tuser_converter_9;

  delete mp_M09_AXIS_transactor;
  delete mp_m_axis_tvalid_converter_9;
  delete mp_m_axis_tready_converter_9;
  delete mp_m_axis_tdata_converter_9;
  delete mp_m_axis_tstrb_converter_9;
  delete mp_m_axis_tkeep_converter_9;
  delete mp_m_axis_tlast_converter_9;
  delete mp_m_axis_tid_converter_9;
  delete mp_m_axis_tdest_converter_9;
  delete mp_m_axis_tuser_converter_9;

  delete mp_S_AXI_CTRL_transactor;

  delete mp_m_axis_concat_tdata;
  delete mp_m_axis_concat_tdest;
  delete mp_m_axis_concat_tid;
  delete mp_m_axis_concat_tkeep;
  delete mp_m_axis_concat_tlast;
  delete mp_m_axis_concat_tstrb;
  delete mp_m_axis_concat_tuser;
  delete mp_m_axis_concat_tvalid;
  delete mp_m_axis_split_tready;
  delete mp_s_axis_concat_tready;
  delete mp_s_axis_split_tdata;
  delete mp_s_axis_split_tdest;
  delete mp_s_axis_split_tid;
  delete mp_s_axis_split_tkeep;
  delete mp_s_axis_split_tlast;
  delete mp_s_axis_split_tstrb;
  delete mp_s_axis_split_tuser;
  delete mp_s_axis_split_tvalid;
}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(bd_d92b_xbar_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(bd_d92b_xbar_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(bd_d92b_xbar_0);
SC_REGISTER_BV(640);
#endif

