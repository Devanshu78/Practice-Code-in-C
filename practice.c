

/* // ones more user data entery using structure!!!
#include<stdio.h>
#include<string.h>
#define NAME_SIZE 100
struct Employee
{
    int id;
    char name[NAME_SIZE];
    float salary;
};
int main()
{
    int ARRAY_SIZE;
    printf("Enter the number of user data you want to fill ");
    scanf("%d",&ARRAY_SIZE);
    struct Employee emp[ARRAY_SIZE];
    int index = 0;;
    for(index = 0; index < ARRAY_SIZE; ++index )
    {
        printf("\nEnter details of Employee %d\n\n", index+1);
        printf("Enter id number: ");
        scanf("%d", &emp[index].id);
        fflush(stdin);
        printf("Enter Emp name: ");
        if(fgets(emp[index].name,NAME_SIZE,stdin) == NULL)
        {
            printf("Error in reading the string\n");
            return 1;
        }
        else
        {
            char *p = strchr(emp[index].name, '\n');
            if (p)
            {
                *p = '\0';
            }
        }
        printf("Enter Emp Salary: ");
        scanf("%f", &emp[index].salary);
    }
    printf("\n\n");
    printf("Emp Name\tId\tSalary\n");
    for(index = 0; index < ARRAY_SIZE; ++index )
    {
        printf("%s\t\t%d\t%.2f\n",
               emp[index].name, emp[index].id, emp[index].salary);
    }
    return 0;
} */

/* //user input in structure 
#include<stdio.h>
struct data{
    int age,ID_Num;
    char name[30];
};

int main()
{
    struct data person;
    printf("Please enter name : ");   
    gets(person.name);
    printf("Please enter age : ");
    scanf("%i", &person.age);
    printf("Please enter ID_Num : ");
    scanf("%i", &person.ID_Num);
    printf("\n\nThe age is %i\nThe ID_Num is %i\nThe name is %s\n", person.age , person.ID_Num , person.name);
    return 0;
} */

/* //Timestamp comparision using structure
#include<stdio.h>
typedef struct date
{
    int year , month , date , hour , min , sec; 
}date;
int datecmp(date d1 , date d2);
void display(date d){
    printf("The date is %d/%d/%d {%d:%d:%d}\n",d.year , d.month , d.date , d.hour , d.min , d.sec);
}

int main(){
    date d1 = {2014,7,4,6,45,56};
    date d2 = {2014,7,4,3,7,37};
    display(d1);
    display(d2);
    int a = datecmp(d1 , d2);
    printf("Date Comparision function result : %d",a);


    return 0;
}
int datecmp(date d1 , date d2){
    if (d1.year > d2.year)
    {
        printf("On the basics of year\n");
        return 1;
    }
    if (d1.year < d2.year)
    {
        printf("On the basics of year\n");
        return -1;
    }
    if (d1.month > d2.month)
    {
        printf("On the basics of month\n");
        return 1;
    }
    if (d1.month < d2.month)
    {
        printf("On the basics of month\n");
        return -1;
    }
    if (d1.date > d2.date)
    {
        printf("On the basics of date\n");
        return 1;
    }
    if (d1.date < d2.date)
    {
        printf("On the basics of date\n");
        return -1;
    }
    if (d1.hour > d2.hour)
    {
        printf("On the basics of hour\n");
        return 1;
    }
    if (d1.hour < d2.hour)
    {
        printf("On the basics of hour\n");
        return -1;
    }
    if (d1.min > d2.min)
    {
        printf("On the basics of minute\n");
        return 1;
    }
    if (d1.min < d2.min)
    {
        printf("On the basics of minute\n");
        return -1;
    }
    if (d1.sec > d2.sec)
    {
        printf("On the basics of second\n");
        return 1;
    }
    if (d1.sec < d2.sec)
    {
        printf("On the basics of second\n");
        return -1;
    }

    return 0;
} */

