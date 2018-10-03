#include <stdio.h>
#include <math.h> 
int main(void) {
    float q;
    printf("впишіть 1 якщо хочете розв'язувати квадратні рівняння, 2 якщо хочете розв'язувати квадратні нерівності\n");
    printf("1.квадратні рівняння\n");
    printf("2.квадратні нерівності\n");
scanf("%f", &q);
if (q == 1){
  printf("доведіть рівняння до виду ax^2+bx+c=0\n");
  printf("укажіть через Enter змінні a b c \n");  // printf("--------------------------------------------------------------------------------------------------------------\n"); printf("Приклад заданого рівняння: 2.5x^2-7x=0 \n");    printf("Приклад заповнення:\n");    printf("2.5\n");   printf("-7\n");    printf("0\n"); 
  printf("--------------------------------------------------------------------------------------------------------------\n"); printf("результат :");
 float a; 
 scanf("%f", &a);
   if (a != 0){
   float b; 
 scanf("%f", &b);
 if (b != 0){
     float c; 
 scanf("%f", &c);
 if (c != 0){
 	 float D; 
	 D = b*b - 4*a*c;
	 if (D == 0){
	 	float x;
		x = -b/(2*a);
		printf("x = %.3f\n", x); }
	else if (D < 0){
	printf("рівняння коренів немає");   }
	else if (D > 0){
	float l;
		l = sqrtf (D);
		float o;
		o = (-b+l)/(2*a);
		float p;
		p = (-b-l)/(2*a);
		printf("x = %.3f", p );   printf("   x = %.3f", o );}}
 else if (c == 0){
 	float x;
	x = -b/a ;
	printf("x = 0   x = %.3f\n", x);}}
 else if (b == 0){
 float c; 
 scanf("%f", &c);
 if (c != 0){
	float x;
	x = -c/a ;
	if (x < 0) printf("рівняння коренів немає");
	else if (x >= 0){
		float l;
		l = sqrtf (x);
		printf("x = %.3f\n", l );}}
 	else if (c == 0){ printf("x = 0\n"); }}}
  else if (a == 0){
   float b; 
 scanf("%f", &b);
 if (b != 0){
     float c; 
 scanf("%f", &c);
 if (c != 0){
 	float x;
	x = -c/b ;
	printf("x = 0   x = %.3f\n", x);   }
 else if (c == 0){ printf("x = 0\n"); }}
 else if (b == 0){
 float c; 
 scanf("%f", &c);
 if (c != 0){printf("рівняння коренів немає\n");}
 	else if (c == 0){ printf("x = (-?;+?)\n"); }}}
else if (q == 2){}}
    return 0; }

