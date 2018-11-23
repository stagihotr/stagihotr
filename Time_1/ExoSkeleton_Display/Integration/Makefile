ROOT=./
CC_FLAGS=-ansi -I . -I ../UserApplication/KCG/ -I ../CommunicationFramework/ -I "C:/Users/Lewis Ferreira/Desktop/SCADE19.2/SCADE/" -I "C:/Users/Lewis Ferreira/Desktop/SCADE19.2/SCADE/include/C/" -Wall -Wno-unused-variable -Wno-unused-function -Wno-unused-value
SRC=./C/STAGIHOTR.c ../CommunicationFramework/CommunicationFramework.c ../UserApplication/KCG/kcg_consts.c ../UserApplication/KCG/kcg_types.c ./C/convert.c ./C/md5.c ../UserApplication/KCG/Main.c ../UserApplication/KCG/ua.c ../UserApplication/KCG/ua_LAY_1.c ../UserApplication/KCG/ua_private.c

OBJ=$(SRC:.c=.o)

STAGIHOTR.exe: $(OBJ)
	gcc -o $@ $(OBJ)

.c.o:
	gcc $(CC_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) STAGIHOTR.exe

.PHONY: clean