/* //bank account detail using structure
#include<stdio.h>
#include<string.h>
typedef struct bank_account
{
    char name[30];
    int money;
    int accnumber;
    int accyear;

}ba;

int main(){
    ba acc[5];
    ba c1,c2,c3,c4,c5;
    ba *ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
    ptr1 = &c1 , ptr2 = &c2 , ptr3 = &c3 , ptr4 = &c4 , ptr5 = &c5; 
    printf("****************************************************************\n");
    printf("Account Detail\n");
    printf("-----------------------------------------------------------------\n");

    strcpy(ptr1->name, "Devanshu") ;
    ptr1->money = 3476 ;
    ptr1->accnumber = 2365858234;
    ptr1->accyear = 2019;
    printf("Name is %s\n",c1.name);
    printf("money is %d\n",c1.money);
    printf("Account Number is %d\n",c1.accnumber);
    printf("Account opening year is %d\n",c1.accyear);
    printf("________________________________________________\n");

    strcpy(ptr2->name, "Kartik") ;
    ptr2->money = 5273 ;
    ptr2->accnumber = 1830028304;
    ptr2->accyear = 2018;
    printf("Name is %s\n",c2.name);
    printf("money is %d\n",c2.money);
    printf("Account Number is %d\n",c2.accnumber);
    printf("Account opening year is %d\n",c2.accyear);
    printf("________________________________________________\n");

    strcpy(ptr3->name, "Yash") ;
    ptr3->money = 2345 ;
    ptr3->accnumber = 1203734017;
    ptr3->accyear = 2019;
    printf("Name is %s\n",c3.name);
    printf("money is %d\n",c3.money);
    printf("Account Number is %d\n",c3.accnumber);
    printf("Account opening year is %d\n",c3.accyear);
    printf("________________________________________________\n");

    strcpy(ptr4->name, "Ansh") ;
    ptr4->money = 1218;
    ptr4->accnumber = 2365858234;
    ptr4->accyear = 2020;
    printf("Name is %s\n",c4.name);
    printf("money is %d\n",c4.money);
    printf("Account Number is %d\n",c4.accnumber);
    printf("Account opening year is %d\n",c4.accyear);
    printf("________________________________________________\n");

    strcpy(ptr5->name, "Vansh") ;
    ptr5->money = 3642 ;
    ptr5->accnumber = 2846294734;
    ptr5->accyear = 2005;
    printf("Name is %s\n",c5.name);
    printf("money is %d\n",c5.money);
    printf("Account Number is %d\n",c5.accnumber);
    printf("Account opening year is %d\n",c5.accyear);
    printf("________________________________________________\n");
    
    return 0;
} */

/* // geting user input for complex number using structure
#include<stdio.h>
typedef struct complex{
    int real,img;
}comp;

void display(comp c){
    printf("the value of real part is %d\n", c.real);
    printf("the value of img part is %d\n", c.img);
}
int main(){
    comp cnum[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value of real part : \n", i+1);
        scanf("%d",&cnum[i].real);

        printf("enter the value of img part : \n", i+1);
        scanf("%d",&cnum[i].img);
        printf("---------------------------------------------------------------\n");
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnum[i]);
        printf("***************************************\n");
    }
    return 0;
} */

/* //adding complex number using structure
#include<stdio.h>
typedef struct complex
{
    float x,y;
}comp;

comp SumComplex(comp v1 , comp v2){
    comp result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){
    comp v1,v2,sum;
    v1.x=5.4;
    v1.y=6.8;
    printf("X = %.2f , Y = %.2f\n", v1.x , v1.y);

    v2.x=2.0;
    v2.y=8.4;
    printf("X = %.2f , Y = %.2f\n", v2.x , v2.y);

    sum = SumComplex(v1,v2);
    printf("the sum of real part is :  %.2f and the sum of imag. part is : %.2f",sum.x,sum.y);
    return 0;
} */

/* // use of arrow operater  
#include<stdio.h>
typedef struct arrow_operater
{
    int code ;
    float salary;
}ao;

int main(){
    ao e1;
    ao *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = (2347.6324);
    printf("code is : %d\n",e1.code);
    printf("salary is : %.4f",e1.salary);
    return 0;
} */

