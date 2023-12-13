all: gervo gervoo

gervo: gervo.c
	gcc -g -o $@ $^
	
gervoo: gervo.c
	gcc -g -O -o $@ $^

clean:
	rm gervo gervoo
