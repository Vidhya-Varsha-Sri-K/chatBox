#include <iostream>
#include<conio.h>
#include<string.h>
#include<process.h>

using namespace std;

int main()
{
char input[150];
cout<<"******************* Welcome talk with Srisha *******************\n";
while(1){
    gets(input);

    if(strcmp(input, "hi")==0){
        cout<<"Hello.\n";
    }
    else if(strcmp(input, "how are you")==0){
        cout<<"I am fine.\n";
}
    else if(strcmp(input, "what are you doing")==0){
        cout<<"I am learning DSA.\n";
    }
    else if(strcmp(input, "sum")==0){
        int num1, num2;
        cout<<"Enter number 1\n";
        cin>>num1;
        cout<<"Enter number 2\n";
        cin>>num2;
        cout<<"The sum is: "<<num1+num2<<"\n";
        }
    else if(strcmp(input, "product")==0){
        int num1, num2;
        cout<<"Enter number 1\n";
        cin>>num1;
        cout<<"Enter number 2\n";
        cin>>num2;
        cout<<"The product is: "<<num1*num2<<"\n";
        }
    else if(strcmp(input, "subtract")==0){
        int num1, num2;
        cout<<"Enter number 1\n";
        cin>>num1;
        cout<<"Enter number 2\n";
        cin>>num2;
        cout<<"The difference is: "<<num1-num2<<"\n";
        }
     else if(strcmp(input, "divide")==0){
        int num1, num2;
        cout<<"Enter number 1\n";
        cin>>num1;
        cout<<"Enter number 2\n";
        cin>>num2;
        cout<<"The divident is: "<<num1/num2<<"\n";
        }
      else  if(strcmp(input, "hello")==0){
        cout<<"Hi amigo.\n";
    }
    else if(strcmp(input, "what is your name")==0){
        cout<<"I am Srisha.\n";
    }
    else if(strcmp(input, "bye")==0){
        exit(0);
    }
    else if(strcmp(input, "can you feel")==0){
        cout<<"I can't feel.\n";
    }
   else{
     cout<<"Sorry, I can't understand.\n";
   }
}
}
