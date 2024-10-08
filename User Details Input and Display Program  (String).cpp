#include <iostream>
#include <string>
using namespace std;
int main() {

    string fullname;
    string cname;
    string fname;
    string mname;

    cout<<"Enter your Full Name : ";
    getline(cin,fullname);
    cout<<"Enter your College Name : ";
    getline(cin,cname);
    cout<<"Enter your Fathers Name : ";
    getline(cin,fname);
    cout<<"Enter your Mother's  Name : ";
    getline(cin,mname);

     cout << "\nYour Full Name: " << fullname << endl;
    cout << "Your College Name: " << cname << endl;
    cout << "Your Father's Name: " << fname << endl;
    cout << "Your Mother's Name: " << mname << endl;




    return 0;
}
