/*
Maksym Fursin
June 2, 2026
lab 6: Leveraging AI as a C++ Coding Assistant
*/

#include <iostream>
#include <string>

int main() {
    std::string new_word;

    // Print header and ask for a word
    std::cout << "------------------------------- EXERCISE -------------------------------" << std::endl;
    std::cout << "Type a word: ";
    std::cin >> new_word;

    // 1. Print the 4th character (indices start at 0, so 4th character is at index 3)
    //    Check that the word is long enough (though the problem guarantees it)
    if (new_word.length() >= 4) {
        std::cout << "The 4th character is: " << new_word[3] << std::endl;
    } else {
        std::cout << "The 4th character does not exist (word too short)." << std::endl;
    }

    // 2. Print the length of the word
    std::cout << "The length of the word is: " << new_word.length() << " characters." << std::endl;

    // 3. Replace three characters starting from the second character (index 1) with "-- $ --"
    std::string after_replace = new_word;
    // Check that the word has at least 4 characters (1 + 3), otherwise replace only what's available
    if (after_replace.length() >= 4) {
        after_replace.replace(1, 3, "-- $ --");
    } else if (after_replace.length() > 1) {
        // If the word is shorter than 4 characters, replace whatever is there (should not happen per problem statement)
        after_replace.replace(1, after_replace.length() - 1, "-- $ --");
    }
    std::cout << "After replacement: " << after_replace << std::endl;

    // 4. Remove two characters from the end of the resulting string
    std::string after_remove = after_replace;
    if (after_remove.length() >= 2) {
        after_remove.erase(after_remove.length() - 2, 2);
    } else {
        after_remove.clear(); // if the string is shorter than 2 characters, clear it
    }
    std::cout << "After removing two characters from the end: " << after_remove << std::endl;

    // Final separator line (as shown in the example)
    std::cout << "---------------------------------------------------------------------------" << std::endl;

    return 0;
}

// --- AI Assistant Used: DeepSeek ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// -    Yes, the program fully meets the requirements and matches the example provided.

// Q2) Was it readable and properly commented? explain your answer
// -    Overall, yes, because the comments are helpful, but this code is a bit more confusing than mine, becase he used std:: syntax

// Q3) Were you able to explain each line of code? explain your answer
// -    Personally, it wasn't too difficult for me, since the task itself is actually quite simple, and I'm already familiar with if-else statements from other programming languages

// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar
// -    No, the AI decided to get creative here and came up with some additional conditions for the task, and was forced to use an if-else statement that we haven't covered yet

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
