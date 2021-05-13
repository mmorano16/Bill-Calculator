#include <stdio.h>

int main(int argv, char *argc[])
{
	int total=0, var=-1;
	double tax, tip, bill;

	printf("Menu:\n");
	printf("Cheese Platter: $23 - Choice #1\nFrench Onion Soup: $16 - Choice #2\nRibeye: $70 - Choice #3\nFleur Burger: $5000 - Choice #4\nConclude order: Enter 0\n");
	printf("What would you like to order? ");
	while(var)
	{
		fscanf(stdin, "%d", &var);
		if(var==1)
			total=total+23;
		if(var==2)
			total=total+16;
		if(var==3)
			total=total+70;
		if(var==4)
			total=total+5000;
		printf("you have ordered: %d\n",var);
		printf("Anything else? ");
		printf("total: %d\n", total);
	}
	tax=total*0.0825;
	tip=total*.2;
	bill=total+tax+tip;
	printf("Food: $%d, Tax: $%.02f, Gratuity: $%.02f\nTotal: $%.02f\n", total, tax, tip, bill);
}
