#include<stdio.h>

int tong(int x, int y);       
int hieu(int x, int y);
int tich(int x, int y);
float thuong(int x, int y);
        
main()
{
	int x, y;
	int cong,tru,nhan;
	float chia;
	char pheptinh;
	
	printf("\nNhap vao so thu nhat: ");
	scanf("%d", &x);
	printf("\nNhap vao so thu hai: ");
	scanf("%d", &y);
	printf("\nNhap vao phep tinh can lam.\n");
	fflush(stdin);
	scanf("%c", &pheptinh);
	
	switch(pheptinh)
	{
		case '+':
			cong= tong(x,y);           
			printf("\nTong cua hai so: %f", cong);
			break;
		case '-':
			tru = hieu(x,y);         
		    printf("\nHieu hai so la: %d", tru);
			break;
		case '*':
			nhan = tich(x,y);          
		    printf("\nTich hai so la: %d", nhan);
		    break;
		case '/':
		if(y != 0)
		{
	        chia= thuong(x,y);    
		    printf("\nThuong hai so la: %f", chia);
		}
		else
			printf("\nNhap so thu hai khac 0!");     
			break;
		default:
		    printf("\n Xin loi Khong co phep tinh ban chon!");				
	}
	return 0;
    }
    int tong(int x, int y)
{
	return (x+y);
}
    int hieu(int x,int y) 
    {
	return (x-y);
    }
    int tich(int x, int y)
    {
	return (x*y);
    }
    float thuong(int x,int y)
    {
	    return ((float)x/(float)y);   
    } 
