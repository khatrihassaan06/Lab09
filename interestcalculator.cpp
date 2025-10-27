#include <stdio.h>
float calculateInterest(float a, float b){
	float interest, rate = 3.0;
	interest = (a*b*rate)/ 100;
	return interest;
}

float updateBalance(float oldbalance, float interest){
	float newBalance;
	newBalance = oldbalance + interest;
	return newBalance;
}
int main(){
	float pp,time, cInterest,updBalance;
	printf("enter your principal: ");
	scanf("%d", &pp);
	printf("enter period of time in years: ");
	scanf("%d", &time);
	cInterest = calculateInterest(pp,time);
	updBalance = updateBalance(pp, cInterest);
	printf("Your interest amount = %d\n", cInterest);
	printf("%d",updBalance );
}
