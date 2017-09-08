#include<iostream>
using namespace std;
class item
{
string title;
string author;
string pub;
float price;
int stock;
public:

void get_data()
{
cin>>title>>author>>pub>>price>>stock;
}
void put_data()
{
cout<<title<<endl<<author<<endl<<pub<<endl;
}
bool check_data(string a,string b)
{
if(title==a && author==b)
return true;
else
return false;}

bool check_stock(int n){
    if (stock >=n)
        return true;
    else
        return false;
}

void printbill(int n){
    cout<<"\n THe total amount to be paid is " << (float)(n*price)<<endl;
}

};

int main()
{
string bauthor,atitle;
int amnt;

item o[2];
for(int i=0;i<2;i++)
    o[i].get_data();
cout<<"Enter Title and Author Name"<<endl;
cin>>atitle>>bauthor;
for(int i=0;i<2;i++)
{
    if(o[i].check_data(atitle,bauthor))
    {
        cout<< "Enter the quantity: ";
        cin >> amnt;
        if (o[i].check_stock(amnt)){
                o[i].put_data();
                o[i].printbill(amnt);
        }
        else
            cout<<"The stock is not sufficient";
        break;
    }

    else
        cout<<"The book is not in the list";


}


return 0;
}


