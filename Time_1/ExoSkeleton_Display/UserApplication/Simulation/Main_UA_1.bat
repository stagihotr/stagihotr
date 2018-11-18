@cd "C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\Scade\Downloads\stagihotr-master\stagihotr-master\Time_1\ExoSkeleton_Display\UserApplication\UserApplication.sdy" -n "C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation" -k "C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation/kcg_trace.xml" -o "Main_UA_1" -i "UserApplication_interface.h"  -encoding "ASCII"  "C:\Users\Scade\Downloads\stagihotr-master\stagihotr-master\Time_1\ExoSkeleton_Display\DefinitionFile\exoSkeleton.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "Main_UA_1.log" "Main_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\Scade\Downloads\stagihotr-master\stagihotr-master\Time_1\ExoSkeleton_Display\DefinitionFile\DefinitionFile.etp" -conf "DF Generation" -source "exoSkeleton.sgfx" -outdir "C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation" -prefix "Main_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "Main_UA_1.log" "Main_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\Scade\Downloads\stagihotr-master\stagihotr-master\Time_1\ExoSkeleton_Display\DefinitionFile\DefinitionFile.etp" -conf "DF Generation" -spec "exoSkeleton.sgfx" -out "C:/Users/Scade/Downloads/stagihotr-master/stagihotr-master/Time_1/ExoSkeleton_Display/UserApplication/Simulation/Main_UA_1_conf.xml"
@exit 0
:failed
@exit 1
