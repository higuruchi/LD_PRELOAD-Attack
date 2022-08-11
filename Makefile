attack: unrandom.c random_num.c
	gcc -shared -fPIC unrandom.c -o unrandom.so
	gcc -o random_num random_num.c
	sudo chmod 600 ./important_file
	sudo chown root:root ./important_file
	sudo LD_PRELOAD=./unrandom.so ./random_num

clean:
	rm *.so random_num
