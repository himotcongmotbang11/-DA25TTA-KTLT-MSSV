# -DA25TTA-KTLT-MSSV
# include<stdio.h>
 int main ()
 {
 	int n, m;
 	int tong=0;
 	int hieu=0;
 	int tich=1;
 	float thuong=1;
 	
 	
 	printf ("nhap mot so nguyen duong n = ");
 	scanf("%d",&n);
 	printf ("nhap mot so nguyen duong n = ");
 	scanf("%d",&m);
	tong= m+n;
	hieu= n-m;
	tich= n*m;
	thuong=n/m;
 	printf ("\ntong hai so nguyen duong n = %d",tong);
 	printf ("\nhieu hai so nguyen duong n = %d",hieu);
 	printf ("\ntich hai so nguyen duong n =%d ",tich);
 	printf ("\nthuong so nguyen duong n =%.2f ",thuong);
  }
