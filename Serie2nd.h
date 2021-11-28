/**************************************************************************
 *	Author : KBALA youssef						  *
 *	Class  : LP TSEI 						  *
 *	Date   : 28/11/2021						  *
 *	Description : This file contain programs for the second Serie 2   *
 * ************************************************************************/

/* In this section i will need to calculate the factorial of a number many times so
 * i would like to write a program to automate this process...			   */

int fact(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

int Ex12nd(){
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
/*****************************************************************************************/

int Ex22nd(){
float purchase_price, purchase_cost, purchase_fee = 0;
	float selling_fee, selling_price_bef_tax, selling_price_aft_tax, tva;
	char product_type;
	printf("Enter the purchase price then the product type :\n");
	scanf("%f%s", &purchase_price, &product_type);
	if(purchase_price > 9000)
		purchase_fee = (purchase_price * 4) / 100;
	else if(purchase_price > 5000 && purchase_price <= 9000)
		purchase_fee = (purchase_price * 6)/ 100;
	else if(purchase_price > 2000 && purchase_price <= 5000)
		purchase_fee = (purchase_price * 8) / 100;
	else
		purchase_fee = purchase_price / 100;

	purchase_cost = purchase_price + purchase_fee;
	selling_fee = (purchase_cost * 10) / 100;
	selling_price_bef_tax = purchase_cost + selling_fee;
	
	if(tolower(product_type) == 'x')
		tva = (selling_price_bef_tax * 30) / 100;
	else if(tolower(product_type) == 'y')
		tva = (selling_price_bef_tax * 38) / 100;
	else if(tolower(product_type) == 'z')
		tva = (selling_price_bef_tax * 43) / 100;
	else if(tolower(product_type) == 't')
                tva = (selling_price_bef_tax * 47) / 100;
	else if(tolower(product_type) == 'u')
                tva = (selling_price_bef_tax * 49) / 100;

	selling_price_aft_tax = selling_price_bef_tax + tva;
	//***************************************************************************************
	printf("The purchase cost : %.2f\nThe purchase fee : %.2f\n", purchase_cost, purchase_fee);
	printf("The selling fee : %.2f\nThe selling price before taxes : %.2f\n", selling_fee, selling_price_bef_tax);
	printf("The selling price after taxes : %.2f\nThe TVA value is : %.2f\n", selling_price_aft_tax, tva);	
}
/******************************************************************************************/

int Ex32nd(){
	int age;
	bool tax = true;
	char sex, situation;
	printf("Enter your age The your sex (H/F) and finaaly you family situation (C/M) :\n");
	scanf("%d%s%s", &age, &sex, &situation);
	if(sex == 'H')
		if((age < 20 && situation == 'C') || (age > 70 && situation == 'M'))
			tax = false;
	else if(sex == 'F')
		if((age < 22 && situation == 'C') || (age > 55 && situation == 'M'))
			tax = false;
	/*****************************************************************************/
	if(tax)
		printf("You need to pay !\n");
	else
		printf("You don't need to pay !\n");
}

/******************************************************************************************/

int Ex42nd(){
	int num;
	printf("Please enter a number between 1 >> 15 :\n");
	scanf("%d", &num);
	printf("The equivalent in Hexadecimal is : \n");
	if(num > 0 && num <= 15)
		if(num < 10) 
			printf("%d\n", num);
		else{
			if(num == 10) printf("A");
			else if(num == 11) printf("B\n");
			else if(num == 12) printf("C\n");
			else if(num == 13) printf("D\n");
			else if(num == 14) printf("E\n");
			else printf("F\n");
		}	

	else
		printf("Typing error...\n");
}

/****************************************************************************************/

int Ex52nd(){
	int nums[25], Min;
	printf("Enter the 25 positive int values :\n");
	scanf("%d", &nums[0]);
	Min = nums[0];
	for(int i = 1; i < 25; i++){
		scanf("%d",&nums[i]);
		if(nums[i] < Min) Min = nums[i];
	}
	/************************************************************/
	
	printf("*********** Second part ***********\n");
	int N, sum = 0;
	printf("Enter the number of values you want to enter :\n");
	scanf("%d", &N);
	printf("Enter the values :\n");
	int numbers[N];
	for(int i = 0; i < N; i++){
                scanf("%d",&numbers[i]);
                sum += numbers[i];
        }
	printf("The sum is : %d\n", sum);

	/***********************************************************/
	
	printf("*********** Third part ***********\n");
	int num, odd = 0;
	printf("Enter the values :\n");
	while(1){
		scanf("%d", &num);
		if(num < 0) break;
		else
			if(num % 2 != 0) odd++;
	}
	printf("There is %d odd number...\n", odd);

}

/*****************************************************************************/

int Ex62nd(){
	int num, sum = 0;
	bool perfect = false;
	printf("Enter the number :\n");
	scanf("%d", &num);
	for(int i = num-1; i > 0; i--){
		if(num % i == 0)
			sum += i;
	}
	
	if(num == sum) perfect = true;
	
	if(perfect) printf("Perfect !\n");
	else printf("Not perfect !\n");
}
/******************************************************************************/
int Ex72nd(){
	int last , sum = 2;
	printf("Enter the last value :\n");
	scanf("%d", &last);
	for(int val = 1; val <= last; val++){
		if(val % 2 == 0) sum += (val - 1) + 2;
		else sum += (val - 1) + 4;
	}
	printf("The sum until %d is : %d\n", last, sum);
	/***************************************************/
	printf("************** Second part **************\n");
	sum = 59;
	printf("Enter the last value :\n");
        scanf("%d", &last);
        for(int val = 1; val <= last; val++){
                if(val % 2 == 0) sum += (val - 1) * 9;
                else sum += (val - 1) * 8;
        }
        printf("The sum until %d is : %d\n", last, sum);
}
/****************************************************************************/

int Ex82nd(){
	int last , sum = 0;
        printf("Enter the last value :\n");
        scanf("%d", &last);
	if(last == 1) sum = 1;
	else
        	for(int val = 2; val <= last; val++){
                	sum += (5 * (val -1)) + (val - 2) + 1;
        	}
        printf("The sum until %d is : %d\n", last, sum);

	/***************************************************/
        printf("************** Second part **************\n");
	sum = 4;
        printf("Enter the last value :\n");
        scanf("%d", &last);
        if(last == 1) sum += 7;
        else
                for(int val = 2; val <= last; val++){
                        if(val % 2 == 0) sum += (7 * (val -1)) + (val - 2) - 9;
                	else sum += (2 * (val -1)) + (val - 2) + 8;
		}
        printf("The sum until %d is : %d\n", last, sum);
}

/************************************************************************************/

int Ex92nd(){
	int n, res, sum = 0;
	printf("Enter the n'th value to be calculated : \n");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		res = pow(i, (2*i));
		for(int j = 1; j < res; j++){
			res *= j;
		}
		sum += res;
	}
	printf("The %dth value of this serie is : %d\n", n, sum);
}

/***********************************************************************************/
int Ex102nd(){
	int i, n;
	double res, U = 0, V = 0, W = 0, X = 0, Y = 0;
	double T = 0, D = 0, E = 0, F = 0;
	float alpha;	
        printf("Enter the n'th value to be calculated : \n");
        scanf("%d", &n);
	for(i = 1; i <= n; i++){
        	U += 1 / (pow(n, 2) + i);
	}
	
	printf("The U serie = %.2f\n", U);
	for(i = 1; i <= n; i++){
                V += 1 / sqrt(n + i);
        }
	
	printf("The V serie = %.2f\n", V);
	for(i = 1; i <= n; i++){
                W += i / sqrt(n + i);
        }
	
	printf("The W serie = %.2f\n", W);
	for(i = 1; i <= n; i++){
                X += i / n + i;
        }
	
	printf("The X serie = %.2f\n", X);
	for(i = 1; i <= n; i++){
                Y += fact(i);
        }
	Y /= fact(n);
	
	printf("The Y serie = %.2f\n", Y);
	for(i = 1; i <= 2*n; i++){
                T += i / (pow(i, 2) + pow(n, 2));
        }
	
	printf("The T serie = %.2f\n", T);
	V = 0;
	for(i = 1; i <= n; i++){
                V += n + pow(i, 2) / (pow(i, 3) + pow(n, 3));
        }
	
	printf("The V serie = %.2f\n", V);
	for(i = 1; i <= n; i++){
                D += exp(1 / i + n);
        }
	D -= n;
	printf("The D serie = %.2f\n", D);
	
	D = 0;
	for(i = n; i <= 2*n; i++){
                D += sin(M_PI / i) * exp(1 / i + n);
        }
        D -= n;
	printf("The D serie = %.2f\n", D);

	for(i = n; i <= (2*n - 1); i++){
                E += 1 / 2*i + 1;
        }
        E -= n;
	printf("The E serie = %.2f\n", E);
	
	printf("Enter the value of alpha :\n");
	scanf("%f", &alpha);
	for(i = n; i <= n; i++){
                F += pow(i, (1/n)) * (pow(n, alpha - (1/n)) + pow(i, alpha - (1/n)));
        }
	F *= 1 / pow(n, alpha + 1);
	printf("The F serie = %.2f\n", F);
}
