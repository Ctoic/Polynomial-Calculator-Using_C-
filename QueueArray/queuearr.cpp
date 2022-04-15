// Static Array Based Implementstions of Quuueue 
#include<iostream>
using namespace std ;

class Queue
{
public:
    int front ;
    int rare;
    int size;
    int array[10] ;


    Queue()
    {
        rare = -1 ;
        front = -1 ;
        size  = 10 ;


    }
       
    bool isempty()
    {
        if(rare == -1 && front == -1)
        {
            return true ;

        }
        else
        {
            return false ;


        }
    }

    bool isfull()

    {
        if(rare==size-1)
        {
            return true ;

        }
        else{
            return false ;

        }
    }

    void Enque(int num)
    {
        if(isfull())
        {
            cout<<"Queue overflow"<<endl;
            return ;


        }

        else if(isempty())
        {
            front++;
            rare++;
            array[rare] = num ; 


        }
        else 
        {
            rare++;
            array[rare] = num ;


        }
    }

    int Deque()
    {
        int val;

        if(isempty())
        {
            cout<<"Quueue Underflow"<<endl;

            return -1;
        }
        else
        {
            if(front == rare)
            {
                rare++;
                front++;
                val = array[front];

            }

            else
            {
                front++;
                val = array[front];
            }

        }
        return val ;

    }


    void Display()
    {
        for(int i = front; i<=rare ; i++)
        {
            cout<<array[i]<<endl;

        }
    }
};

int main()
{
    // Creating Object of the Queue
    Queue q1 ;

    // To add values in the queue
    q1.Enque(1);
    q1.Enque(9);
    q1.Enque(10);
    q1.Enque(2);
    q1.Enque(3);  // why this code is not adding last element :(
    q1.Enque(4); // because you were looping till rear-1 not equal to rear :)

    // To dequeu the Queue
    q1.Deque();
    q1.Deque();
    q1.Deque();
    

// Displaying the Function
    q1.Display();


    return  0 ;
}