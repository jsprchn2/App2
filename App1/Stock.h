#include <string>
#include <iostream>
#include <fstream>

ref class Stock sealed
{
public:
	ref class Stock();
	void UpdateStockInfo(Platform::String^ tickerName);
	void SetPurchaseQuantity(int32 quantity);
	void SetPurchasePrice(float32 price);
	Platform::String^ GetName();
	float32 GetOpenPrice();
	float32 GetHighPrice();
	float32 GetLowPrice();
	float32 GetClosePrice();
	float64 GetVolume();
	Platform::String^ GetLastUpdated();
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
	Platform::String^ name;
	float32 openPrice;
	float32 highPrice;
	float32 lowPrice;
	float32 closePrice;
	float64 volume;
	Platform::String^ lastUpdated;
	int32 purchaseQuantity;
	float32 purchasePrice;
};