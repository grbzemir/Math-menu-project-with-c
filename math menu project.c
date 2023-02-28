#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


// Math Menu Project
// Emircan Gürbüz

int main ()
{

int secim;
int secim2;
int alan;
int cevre;
int yaricap;
int kenar;
int taban;
int yukseklik;
int cevre2;



printf("    Math Menu Project    ");
printf("\n\n 1.Karede alan hesabi");
printf("\n   2.Karede cevre hesabi");
printf("\n   3.Dairede alan hesabi");
printf("\n   4.Dairede cevre hesabi");
printf("\n   5.Ucgenin alan hesabi");
printf("\n   6.Ucgenin cevre hesabi");
printf("\n\n Seciminizi giriniz: ");
scanf("%d",&secim);

switch (secim)
{
    case 1:
        printf("\n Karenin bir kenarini giriniz: ");
        scanf("%d",&kenar);
        alan=kenar*kenar;
        kenar=kenar*4;
        printf("\n Karenin alani: %d",alan);  
        printf("\n Karenin cevresi: %d",kenar);
        printf("\n \n Devam Etmek Icin Bir Tusa Basiniz...");
        scanf("%d",&secim2);
        if(secim2==0)
{
    
            goto label;

         
  
}

{
label:
break;


    case 2:
        printf("\n\n Yaricap giriniz: ");
        scanf("%d",&yaricap);
        alan=3.14*yaricap*yaricap;
        cevre2=2*3.14*yaricap;
        printf("\n Dairenin alani: %d",alan);
        printf("\n Dairenin cevresi: %d",cevre);
        printf("\n \n Devam Etmek Icin Bir Tusa Basiniz...");
        scanf("%d",&secim2);
        if(secim2==0)
{
    
         goto label;

        
}

break; 
     case 3:
         printf("\n\n Ucgenin tabanini giriniz: ");
         scanf("%d",&taban);
         printf("\n\n Ucgenin yuksekligini giriniz: ");
         scanf("%d",&yukseklik);
         alan=taban*yukseklik/2;
         printf("\n Ucgenin alani: %d",alan);
         printf("\n \n Devam Etmek Icin Bir Tusa Basiniz...");
         scanf("%d",&secim2);
         
         if(secim2==0)
{
           goto label;
    
}


break;
     case 4:
            printf("\n\n Ucgenin bir kenarini giriniz: ");
            scanf("%d",&kenar);
            cevre=kenar*3;
            printf("\n Ucgenin cevresi: %d",cevre);
            printf("\n \n Devam Etmek Icin Bir Tusa Basiniz...");
            scanf("%d",&secim2);
            if(secim2==0)

{
            goto label;

}

break;
       case 5:
            printf("\n\n Programdan cikiliyor...");
            exit(0);
            break;
         

}

}

    return 0;
}