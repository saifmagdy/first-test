#include <stdio.h>

//TODO: Create mul, divide functions here and fix the divide bug
float add(int a,int b){
	return a+b;
}
float subtract(int a,int b){
	return a-b;
}
int main(){
    int a,b;
    char operation;
    float result;
	scanf("%i%c%i",&a,&operation,&b);
	
	switch (operation) {
	    case '+':
	        result = add(a,b); 
	        break;
	    case '-': 
	        result = subtract(a,b);
	        break;
	    case '*': 
	        result = a*b;
	        break;
	    case '/': 
	        result = a/b;
	        break;
	    default : 
	        printf("UnKnown Operation try +,-,* or / \n");
	        result = -1;
	        break;
	}
	
	printf("%i %c %i = %.4f\n",a,operation,b,result);
return 0;
}
