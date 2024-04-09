#include  "chat_class.h"

#include <iostream>
using namespace std;

// global variables
static int i0 = -1;//  Sender
static int n0 = 1; // Sender

static int i1 = -1;//  Messenger
static int n1 = 1;// Messenger

static int i2 = -1; // Recipient
static int n2 = 1; //  Recipient

//------------------------------------------------
stringMasive::stringMasive() {}
stringMasive::stringMasive(int length) :m_length(length) {}
stringMasive::~stringMasive()
{
    delete[]m_chat;
}

/*stringMasive::stringMasive(const stringMasive& other) : m_length(other.m_length) //
{
    m_chat = new string[m_length];
    for (int i = 0; i < m_length; ++i)
    {
        m_chat[i] = other.m_chat[i];
    }
} */

void stringMasive::resize(int newLength) //resizer
{
    string* chat = new string[newLength];
    for (int index = 0; index < m_length; ++index)
    {
        chat[index] = m_chat[index];
    }
    delete[]m_chat;
    m_chat = chat;
    m_length = newLength;
}

//--------------------------------------------------------
IntArray::IntArray() {}    // = default;
IntArray::IntArray(int length) : m_length10(length) {}
IntArray::~IntArray()
{
    delete[] m_data;
}

void IntArray::resize(int newLength)
{
    int* data = new int[newLength];
    for (int index = 0; index < m_length10; ++index)
    {
        data[index] = m_data[index];
    }
    delete[] m_data;
    m_data = data;
    m_length10 = newLength;
}
//-------------------------------------
Chat::Chat()
{
    Sender = new IntArray(n0);
    Messenger = new stringMasive(n1);
    Recipient = new IntArray(n2);
}

Chat::~Chat()
{
    delete Sender;
    delete Messenger;
    delete Recipient;
}
//---------------------------------------------------------

