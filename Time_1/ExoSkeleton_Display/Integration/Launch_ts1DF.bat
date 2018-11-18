@SET PATH=C:/Users/Lewis Ferreira/Desktop/SCADE19.2/SCADE A661/bin;%PATH%

@echo off

cd .

start A661Server.exe "..\DefinitionFile\DF\server_conf.xml" "..\DefinitionFile\DF\UA_1.bin"
