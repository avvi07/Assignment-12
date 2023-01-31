// 1. Write a recursive function to print first N natural numbers

// #include<stdio.h>
// void natural(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     natural(x);
//     return 0;
// }
// void natural(int n)
// {
    
//     if (n!=0)
//     {
//         natural(n-1);
//         printf("%d ",n);
//     }
// }  

// 2. Write a recursive function to print first N natural numbers in reverse order

// #include<stdio.h>
// void natural(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     natural(x);
//     return 0;
// }
// void natural(int n)
// {
    
//     if (n!=0)
//     {
//         printf("%d ",n);
//         natural(n-1);
//     }
// }  

// 3. Write a recursive function to print first N odd natural numbers

// #include<stdio.h>
// void natural(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     natural(x);
//     return 0;
// }
// void natural(int n)
// {
    
//     if (n!=0)
//     {
//         natural(n-1);
//         printf("%d ",2*n-1);
//     }
// }  

// 4. Write a recursive function to print first N odd natural numbers in reverse order

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
// }
// void print(int n)
// {
//     if(n!=0)
//     {
//         printf("%d ",2*n-1);
//         print(n-1);
//     }
// }

// 5. Write a recursive function to print first N even natural numbers

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
// }
// void print(int n)
// {
//     if(n!=0)
//     {
//         print(n-1);
//         printf("%d ",2*n);
//     }
// }

// 6. Write a recursive function to print first N even natural numbers in reverse order

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
// }
// void print(int n)
// {
//     if (n!=0)
//     {
//         printf("%d ",2*n);
//         print(n-1);
//     }
    
// }

// 7. Write a recursive function to print squares of first N natural numbers

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     print(x);
//     return 0;
// }
// void print(int n)
// {
//     if (n!=0)
//     {
//         print(n-1);
//         printf("%d ",n*n);    
//     }

// }

// 8. Write a recursive function to print binary of a given decimal number

// #include<stdio.h>
// int d2c(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("decimal(%d) = binary(%d)",x,d2c(x));
//     return 0;
// }
// int d2c(int n)
// {
//     int b;
//     if (n == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return (n%2) +10* d2c(n/2);
//     }
        
// }

// 9. Write a recursive function to print octal of a given decimal number

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     printf("The Octal value of given decimal no. is = ");
//     print(x);
//     return 0;
// }
// void print(int n)
// {
//     if (n > 0)
//     {
//         print(n/8);
//         printf("%d",n%8);
//     }
    
// }

// 10. Write a recursive function to print reverse of a given number

// #include<stdio.h>
// void print(int);
// int main()
// {
//     int x;
//     printf("Enter the number: ");
//     scanf("%d",&x);
//     print(x);   
//     return 0;
// }
// void print(int n)
// {
//     int rem,num=0;
//     if (n!=0)
//     {
//         rem = n%10;
//         num = num*10+rem;
//         printf("%d",num);
//         print(n/10);
//     }
// }