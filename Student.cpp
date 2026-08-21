#include<iostream>
using namespace std;
struct Student
{
    string id, name;
    float cgpa;
    int age, money;
    string add;


    void input()
    {
        cout<< "Enter your Name: ";
        getline(cin, name);
        cout<< "Enter your ID: ";
        getline(cin, id);
        cout<< "Enter your Address: ";
        getline(cin, add);
        cout<< "Enter you age: ";
        cin>>age;
        cout<< "Enter your CGPA: ";
        cin>>cgpa;
        cout<< "Enter your Balance: ";
        cin>>money;
        cout<<endl;
        cin.ignore();

    }

    void output()
    {
        cout<< "Name: "<<name<<endl;
        cout<< "ID: "<<id<<endl;
        cout<< "Address: "<<add<<endl;
        cout<< "Age: " <<age<<endl;
        cout<< "CGPA: " << cgpa<<endl;
        cout<< "Balance: "<<money<<endl;
        cout<<endl;
        cout<< "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n";
        cout<<endl;
    }

   void transfer(Student &receiver, int amount)
   {
        if(amount<=money)
        {
            money-=amount;
            receiver.money+=amount;
            cout<< "Successfully Transferred " <<amount<< " Tk from " <<name<< " to " <<receiver.name<<endl;
        }
        else
        {
             cout<< "Transfer Failed! Insufficient balance." <<endl;
        }
    }
};

int main()
{    Student a, b;

    cout << "Enter details for Student A:\n";
    a.input();

    cout << "\nEnter details for Student B:\n";
    b.input();

    cout << "\n--- Student Details ---\n";
    a.output();
    b.output();

    int amount;
    cout << "\nEnter amount to transfer from A to B: ";
    cin >> amount;

    a.transfer(b, amount);

    cout << "\n--- After Transfer ---\n";
    a.output();
    b.output();

    return 1;
}


