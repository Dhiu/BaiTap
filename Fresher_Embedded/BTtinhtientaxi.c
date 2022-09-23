#include <stdio.h>


int main(int argc, char const *argv[])
{
        
    float km, tien;
    printf("\nNhap so km: ");
    scanf("%f", &km);
    printf("So km la: %.2fkm", km);
    if (km == 1)
    {
        tien = km*5000;
    }

    else if (km > 1 && km <= 30)
    {
        tien = 5000 + km*4000;
    }

    else 
    {
        tien = 5000 + 30*4000 + (km-30)*3000;
    }

    printf("\nSo tien cuoc TAXI phai tra la %.2fd", tien);


    return 0;
    
}
