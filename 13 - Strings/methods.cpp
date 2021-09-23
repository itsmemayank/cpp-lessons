#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string first = "fam";
    string last = "ily";
    string full = "family";

    // Append
    cout << "Append : " << first.append(last) << endl;

    // Indexing
    cout << "Indexing : " << first[2] << endl;

    // Clear
    string disposable = "asdfghjklqwertyuiopzxcvbnm";
    disposable.clear();
    cout << "Clear : " << disposable << endl;

    // Compare
    if (last.compare(first) == 0)
        cout << "Compare : Strings are Equal" << endl;
    else
        cout << "Compare : Strings are Not Equal" << endl;

    // Empty
    if (disposable.empty())
        cout << "Empty : String is Empty" << endl;
    else
        cout << "Empty : String is Not Empty" << endl;

    // Erase
    string eraze = "nincompoop";
    eraze.erase(3, 3);
    cout << "Erase : " << eraze << endl;

    // Find
    cout << "Find : " << last.find("ly") << endl;

    // Insert
    string half = "Omresent";
    half.insert(2, "nip");
    cout << "Insert : " << half << endl;

    // Length
    cout << "Length : " << first.length() << endl;

    // Substring
    cout << "Substring : " << full.substr(1, 4) << endl;

    // String to Integer
    // string numbers = "786 ";
    // int s2i = stoi(numbers);
    // cout << "String to Integer : " << s2i + 2 << endl;

    // To String
    // int x = 144;
    // cout << "To String : " << to_string(x) << endl;

    // To Upper -> <algorithm> library
    string upper = "adfghjkl";
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "To Upper : " << upper << endl;

    // To Lower -> <algorithm> library
    string lower = "ADFGHJKL";
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << "To Upper : " << lower << endl;

    return 0;
}