/* // vector sum using structure  
#include<stdio.h>
typedef struct vector
{
    int x,y;
}vec;

vec SumVector(vec v1 , vec v2){
    vec result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main(){
    struct vector v1,v2,sum;
    v1.x = 3;
    v1.y = 5;
    printf("X = %d , Y = %d\n", v1.x , v1.y);

    v2.x = 6;
    v2.y = 9;
    printf("X = %d , Y = %d\n", v2.x , v2.y);

    sum = SumVector(v1,v2);
    printf("the sum of X is %d and the sum of Y is %d",sum.x,sum.y);
    
    return 0;
} */

/* //char present or not
#include<stdio.h>
void strpresent(char *str , char *a);
int main(){
    char str[10];
    char inp[10];
    printf("enter the string : ");
    gets(str);
    printf("pick up any character from above enterd string to check it's present or not : ");
    scanf("%s",inp);
    strpresent(str,inp);
    return 0;
}
void strpresent(char *str , char *a){
    char *ptr = str ;
    while (*ptr!='\0')
    {
        if (*ptr==*a)
        {
            printf("The character you enetr is present in string :):):)\n");
        }
        ptr++;
    }
} */

/* // count need more work on it !!!
#include<stdio.h>
int strcount(char *str , char *a);
int main(){
    char str[10];
    char inp[10];
    printf("enter the string : ");
    gets(str);
    printf("pick up any character from above enterd string to check how many time is present : ");
    scanf("%s",inp);
    int count = strcount(str,inp);
    printf("total count is %d",count);
    return 0;
}
int strcount(char *str , char *a){
    char *ptr = str ;
    int count = 0 ;
    while (*ptr!='\0')
    {
        if(*ptr==*a){
            count++;
        }
        ptr++;
    }
    return count ;
} */

/* // Encrypt and Decrypt your message  working on it like project 
#include<stdio.h>
void encrypt(char *str);
void decrypt(char *str1);
int main(){
    char str[30];
    char str1[30];
    // Encrypt the message
    printf("Enter your message please : ");
    gets(str);
    encrypt(str);
    printf("Encrypted string is : %s\n",str);
    // Decode the message 
    printf("If you want to decode the above string then enter encrypted message : ");
    gets(str1);
    decrypt(str1);
    printf("Decrypted string is : %s",str1);
    return 0;
}
void encrypt(char *str){
    char *ptr = str;
    while (*ptr!='\0')
    {
        *ptr = *ptr +1;
        *ptr++;
    }
    
}
void decrypt(char *str1){
    char *ptr = str1;
    while (*ptr!='\0')
    {
        *ptr = *ptr - 1;
        *ptr++;
    }
} */

/* // creating a own function to copy one string to another
#include<stdio.h>
int strcpy(char *str , char *str1);
int main(){
    char str[]="devanshu";
    char str1[30];
    strcpy(str , str1);
    printf("after copy the str value in str1 is : %s\n",str);
    return 0;
}
int strcpy(char *str , char *str1){
    char *ptr = str;
    int i=0;
    // int tamp = *str;
    // *str = *str1;         // maybe we can solve it by swaping the value!!!
    // printf("it's swap\n");
    while (*ptr!='\0')
    {
        *ptr = str[i];
        i++;
        *ptr++;
        *str1 = *ptr;
    }
    return *str1;
} */

/* // slice the string by using own created function
#include<stdio.h>
void slice(char *str , int m , int n);
int main(){
    char str[]="0Devanshut";
    slice(str , 1,8);
    printf("%s",str);
    return 0;
}
void slice(char *str , int m , int n){
    int i = 0;
    while (i<n){
        str[i] = str[i+m];
        i++;
    }
    // using for loop 
    // for (;i < n ; i++){
    //     str[i] = str[i+m];
    // }
    str[i] = '\0';
} */

/*//copy one string into another
#include <stdio.h>
#include <string.h>
 
void stringcopy(char *s1,char *s2)
{
	int i;
    for(i=0;s2[i]=s1[i];i++);
    s2[i]='\0';	
}
int main()
{
    char s1[10],s2[10];  
    int i;
 
    printf("Enter any string: ");
    gets(s1);
    stringcopy(s1,s2);
    
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
    return 0;
} */

/* // creating a own function to calc. the length of string
#include<stdio.h>
int strlen(int *name);
int main(){
    char name[] = "Devanshu";
    int l = strlen(name);
    printf("The length of name is %d",l);
    return 0;
}
int strlen(int *name){
    char *ptr = name;
    int len=0;
    while (*ptr!='\0')  
    {
        len++;
        *ptr++; 
    }
    return len;
} */

