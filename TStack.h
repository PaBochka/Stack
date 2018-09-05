#include<iostream>
using namespace std;
const int MaxMemSize = 255; // ������������ ������ ������ ��� ����� 
typedef double TELEM; // ��� �������� �� 
typedef TELEM *PTElem; // ��� ��������� �� �� 
class TStack 
{ protected: // ���� 
PTElem pMem; // ��������� �� ������ ��������� 
int MemSize; // ������ ������ ��� �� 
int DataCount; // ���������� ��������� � �� 
int Hi; // ������ ������� ����� 
virtual int GetNextIndex (int index); // �������� ��������� ������ 
public: 
TStack (int Size=MaxMemSize);//����������� 
~TStack(); //���������� 
int IsEmpty ( void ) const ; // �������� ������� 
int IsFull ( void ) const ; // �������� ������������ 
void InsElem ( const TELEM &Val );// �������� �������� 
virtual TELEM DelElem ( void ) ; // ������� �������� 
};