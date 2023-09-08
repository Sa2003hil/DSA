//  Data insertion in an unordered_map is done using a hash function. The hash function generates a unique hash value for the key in the key-value pair, and this key-value pair is inserted in the unordered_map at the index same as the hash value.It's similar to the more commonly known map, but it's implemented using a hash table rather than a balanced binary search tree.

// Find the frequency of each word in the given string usign unordered_map

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputString = "This is a sample string. It contains some words, and we want to count them.";

    // Create an unordered_map to store word counts
    unordered_map<string, int> wordCountMap;

    string word = "";
    for (char c : inputString)
    {
        if (isalnum(c))
        { // Check if the character is alphanumeric
            word += c;
        }
        else if (!word.empty())
        {
            // Increment the count for the current word in the map
            wordCountMap[word]++;
            word = ""; // Reset the word
        }
    }

    // Handle the last word if the string doesn't end with a non-alphanumeric character
    if (!word.empty())
    {
        wordCountMap[word]++;
    }

    // Print the word counts
    for (const auto &pair : wordCountMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Total number of words in the string
    int totalWords = 0;
    for (const auto &pair : wordCountMap)
    {
        totalWords += pair.second;
    }

    cout << "Total words in the string: " << totalWords << endl;

    return 0;


    unordered_map<int,string>countfreq;

    string word = "";
    for(char it : inputString){
        if(isalnum(it)){
            
        }
    }
}
