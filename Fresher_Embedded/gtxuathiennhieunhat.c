#include <stdio.h>
int n, i, j;
int A[100], B[100]; 

void nhapmang()
{
    printf("Nhap so luong phan tu trong mang a = ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Phan tu A[%d] = ", i);
        scanf("%d", &A[i]);
    } 
}

void xuatmang(int A[], int n)
{
    //printf("Mang vua nhap la: ");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", A[i]);
    }
}

void kiemtrapt()
{
    int max = 0; 
    for (i = 0; i < n - 1 ; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }

        }
        if (count > max)
        {
            max = count;
        }
    }
    
    int m = 0;
    for (i = 0; i < n - 1 ; i++)
    {
        int count2 = 1;
        for (j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                count2++;
            }

        }
        if (count2 == max)
        {
            B[m] = A[i];
            m++;
        }
    }
    printf("\nVay lan xuat hien nhieu nhat (%d) lan la: ", max);
    xuatmang(B, m);
}

int main(int argc, char const *argv[])
{   
    nhapmang();
    printf("\nMang vua nhap la: ");
    xuatmang(A, n);
    kiemtrapt();
    return 0;
}




