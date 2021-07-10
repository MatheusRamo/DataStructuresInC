


all:
	gcc -c src/linked_list.c -I include -o obj/linked_list.o
	gcc ./main/main.c ./obj/linked_list.o -I ./include -o ./bin/main

run:
	./bin/main

clean:
	rm -rf ./bin/* ./obj/*.o