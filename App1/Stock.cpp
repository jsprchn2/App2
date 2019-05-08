#include "pch.h"
#include "Stock.h"

using namespace std;

Stock::Stock()
{
	name = "None";
	openPrice = 0;
	highPrice = 0;
	lowPrice = 0;
	closePrice = 0;
	volume = 0;
	lastUpdated = "Never";
}

void Stock::UpdateStockInfo(Platform::String^ tickerName)
{
	//throw ref new Platform::NotImplementedException();
	Platform::String^ name = tickerName;
	Platform::String^ fileName;
	std::string temp;
	std::string value;
	fileName = "daily_" + tickerName + ".csv";

	Platform::String^ localFolder = Windows::Storage::ApplicationData::Current->LocalFolder->Path;
	
	std::wstring folderNameW(localFolder->Begin());
	std::string folderNameA(folderNameW.begin(), folderNameW.end());
	const char* charStr = folderNameA.c_str();
	char file[512];

	sprintf(file, "%s\\temp.txt", charStr);
	
	char fileData[100];
	ifstream in(file);
	if (in)
	{
		in >> fileData;
		std::getline(in, temp);
		value = lastUpdated->ToString;
		std::getline(in, value , ',');
		std::getline(in, temp, ',');
		openPrice = stof(temp);
		std::getline(in, temp, ',');
		highPrice = stof(temp);
		std::getline(in, temp, ',');
		lowPrice = stof(temp);
		std::getline(in, temp, ',');
		closePrice = stof(temp);
		std::getline(in, temp, ',');
		volume = stof(temp);

		in.close();
	}
}

void Stock::SetPurchaseQuantity(int32 quantity)
{
	//throw ref new Platform::NotImplementedException();
	purchaseQuantity = quantity;
}

void Stock::SetPurchasePrice(float32 price)
{
	//throw ref new Platform::NotImplementedException();
	purchasePrice = price;
}

Platform::String^ Stock::GetName()
{
	//throw ref new Platform::NotImplementedException();
	// TODO: insert return statement here
	return name;
}

float32 Stock::GetOpenPrice()
{
	return openPrice;
}

float32 Stock::GetHighPrice()
{
	return highPrice;
}

float32 Stock::GetLowPrice()
{
	return lowPrice;
}

float32 Stock::GetClosePrice()
{
	return closePrice;
}

float64 Stock::GetVolume()
{
	return volume;
}

Platform::String^ Stock::GetLastUpdated()
{
	//throw ref new Platform::NotImplementedException();
	// TODO: insert return statement here
	return lastUpdated;
}

int32 Stock::GetPurchaseQuantity()
{
	return purchaseQuantity;
}

float32 Stock::GetPurchasePrice()
{
	return purchasePrice;
}

void Stock::PrintName()
{
	//throw ref new Platform::NotImplementedException();
	std::cout << name->ToString;
	
}

void Stock::PrintOpenPrice()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << openPrice;
}

void Stock::PrintHighPrice()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << highPrice;
}

void Stock::PrintLowPrice()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << lowPrice;
}

void Stock::PrintClosePrice()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << closePrice;
}

void Stock::PrintVolume()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << volume;
}

void Stock::PrintLastUpdated()
{
	//throw ref new Platform::NotImplementedException();
	std::cout << lastUpdated->ToString;
}

void Stock::PrintPurchaseQuantity()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << purchaseQuantity;
}

void Stock::PrintPurchasePrice()
{
	//throw ref new Platform::NotImplementedException();
	std::wcout << purchasePrice;
}

//public interface IPrintable {
//	void Print();
//};