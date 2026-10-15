#include<iostream>
using namespace std;
// student grading system 
int main (){
int marks ;
cout<<" enter the student marks :";
cin>>marks;
 if ( marks<0 || marks>100){
    cout<<" Invalid marks ";
 }
else if(marks>=90){
cout<<"Your Grade is:A";

}
else if( marks>=80){
    cout<<" your grade is :B";
}
else if(marks>=70){
    cout<<"Your grade is : C";
}
else if (marks>= 60){
    cout<<"Your grade is : D";
}
 
else{
   cout<<"your grade is : F"; 
}

}