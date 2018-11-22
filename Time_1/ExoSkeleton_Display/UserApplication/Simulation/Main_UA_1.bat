@cd "E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/Simulation"
@set OCAMLRUNPARAM=b
"E:/SCADE/Suite/SCADE/bin/uaadaptor.exe" -sdy "E:\Projetos\stagiho-tr\Time_1\ExoSkeleton_Display\UserApplication\UserApplication.sdy" -n "E:\SCADE\Suite\SCADE Display\config\a661_description\a661.xml" -outdir "E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/Simulation" -k "E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/Simulation/kcg_trace.xml" -o "Main_UA_1" -i "UserApplication_interface.h"  -encoding "ASCII"  "E:\Projetos\stagiho-tr\Time_1\ExoSkeleton_Display\DefinitionFile\exoSkeleton.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "Main_UA_1.log" "Main_UA_1_uaadaptor.log"
"E:\SCADE\Suite\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "E:\Projetos\stagiho-tr\Time_1\ExoSkeleton_Display\DefinitionFile\DefinitionFile.etp" -conf "DF Generation" -source "exoSkeleton.sgfx" -outdir "E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/Simulation" -prefix "Main_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "Main_UA_1.log" "Main_UA_1_dfgen.log"
"E:\SCADE\Suite\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "E:\Projetos\stagiho-tr\Time_1\ExoSkeleton_Display\DefinitionFile\DefinitionFile.etp" -conf "DF Generation" -spec "exoSkeleton.sgfx" -out "E:/Projetos/stagiho-tr/Time_1/ExoSkeleton_Display/UserApplication/Simulation/Main_UA_1_conf.xml"
@exit 0
:failed
@exit 1
