#pragma once
using namespace System;
using namespace std;


public ref class ListItem {
	public:
	property System::String^ Name;
	property System::String^ Catg;
	property int ID;
	property double Price;
	property double Thick;
	property double Quantity;
	property double Sellprice;
	property bool Type;

	ListItem(System::String^ name, String^ catg, double thick, int id, double price, double quantity, bool type,double sellprice) {
		Name = name;
		ID = id;
		Catg = catg;
		Thick = thick;
		Price = price;
		Quantity = quantity;
		Type = type;
		Sellprice = sellprice;
	}

	virtual System::String^ ToString() override {
		// Customize the string representation of the item in the ListBox
		if (Thick) {
			return System::String::Format(L"{3:F2}\t{4:F2}\t {2} {1} {0} ", Name, Catg, Thick, Price, Quantity);
		}
		else {
			return System::String::Format(L"{3:F2}\t{4:F2}\t {1} {0} ", Name, Catg, Thick, Price, Quantity);
		}
	}
};