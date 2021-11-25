/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 24/11/2021                                               *
 *      Description : This program will take three values as input and    *
 *      	      and let the user choice from calculating and 	  *
 *      	      printing the Min or the Max value			  *
 * ************************************************************************/

int Ex3S2(){
	float num1, num2, num3, Max, Min;
	char cmd;
	printf("Enter the three real numbers :\n");
        scanf("%f%f%f", &num1, &num2, &num3);
	printf("Do you want to calculate :\nThe Min value ! (Enter i or I)\nThe Max value ! (Enter a or A)\n");
	scanf("%s", &cmd);
	if(cmd == 'a' || cmd == 'A'){
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
		printf("The Max value is :%.2f\n", Max);
	}
	else if(cmd == 'i' || cmd == 'I'){
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
		printf("The Min value is :%.2f\n", Min);
	}
	else{
		printf("Incorrect value !\n");
	}
}
