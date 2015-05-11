#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string line = "test one two three.";
    int size = 0;
    int i = 0;
    
    // The find() member function takes a string and a position and begins
    // searching the string from the given position for the first occurence of the given string
    // Find() returns the position of the first occurence of the string, or a special value, 
    // string::npos, that indicates that it did not find the substring. 
    for(i = line.find(" ",0); i != string::npos; i = line.find(" ", i))
    {
    	size++;
    	i++;
    }

    i = 0;
    string arr[size + 1]; // if there are 3 spaces, then there are potentially 4 words
    
    // stringstream is a stream class to operate on strings. Objects of this class use a string buffer that contains a 
    // sequence of characters. This sequence of characters can be accessed directly as a string object, using member str.
    // Characters can be inserted and/or extracted from the stream using any operation allowed on both input and output streams.
    // stringstream ssin(line);
    
    while (ssin.good()) // Returns true if none of the stream's error state flags (eofbit, failbit and badbit) is set.
    {
        ssin >> arr[i];
        i++;
    }
    
    i = 0;
    
    for(; i <= size; i++)
    {
   		cout << arr[i] << endl;
    }

}
