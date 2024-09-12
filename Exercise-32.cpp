#include <iostream>
using namespace std;


class Document {
public:
    virtual void print() const {
        cout << "Printing a generic document." << endl;
    }
};


class PDF : public Document {
public:
    void print() const override {
        cout << "Printing a PDF document." << endl;
    }
};


class WordDocument : public Document {
public:
    void print() const override {
        cout << "Printing a Word document." << endl;
    }
};


class TextDocument : public Document {
public:
    void print() const override {
        cout << "Printing a text document." << endl;
    }
};

int main() {
    PDF pdf;
    WordDocument wordDocument;
    TextDocument textDocument;

    pdf.print(); 
    wordDocument.print(); 
    textDocument.print(); 

    return 0;
}
