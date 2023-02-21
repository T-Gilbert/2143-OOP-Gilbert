/*****************************************************************************             
*  Author:           Trevor Gilbert
*  Email:            trevor.gilbert@email.wosc.edu
*  Label:            P02
*  Title:            MyVector Class 2
*  Course:           CMPS 2143
*  Semester:         Spring 2023
* 
*  Description:
*        This program expands to a more robust MyVector class, which incorporates added     
*        functionality with the overloading of some C++ operators.  
*        
*  Usage: 
*       - $ ./main filename
*       - This will read in a file containing random values to be read into the list/array. 
*       
*  Files:            
*       main.cpp    : Driver program 
*****************************************************************************/
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#define INF 1000000000  // infinity

using namespace std;

struct Node 
{
    int data;

    Node* next;

    Node(int x) 
    {
        data = x;
        next = NULL;
    }
};
/******************************************************************************
* Public : LoadList
* 
* Description:
*      Loads an array of integerts into a linked list.
* 
* Params:
*      int*    :  array of integers
*      int     :  array size
* 
* Returns:
*      Addition        : Overloads addition function
*      Subtraction     : Overloads subtraction function
*      Multiplication  : Overloads multiplication function
*      Division        : Overloads division function
*      Equality        : Overloads equals function      
******************************************************************************/
class MyVector 
{
private:
    Node*           head;  
    Node*           tail;
    int             size;
    static ofstream fout;
    string          fileName;
    bool            sorted;

    void _inorderPush(int x) 
    {
        Node* tempPtr = new Node(x); 
        Node* prev = head;            
        Node* curr = head;

        while (curr->data > x) 
        {  
            prev = curr;
            curr = curr->next;
        }

        tempPtr->next = prev->next; 
        prev->next = tempPtr;

        size++;  
    }

    int value;

    MyVector operator -(const MyVector& lhs, const MyVector& rhs)
    {
      return MyVector(lhs.getValue() - rhs.getValue());
    }

public:
  
    MyVector() 
    {
      init();
    }
// Overload subtraction operation    
    MyVector(int val) : value(val) {}

    MyVector operator -(const MyVector& other) const
    {
      return MyVector(value - other.value);
    }

    int getValue() const 
    {
      return value;
    }
// Overload addition operation
    MyVector(int val) : value(val) {}

    MyVector operator +(const MyVector& other) const
    {
      return MyVector(value + other.value);
    }

    int getValue() const 
    {
      return value;
    }

    MyVector(int A[], int aSize) 
    {
        init();

        for (int i = 0; i < aSize; i++) 
        {
            pushRear(A[i]);
        }
    }
    MyVector(string FileName) 
    {
        init();

        ifstream fin;
        int      x = 0;

        fin.open(FileName);
        while (!fin.eof()) 
        {
            fin >> x;
            pushRear(x);
        }
    }

    MyVector(const MyVector& other) 
    {
        init();

        Node* temp = other.head;

        while (temp) 
        {
            pushRear(temp->data);
            temp = temp->next;
        }
    }

    void init() 
    {
        head = tail = NULL;
        fileName = "";
        size = 0;
        sorted = 0;
    }
// Sort number array from small to large
    void inorderPush(int x) 
    {
        if (!sorted) 
        {
            sortList();
        }
        if (!head) 
        {
            pushFront(x);  
        } 
        else if (x < head->data) 
        {
            pushFront(x);  
        } 
        else if (x > tail->data) 
        {
            pushRear(x);  
        } 
        else 
        {
            _inorderPush(x);  
        }
    }
// Sort input data from head to tail 
    void sortList() 
    {
        Node* newFront = head;
        while (newFront->next) 
        {
            Node* smallest = newFront;
            Node* current = newFront;
            int   minimum = INF;
            while (current) 
            {
                if (current->data < minimum) 
                {
                    smallest = current;
                    minimum = current->data;
                }
                current = current->next;
            }
            smallest->data = newFront->data;
            newFront->data = minimum;
            newFront = newFront->next;
        }
        sorted = true;
    }
// Push integers to front/head of array
    void pushFront(int x) 
    {
        Node* tempPtr = new Node(x);

        if (!head) 
        {
            head = tail = tempPtr;
        } else 
        {
            tempPtr->next = head;
            head = tempPtr;
        }
        size++;
    }

    void pushFront(const MyVector& other) 
    {
        Node* otherPtr = other.head;         
        int*  tempData = new int[other.size];  
        int i = 0;
        while (otherPtr) 
        {
            tempData[i] = otherPtr->data;
            otherPtr = otherPtr->next;
            ++i;
        }
        for (int i = other.size - 1; i >= 0; i--) 
        {
            pushFront(tempData[i]);
        }
    }
// Arrange data to list rear
    void pushRear(const MyVector& other) 
    {
        Node* otherPtr = other.head;  

        while (otherPtr) 
        {  
            pushRear(otherPtr->data);
            otherPtr = otherPtr->next;
        }
    }

    bool pushAt(int i, int x) 
    {
        if(i >= size)
        {
            return false;
        }
        
        Node* tempPtr = new Node(x);  
        Node* prev = head;            
        Node* curr = head;

        while (i>0) 
        {  
            prev = curr;
            curr = curr->next;
            i--;
        }

        tempPtr->next = prev->next; 
        prev->next = tempPtr;

        size++;  
        return true;
    }

    void pushRear(int x) 
    {
        Node* tempPtr = new Node(x);

        if (!head) 
        {
            head = tail = tempPtr;
        } 
        else 
        {
            tail->next = tempPtr;
            tail = tempPtr;
        }
        size++;  
    }

    friend ostream& operator<<(ostream& os, const MyVector& rhs) 
    {
        Node* temp = rhs.head; 

        while (temp) 
        {  
            os << temp->data;  
            if (temp->next) 
            {
              os << "->";
            }
            temp = temp->next; 
        }
        os << endl;
        return os;
    }

    ~MyVector() 
    {
        Node* curr = head;
        Node* prev = head;

        while(curr)
        {
            prev = curr;
            curr = curr->next;
            cout << "deleting: " << prev->data << endl;
            delete prev;
        }
    }
};

/******************************************************************************
* Main : Vector commands
* 
* Description:
*      Loads an array of integerts into a linked list.
* 
* Params:
*      int*    :  array of integers
*      int     :  array size
* 
* Returns:
*      Output  :  Value b - value a
*                 Value a + value b
*                 Value a * value b
                  Value a / value b
******************************************************************************/

int main() 
{
    MyVector V1;

    MyVector a(value);
    MyVector b(other.value);

    MyVector c = a - b;
    MyVector d = b - a;

    std:: << c.getValue() << std::endl;

    MyVector c = a + b;

    std:: << c.getValue() << std::endl;
    std:: << d.getValue() << std::endl; 
  
    V1.pushFront(56);
    V1.pushFront(42);
    V1.pushFront(30);
    V1.pushFront(48);

    V1.pushFront(V1);

    cout << V1 << endl;

    V1.sortList();
    cout << V1 << endl;

    V1.pushAt(3, 88);
    cout << V1 << endl;
    V1.sortList();
    cout << V1 << endl;
}
