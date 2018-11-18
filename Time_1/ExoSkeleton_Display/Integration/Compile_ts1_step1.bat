@SET PATH=C:/Users/Lewis Ferreira/Desktop/SCADE19.2/SCADE/bin;%PATH%
@echo off
cd .
call uaadaptor.exe -n "C:\Users\Lewis Ferreira\Desktop\SCADE19.2\SCADE Display\config\a661_description\a661.xml"  -k "..\UserApplication\KCG\kcg_trace.xml" -sdy "..\UserApplication\UserApplication.sdy" -outdir "..\UserApplication\KCG" "..\DefinitionFile\exoSkeleton.sgfx"
pause
