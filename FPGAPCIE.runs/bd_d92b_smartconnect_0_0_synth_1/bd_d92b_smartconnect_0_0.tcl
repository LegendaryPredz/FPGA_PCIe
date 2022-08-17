# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
namespace eval ::optrace {
  variable script "C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0.tcl"
  variable category "vivado_synth"
}

# Try to connect to running dispatch if we haven't done so already.
# This code assumes that the Tcl interpreter is not using threads,
# since the ::dispatch::connected variable isn't mutex protected.
if {![info exists ::dispatch::connected]} {
  namespace eval ::dispatch {
    variable connected false
    if {[llength [array get env XILINX_CD_CONNECT_ID]] > 0} {
      set result "true"
      if {[catch {
        if {[lsearch -exact [package names] DispatchTcl] < 0} {
          set result [load librdi_cd_clienttcl[info sharedlibextension]] 
        }
        if {$result eq "false"} {
          puts "WARNING: Could not load dispatch client library"
        }
        set connect_id [ ::dispatch::init_client -mode EXISTING_SERVER ]
        if { $connect_id eq "" } {
          puts "WARNING: Could not initialize dispatch client"
        } else {
          puts "INFO: Dispatch client connection id - $connect_id"
          set connected true
        }
      } catch_res]} {
        puts "WARNING: failed to connect to dispatch server - $catch_res"
      }
    }
  }
}
if {$::dispatch::connected} {
  # Remove the dummy proc if it exists.
  if { [expr {[llength [info procs ::OPTRACE]] > 0}] } {
    rename ::OPTRACE ""
  }
  proc ::OPTRACE { task action {tags {} } } {
    ::vitis_log::op_trace "$task" $action -tags $tags -script $::optrace::script -category $::optrace::category
  }
  # dispatch is generic. We specifically want to attach logging.
  ::vitis_log::connect_client
} else {
  # Add dummy proc if it doesn't exist.
  if { [expr {[llength [info procs ::OPTRACE]] == 0}] } {
    proc ::OPTRACE {{arg1 \"\" } {arg2 \"\"} {arg3 \"\" } {arg4 \"\"} {arg5 \"\" } {arg6 \"\"}} {
        # Do nothing
    }
  }
}

proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
OPTRACE "bd_d92b_smartconnect_0_0_synth_1" START { ROLLUP_AUTO }
set_msg_config  -id {[BD 41-1306]}  -suppress 
set_msg_config  -id {[BD 41-1271]}  -suppress 
set_param project.vivado.isBlockSynthRun true
set_msg_config -msgmgr_mode ooc_run
OPTRACE "Creating in-memory project" START { }
create_project -in_memory -part xcku040-ffva1156-2-e

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.cache/wt} [current_project]
set_property parent.project_path {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.xpr} [current_project]
set_property XPM_LIBRARIES {XPM_CDC XPM_FIFO XPM_MEMORY} [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property board_part xilinx.com:kcu105:part0:1.7 [current_project]
set_property ip_output_repo {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.cache/ip} [current_project]
set_property ip_cache_permissions {read write} [current_project]
OPTRACE "Creating in-memory project" END { }
OPTRACE "Adding files" START { }
read_ip -quiet {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0.xci}}
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_1/bd_ec8a_psr_aclk_0_board.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_1/bd_ec8a_psr_aclk_0.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_2/bd_ec8a_arinsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_3/bd_ec8a_rinsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_4/bd_ec8a_awinsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_5/bd_ec8a_winsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_6/bd_ec8a_binsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_7/bd_ec8a_aroutsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_8/bd_ec8a_routsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_9/bd_ec8a_awoutsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_10/bd_ec8a_woutsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_11/bd_ec8a_boutsw_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_12/bd_ec8a_arni_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_13/bd_ec8a_rni_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_14/bd_ec8a_awni_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_15/bd_ec8a_wni_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_16/bd_ec8a_bni_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_20/bd_ec8a_s00a2s_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_21/bd_ec8a_sarn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_22/bd_ec8a_srn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_23/bd_ec8a_sawn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_24/bd_ec8a_swn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_25/bd_ec8a_sbn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_26/bd_ec8a_m00s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_27/bd_ec8a_m00arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_28/bd_ec8a_m00rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_29/bd_ec8a_m00awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_30/bd_ec8a_m00wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_31/bd_ec8a_m00bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_33/bd_ec8a_m01s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_34/bd_ec8a_m01arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_35/bd_ec8a_m01rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_36/bd_ec8a_m01awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_37/bd_ec8a_m01wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_38/bd_ec8a_m01bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_40/bd_ec8a_m02s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_41/bd_ec8a_m02arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_42/bd_ec8a_m02rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_43/bd_ec8a_m02awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_44/bd_ec8a_m02wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_45/bd_ec8a_m02bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_47/bd_ec8a_m03s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_48/bd_ec8a_m03arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_49/bd_ec8a_m03rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_50/bd_ec8a_m03awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_51/bd_ec8a_m03wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_52/bd_ec8a_m03bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_54/bd_ec8a_m04s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_55/bd_ec8a_m04arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_56/bd_ec8a_m04rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_57/bd_ec8a_m04awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_58/bd_ec8a_m04wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_59/bd_ec8a_m04bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_61/bd_ec8a_m05s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_62/bd_ec8a_m05arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_63/bd_ec8a_m05rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_64/bd_ec8a_m05awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_65/bd_ec8a_m05wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_66/bd_ec8a_m05bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_68/bd_ec8a_m06s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_69/bd_ec8a_m06arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_70/bd_ec8a_m06rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_71/bd_ec8a_m06awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_72/bd_ec8a_m06wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_73/bd_ec8a_m06bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_75/bd_ec8a_m07s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_76/bd_ec8a_m07arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_77/bd_ec8a_m07rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_78/bd_ec8a_m07awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_79/bd_ec8a_m07wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_80/bd_ec8a_m07bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_82/bd_ec8a_m08s2a_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_83/bd_ec8a_m08arn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_84/bd_ec8a_m08rn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_85/bd_ec8a_m08awn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_86/bd_ec8a_m08wn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_1/ip/ip_87/bd_ec8a_m08bn_0_ooc.xdc}}]
set_property used_in_implementation false [get_files -all {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/ooc.xdc}}]

