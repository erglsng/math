#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    
printf("******************************************************************\n");
printf("*                                                                *\n");
printf("*            HESAP MAKINESI                                      *\n");
printf("*                                                                *\n"); 
printf("*    Toplama Icin                            1 kullaniniz        *\n");
printf("*    Cikarma Icin                            2 kullaniniz        *\n");
printf("*    Carpma Icin                             3 kullaniniz        *\n"); 
printf("*    Bolme Icin                              4 kullaniniz        *\n");
printf("*    Karenin Alani Hesaplamak Icin           5 kullaniniz        *\n");
printf("*    Karenin Cevresini Hesaplamak Icin       6 kullaniniz        *\n");
printf("*    Diktortgen Alani Hesaplamak Icin        7 kullaniniz.       *\n");
printf("*    Diktortgen Cevre Hesaplamak Icin        8 kullaniniz.       *\n");
printf("*  Sayının Tek/Cift Oldugunu Hesaplamak Icin 9 kullaniniz.       *\n");
printf("*                                                                *\n");
printf("*                                                                *\n");
printf("******************************************************************\n");
printf("\n");

int secim;
int sayi1,sayi2;
printf("seciminizi girin:");
scanf("%d",&secim);




switch (secim)
{
case 1:
{
printf("sayi 1 ve 2 girin:");	
scanf("%d",&sayi1);
scanf("%d",&sayi2);
printf("%d",sayi1+sayi2);

}
    break;
case 2:
{
printf("sayi 1 ve 2 girin:");
scanf("%d",&sayi1);
scanf("%d",&sayi2);
printf("%d",sayi1-sayi2);

}
    break;
case 3:
{
printf("sayi 1 ve 2 girin:");
scanf("%d",&sayi1);
scanf("%d",&sayi2);
printf("%d",sayi1*sayi2);

}
    break;
case 4:
{
printf("sayi 1 ve 2 girin:");
scanf("%d",&sayi1);
scanf("%d",&sayi2);
printf("%d",sayi1/sayi2);

}
    break;
case 5:
{
int kenar;
printf("kenar girin:");
scanf("%d",&kenar);
printf("%d",kenar*kenar);

}
    break;

case 6:
{
int kenar_1;
printf("kenar girin:");
scanf("%d",&kenar_1);
printf("%d",kenar_1*4);

}
    break;
case 7:
{
int k_kenar,u_kenar;
printf("kenar girin:");
scanf("%d",&k_kenar);
scanf("%d",&u_kenar);
printf("%d",k_kenar*u_kenar);

}
    break;
case 8:
{
int k_kenar1,u_kenar1;
printf("kenar girin:");
 scanf("%d",&k_kenar1);
 scanf("%d",&u_kenar1);
  printf("%d",2*(k_kenar1+u_kenar1));

}
break;
case 9:{
	int s1;
printf("sayi girin:");
scanf("%d",&s1);

 if( s1 % 2 == 0 )
 
		printf("%d bir cift sayidir: ",s1);
	else
		printf("%d bir tek sayidir ", s1);
	return 0;
	break;
}
   
default:printf("1-9 arasında seçim gir:");
}
 
}
