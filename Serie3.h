/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 21/12/2021						  *
 *	Description : This file contain programs for the third Serie      *
 * ************************************************************************/
int Ex1S3(){
	int max,min,n,temp;
	printf("Enter how much value to test :\n");
	scanf("%d", &n);
	printf("Enter the values :\n");
	scanf("%d", &temp);
	min = temp;
	max = temp;
	for(int i = 0;i < n-1;i++){
		scanf("%d", &temp);
		if(min < temp) min = temp;
		else if(max > temp) max = temp;
	}
	printf("The min value :%d\nThe max value :%d\n", min, max);
}
int Ex2S3(){
	int mark,n,sum=0;
	float avg;
        printf("Enter how much mark available :\n");
        scanf("%d", &n);
        printf("Enter the marks :\n");
        for(int i = 0;i < n;i++){
                scanf("%d", &mark);
        	sum += mark;
	}
	avg = (float)sum/n;
	printf("The average is %.2f\n", avg);
}
int Ex3S3(){
	int num_art, q;
	float sum = 0, unit_price;
	printf("Enter the num of articles :\n");
	scanf("%d", &num_art);
	for(int i = 1;i <= num_art;i++){
		printf("Enter the quantity the unit price of item %d", i);
		scanf("%d%f", &q, &unit_price);
		sum += unit_price * q;
	}
	printf("The final sum is : %.2f", sum);
}
int Ex4S3(){
	int n,i,j;
	printf("Enter the num of rows :\n");
	scanf("%d", &n);
	for(i = 1;i <= n; i++){
		for(j = 1; j <= i;j++){
			printf("*");
		}
		printf("\n");
	}
	//The second part
	int k;
	for(i = n; i >= -n;i--){
		for(j = 1;j <= abs(i);j++){
			printf(" ");
		}
		for(k = n;k >= abs(i);k--){
			printf("*");
		}
		printf("\n");
	}
}
int Ex5S3(){
	int sum=0,num,counter=0;
	float avg;
	char cmd;
	while(1){
		scanf("%d", &num);
		sum += num;
		counter++;
		printf("Another one ?\n");
		scanf("%s", &cmd);
		if(cmd == 'y' || cmd == 'Y') continue;
		else if(cmd == 'N' || cmd == 'n') break;
	}
	avg = (float) sum / counter;
	printf("The average is :%.2f\n", avg);
}

int Ex6S3(){
	int d, n, max; 
	srand(time(0));
	printf("Enter the max guessing value :\n");
	scanf("%d", &max);
	d = rand() % max;
	while(1){
		printf("Enter your guess :\n");
		scanf("%d", &n);
		if(n > d) printf("Wrong :)\nTry lower than that...\n");
		else if(n < d) printf("Wrong :)\nTry higher then that...\n");
		else{
			printf("You win !\n");
			break;
		}
	}
}

int Ex7S3(){
	int i,n;
	bool prime = true;
	printf("Enter the number :\n");
	scanf("%d", &n);
	for(i = 2; i < n;i++){
		if(n % i == 0) prime = false;
	}
	if(prime) printf("This is a prime number\n");
	else printf("That's not a prime number\n");
	//Second part
	int counter = 0;
	printf("How much prime numbers to display :\n");
	scanf("%d", &n);
	for(i = 1;;i++){
		prime = true;
		if(counter == n) break;
		for(int j = 2;j < i;j++){
			if(i % j == 0) prime = false;
		}
		if(prime){
			printf("%d\n", i);
			counter++;
		}
	}
}
