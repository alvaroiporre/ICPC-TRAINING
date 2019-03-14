#include<iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        age =initialAge;
        if(age<0){
            cout<<"Age is not valid, setting age to 0.\n";
            amIOld();
        }else{
            if(age<13) cout<<"You are young.\n";
            else if(age<18) cout<<"You are a teenager.\n";
            else cout<<"You are old\n";
            yearPasses();
        }

    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        //age=0;
        Person(0);
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age+=3;
        if(age<13) cout<<"You are young.\n";
        else if(age<18) cout<<"You are a teenager.\n";
        else cout<<"You are old\n";
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);


		cout << '\n';
    }

    return 0;
}
