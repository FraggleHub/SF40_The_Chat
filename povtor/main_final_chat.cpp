

#include <iostream>

using namespace std;

void Registration()
{
    cout << "\n Let's do registration" << endl;
    //....
};

void Main_Menu()
{
    short choice;
    cout << "\t\t This is Chat!!" << endl;
    cout << "1. Registration" << endl;
    cout << "input choice";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "\n\t your choice: Registration "<< endl;
        Registration();
        break;
    }

    case 2:
    {
        //....
        break;
    }
    }
};

int main()
{
	cout << "startup" <<endl << endl;

    Main_Menu();

	return 0;
}