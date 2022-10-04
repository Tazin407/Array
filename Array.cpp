#include<iostream>
using namespace std;

int main(){

   int marks[] ={23,34,56,361};
   //ekrokom korlei hoy. [] er vitor kichu na dileo c++ shob bujhe 
   int MathMarks[4];
    MathMarks[0]=443;
    MathMarks[1]=339;
    MathMarks[2]=887;
    MathMarks[3]=990;
    //cout<<"This are the math marks "<<endl;
    //cout<<MathMarks[0]<<endl;
    //cout<<MathMarks[1]<<endl;    
    //cout<<MathMarks[2]<<endl;
    //cout<<MathMarks[3]<<endl;
    //cout<<"And this is marks"<<endl;

    //array er value change o kora jay
   //for (int i = 0; i <4; i++)
   //{
   //    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
   //    cout<<"And the value of math mark  "<<i<<MathMarks[i]<<endl;
   //}
    
    marks[2]=888;
    cout<<marks[2]<<endl;
    cout<<"The marks are"<<endl;
    int i=0;
    
    do
    {
        cout<<marks[i]<<endl;
    } while ( i++<4);

    //array er pointer * diye define korte hoy
    int*p=marks;
    cout<<"The value of pointer is "<<*p<<endl;
    cout<<"The value of pointer is "<<*(p+1)<<endl;
    cout<<"The value of pointer is "<<*(p+2);
    

return 0;
}
