#include<iostream>
using namespace std;
const int MaxMemSize = 255; // максимальный размер памяти для стека 
typedef double TELEM; // тип элемента СД 
typedef TELEM *PTElem; // тип указателя на СД 
class TStack 
{ protected: // поля 
PTElem pMem; // указатель на массив элементов 
int MemSize; // размер памяти для СД 
int DataCount; // количество элементов в СД 
int Hi; // индекс вершины стека 
virtual int GetNextIndex (int index); // получить следующий индекс 
public: 
TStack (int Size=MaxMemSize);//конструктор 
~TStack(); //деструктор 
int IsEmpty ( void ) const ; // контроль пустоты 
int IsFull ( void ) const ; // контроль переполнения 
void InsElem ( const TELEM &Val );// добавить значение 
virtual TELEM DelElem ( void ) ; // извлечь значение 
};