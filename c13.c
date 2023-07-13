//1
// #include <stdio.h>
//  int main(){
//      int n;
//      printf("Enter a number : ");
//      scanf("%d",&n);
//      switch(n){
//     case 1:
//     case 3:
//     case 5:
//     case 7: 
//     case 8:
//     case 10:
//     case 12 :
//     printf("#1 days");
//     break;
//     case 4:
//     case 6:
//     case 9:
//     case 11: printf("30 days");
//     break;
//     case 2: printf("28 or 29 days ");
//     break;
//     default :
//     printf("Invalid entry!!!!!!");
//        }
//        return 0;
//  }





//2
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n,a,b;
//     while(1){
//     printf("1.Addition\n2.substraction\n3.Multiplication\n4.Division\n5.exit\n");
//     printf("Enter chocie : ");
//     scanf("%d",&n);
//     switch(n){
//         case 1: printf("Enter two numners : ");
//         scanf("%d%d",&a,&b);
//         printf("\nSum is %d\n",a+b);
//         break;
//         case 2: printf("Enter two numners : ");
//         scanf("%d%d",&a,&b);
//         printf("\ndifference is %d\n",a-b);
//         break;
//         case 3: printf("Enter two numners : ");
//         scanf("%d%d",&a,&b);
//         printf("\nmultiplication is %d\n",a*b);
//         break;
//         case 4: printf("Enter two numners : ");
//         scanf("%d%d",&a,&b);
//         printf("\ndivision is %d\n",a/b);
//         break;
//         case 5 :
//         exit(0);
//     }
// }
// return 0;
// }





//3
// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter day number : ");
//     scanf("%d",&n);
//     switch(n){
//         case 1: printf("Its monday!!\nnew week new journey");
//         break;
//         case 2: printf("Tuesday!!!!\nhave a nice week ahead");
//         break;
//         case 3: printf("Wednesday !!!\n have a good day");
//         break;
//         case 4: printf("Thursday!!\ntwo more day to go");
//         break;
//         case 5: printf("Friday!!!!\n enjoy your day");
//         break;
//         case 6: printf("saturday!!\ntwo more day to go");
//         break;
//         case 7: printf("sunday!!!!\n enjoy your day");
//         break;
//         default : printf("Invalid input !!!!!");
//         }
//         return 0;
// }






//4
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n,a,b,c;
//     while(1){
//     printf("1.check isosceles\n2.Check right angled\n3.Check equilateral\n4.exit\n");
//     printf("Enter choice : ");
//     scanf("%d",&n);
    
//     switch(n){
//         case 1: 
//         printf("\nEnter three side of triangle :");
//     scanf("%d%d%d",&a,&b,&c);
    
//     if(a+b>c && b+c>a && c+a>b){
//     if(a==b || b==c || c==a)
//         printf("\nIsosceles triangle");
//         else
//         printf("\nNot a isosceles triangle");
//     }
//     else 
//     printf("Not a valid triangle");
//         break;
//         case 2: 
//            printf("\nEnter three side of triangle :");
//     scanf("%d%d%d",&a,&b,&c);
//            if(a+b>c && b+c>a && c+a>b){
//             if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
//         printf("\nRight angled triangle");
//         else
//         printf("\nNot a right angled triangle");
//           }
//             else 
//     printf("Not a valid triangle");
//         break;


//         case 3:
//            printf("\nEnter three side of triangle :");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a+b>c && b+c>a && c+a>b){
//      if(a==b==c)
//         printf("\nEquilateral triangle");
//         else
//         printf("\nNot an equi triangle");
//     }
//       else 
//     printf("Not a valid triangle");
//         break;
//         case 4 : exit(0);
//         default :
//         printf("\nInvalid entry");
//     }
// }
//     return 0;
// }




//5
// #include <stdio.h>
//  int main(){
//     int var;
//     printf("Enter a number : ");
//     scanf("%d",&var);
//     switch(var){
//         case 1: printf("Good");
//         break;
//         case 2: printf("Better");
//         break;
//         case 3: printf("Best");
//         break;
//         default: printf("Invalid!!");

//     }
//     return 0;
//  }




//6
// #include <stdio.h>
//  int main(){
//     int n;
//     printf("Enter marks : ");
//     scanf("%d",&n);
//     switch(n){
//         case 90 ... 100 : printf("Grade A");
//         break;
//          case 80 ... 89 : printf("Grade B");
//         break;
//          case 70 ... 79 : printf("Grade C");
//         break;
//          case 60 ... 69 : printf("Grade D");
//         break;
//          case 50 ... 59 : printf("Grade E");
//         break;
//          case 0 ... 49 : printf("Grade F");
//         break;
//         default: printf("Invalid marks");
//         }
//         return 0;
//  }




//7
// #include <stdio.h>
// #include <stdlib.h>
//  int main(){
//      int n,fact=1,a,i,sum=0;
//      while(1){
//         printf("1.factorial\n2.check even odd\n3.area of circle\n4.sum of first n natural nos\n5.exit\n");
//         printf("Enter choice : ");
//         scanf("%d",&n);
//         switch(n){

//             case 1: printf("\nEnter a number : ");
//             scanf("%d",&a);
//             for(i=1;i<=a;i++){
//                 fact=fact*i;
//             }
//             printf("Factorial is %d\n",fact);
//             break;

//             case 2: printf("Enter a number : ");
//             scanf("%d",&a);
//             if(a%2)
//             printf("odd\n");
//             else
//             printf("Even\n");
//             break;

//             case 3: printf("Enter radius : ");
//             scanf("%d",&a);
//             printf("Area of circle is %f\n",3.14*a*a);
//             break;

//             case 4: printf("Enter a number : ");
//             scanf("%d",&a);
//             for(i=1;i<=a;i++){
//                 sum=sum+i;
//             }
//             printf("Sum of first %d natural number is %d\n",a,sum);
//             break;

//             case 5: exit(0);
//             default : printf("Invalid option choosen!!!!!!");
//         }
//      }
//      return 0;
//  }





//8
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c",&ch);
//     switch(ch){
//         case 'a' ... 'z': printf("lowe case alphabet ");
//         break;
//         case 'A' ... 'Z': printf("Upper case alphabet");
//         break;
//         default : printf("Special characters");
//     }
//     return 0;
// }



//9
#include <stdio.h>
 int main(){
    ch
 }