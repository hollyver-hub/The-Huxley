#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,delta,raiz, x1,x2;
	scanf("%f %f %f",&a,&b,&c);
	
		delta= pow(b,2) - 4*a*c;
		raiz = sqrt(delta);
	
	if(a!=0){
		if(delta<0){
			printf("NRR");
		}
		else{
			x1= (-b + raiz)/(2.0*a); 
			x2= (-b - raiz)/(2.0*a);	
			printf("%.2f\n%.2f",x1,x2);
	  }
  }
	else 
		printf("NEESG");

}
