/*********************************************************************************************
*  Author:           Trevor Gilbert
*  Email:            gilbert.t16@gmail.com
*  Label:            A03
*  Title:            Commenting on a Circular Array Que
*  Course:           CMPS 2143
*  Semester:         Spring 2023
* 
*  Description:
*        This program demonstrates a circular array que 
*        
*  Usage: 
*       - This will read in a file containing whatever values to be read into our list/array. 
*       
*  Files:            
*       main.cpp    : driver program 
*       list.h      : header file with list defintion
*       list.cpp    : list implementation
*********************************************************************************************/

#include <iostream>

using namespace std;

/*********************************************************************************************
* CircularArrayQue
* 
* Description:
*      Establishes size & conditions of a Circular loop operation 
* 
* Public Methods:
*      - CircularArrayQueue with container size (new/initial) 
*      - if/else statements     
*      - return temp/cout
* 
* Private Methods:
*      - int *Container, Front, Rear, QueSize, CurrentSize 
*      - void init
*      - bool Full
*      - Return Current/Que Size
* 
* Usage: 
*      - Enter numbers to be implemented to an array/list in int Main - CircularArrayyQue 
*********************************************************************************************/

class CircularArrayQue {
private:
    int *Container;
    int Front;
    int Rear;
    int QueSize; // items in the queue
    int CurrentSize;
    void init(int size = 0) {
        Front = Rear = CurrentSize = 0;
        QueSize = size;
    }

    bool Full() {
        return CurrentSize == QueSize;
    }

public:
    CircularArrayQue() {
        Container = new int[10];
        init(10);
    }
    CircularArrayQue(int size) {
        Container = new int[size];
        init(size);
    }

    void Push(int item) {
        if (!Full()) {
            Container[Rear] = item;
            Rear = (Rear + 1) % QueSize;
            CurrentSize++;
        } else {
            cout << "FULL!!!!" << endl;
        }
    }

    int Pop() {
        int temp = Container[Front];
        Front = (Front + 1) % QueSize;
        CurrentSize--;
        return temp;
    }
    friend ostream &operator<<(ostream &os, const CircularArrayQue &other);
};

/*********************************************************************************************
* Public/Private/Protected : function_name
* 
* Description:
*      Describe the functions purpose
* 
* Params:
*      - void Push
*      - int Pop
*      - return temp
* 
* Returns:
*      - Function returns 
*********************************************************************************************/

ostream &operator<<(ostream &os, const CircularArrayQue &other) {

    for (int i = other.Front; i < other.CurrentSize; i = (i + 1) % other.QueSize) {
        os << other.Container[i] << " ";
    }
    os << endl;
    return os;
}

/*********************************************************************************************
* Main Driver
* 
* For this program, the main driver was used to test the CircularArrayQue class
*********************************************************************************************/

int main() {
    CircularArrayQue C1(5);

    // C1.Push(34);
    // C1.Push(38);
    // C1.Push(44);
    // C1.Push(22);
    // C1.Push(99);
    // C1.Push(100);

    C1.Push(1);
    C1.Push(2);
    C1.Push(3);
    // C1.Push(6);
    // C1.Push(7);
    cout << C1 << endl;

    // C1.Push(1);
    // C1.Push(2);
    // C1.Push(3);

    cout << C1 << endl;
}
