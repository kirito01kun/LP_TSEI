/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 24/11/2021                                               *
 *      Description : This program will take three values as input and	  *
 *      	      and determine the Min and the Max values    	  *
 * ************************************************************************/
int Ex2S2(){
	float num1, num2, num3, Max, Min;
	printf("Enter the three real numbers :\n");
	scanf("%f%f%f", &num1, &num2, &num3);
	if(num1 > num2){
		if(num1 > num3)
			Max = num1;
		else
			Max = num3;
	}
	else{
		if(num2 > num3)
			Max = num2;
		else
			Max = num3;
	}
	if(num1 < num2){
		if(num1 < num3)
			Min = num1;
		else
			Min = num3;
	}
	else{
		if(num2 < num3)
			Min = num2;
		else
			Min = num3;
	}
	printf("The Min value is :\n%.2f\nAnd the Max value is :\n%.2f\n", Min, Max);
}
