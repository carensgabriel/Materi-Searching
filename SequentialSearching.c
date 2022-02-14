#include <stdio.h>

int main()
{
    int i, Data[10], n, cari, jumlah=0;
    printf("Mau input berapa data? ");
    scanf("%d", &n);
    
    for (i=0 ; i<n ; i++)
        scanf("%d", &Data[i]);
        
    printf("Cari angka berapa? ");
    scanf("%d", &cari);
    for (i=0 ; i<n ; i++)
        
        if(Data[i]==cari)
            printf("Angka %d KETEMU dan tersimpan di index %d \n", cari, i+1);
            jumlah++;
        
        if(jumlah==0)
            printf("Angka %d TIDAK DITEMUKAN", cari);
        else
            printf("Angka %d KETEMU sebanyak %d kali dalam array", cari, jumlah);

    return 0;
}

