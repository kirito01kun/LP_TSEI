/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 25/11/2021                                               *
 *      Description : This program will calculate selling 		  *
 *      	      price for boxes of A4 paper based on the quantity   *
 * ************************************************************************/
int Ex7S2(){
	int quantity, price = 0;
	printf("Please enter the number of boxes that you need :\n");
	scanf("%d", &quantity);
	while(1)
	{
		if(quantity >= 51)
		{
			price += ((quantity - 50) * 80);
			quantity = 50;
		}
		else if(quantity >= 21 && quantity <= 50)
		{
			price += ((quantity - 20) * 90);
			quantity = 20;
		}
		else if(quantity <= 20)
		{
			price += quantity * 100;
			break;
		}
	}
	printf("The final price is :%d\n", price);
}
