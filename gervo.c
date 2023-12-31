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
	strcpy(city.name, "nanjing is a city with very loooooooooooooooooooooooooooooooooooooong history\n");
	printf("get_city: &n1 = %p, &city= %p &n2=%p &city.zip = %p, city.name = %p\n", &n1, &city, &n2, &city.zip, city.name);
		
	return city;
}

int main(int argc, const char* argv[])
{
	CITY c;
	
	printf("&c = %p\n", &c);
	
	c = get_city(argv[0][1]);

        printf("main: &c = %p, city name %s (@%p) zip %d(@%p) \n", &c, c.name, c.name, c.zip, &c.zip);

	printf("main: experiments on returning struct in c.(%d, %s)\n", argc, argv[0]);

	CITY c2 = get_city(argv[0][2]);

	printf("main: &c2 = %p, city name %s (@%p) zip %d(@%p) \n", &c2, c2.name, c2.name, c2.zip, &c2.zip);
		
	return c.zip + c2.zip;
}

