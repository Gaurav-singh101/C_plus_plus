////////  File Handling - 

// File handling in C++ means storing data in a file and reading data from a file instead of using the keyboard and screen only.
// File handling in C++ allows a program to store data permanently in files and retrieve it when needed.

//     Programs run in RAM, meaning data exists only while the program is running, when a program ends, all data in RAM is lost 
//     automatically.
//     File handling allows storing data in secondary memory (like HDD or SSD), so it can be preserved permanently and can be saved 
//     and accessed even after the program terminates.
//     For file operations, C++ provides file stream classes in the <fstream> header such as ofstream, ifstream, fstream.



///////  Opening a file - 

// In C++, we open a file by creating a stream to it using the fstream class that represent the file stream i.e. stream for input and output to the file.

// // Syntax - 
// fstream str("filename.ext", mode);
// where,
// str: Name given to the stream
// mode: Represents the way in which we are going to interact with the file.


//////  @ File openning mode - 

// Mode	            Description

// ios::in	        File open for reading. If file does not exists, the open operation fails.
// ios::out	        File open for writing: the internal stream buffer supports output operations.
// ios::binary	    Operations are performed in binary mode rather than text.
// ios::ate	        The output position starts at the end of the file.
// ios::app	        All output operations happen at the end of the file, appending to its existing contents.
// ios::trunc	    Any contents that existed in the file before it is open are discarded.

// fstream filein("file.txt", ios::in);  // for reading only
// fstream filein("file.txt", ios::out);  // for writting only
// fstream filein("file.txt", ios::in | ios:: out);  // for both reading and writting 

////// Other file stream 

    // ifstream: Stands for input file stream. It is equivalent to open fstream in ios::in mode.
    // ifstream filein("file.txt");

    // ofstream: Stands for output file stream. It is equivalent to opening fstream in ios::out mode.
    // ofstream fileout("file.txt");



// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     fstream file("6_fileHandling.txt" , ios::out);

//     if (!file) {
//         cout << "File not opened!" << endl;
//         return 1;
//     }

//     file << "000000000000000000000000000";

//     file.close();   // ✅ IMPORTANT

//     return 0;
// }


//////////////  Read Only mode ////////

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     fstream file("6_fileHandling.txt", ios::in | ios::out | ios::app);

//     // Check if file opened successfully
//     if (!file) {
//         cout << "File not found or cannot be opened!" << endl;
//         return 1;
//     }

//     file<<endl<<"44444444  44444444444  44444444444" ;

//     // 🔑 Move read pointer to beginning
//     file.seekg(0);
//     string line;

//     // Read file line by line
//     while (getline(file, line)) {
//         cout << line << endl;
//     }

//     file.close(); 
//     return 0;
// }








/////////      Closing the File      ---
// Closing the file means closing the associated stream and free the resources that we being used. 
// It is important to close the file after you are done with it, especially in the long running programs 
// to avoid memory leaks, data loss, etc.

// In C++, the files are closed using the close() member function that is present in all file streams.


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // Open a file in read mode
//     ifstream file("6_fileHandling.txt");
//     string s;

//     // Read string from the file
//     while(getline(file, s)){
//         cout<<s<<endl ;
//     }

//     // Close the file
//     file.close();

//     return 0;
// }