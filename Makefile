table:
	cc table.c -o table
install:
	cp ./table /usr/local/bin/table
uninstall:
	rm /usr/local/bin/table
clean:
	rm ./table
