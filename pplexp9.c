#include <stdio.h>
#include <string.h>

/* Q1

struct product
{
    char name[20];
    int ppu;
    int qp;
    int amt;
};

int main()
{
    int n;
    printf("enter the number of products: ");
    scanf("%d", &n);

    struct product x[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the name of product number %d: ", i+1);
        scanf("%s", x[i].name);
    }

    for (int j = 0; j < n; j++)
    {
        printf("\n\nenter details for %s\n", x[j].name);
        printf("\nenter price per unit: ");
        scanf("%d", &x[j].ppu);
        printf("enter quantity purchased: ");
        scanf("%d", &x[j].qp);
        x[j].amt = x[j].ppu * x[j].qp;
    }
    printf("\n\n");
    for (int l = 0; l < n; l++)
    {
        printf("price per unit of %s = %d\n", x[l].name, x[l].ppu);
        printf("quantity purchased of %s = %d\n\n", x[l].name, x[l].qp);
        printf("total amount spent on %s = %d\n", x[l].name, x[l].amt);
    }
    
    return 0;
    
    
}*/


/*Q2

struct dor 
    {
        int d;
        int m;
        int y;
    }; 

struct student_record
{
    char name[30];
    int sap;
    char eno[30];
    char dob[30];
    struct dor stu;
    
};


int main()
{
    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);

    struct student_record x[n];
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter name of student: ");
        scanf("%s", x[i].name);
        printf("enter SAP ID of %s: ", x[i].name);
        scanf("%d", &x[i].sap);
        printf("enter enrollment number of %s: ", x[i].name);
        scanf("%s", x[i].eno);
        printf("enter date of birth of %s (dd/mm/yyyy): ", x[i].name);
        scanf("%s", x[i].dob);
        printf("enter date of registration of %s: \n", x[i].name);
        printf("day: ");
        scanf("%d", &x[i].stu.d);
        printf("month: ");
        scanf("%d", &x[i].stu.m);
        printf("year: ");
        scanf("%d", &x[i].stu.y);
        printf("\n\n");
    }
    for (int j = 0; j < n; j++)
    {
        printf("details of %s are: \n", x[j].name);
        printf("SAP ID: %d\n", x[j].sap);
        printf("Enrollment Number: %s\n", x[j].eno);
        printf("Date of Birth: %s\n", x[j].dob);
        printf("Date of Registration: %d/%d/%d\n\n\n", x[j].stu.d, x[j].stu.m, x[j].stu.y);

    }
    return 0;
    
}*/


//3

struct complex
{
    float real;
    float img;
};

void add(struct complex x, struct complex y, struct complex sum)
{
    
    sum.real = x.real + y.real;
    sum.img = x.img + y.img;

    printf("sum = %.1f + (%.1fi)", sum.real, sum.img);
}
int main()
{
    struct complex x, y, sum;
    printf("enter the real and imaginary part of 1st number: ");
    scanf("%f%f", &x.real, &x.img);
    
    printf("enter the real and imaginary part of 2nd number: ");
    scanf("%f%f", &y.real, &y.img);

    add(x,y,sum);
    return 0;
}

