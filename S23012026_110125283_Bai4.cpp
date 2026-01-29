# include <stdio.h>
int main()
{
	FILE *f1, *f2;
	int  n;

	int a[50][50];
	int m; 
	int tong;
	f1 = fopen ("bai4.int","rt");
	if (f1==NULL)
	{
		printf (" khong mo duoc tap tin bai4.int");
	}
	else{
		printf("mo duoc tap tin bai4.int thanh cong :)))))))");	
	}
		fscanf (f1,"%d",&n);
		fscanf(f1,"%d",&m);
		
		for (int i=0; i<n;i++){
			for ( int j=0;j<m;j++){
				fscanf (f1,"%d",&a[i][j]);
			}
		}
		for(int i=0; i<n;i++){
			for ( int j=0;j<m;j++){
				tong=tong +a[i][j];
			}
		}	

	f2 =fopen("bai4.out","wt");
	fprintf(f2,"xuat mang :\n");
	for (int i=0; i<n;i++){
	for ( int j=0;j<m;j++){
	
	fprintf(f2, "%5d", a[i][j]); 
            }
            fprintf(f2, "\n"); 
        }
	
		
		fprintf(f2,"tong cac so trong mang 2 chieu %d", tong);
}