/* // Count the length of string 
#include<stdio.h>
#include<string.h>

int main(){
    char *name = "Devanshu";
    int length = strlen(name);
    printf("the length of name is %d",length);
    return 0;
} */

/*// String input using %c and %s :
#include<stdio.h>
#include<string.h>

int main(){
    // string input using %c
    char a , input1[25],input2[25];
    int i = 0;
    printf("enter your name ");
    while (a!='\n')
    {
        scanf("%c",&a);
        input1[i]= a;
        i++;
    }
    input1[i-1]= '\0';
    // string input usins %s 
    char input2[25] ;
    printf("enter the name ");
    scanf("%s",input2);
    printf("hello %s , welcome to programing world :):):)\n",input1);
    printf("hello %s , welcome to programing world :):):)\n",input2);
    printf("if we compare both string then %d",strcmp(input1,input2));
    return 0;
} */

/* //find the count of positive and negative integers in an array (internet se copy(GFG))

#include <stdio.h>

// Function to find the count of
// positive integers in an array
int countPositiveNumbers(int* arr, int n)
{
	int pos_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] > 0)
			pos_count++;
	}
	return pos_count;
}

// Function to find the count of
// negative integers in an array
int countNegativeNumbers(int* arr, int n)
{
	int neg_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			neg_count++;
	}
	return neg_count;
}

// Function to print the array
void printArray(int* arr, int n)
{
	int i;

	printf("Array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 2, -1, 5, 6, 0, -3 };
	int n;
	n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);
	printf("Count of Positive elements = %d\n", countPositiveNumbers(arr, n));
	printf("Count of Negative elements = %d\n",countNegativeNumbers(arr, n));
	return 0;
} */

/* //Reverse Array using function
#include<stdio.h>
void revfun(int *arr, int n);
int main(){
    int arr[]={34,56,43,68,78};
    revfun(arr,5);
    for (int i = 0; i < 5; i++){
        printf("The value of %d element is : %d\n", i ,arr[i]);
    }
    return 0;
}
void revfun(int *arr, int n){
    int temp;
    for (int i = 0; i < (n/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

    }
} */

/* // Table using Array
#include<stdio.h>
int main(){
    int a,num[10];
    printf("Enter the digit ");
    scanf("%d",&a);
    for (int i= 0; i < 10; i++)
    {
        num[i] = a*(i+1);
        printf("%d X %d = %d\n",a, (i+1), num[i]);
    }
    
    return 0;
} */

/* // sum of number using recursion
#include<stdio.h>
int Sum(int num);
int main(){
    int a,b;
    printf("Enter the digit : ");
    scanf("%d",&a);
    b = Sum(a) - 2; //I'm get +2 in every output like the correct answer is 55 then it's show me 57 and I don't know how to fix it so I use this line .
    printf("The sum of number is %d\n",b);
    return 0;
}
int Sum(int num){
    int result;
    if (num == 1)
    {
        result = 3;
    }
    else {
        result = Sum(num-1) + num;
    }
    return result;
} */

/* // Pattern using Function 
#include<stdio.h>
void printPattern(int n);
int main(){
    int n;
    printf("enter the digit : ");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}
void printPattern(int n)
{
    if (n==1){
        printf("*\n");
        return;
    }
    printPattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}
 */

/* //fibonacci using function
#include<stdio.h>
int fibonacci(int x);
int main(){
    int a;
    printf("Enter the digit ");
    scanf("%d", &a);
    fibonacci(a);
    return 0;
}
int fibonacci(int x){
    int n3,n1=0,n2=1;
    printf("%d %d ",n1,n2);
    for(int i=2;i<x;++i){
        n3=(n1+n2);
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
 return 0;
} */

/* // Force formual  
#include<stdio.h>
float ForceofAttraction(float m);
int main(){
    int mass;
    printf("Enter the first mass of body ");
    scanf("%d", &mass);
    printf("The Formula we used is F= mg \n");
    printf("The Force of Attraction is = %.2f N",ForceofAttraction(mass));
    return 0;
}
float ForceofAttraction(float m){
    float result = m * 9.8;
    return result;
} */

