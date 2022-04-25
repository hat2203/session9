#include <stdio.h>
#include <cstring>
void menu(){
 printf("\t\tQUAN LY SINH VIEN\n");
 printf("\t============================================\n");
 printf("\t1. Nhap so luong sinh vien cua lop\n");
 printf("\t2. Nhap danh sach ten sinh vien\n");
 printf("\t3. Sap xep ten sinh vien theo thu tu alphabe\n");
 printf("\t4. In ra danh sach sinh vien\n");
 printf("\t5. Thoat\n");
 printf("\t============================================\n");
 printf("\tChon chuc nang:\n");
}
void nhapTenSV(char ten[][10],int n){
  printf ("nhap ten sinh vien: \n");
  for (int i=0;i<n;i++){
   printf ("ten sinh vien thu %d: ",i+1);
   scanf ("%s",ten[i]);
 }
}
void xuatTenSV(char ten[][10],int n){
 printf("Danh sach sinh vien da sap xep theo thu tu Alphabe la: \n");
 for (int i=0;i<n;i++){
  printf ("\nSTT %d: ",i+1);
  printf("%s",ten[i]);
 }
}
void sapXepTenSV(char ten[][10],int n){
    for(int i=0;i<n;i++){
     for (int j=0;j<n-i-1;j++){
   if (strcmp (ten[j],ten[j+1]) >0){
       char temp[10];
       strcpy( temp,ten[j]);
        strcpy(ten[j],ten[j+1]);
         strcpy(ten[j+1],temp);
   }
  }
 }
}
int main()
{
 menu();
 int n,n1,n2,n3,n4; // cac bien cua vong lap chon cac chuc nang cua chuong trinh
 int x; // so luong sinh vien trong lop
 scanf("%d",&n);
 char ten[n][10];
 while(n!=1&&n!=5){
  if (n<1||n>5){
  printf("so nhap vao ngoai cac gia tri trong menu\n");
  scanf("%d",&n);
  } 
  if(n>1&&n<5){
  printf(" xin chon 1 va enter de nhap so luong sinh vien cua lop:");
  scanf("%d",&n);
  }
 }
 while(n==1){
  printf("nhap so luong sinh vien:");
  scanf("%d",&x);
  printf("xin moi nhap so de chon chuc nang muon thuc hien tiep theo\n");
  scanf("%d",&n1);
  while (n1==5){
   return 0;
  }
  while(n1!=2&&n1!=5){
   printf("xin chon 2 va enter de nhap danh sach ten sinh vien:");
   scanf("%d",&n1);
  }
  while(n1==2){
   nhapTenSV(ten,x);
   printf("xin moi nhap so de chon chuc nang muon thuc hien tiep theo\n");
   scanf("%d",&n2);
   while(n2==5){
    return 0;
   }
   while(n2!=3&&n2!=5){
    printf("xin chon 3 va enter de sap xep ten sinh vien theo thu tu alphabe:");
    scanf("%d",&n2); 
   }
   while (n2==3){
    printf("da sap xep ten sinh vien theo thu tu alphabe\n");
    sapXepTenSV(ten,x); 
    printf("xin moi nhap so de chon chuc nang muon thuc hien tiep theo\n");
    scanf("%d",&n3);
    while (n3==5){
    }
    while(n3!=4&&n3!=5){
     printf("xin chon 4 va enter de in ra danh sach sinh vien theo thu tu alphabe:\n");
     scanf("%d",&n3); 
    }
    while(n3==4){
     xuatTenSV(ten,x);
     printf("\n da in xong, xin moi nhap so chon chuc nang muon thuc hien theo menu\n");
     scanf("%d",&n4); 
     n=n4-1;
     n3++;
    }
   }
  }
  n=n+1;
 }
 while(n=5){
  return 0;
 }
 return 0;
}
