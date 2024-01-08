#include <stdio.h>

int main()
{
    int age = 18;
    char section = 'A';
    float salary = 10000.89;
    double bonousSalary = 2000.15483;

    printf("Age:%d\n", age);
    printf("section:%c\n", section);
    printf("salary:%f\n", salary);
    printf("bonosSalary: %lf\n", bonousSalary);
    return 0;
}



// #include <stdio.h>
// int main() {
//   short a;
//   long b;
//   long long c;
//   long double d;

//   printf("size of short = %d bytes\n", sizeof(a));
//   printf("size of long = %d bytes\n", sizeof(b));
//   printf("size of long long = %d bytes\n", sizeof(c));
//   printf("size of long double= %d bytes\n", sizeof(d));
//   return 0;
// }