//Array ADT Insertion using Dynamic Array

#include <iostream>
using namespace std;


class List
{
int *p1;
static int size;

public:
List()
{
p1=new int[size]; //dummy array created
}

~List()
{
p1=NULL;
}

void insert(int value, int position)
{
position--;
int *p2=new int[size++];
for(int i=0; i<size; i++)
{
if(i==position)
p2[position]=value;
else if(i<position)
p2[i]=p1[i];
else //(i>position)
p2[i]=p1[i-1];
}
delete[] p1;
p1=p2;
p2=NULL;
}

void display()
{
for(int i=0; i<size; i++)
{
cout<<p1[i]<<endl;
}
}
};
int List::size=0;


int main()
{
int values, temp, position;
List A;
cout<<"how many values would you like to insert"<<endl;
cin>>values;

for(int i=0; i<values; i++)
{
cout<<"enter value ";
cin>>temp;
A.insert(temp, i+1);
}
A.display();

cout<<"\n\nenter extra value ";
cin>>temp;
cout<<"enter position ";
cin>>position;
A.insert(temp, position);
A.display();

return 0;
}