// #include<stdio.h>
// int main(){
//     int i = 0;
//     while(i<256){
//         printf("%d: %c\n",i,i);
//         i++;

//     }
// }
// #include<stdio.h>
// int main(){
//     printf("Size of double: %ld bytes\n",sizeof(double));
//     printf("Size of long: %ld bytes\n",sizeof(long));
//     printf("Size of double: %ld bytes\n",sizeof(double));
//     printf("Size of float: %ld bytes\n",sizeof(float));
//     printf("Size of long: %ld bytes\n",sizeof(long));
//     printf("Size of int: %ld bytes\n",sizeof(int));
//     printf("Size of short: %ld bytes\n",sizeof(short));
//     printf("Size of char: %ld bytes\n",sizeof(char));

// }
// #include<stdio.h>
// int main(){
//      int s;
//      scanf("%d",&s);
//      int h;
//      scanf("%d",&h);
//      float g = h * 39.97;
//      float h = g * g;
//      float bmi = ((s)/h);
//      printf("BMIa: %.2f"bmi);
//      }
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     int c;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("a = %d,b =%d",a,b);
//     c = a;
//     a = b;
//     b = c;
//     printf("a =%d,b = %d",a,b);
// }
// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d",a+b);
//     printf("%d",a-b);
//     printf("%d",a/b);
//     printf("%d",a%b);
//     printf("%d",a*b);
//     printf("%d %d",++a,++b);
//     printf("%d %d",--a,--b);

// }
//  #include<stdio.h>
//  int main(){
//     float p = 3.14;
//     float r;
//     printf("value of radious");
//     scanf("%f",&r);
//     float a;
//     a = (p)*(r*r);
//     printf("area of circle: %.2f\n",a);
//     float pe;
//     pe = 2*p*r;
//     printf("pe of circle: %.2f",pe);
//     return 0;

//  }

// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     char b = a;
//     printf("%d\n",a);
//     printf("%c",b);

// }
// #include <stdio.h>
// int main()
// {
//     double a;
//     scanf("%lf", &a);
//     int b = a;
//     printf("%lf\n", a);
//     printf("%d", b);
// }
// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     if(a>b && a>c && a>d){
//         printf("%d",a);
//     }
//         else if(b>c && b>d && b>a){
//             printf("%d",b);
//         }
//         else if(d>a && d>b && d>c){
//             printf("%d",d);
//         }
//         else{
//             printf("%d",c);
//         }

//     }
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("this is even value %d",a);
//     }
//     else{
//         printf("this is odd number %d",a);
//     }
    
// }
// #include<stdio.h>
// int main(){
//     char c;
//     scanf("%c",&c);
//     if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
//         printf(" this is vovle%c",c);

//     }
//     else{
//         printf("this is consonent");
//     }
// }
// #include<stdio.h>
// int main(){
//     int abd;
//     int rs;
//     scanf("%d",&abd);
//     scanf("%d",&rs);
//     if(abd<=rs){
//         printf("%d\n",abd+rs);
//     }
//      if(abd<=rs){
//         printf("%d\n",abd-rs);
//     }
//      if(abd<=rs){
//         printf("%d\n",abd/rs);
//     }
//      if(abd<=rs){
//         printf("%d\n",abd%rs);
//     }
//      if(abd<=rs){
//         printf("%d\n",abd*rs);
//     }
//     else{
//         printf("invalid");
//     }
    
// }
// #include<stdio.h>
// int main(){
//     int y;
//     scanf("%d",&y);
//     if(y%4==0 && y%100!=0 ||( y%400 ==0)){
//         printf("this is leep year: %d\n",y);
        
//     }
//     else{
//         printf("this is not leep year: %d\n",y);
//     }
// }
// #include<stdio.h>
// int main(){
//     char o;
//     double o1,o2,r;
//     printf("enter an operator (+, -, *, /):");
//     scanf("%c",&o);
//     printf("enter two operands:");
//     scanf("%lf %lf",&o1,&o2);
//     switch (o){
//         case '+':
//         r = o1 + o2;
//         printf("%.2lf + %.2lf = %.2lf", o1, o2, r);
//         break;
//         case '-':
//         r = o1 - o2;
//         printf("%.2lf + %.2lf = %.2lf", o1, o2, r);
//         break;
//          case '/':
//         r = o1 / o2;
//         printf("%.2lf + %.2lf = %.2lf", o1, o2, r);
//         break;
//          case '*':
//         r = o1 * o2;
//         printf("%.2lf + %.2lf = %.2lf", o1, o2, r);
//         break;
//     default:
//     printf("error: invalid operator");
//     break;
    
// }
// }
// #include<stdio.h>
// int main(){
//     int d;
//     printf("type a number between 1 and 7: ");
//     scanf("%d",&d);

//     switch (d){
//         case 1:
//         printf("Monday\n");
//         break;
//          case 2:
//         printf("Tuesday\n");
//         break;
//          case 3:
//         printf("Wednesday\n");
//         break;
//          case 4:
//         printf("Thursday\n");
//         break;
//          case 5:
//         printf("Friday\n");
//         break;
//          case 6:
//         printf("Saturday\n");
//         break;
//          case 7:
//         printf("sunday\n");
//         break;
//         default:
//         printf("invalid number enered\n");
//         break;   
// }
// }
// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("enter a number to print it multiplication table: ");
//     scanf("%d",&n);
//     printf("multiplication table of %d using while loop\n",n);
//     i = 1;
//     // while loop
//     while (i <= 10)
//     {
//         printf("%d X %d =%d\n",n,i,n *i);
//         i++;
//     }
//      printf("multiplication table of %d using for loop\n",n);
//      for (i = 1; i <= 10; i++)
//      {
//       printf("%d X %d =%d\n",n,i,n *i);
//      }
//      printf("multiplication table of %d using do-while loop\n",n);
//     i = 1;
//     do
//     {
//         printf("%d X %d =%d\n",n,i,n *i);
//         i++;
//     } while (i <= 10);
    
// }
// #include<stdio.h>
// int main(){
//     int n,s = 0;
//     printf("enter a number (enter 0 to exit): ");
//     scanf("%d",&n);
//     while (n != 0)
//     {
//         s +=n;
//         printf("enter a number: ");
//         scanf("%d",&n);
//     }
//     printf("the sum of the numbers is %d\n",s);
//     s =0;
//     do{
//         printf("enter a number: ");
//         scanf("%d",&n);
//         s += n;
//     }
//     while(n != 0);
//     printf("the sum is %d\n",s);
    
// }
// #include<stdio.h>
// int main(){
//     int n,f =1;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         f *=i;
//     }
//     printf("the factorial %d is %d\n", n,f);
    
// }
// #include<stdio.h>
// int main(){
//     int r[]={1,2,3,4,5};
//     printf("%d %d %d %d %d",r[0],r[1],r[2],r[3],r[4]);

// }
// #include<stdio.h>
// int main(){
//     int s[5];
//     scanf("%d %d %d %d %d",&s[0],&s[1],&s[2],&s[3],&s[4]);
//     printf("%d %d %d %d %d",s[4],s[3],s[2],s[1],s[0]);

// }