/* // Celcius => Farenheit Using Function
#include<stdio.h>
float TempConverter(float temperature);

int main(){
    float temp,a;
    printf("Enter your current temperature in celcius : ");
    scanf("%f", &temp);
    a = TempConverter(temp);
    printf("The temperature in Farenheit is %.2f", a);
    return 0;
}
float TempConverter(float temperature)
{
    float far;
    far = ((temperature*9)/5)+32;
    return far;
}
 */

/* // Sum Average 
#include<stdio.h>
int SumAvg(a , b , c)
{
    int d;
    d = (a+b+c)/3;
    return d;
}
int main(){
    int a,b,c,n;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    n = SumAvg(a,b,c);
    printf("The average of three digit is = %d",n);
    return 0;
}
 */

/* // palindrome using if-else
#include <stdio.h>
int main()
{
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
 */

/*// vowel or not (form internet) 
#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
 */

/* //Vowel program self!!!
#include <stdio.h>
int main() {
    char chr;
    printf("Enter an alphabet : ");
    scanf("%c", &chr);
    if (chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U')
    {
        printf("%c is vowel",chr);
    }
    else{
        printf("%c is Consonant ",chr);
    }

    return 0;
}
 */

/* // ASCII Value (form internet)
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c = %d", c, c);

    return 0;
}
 */

/* //Successor and Predecessor
#include<stdio.h>

int main(){
    int a;
    printf("Enter Your Number : ");
    scanf("%d",&a);
    printf("The Predecessor is %d\n",a-1);
    printf("The Successor is %d",a+1);
    return 0;
}
*/

/* While loop
#include<stdio.h>

int main(){
    int i = 0;
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    do
    {
        printf("the value of i is %d\n",i+1);
        i++;
    } while (i<n);

    return 0;
}*/

/* // do while loop
#include<stdio.h>

int main(){
    int i = 1,sum=0;

    do{
        sum +=i;
        i++;
    }while(i <11);
    printf("The value of i is %d\n", sum);

    return 0;
}
 */

/*//Sum of Natural number using for loop
#include<stdio.h>
int main(){
    int sum=0;
    for (int i =1; i<11; ++i){
        sum +=i;
    }
    printf("The sum of first 10 natural number is : %d",sum);
    return 0;
}
*/

/* //while loop
#include<stdio.h>

int main(){
    int i=1,sum=0;
    while (i<11)
    {
        sum +=i;
        i++;
    }
    printf("The sum of first 10 natural number is : %d",sum);

    return 0;
} */

/* //Table with for loop also in reverse 
#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the value you want to see table of : ");
    scanf("%d",&a);
    for (i=1;i<11;++i)
    {
        printf("%d X %d = %d\n",a,i,(a*i));
    }
    return 0;
}
// Reverse Mood
// int main(){
//     int a,i;
//     printf("Enter the value you want to see table of : ");
//     scanf("%d",&a);
//     for (i=10;i>0;--i)
//     {
//         printf("%d X %d = %d\n",a,i,(a*i));
//     }
//     return 0;
// } */

/* //campare 4 number using function (internet)
#include <stdio.h>
int max(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int a = 5, b = 8, c = 20, d = 3;
    int left_max = max(a, b);
    int right_max = max(c, d);
    int final_max = max(left_max, right_max);
    printf("Maximum number is: %d", final_max);
}*/

/* // Compare 4 number
#include<stdio.h>

int main(){
    int num1=4,num2=5,num3=7,num4=6;

    if (num1 > num2)
    {
        if (num1>num3)
        {
            if(num1>num4)
            {
                printf("The greatest number is %d" , num1);
            }
            else{
                printf("The greatest number is %d" , num4);
            }
        }
    }

    else if (num2>num1)
    {
        if (num2>num3)
        {
            if(num2>num4)
            {
                printf("The greatest number is %d" , num2);
            }
            else{
                printf("The greatest number is %d" , num4);
            }
        }
    }

    else if (num3>num4)
    {
        printf("The greatest number is %d" , num3);

    }

    else{
        printf("not able to find!!!!");
    }
    return 0;
}
 */

