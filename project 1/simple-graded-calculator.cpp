#include<iostream>
using namespace std;

int main(){

    float scoref;
    int score;
    char grade;
    cout<<"Enter your score out of 100:- ";
    cin>>scoref;

    score = (int)scoref;

 

    grade = (score<=100 && score>=90)  ? 'A' :
            (score<=89  &&  score>=80) ? 'B':
            (score<=79  && score>=70)  ? 'C':
            (score<=69  && score>=60)  ? 'D' :
            (score<=59  && score>=33)  ? 'E':
            (score<=0  && score>=33)  ? 'F' : 'F';

            cout<<"your Grade is:"<<grade<<endl;


        switch (grade)
        {
        case 'A':
            cout<<"Excellent work"<<endl;
            break;

        case 'B':
            cout<<"Well done"<<endl;
            break;

        case 'C':
            cout<<"Good job"<<endl;
            break;

        case 'D':
            cout<<"Passed,but you could do better"<<endl;
            break;

        case 'E':
            cout<<"Needs improvement"<<endl;
            break;

        case 'F':
            cout<<"Sorry,you failed"<<endl;
            break;
        
        default:
            cout<<"invalid grade"<<endl;
            break;
        }

        if(grade == 'A' || grade =='B' || grade == 'C' || grade == 'D') {

            cout<<"Congratulations! you are eligible for the next level"<<endl;
        }
        else{
            cout<<"Please try again next time"<<endl;
        }
       
            
}