#include<bits/stdc++.h>
#include <unistd.h>

using namespace std;

void homepage();
void construction();

class CeasarCypher
{
	string s;

	public:
		void input()
		{
			cout<<"\n\n Enter the secret message : ";
			getline(cin, s);
			getline(cin, s);
		}
		string encrypt()
		{
			string temp;
			for(auto i=s.begin();i!=s.end();i++)
				temp+=*i+2;
			return temp;
		}
		string decrypt()
		{
			string temp;
			for(auto i=s.begin();i!=s.end();i++)
				temp+=*i-2;
			return temp;
		}
};

int main()
{
    int choice;
    homepage();
    cin>>choice;
    system("clear");
    switch(choice)
    {
        case 1:
        {
                CeasarCypher d;
                d.input();
                int choice;
                string temp;
                system("clear");
                cout<<" Press 1: Encryption";
                cout<<"\n Press 2: Decryption";
                cout<<"\n Enter your choice : ";
                cin>>choice;
                cout<<"\n\n Loading"<<flush;
                usleep(1000000);
                cout<<"."<<flush;
                usleep(1000000);
                cout<<"."<<flush;
                usleep(1000000);
                cout<<"."<<flush;
                usleep(1000000);
                system("clear");
                switch(choice)
                {
                    case 1: temp = d.encrypt();
                            cout<<" Encrypted String is : ";
                            cout<<temp;
                            break;
                    case 2: temp = d.decrypt();
                            cout<<" Decrypted String is : ";
                            cout<<temp;
                            break;
                    default:cout<<" Invalid Choice";
                }
        }
        break;

        case 2: construction();
                break;

        default:cout<<" Invalid Choice";
    }

	return 0;

}

void homepage()
{
    cout<<"\n **********DATA ENCRYPTION/DECRYPTION**********\n";
    cout<<"\n Select 1: Ceasar Cypher";
    cout<<"\n Select 2: RSA Cypher";
    cout<<"\n Enter Choice : ";
}

void construction()
{
    cout<<" ----------Under Construction----------";
}
