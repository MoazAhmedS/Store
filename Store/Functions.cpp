#include "Functions.h"
#include <iostream>
#include <fstream>

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


String^ Load_Data() {
    String^ filePath = "C:\\Users\\Moaz\\Documents\\Visual Studio 2012\\Projects\\Store\\Debug\\connection.txt";
    try {
        // Create a StreamReader to read the file
        StreamReader^ reader = gcnew StreamReader(filePath);

        // Read the lines
        String^ line1 = reader->ReadLine();
        String^ line2 = reader->ReadLine();
        String^ line3 = reader->ReadLine();

        // Close the StreamReader
        reader->Close();

        // Process the lines
        String^ sqlServer = line1->Split('=')[1]->Trim();
        String^ id = line2->Split('=')[1]->Trim();
        String^ password = line3->Split('=')[1]->Trim();

        String^ connection= "Server="+sqlServer+";Database=store;User Id="+id+";Password="+password+";";
        
        return connection;
    }
    catch (Exception^ e) {
        // Handle any exceptions that may occur
        MessageBox::Show(L"Error: "+ e->Message);
    }

    return "";
}



String^ FormatNumberWithCommas(Double number) {
    String^ s = number.ToString("N2");
    Double n = s->Length - 3;
    Double end = (number >= 0) ? 0 : 1; // Support for negative numbers
    while (n > end) {
        s->Insert((int)n, ",");

        n -= 3;
    }
    return s;
}

