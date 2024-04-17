/* #pragma once

#include <iostream>
using namespace std;


//------------------------
class stringMasive // 
{
public: // 
    int m_length;
    string* m_chat = new string[m_length]; // 

    stringMasive(); // 
    stringMasive(int length);
    ~stringMasive();

    //stringMasive(const stringMasive& other); // : m_length(other.m_length) //

    void resize(int newLength); // 
};
//---------------------------------------
class IntArray // 
{
public:
    //private:
    int m_length10;
    int* m_data = new int[m_length10];//  
    IntArray(); //
    IntArray(int length);
    ~IntArray();
    void resize(int newLength);// 
};

//-----------------------------------------
class Chat
    // 
{
public:

    stringMasive* Messenger; // 
    IntArray* Sender; //
    IntArray* Recipient; // 
    Chat(); // 
    ~Chat();
};
//---------------------------------------------------------
*/