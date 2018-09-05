#include <iostream>
#include "TStack.h"
using namespace std;
TStack :: TStack (int Size ) {// конструктор 
DataCount = 0; 
if (Size==0) 
{ 
	Size = MaxMemSize; pMem = NULL;
}
MemSize = Size; 
pMem = NULL;
pMem = new TELEM[MemSize];
Hi = -1;
 }
TStack :: ~TStack() { //деструктор						
	pMem = NULL;
	delete []pMem;
} 
int TStack :: GetNextIndex (int index) { // получить следующий индекс 
return ++index ; 
} 
int TStack :: IsEmpty ( void ) const { 
return (DataCount == 0);
} 
int TStack :: IsFull ( void ) const { 
return (DataCount == MemSize);
} 
void TStack::InsElem(const TELEM &Val) { // добавить значение 
Hi = GetNextIndex(Hi);
pMem[Hi] = Val; 
DataCount++; 
} 
TELEM TStack::DelElem(void) { // извлечь значение 
DataCount--; 
return pMem[Hi--]; 
}