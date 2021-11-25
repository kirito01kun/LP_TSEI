/**************************************************************************
 *      Author : KBALA youssef                                            *
 *      Class  : LP TSEI                                                  *
 *      Date   : 24/11/2021                                               *
 *      Description : This program will calculate selling and buying 	  *
 *      		values for specific criterias as follows	  *
 * ************************************************************************/
int Ex6S2(){
	float purchase_price, purchase_cost, purchase_fee = 0;
	float selling_fee, selling_price_bef_tax, selling_price_aft_tax, tva;
	char product_type;
	printf("Enter the purchase price then the product type :\n");
	scanf("%f%s", &purchase_price, &product_type);
	if(purchase_price > 5000)
		purchase_fee = (purchase_price * 8) / 100;
	else if(purchase_price >= 1000 && purchase_price <= 5000)
		purchase_fee = (purchase_price * 5) / 100;
	purchase_cost = purchase_price + purchase_fee;
	selling_fee = (purchase_cost * 10) / 100;
	selling_price_bef_tax = purchase_cost + selling_fee;
	if(tolower(product_type) == 'a')
		tva = (selling_price_bef_tax * 20) / 100;
	else if(tolower(product_type) == 'b')
		tva = (selling_price_bef_tax * 28) / 100;
	else if(tolower(product_type) == 'c')
		tva = (selling_price_bef_tax * 33) / 100;
	selling_price_aft_tax = selling_price_bef_tax + tva;
	//***************************************************************************************
	printf("The purchase cost : %.2f\nThe purchase fee : %.2f\n", purchase_cost, purchase_fee);
	printf("The selling fee : %.2f\nThe selling price before taxes : %.2f\n", selling_fee, selling_price_bef_tax);
	printf("The selling price after taxes : %.2f\nThe TVA value is : %.2f\n", selling_price_aft_tax, tva);
}
