#include <iostream>
#include <string>
using namespace std;

int count_letters(string str) {
    int count = 0;
    for (char c : str) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            count++;
        }
    }
    cout << "Number of letters: " << count << endl;
    return count;
}
 
int count_words(string str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            inWord = false;
        }
        else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    cout << "Number of words: " << count << endl;
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int num_letters = count_letters(input);
    int num_words = count_words(input);

    return 0;
}
