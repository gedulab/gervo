#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct _CITY {
	int zip;
	int gdp;
	char name[200];
	}CITY;
	
CITY get_city(int z)
{
	int64_t n1 = z*2;
	CITY city;
	int64_t n2 = z*8;
	
	city.zip = z;
	city.gdp = 0xfeedfeed;
	strcpy(city.name, "naning is huge city with very loooooooooooooooooooooooooooooooooooooong name\n");
	printf("&n1 = %p, &city= %p &n2=%p &city.zip = %p, city.name = %p\n", &n1, &city, &n2, &city.zip, city.name);
		
	return city;
}

int main(int argc, const char* argv[])
{
	CITY c;
	
	printf("&c = %p\n", &c);
	
	c = get_city(argv[0][1]);
	
	printf("experiments on returning struct in c.(%d, %s)\n", argc, argv[0]);
	
	printf("&c = %p, city name %s (@%p) zip %d(@%p) \n", &c, c.name, c.name, c.zip, &c.zip);
		
	return c.zip;
}