/* //check student is fail or pass
#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5; // per subject marks
    float stu1; // for student one
    printf("Enter the marks of your 1st subjet : ");
    scanf("%d", &m1);
    printf("Enter the marks of your 2nd subjet : ");
    scanf("%d", &m2);
    printf("Enter the marks of your 3rd subjet : ");
    scanf("%d", &m3);
    printf("Enter the marks of your 4th subjet : ");
    scanf("%d", &m4);
    printf("Enter the marks of your 5th subjet :" );
    scanf("%d", &m5);
    stu1 = (m1+m2+m3+m4+m5)/5; // average of marks
    printf("%.2f", stu1);
    //condistion to check student is pass or not!!!
    if (stu1>40.00){
        printf("\nPass:):):)");
    }
    else{
        printf("\nFail!!!");
    }
    return 0;
}*/

/* // Calu. Simple_Interest
#include<stdio.h>

int main(){
    float principal,rate,time, Simple_Interest;
    printf("Enter the Principal : \n");
    scanf("%f", &principal);
    printf("Enter the Rate : \n");
    scanf("%f",&rate);
    printf("Enter the Time : \n");
    scanf("%f",&time);
    Simple_Interest = (principal*rate*time)/100;
    printf("The Interest you get on your amount is %.2f\nrincipal", Simple_Interest);
    printf("The total amount is %.2f", Simple_Interest+principal);
    return 0;
}
*/

/* // Celcius => Farenheit
#include<stdio.h>

int main(){
float temp, far;
printf("Enter your current temperature in celcius : ");
scanf("%f", &temp);
far = ((temp*9)/5)+32;
printf("The temperature in Farenheit is %.2f", far);
return 0;
}
 */

/* // Pointer
#include<stdio.h>
int main(){
    int a=8;
    int *ptr = &a;
    printf("The address of a is %u\n",&a);
    printf("The address of a is %d\n",&(*ptr));
    printf("The address of a is %u\n",ptr);
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*ptr);
    return 0;
}  */

/*//pointer with function 
 #include<stdio.h>
void ptrfun(int a);
int main(){
    int i=8;
    int *ptr = &i;
    printf("the value of i is %d\n",i);
    printf("the address of i is %u\n",&i);
    ptrfun(i);
    return 0;
}
void ptrfun(int a){
    printf("address of a is %u\n", &a);
    a=19;
    printf("the value of a is %d",a);
}
 */

/* // change the value using function in pointer
#include<stdio.h>
void changefun(int *a , int *b);
int main(){
    int i,b;
    printf("enter the value ");
    scanf("%d",&i);
    int *ptr = &i;
    // printf("the value of i is %d\n",i);
    // printf("the address of i is %u\n",&i);
    changefun(&i, &b);
    printf("the value after 10 time is %d\n",b);
    return 0;
}
void changefun(int *a , int *b){
    *b = (*a) * 10;
} */

/* // print in main() using ptr.
#include<stdio.h>
void SumandAvg(int a,int b , int *sum , float *avg);
int main(){
    int n1=2,n2=5,sum;
    float avg;
    // printf("first number "); // don't know why programm is terminetd!!!
    // scanf("%d", n1);
    // printf("second number ");
    // scanf("%d", n2);
    SumandAvg(n1,n2,&sum,&avg);
    printf("the sum of two number is %d\n",sum);
    printf("the avg of two number is %.2f",avg);
    return 0;
}
void SumandAvg(int a,int b , int *sum , float *avg){
    *sum = a + b;
    *avg = (float)(*sum)/2;
} */

/* // To calculated the area of rectangle

#include<stdio.h>
int main(){
    int a , b;
    printf("Enter width of the object  ");
    scanf("%d", &a);
    printf("Enter hight of the object  ");
    scanf("%d", &b);
    printf("AREA of you object is %d", a * b);
    return 0;
}
  */

/* // Fibonachi series
#include<stdio.h>
int main(){
 int n1=0,n2=1,n3,num;
 printf("Enter the number of elements: ");
 scanf("%d",&num);
 printf("%d %d ",n1,n2);
 for(int i=2;i<num;++i){
  n3=n1+n2;
  printf("%d ",n3);
  n1=n2;
  n2=n3;
 }
  return 0;
}
 */