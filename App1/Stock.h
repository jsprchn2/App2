#include <string>
#include <iostream>
#include <fstream>

ref class Stock sealed
{
public:
	ref class Stock();
	void UpdateStockInfo(std::string tickerName);
	void SetPurchaseQuantity(int32 quantity);
	void SetPurchasePrice(float32 price);
	std::string GetName();
	float32 GetOpenPrice();
	float32 GetHighPrice();
	float32 GetLowPrice();
	float32 GetClosePrice();
	float64 GetVolume();
	std::string GetLastUpdated();
	int32 GetPurchaseQuantity();
	float32 GetPurchasePrice();
	void PrintName();
	void PrintOpenPrice();
	void PrintHighPrice();
	void PrintLowPrice();
	void PrintClosePrice();
	void PrintVolume();
	void PrintLastUpdated();
	void PrintPurchaseQuantity();
	void PrintPurchasePrice();

private:
	std::string name;
	float32 openPrice;
	float32 highPrice;
	float32 lowPrice;
	float32 closePrice;
	float64 volume;
	std::string lastUpdated;
	int32 purchaseQuantity;
	float32 purchasePrice;
};