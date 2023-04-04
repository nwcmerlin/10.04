#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Class for file handling
class FileHandler {
public:
    // Constructor
    FileHandler() {}

    // Method for reading a file
  string readFile(string filename) {
        string contents;
        ifstream file(filename);
        if (file) {
            string line;
            while (getline(file, line)) {
                contents += line + "\n";
            }
            file.close();
        }
        return contents;
    }

    // Method for writing to a file
    void writeFile(string filename, string contents) {
        ofstream file(filename);
        if (file) {
            file << contents;
            file.close();
        }
    }

    // Method for deleting a file
    void deleteFile(string filename) {
        remove(filename.c_str());
    }
};

// Class for processing data from files
class DataProcessor {
public:
    // Constructor
    DataProcessor() {}

    // Method for processing data from a file
    void processData(string data) {
        // Logic for processing data goes here
    }
};

int main() {
    FileHandler fileHandler;
    DataProcessor dataProcessor;

    string contents = fileHandler.readFile("input.txt");
    dataProcessor.processData(contents);
    fileHandler.writeFile("output.txt", contents);
    fileHandler.deleteFile("input.txt");

    return 0;
}