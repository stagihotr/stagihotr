@echo off
@SET addressRef=C:/Users/Lewis Ferreira/Desktop/SCADE19.2

::@set addressRef=E:/SCADE/Suite
::echo  %addressRef%
@SET PATH=%addressRef%/SCADE/bin;%PATH%


cd .
call uaadaptor.exe -n "%addressRef%/SCADE Display/config/a661_description/a661.xml"  -k "..\UserApplication\KCG\kcg_trace.xml" -sdy "..\UserApplication\UserApplication.sdy" -outdir "..\UserApplication\KCG" "..\DefinitionFile\exoSkeleton.sgfx"
pause
