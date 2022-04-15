#include<iostream>
using namespace std ;
class Queue
{
public:

    int* array ;
    int rare = 0; 
    int front = 0;
    int capacity;



    // parametrize Constructor 
    Queue(int c)
    {
    
        array = new int;
        capacity = c ;



    }
    ~Queue()
    {
        delete [] array;
    }

    bool isempty()
    {
        if(rare == -1 && front == -1 )
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
        if(capacity == rare || front-rare == 1) // now to sort the memory wastage issue

        {
            
            return true ;

        }
        else 
        {
            return false;

        }
    }

    void Enqueue(int num )
    {
        if(isfull())
        {
            cout<<"Queue is Full no more additions"<<endl;
            return ; 
        }
        else 
        {
            if(rare == front)
            {
                rare++;
                front++;

            }

            array[rare] = num ;
            rare++ ;
        }
        return ; 
    }

    void Dequeue()
    {
        if(isempty())
        {
            cout<<"Nothing to pop/deque"<<endl;
            return ; 

        }
        else
        {

            for(int i = 0 ; i<capacity; i++)
            {
                array[i] = array[i+1];    // Hence this will sort our memory problem but
                                            // timecompleity of program will be O(n)
            }
            rare--;



        }
        return ;

    }

    void Peek()
    {
        if(isempty())
        {
            cout<<"No element in Queue it's Empty"<<endl;

        }
        else
        {
            cout<<"Element at the front is :"<<array[front]<<endl;

        }
        return ; 

    }

        void Peek_last()
    {
        if(isempty())
        {
            cout<<"No element in Queue it's Empty"<<endl;

        }
        else
        {
            cout<<"Element at the End is :"<<array[rare-1]<<endl;

        }
        return ; 

    }

    void sort()
    {
        int temp = 0 ;

         for (int i = 0 ; i<rare-1;i++)
         {
             if(array[i]>array[i+1])
             {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp ;
                
             }
            


         }
         return ; 

    }

    void Display()
    {
        for(int i = front ; i<rare; i++)
        {
            cout<<array[i]<<endl;

        }
    }
};




int main()
{
    Queue q(10);
    q.Enqueue(2);
    q.Enqueue(1);
    q.Enqueue(3);
    q.Enqueue(1);
    q.Enqueue(10);



//    cout<<q.isempty()<<endl;

// Dequeue 
   // q.Dequeue();
// thus we have empty space in the array but unable to add more element because we cannot go back
// To solve this issue we can use idea of shifting the elments backword or by circular Queue 
// Shifting the elements backword will cost us more timecomplexity but it will save our time 
// for keeping both space and time complexities best we will implement Circular Queue


// // Peek the element at the top
//     q.Peek();


// // peek last element of the array
//      q.Peek_last();
         
// Now sorting the Queue

     q.sort();
     q.sort();




// display
     q.Display();
     // Peek the element at the top
    q.Peek();


// peek last element of the array
     q.Peek_last();
         

    return  0 ;
}