OPTRACE "Adding files" END { }
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
set_param ips.enableIPCacheLiteLoad 1
OPTRACE "Configure IP Cache" START { }

set cacheID [config_ip_cache -export -no_bom  -dir {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1} -new_name bd_d92b_smartconnect_0_0 -ip [get_ips bd_d92b_smartconnect_0_0]]

OPTRACE "Configure IP Cache" END { }
if { $cacheID == "" } {
close [open __synthesis_is_running__ w]

OPTRACE "synth_design" START { }
synth_design -top bd_d92b_smartconnect_0_0 -part xcku040-ffva1156-2-e -incremental_mode off -mode out_of_context
OPTRACE "synth_design" END { }
OPTRACE "Write IP Cache" START { }

#---------------------------------------------------------
# Generate Checkpoint/Stub/Simulation Files For IP Cache
#---------------------------------------------------------
# disable binary constraint mode for IPCache checkpoints
set_param constraints.enableBinaryConstraints false

catch {
 write_checkpoint -force -noxdef -rename_prefix bd_d92b_smartconnect_0_0_ bd_d92b_smartconnect_0_0.dcp

 set ipCachedFiles {}
 write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_d92b_smartconnect_0_0_stub.v
 lappend ipCachedFiles bd_d92b_smartconnect_0_0_stub.v

 write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_d92b_smartconnect_0_0_stub.vhdl
 lappend ipCachedFiles bd_d92b_smartconnect_0_0_stub.vhdl

 write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_d92b_smartconnect_0_0_sim_netlist.v
 lappend ipCachedFiles bd_d92b_smartconnect_0_0_sim_netlist.v

 write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ bd_d92b_smartconnect_0_0_sim_netlist.vhdl
 lappend ipCachedFiles bd_d92b_smartconnect_0_0_sim_netlist.vhdl
 set TIME_taken [expr [clock seconds] - $TIME_start]

 if { [get_msg_config -count -severity {CRITICAL WARNING}] == 0 } {
  config_ip_cache -add -dcp bd_d92b_smartconnect_0_0.dcp -move_files $ipCachedFiles   -synth_runtime $TIME_taken  -ip [get_ips bd_d92b_smartconnect_0_0]
 }
OPTRACE "Write IP Cache" END { }
}
if { [get_msg_config -count -severity {CRITICAL WARNING}] > 0 } {
 send_msg_id runtcl-6 info "Synthesis results are not added to the cache due to CRITICAL_WARNING"
}

rename_ref -prefix_all bd_d92b_smartconnect_0_0_

OPTRACE "write_checkpoint" START { CHECKPOINT }
# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef bd_d92b_smartconnect_0_0.dcp
OPTRACE "write_checkpoint" END { }
OPTRACE "synth reports" START { REPORT }
create_report "bd_d92b_smartconnect_0_0_synth_1_synth_report_utilization_0" "report_utilization -file bd_d92b_smartconnect_0_0_utilization_synth.rpt -pb bd_d92b_smartconnect_0_0_utilization_synth.pb"
OPTRACE "synth reports" END { }

if { [catch {
  file copy -force {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0.dcp} {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0.dcp}
} _RESULT ] } { 
  send_msg_id runtcl-3 status "ERROR: Unable to successfully create or copy the sub-design checkpoint file."
  error "ERROR: Unable to successfully create or copy the sub-design checkpoint file."
}

if { [catch {
  write_verilog -force -mode synth_stub {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_stub.v}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create a Verilog synthesis stub for the sub-design. This may lead to errors in top level synthesis of the design. Error reported: $_RESULT"
}

if { [catch {
  write_vhdl -force -mode synth_stub {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_stub.vhdl}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create a VHDL synthesis stub for the sub-design. This may lead to errors in top level synthesis of the design. Error reported: $_RESULT"
}

if { [catch {
  write_verilog -force -mode funcsim {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_sim_netlist.v}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create the Verilog functional simulation sub-design file. Post-Synthesis Functional Simulation with this file may not be possible or may give incorrect results. Error reported: $_RESULT"
}

if { [catch {
  write_vhdl -force -mode funcsim {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_sim_netlist.vhdl}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create the VHDL functional simulation sub-design file. Post-Synthesis Functional Simulation with this file may not be possible or may give incorrect results. Error reported: $_RESULT"
}


} else {


if { [catch {
  file copy -force {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0.dcp} {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0.dcp}
} _RESULT ] } { 
  send_msg_id runtcl-3 status "ERROR: Unable to successfully create or copy the sub-design checkpoint file."
  error "ERROR: Unable to successfully create or copy the sub-design checkpoint file."
}

if { [catch {
  file rename -force {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0_stub.v} {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_stub.v}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create a Verilog synthesis stub for the sub-design. This may lead to errors in top level synthesis of the design. Error reported: $_RESULT"
}

if { [catch {
  file rename -force {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0_stub.vhdl} {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_stub.vhdl}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create a VHDL synthesis stub for the sub-design. This may lead to errors in top level synthesis of the design. Error reported: $_RESULT"
}

if { [catch {
  file rename -force {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0_sim_netlist.v} {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_sim_netlist.v}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create the Verilog functional simulation sub-design file. Post-Synthesis Functional Simulation with this file may not be possible or may give incorrect results. Error reported: $_RESULT"
}

if { [catch {
  file rename -force {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.runs/bd_d92b_smartconnect_0_0_synth_1/bd_d92b_smartconnect_0_0_sim_netlist.vhdl} {c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_sim_netlist.vhdl}
} _RESULT ] } { 
  puts "CRITICAL WARNING: Unable to successfully create the VHDL functional simulation sub-design file. Post-Synthesis Functional Simulation with this file may not be possible or may give incorrect results. Error reported: $_RESULT"
}

}; # end if cacheID 

if {[file isdir {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.ip_user_files/ip/bd_d92b_smartconnect_0_0}]} {
  catch { 
    file copy -force {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_stub.v}} {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.ip_user_files/ip/bd_d92b_smartconnect_0_0}
  }
}

if {[file isdir {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.ip_user_files/ip/bd_d92b_smartconnect_0_0}]} {
  catch { 
    file copy -force {{c:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.gen/sources_1/bd/design_1/ip/design_1_v_proc_ss_0_0/bd_0/ip/ip_0/bd_d92b_smartconnect_0_0_stub.vhdl}} {C:/Users/Chick/Vivado Builds/FPGAPCIE/FPGAPCIE.ip_user_files/ip/bd_d92b_smartconnect_0_0}
  }
}
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
OPTRACE "bd_d92b_smartconnect_0_0_synth_1" END { }
