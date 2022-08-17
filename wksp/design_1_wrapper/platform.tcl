# 
# Usage: To re-create this platform project launch xsct with below options.
# xsct C:\Users\Chick\Vivado_Builds\FPGAPCIE\wksp\design_1_wrapper\platform.tcl
# 
# OR launch xsct and run below command.
# source C:\Users\Chick\Vivado_Builds\FPGAPCIE\wksp\design_1_wrapper\platform.tcl
# 
# To create the platform in a different location, modify the -out option of "platform create" command.
# -out option specifies the output directory of the platform project.

platform create -name {design_1_wrapper}\
-hw {C:\Users\Chick\Vivado_Builds\FPGAPCIE\design_1_wrapper.xsa}\
-out {C:/Users/Chick/Vivado_Builds/FPGAPCIE/wksp}

platform write
domain create -name {standalone_microblaze_0} -display-name {standalone_microblaze_0} -os {standalone} -proc {microblaze_0} -runtime {cpp} -arch {32-bit} -support-app {empty_application}
platform generate -domains 
platform active {design_1_wrapper}
platform generate -quick
bsp reload
bsp reload
