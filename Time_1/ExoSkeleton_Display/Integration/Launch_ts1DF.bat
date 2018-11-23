@echo off
@set addressRef=C:/Users/Lewis Ferreira/Desktop/SCADE19.2

::@set addressRef=E:/SCADE/Suite
::echo  %addressRef%
@SET PATH=%addressRef%/SCADE A661/bin;%PATH%

cd .

start A661Server.exe "..\DefinitionFile\DF\server_conf.xml" "..\DefinitionFile\DF\UA_1.bin"
