#bin/sh
cd /home/tvngoc/T2K2_NOvA_2016_flux
source /home/tvngoc/Downloads/root_buildnew/bin/thisroot.sh
root -l << EOF
.x improve_sys.cc

EOF
