#include "SongNode.h"

// TODO: Write PrintPlaylist() function
void PrintPlaylist(SongNode* head){
   SongNode* curr = head->GetNext();
   while(curr != nullptr){
      curr->PrintSongInfo();
		curr = curr->GetNext();
		if(curr == nullptr)
		   break;
		cout << endl;
   }
}

int main() {
	SongNode* headNode;
	SongNode* currNode;
	SongNode* lastNode;

	string songTitle;
	string songLength;
	string songArtist;

	// Front of nodes list                                                                         
	headNode = new SongNode();
	lastNode = headNode;

	// Read user input until -1  entered
	getline(cin, songTitle);
	while (songTitle != "-1") {
		getline(cin, songLength);
		getline(cin, songArtist);

		currNode = new SongNode(songTitle, songLength, songArtist);
		lastNode->InsertAfter(currNode);
		lastNode = currNode;

		getline(cin, songTitle);
	}

	// Print linked list
	cout << "LIST OF SONGS" << endl;
	cout << "-------------" << endl;
	PrintPlaylist(headNode);
}

