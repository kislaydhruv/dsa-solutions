#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    list<string> playlist = {"Song A", "Song B", "Song C", "Song D"};

    // Find the song we want to move to the top
    auto it = find(playlist.begin(), playlist.end(), "Song C");//find will return the pointer of the element if it is found otherwise it will return the pointer to the end of the list.

    if (it != playlist.end()) {
        // Splice moves elements instantly without reallocating memory.
        // Move 'it' from 'playlist' to the beginning of 'playlist'.
        playlist.splice(playlist.begin(), playlist, it);
    }

    // Output: Song C, Song A, Song B, Song D
    cout << "Up Next: ";
    //We can itterate over list but cannot do indexing because list is not a random access container.
    for (const auto& song : playlist) {
        cout << song << " | ";
    }
    cout << endl;

    return 0;
}