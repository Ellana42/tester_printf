#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char *str = "One ring to rule them all";
	char *str1 = "One ring to find them";
	int	i = 0;
	int	large = 2147483647;
	int	small = -2147483648;
	int	q = 42;
	int	mq = -42;
	int *null = NULL;
	unsigned int	a = 214748364;
	unsigned int	b = 214748364;
	unsigned int	u = 4294967295;
	char j = 'a';
	char k = '\n';
	char l = '0';
	char m = '\0';
	char n = '\\';

	ft_printf("================ CLASSIC PRINTING =================\n");
	// classic printing
	ft_printf("The king beneath the mountains.\n");
	ft_printf("The kind of fallen stones.\n");
	ft_printf("\n");

	ft_printf("================ CHARACTER PRINTING =================\n");
	// character printing
	ft_printf("%c\n", j);
	ft_printf("%c\n", k);
	ft_printf("%c\n", l);
	ft_printf("%c\n", m);
	ft_printf("%c\n", n);
	ft_printf("%c, %c\n", j, k);
	
	ft_printf("================ STRING PRINTING =================\n");
	// string printing 
	ft_printf("%s\n", str);
	ft_printf("%s\n \\ %s\n", str, str1);
	ft_printf("%s\n %% %s\n", str, str1);

	ft_printf("================ INTEGER PRINTING =================\n");
	// integer printing
	ft_printf("%d\n", i);
	ft_printf("%d\n", q);
	ft_printf("%d\n", mq);
	ft_printf("%d\n", small);
	ft_printf("%d\n", a);
	ft_printf("%d\n", b);
	ft_printf("%d + %d = %d\n", q, mq, large);

	ft_printf("================ UNSIGNED INTEGER PRINTING =================\n");
	// unsigned integer printing
	ft_printf("%u\n", i);
	ft_printf("%u\n", q);
	ft_printf("%u\n", large);
	ft_printf("%u\n", a);
	ft_printf("%u\n", u);
	ft_printf("%u\n", b);
	ft_printf("%u + %u = %u\n", q, u, large);

	ft_printf("================ SMALL HEX PRINTING =================\n");
	// hexa printing
	ft_printf("%x\n", q);
	ft_printf("%x\n", i);
	ft_printf("%x\n", large);
	ft_printf("%x\n", a);
	ft_printf("%x\n", u);
	ft_printf("%x\n", b);
	ft_printf("%x + %x = %x\n", q, u, large);

	ft_printf("================ BIG HEX PRINTING =================\n");
	// hexa printing
	ft_printf("%X\n", q);
	ft_printf("%X\n", i);
	ft_printf("%X\n", large);
	ft_printf("%X\n", a);
	ft_printf("%X\n", u);
	ft_printf("%X\n", b);
	ft_printf("%X + %X = %X\n", q, u, large);

	ft_printf("================ INTEGER PRINTING =================\n");
	// integer printing
	ft_printf("%i\n", i);
	ft_printf("%i\n", q);
	ft_printf("%i\n", mq);
	ft_printf("%i\n", large);
	ft_printf("%i\n", small);
	ft_printf("%i + %i = %i\n", q, mq, large);

	ft_printf("================ POINTER PRINTING =================\n");
	// pointer printing
	ft_printf("%p\n", str);
	ft_printf("%p\n", &q);
	ft_printf("%p\n", null);

	ft_printf("================ MULTI PRINTING =================\n");
	// multi types
	ft_printf("%c, %d\n", j, k);
	ft_printf("%s, %c\n", str, i);

	// bonus precision
	
	ft_printf("================ FLAGS PRINTING =================\n");
	ft_printf("%s, %s %d, %.2d:%.2d\n", "Sunday", "July", 3, 10, 2);
	ft_printf("%.5d\n", 10);
	ft_printf("%+.5d - %+.5d\n", 10, -4);
	ft_printf("% .5d - % .5d\n", 10, -4);
	ft_printf("%+.5d - % .5d\n", 10, -4);
	ft_printf("% .5d - %+.5d\n", 10, -4);
	ft_printf("%4d\n", 3);
	ft_printf("%04d\n", 3);
	ft_printf("%#x\n", 3);
	ft_printf("%#X\n", 3);
	ft_printf( "%d	%d \n", 786, -786  );
	ft_printf( "%+d	%+d \n", 786, -786  );
	ft_printf( "% d % d \n", 547, -547  );
	ft_printf( "%#x \n", 8);
	ft_printf( "%+09d \n", 452  );
	ft_printf( "%+018d \n", 452  );
	ft_printf( "%09d \n", 452  );
	ft_printf( "% 9d \n", 452  );
	ft_printf( "|%-5d|%-5d|\n", 1, 2  );
	ft_printf( "|%05d|%05d|\n", 1, 2  );
	ft_printf( "%#010x\n", 12  );
	ft_printf( "%+d\n", 10  );
	ft_printf( "%05d\n", 10  );
	ft_printf( "%x\n", 12  );
	ft_printf( "%#x\n", 12  );
	ft_printf("%.3s\n", "abcdef");
	ft_printf("%+5d\n",0);
	ft_printf("%+5d\n",-7);
	ft_printf("%+5d\n",1560133635);
	ft_printf("%+5d\n",-2035065302);
	ft_printf("%05d\n",0);
	ft_printf("%05d\n",-7);
	ft_printf("%05d\n",1560133635);
	ft_printf("%05d\n",-2035065302);
	ft_printf("%5s\n","");
	ft_printf("%5s\n","a");
	ft_printf("%5s\n","ab");
	ft_printf("%5s\n","abcdefg");
	ft_printf("%-5s\n","");
	ft_printf("%-5s\n","a");
	ft_printf("%-5s\n","ab");
	ft_printf("%-5s\n","abcdefg");
	ft_printf("% 05d\n",0);
	ft_printf("% 05d\n",-7);
	ft_printf("% 05d\n",1560133635);
	ft_printf("% 05d\n",-2035065302);
	ft_printf("%-5d\n",0);
	ft_printf("%-5d\n",-7);
	ft_printf("%-5d\n",1560133635);
	ft_printf("%-5d\n",-2035065302);
	ft_printf("% -5d\n",0);
	ft_printf("% -5d\n",-7);
	ft_printf("% -5d\n",1560133635);
	ft_printf("% -5d\n",-2035065302);
	ft_printf("%+-5d\n",0);
	ft_printf("%+-5d\n",-7);
	ft_printf("%+-5d\n",1560133635);
	ft_printf("%+-5d\n",-2035065302);
	ft_printf("%+05d\n",0);
	ft_printf("%+05d\n",-7);
	ft_printf("%+05d\n",1560133635);
	ft_printf("%+05d\n",-2035065302);
	ft_printf("%+5d\n",0);
	ft_printf("%+5d\n",-7);
	ft_printf("%+5d\n",1560133635);
	ft_printf("%+5d\n",-2035065302);
	ft_printf("%-5d\n",0);
	ft_printf("%-5d\n",-7);
	ft_printf("%-5d\n",1560133635);
	ft_printf("%-5d\n",-2035065302);
	ft_printf("%5d\n",0);
	ft_printf("%5d\n",-7);
	ft_printf("%5d\n",1560133635);
	ft_printf("%5d\n",-2035065302);

	printf("\nzelda\n");
	 
	printf("================ CLASSIC PRINTING =================\n");
	// classic printing
	printf("The king beneath the mountains.\n");
	printf("The kind of fallen stones.\n");
	printf("\n");

	printf("================ CHARACTER PRINTING =================\n");
	// character printing
	printf("%c\n", j);
	printf("%c\n", k);
	printf("%c\n", l);
	printf("%c\n", m);
	printf("%c\n", n);
	printf("%c, %c\n", j, k);
	
	printf("================ STRING PRINTING =================\n");
	// string printing 
	printf("%s\n", str);
	printf("%s\n \\ %s\n", str, str1);
	printf("%s\n %% %s\n", str, str1);

	printf("================ INTEGER PRINTING =================\n");
	// integer printing
	printf("%d\n", i);
	printf("%d\n", q);
	printf("%d\n", mq);
	printf("%d\n", small);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d + %d = %d\n", q, mq, large);

	printf("================ UNSIGNED INTEGER PRINTING =================\n");
	// unsigned integer printing
	printf("%u\n", i);
	printf("%u\n", q);
	printf("%u\n", large);
	printf("%u\n", a);
	printf("%u\n", u);
	printf("%u\n", b);
	printf("%u + %u = %u\n", q, u, large);

	printf("================ SMALL HEX PRINTING =================\n");
	// hexa printing
	printf("%x\n", q);
	printf("%x\n", i);
	printf("%x\n", large);
	printf("%x\n", a);
	printf("%x\n", u);
	printf("%x\n", b);
	printf("%x + %x = %x\n", q, u, large);

	printf("================ BIG HEX PRINTING =================\n");
	// hexa printing
	printf("%X\n", q);
	printf("%X\n", i);
	printf("%X\n", large);
	printf("%X\n", a);
	printf("%X\n", u);
	printf("%X\n", b);
	printf("%X + %X = %X\n", q, u, large);

	printf("================ INTEGER PRINTING =================\n");
	// integer printing
	printf("%i\n", i);
	printf("%i\n", q);
	printf("%i\n", mq);
	printf("%i\n", large);
	printf("%i\n", small);
	printf("%i + %i = %i\n", q, mq, large);

	printf("================ POINTER PRINTING =================\n");
	// pointer printing
	printf("%p\n", str);
	printf("%p\n", &q);
	printf("%p\n", null);

	printf("================ MULTI PRINTING =================\n");
	// multi types
	printf("%c, %d\n", j, k);
	printf("%s, %c\n", str, i);

	// bonus precision
	
	// bonus precision
	
	printf("================ FLAGS PRINTING =================\n");
	printf("%s, %s %d, %.2d:%.2d\n", "Sunday", "July", 3, 10, 2);
	printf("%.5d\n", 10);
	printf("%+.5d - %+.5d\n", 10, -4);
	printf("% .5d - % .5d\n", 10, -4);
	printf("%+.5d - % .5d\n", 10, -4);
	printf("% .5d - %+.5d\n", 10, -4);
	printf("%4d\n", 3);
	printf("%04d\n", 3);
	printf("%#x\n", 3);
	printf("%#X\n", 3);
	printf( "%d	%d \n", 786, -786  );
	printf( "%+d	%+d \n", 786, -786  );
	printf( "% d % d \n", 547, -547  );
	printf( "%#x \n", 8);
	printf( "%+09d \n", 452  );
	printf( "%+018d \n", 452  );
	printf( "%09d \n", 452  );
	printf( "% 9d \n", 452  );
	printf( "|%-5d|%-5d|\n", 1, 2  );
	printf( "|%05d|%05d|\n", 1, 2  );
	printf( "%#010x\n", 12  );
	printf( "%+d\n", 10  );
	printf( "%05d\n", 10  );
	printf( "%x\n", 12  );
	printf( "%#x\n", 12  );
	printf("%.3s\n", "abcdef");
	printf("%+5d\n",0);
	printf("%+5d\n",-7);
	printf("%+5d\n",1560133635);
	printf("%+5d\n",-2035065302);
	printf("%05d\n",0);
	printf("%05d\n",-7);
	printf("%05d\n",1560133635);
	printf("%05d\n",-2035065302);
	printf("%5s\n","");
	printf("%5s\n","a");
	printf("%5s\n","ab");
	printf("%5s\n","abcdefg");
	printf("%-5s\n","");
	printf("%-5s\n","a");
	printf("%-5s\n","ab");
	printf("%-5s\n","abcdefg");
	printf("% 05d\n",0);
	printf("% 05d\n",-7);
	printf("% 05d\n",1560133635);
	printf("% 05d\n",-2035065302);
	printf("%-5d\n",0);
	printf("%-5d\n",-7);
	printf("%-5d\n",1560133635);
	printf("%-5d\n",-2035065302);
	printf("% -5d\n",0);
	printf("% -5d\n",-7);
	printf("% -5d\n",1560133635);
	printf("% -5d\n",-2035065302);
	printf("%+-5d\n",0);
	printf("%+-5d\n",-7);
	printf("%+-5d\n",1560133635);
	printf("%+-5d\n",-2035065302);
	printf("%+05d\n",0);
	printf("%+05d\n",-7);
	printf("%+05d\n",1560133635);
	printf("%+05d\n",-2035065302);
	printf("%+5d\n",0);
	printf("%+5d\n",-7);
	printf("%+5d\n",1560133635);
	printf("%+5d\n",-2035065302);
	printf("%-5d\n",0);
	printf("%-5d\n",-7);
	printf("%-5d\n",1560133635);
	printf("%-5d\n",-2035065302);
	printf("%5d\n",0);
	printf("%5d\n",-7);
	printf("%5d\n",1560133635);
	printf("%5d\n",-2035065302);

	
	printf("\n");
}
