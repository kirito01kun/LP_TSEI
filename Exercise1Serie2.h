/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 24/11/2021						  *
 *	Description : This program will take two values as input and 	  *
 *		      the biggest as N2 and the smallest as N1 return     *
 * ************************************************************************/
int Ex1S2(){
	int N1, N2, temp;
	printf("Please enter the values of N1 then N2 :\n");
	scanf("%d%d", &N1, &N2);
	if(N1>N2){
		temp = N1;
		N1 = N2;
		N2 = temp;
		printf("The value of N1 :%d\nThe value of N2 :%d\n", N1, N2);
	}
	else{
		printf("The value of N1 :%d\nThe value of N2 :%d\n", N1, N2);
	}

}
