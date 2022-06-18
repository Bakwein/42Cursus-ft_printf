#include "ft_printf.h"

int main()
{
        // BİRKAÇ MAİN İLE DENEMELER
    /*
    int sayi = 1;

    char a = 'b';

    char *p = &a;

    char *str = "string";

    int u = 1234;

    int x = 123456789;

    int xx = 123456789;

    printf("uzunluk:%d\n",ft_printf("*%c* *%s* *%p* *%d* *%u* *%x* *%X* *%%*\n", a, str, p, sayi, u, x, xx));

    printf("\nuzunluk:%d",printf("*%c* *%s* *%p* *%d* *%u* *%x* *%X* *%%*\n", a, str, p, sayi, u, x, xx));
  */
    
    /*  " " 'ı str'de yazdırmama sebebi string olarak görmesi. , ile de diğer değişkene geçer.*/
   
    
    //boş yazdırma
    printf(" "); //boş yazdırır
    printf("\nboş yazdırma\n");
    ft_printf(" "); // boş yazdırır
    
    printf("\n");
    
    
    // normal yazdırma
    ft_printf("merhaba");
    printf("-merhaba");
    printf("\n");
    
    
    //returnde neden sayi döndürüyoruz? ->
    ft_printf("-%d",ft_printf("123abc")); // Çıktı-> 123abc-6 . - -> str'deki else durumu %_ den sonra girilen karakteri de yazdırmamızı sağlar.
    printf("\n");
    printf("-%d\n",ft_printf("123abc"));
    
    //" yazdırılamaz
    /* printf(""");
    printf("\n");
    ft_printf("""); HATA VERİR */
    
    
    //%c
    char a = '3';
    char s = 't';
    ft_printf("%c-%c\n",a,s);
    printf("%c-%c\n",a,s);
    printf("\n");
    ft_printf("%c---",10); // c'de char harici bir işlev yazdırmaz.
    printf("%c---",10);
    printf("\n");
    
    //%p
    int x = 50;
    int *ptr = &x;
    ft_printf("The address is: %p, the value is %d", ptr, *ptr); // pointer'ın adresini okur.
    printf("\n");
    
    
    //%u
    unsigned int unssefa= -41; // tersten başlar.
    unsigned int unssefa2= 41;
    ft_printf("%u-%u",unssefa,unssefa2);
    
    printf("\n");
    char ha = 'b';
    ft_printf("%c%k",ha);
    
    
}
