SRC_EXE_1=./output/dot_O/1-escrita_leitura_binarios.o ./output/functions/*.o
SRC_EXE_2=./output/dot_O/2-escrita_leitura_formatada.o ./output/functions/*.o
BIN_EXE_1=./output/exe_1
BIN_EXE_2=./output/exe_2
DOT_O=./output/dot_O/
OUTPUT_FUNC=./output/functions/
OUTPUT=./output/
EXTRA_FLAGS=-Wall -Wextra -lm -g3


esc_lei_bin: functions.o exe1.o 
	gcc $(SRC_EXE_1) -g $(EXTRA_FLAGS) -o $(BIN_EXE_1);

esc_lei_formt: functions.o exe2.o 
	gcc $(SRC_EXE_2) -g $(EXTRA_FLAGS) -o $(BIN_EXE_2);


functions.o: ../2-headers/functions/*.c
# verifica se a pasta output esta criada antes de mover o arquivo
	if [ ! -d $(OUTPUT) ]; then mkdir $(OUTPUT); fi;
	if [ ! -d $(DOT_O) ]; then mkdir $(DOT_O); fi;
	if [ ! -d $(OUTPUT_FUNC) ]; then mkdir $(OUTPUT_FUNC); fi;
	gcc -c ../2-headers/functions/*.c;
	mv *.o $(OUTPUT_FUNC);

exe1.o: 1-escrita_leitura_binarios.c
	gcc -c 1-escrita_leitura_binarios.c;
	mv 1-escrita_leitura_binarios.o $(DOT_O);

exe2.o: 2-escrita_leitura_formatada.c
	gcc -c 2-escrita_leitura_formatada.c;
	mv 2-escrita_leitura_formatada.o $(DOT_O);

clean:
	rm -r $(OUTPUT); clear;

run_bin:
	echo ""; $(BIN_EXE_1); echo "";

run_form:
	echo ""; $(BIN_EXE_2); echo "";
