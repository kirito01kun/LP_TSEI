/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 14/11/2021						  *
 *	Description : This program will determine how many 		  *
 *		      1, 5, 10, 50 and 100 bills are the in the given sum *
 * ************************************************************************/
int Ex5(){
	int money;
	int billOf100 = 0;
	int billOf50 = 0;
	int billOf10 = 0;
	int billOf5 = 0;
	int billOf1 = 0;
	printf("Please enter money value :\n");
	scanf("%d", &money);
	while(money >= 0){
		if(money >= 100){
			money -= 100;
			billOf100++;
		}
		else if(money >= 50){
			money -= 50;
			billOf50++;
		}
		else if(money >= 10){
			money -= 10;
			billOf10++;
		}
		else if(money >= 5){
			money -= 5;
			billOf5++;
		}
		else if(money >= 1){
			money -= 1;
			billOf1++;
		}
		else{break;}
	}
	printf("To acomplish this sum you need :\n%d of the 100DH\n%d of the 50DH\n%d of the 10DH\n%d of the 5DH\n%d of the 1DH\n", billOf100, billOf50, billOf10, billOf5, billOf1);
}
