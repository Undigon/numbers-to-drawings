#include <stdio.h>
#define FULL_LINE printf ("xxxxxxxxxx")
#define EIGHTLIKE (line < 3 || line > 8 || (line > 4 && line < 7))
//This draws
void liner(int num, int line){
	switch(num){
	    case 0:
	      if (3 > line || 8 < line) {FULL_LINE;}
	      else {printf ("xxx    xxx");}
	    break;
	    case 1:
	      if (1 == line) {printf("   xxxx");}
	      else if (2 == line) {printf("  xxxxx");}
	      else if (3 == line) {printf(" xx xxx");}
	      else if (4 == line) {printf("xx  xxx");}
	      else if (8 < line) {FULL_LINE;break;}
	      else {printf("    xxx");}
	      printf("   ");
	    break;
	    case 2:
	      if EIGHTLIKE {FULL_LINE;}
	      else if  (3 == line || 4 == line) {printf ("       xxx");}
	      else {printf("xxx       ");}
	    break;
	    case 3:
	      if EIGHTLIKE {FULL_LINE;}
	      else {printf("       xxx");}
	    break;
	    case 4:
	      if (line < 5) {printf("xxx    xxx");}
	      else if (line > 6) {printf("       xxx");}
	      else {FULL_LINE;}
	    break;
	    case 5:
	      if EIGHTLIKE {FULL_LINE;}
	      if (line > 2 && line < 5) {printf ("xxx       ");}
	      if (line > 6 && line < 9) {printf ("       xxx");}
	    break;
	    case 6:
	      if EIGHTLIKE {FULL_LINE;}
	      if (line > 2 && line < 5) {printf ("xxx       ");}
	      if (line > 6 && line < 9) {printf ("xxx    xxx");}
	    break;
	    case 7:
	      if (line < 3) {FULL_LINE;}
	      else {printf ("       xxx");}
	    break;
	    case 8:
	      if EIGHTLIKE {FULL_LINE;}
	      else {printf ("xxx    xxx");}
	    break;
	    case 9:
	      if EIGHTLIKE {FULL_LINE;}
	      else if (line > 2 && line < 5) {printf ("xxx    xxx");}
	      else {printf ("       xxx");}
	    break;
	}
}

//This synchronizes
int main (){
	int a;
	int b;
	int c;
	int d;
	int e;
	int line=1;
	/*Getting the data*/
	printf ("inserte la clave:\n");
	scanf("%1d", &a);
	scanf("%1d", &b);
	scanf("%1d", &c);
	scanf("%1d", &d);
	scanf("%1d", &e);
	/*End of getting the data*/

	printf ("R\n");
	while (line < 11) {
		liner(a, line);
		printf("   ");
		liner(b, line);
		printf("   ");
		liner(c, line);
		printf("   ");
		liner(d, line);
		printf("   ");
		liner(e, line);
		printf("\n");
		line++;
	    }
return 0;
}
