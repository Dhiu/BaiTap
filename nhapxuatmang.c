#include <stdio.h>

int n;
int A[];

void xuatmang()
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d" , A[i]);
    }
}

int tangdan()
{
    int tang;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                tang = A[i];
                A[i] = A[j];
                A[j] = tang; 
            }
        }
    }
    printf("\nMang sau khi da sap xep tang dan: ");
    xuatmang();
}

int giamdan()
{
    int giam;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] > A[i])
            {
                giam = A[i];
                A[i] = A[j];
                A[j] = giam; 
            }
        }
    }
    printf("\nMang sau khi da sap xep giam dan: ");
    xuatmang();
}



int main(int argc, char const *argv[])
{
    printf("Nhap so luong phan tu trong mang a = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Phan tu A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("\nMang vua nhap la: ");
    xuatmang();
    tangdan();
    giamdan();
    
    return 0;

}


