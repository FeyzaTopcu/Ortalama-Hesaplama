#include <stdio.h>
#include <stdlib.h>

float main()

{

   float odev1,  odev2, odev3, quiz1, quiz2, quiz3, arasinav1, arasinav2, final, sonuc1, sonuc2, sonuc3, sonuc4, puan;
   printf("odev 1 giriniz ");
   scanf("%f",&odev1);
   printf("odev 2 giriniz: ");
   scanf("%f",&odev2);
   printf("odev 3 giriniz: ");
    scanf("%f",&odev3);
   printf("quiz 1  giriniz: ");
    scanf("%f",&quiz1);
   printf("quiz 2  giriniz: ");
   scanf("%f",&quiz2);
   printf("guiz 3 giriniz: ");
   scanf("%f",&quiz3);
   printf("ara sinav 1 giriniz: ");
   scanf("%f",&arasinav1);
   printf(" ara sinav 2 giriniz: ");
   scanf("%f",&arasinav2);

   printf("Final puanini giriniz: "); scanf("%f",&final);

   sonuc1= (((odev1 + odev2 + odev3)/3)*9/100);
    printf("Odevlerin toplamlari : %5.2f", sonuc1);
   sonuc2 = (((quiz1 + quiz2 + quiz3)/3)*21/100);
    printf("Quizlerin toplamlari: %5.2f",sonuc2);
   sonuc3 = (((arasinav1 + arasinav2)/2)*30/100);
    printf("Ara Sinavlarin toplamlari: %5.2f",sonuc3);
   sonuc4 = ((final)*40/100) ;
   printf("Finalin toplami: %5.2f",sonuc4);
   puan = (sonuc1 + sonuc2 +sonuc3+ sonuc4);
   printf("Ders Notu: %5.2f", puan);


   return 0;




}
