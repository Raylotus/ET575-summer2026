/*
Maksym Fursin
June 2, 2026
lab 6: Leveraging AI as a C++ Coding Assistant
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string new_word;

    cout << "------------------------------- EXERCISE -------------------------------" << endl;
    cout << "Type a word: ";
    cin >> new_word;

    // 4th character (index 3)
    cout << "The 4th character is: " << new_word[3] << endl;

    // Length of the word
    cout << "The length of the word is: " << new_word.length()
         << " characters." << endl;

    // Replace 3 characters starting from the 2nd character (index 1)
    new_word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << new_word << endl;

    // Remove 2 characters from the end
    new_word.erase(new_word.length() - 2, 2);
    cout << "After removing two characters from the end: "
         << new_word << endl;

    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    return 0;
}

// --- AI Assistant Used: ChatGPT ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// -    Yes, the program fully meets the requirements and matches the example provided.

// Q2) Was it readable and properly commented? explain your answer
// -    He used a slightly different coding style, such as adding extra spaces, but the code is perfectly readable and the comments are clear as well

// Q3) Were you able to explain each line of code? explain your answer
// -    Come to think of it, the code he gave me is almost identical to the one I wrote myself

// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar
// -    Actually, he used everything we covered in class, except for .at(), he simply specified the index in the string using new_word[3]

// Q5) Terminal Output: (Paste the output of your program here)
/*
------------------------------- EXERCISE -------------------------------
Type a word: assignments
The 4th character is: i
The length of the word is: 11 characters.
After replacement: a-- $ --gnments
After removing two characters from the end: a-- $ --gnmen

---------------------------------------------------------------------------
*/
