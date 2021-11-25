/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 24/11/2021                                               *
 *      Description : This program will take three values as input and    *
 *      		calculate the average 				  *
 *      		then determine the corresponding mention    	  *
 * ************************************************************************/
int Ex4S2(){
	float n1, n2, n3, avg, men;
	printf("Please enter the 3 values :\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	avg = (n1 + n2 + n3) / 3;
	printf("The average is :\nAnd the mention :\n");
	if(avg > 16)
		printf("Tres Bien\n");
	else if(avg >= 14 && avg < 16)
		printf("Bien\n");
	else if(avg >= 12 && avg < 14)
		printf("Assez Bien\n");
	else if(avg >= 10 && avg < 12)
		printf("Passable\n");
	else
		printf("Mediocre\n");
}
