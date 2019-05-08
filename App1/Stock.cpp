#include "pch.h"
#include <Stock.h>

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

void Stock::UpdateStockInfo(Platform::String ^ tickerName)
{
	throw ref new Platform::NotImplementedException();
}

void Stock::SetPurchaseQuantity(int32 quantity)
{
	throw ref new Platform::NotImplementedException();
}

void Stock::SetPurchasePrice(float32 price)
{
	throw ref new Platform::NotImplementedException();
}

Platform::String ^ Stock::GetName()
{
	throw ref new Platform::NotImplementedException();
	// TODO: insert return statement here
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

Platform::String ^ Stock::GetLastUpdated()
{
	throw ref new Platform::NotImplementedException();
	// TODO: insert return statement here
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
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintOpenPrice()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintHighPrice()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintLowPrice()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintClosePrice()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintVolume()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintLastUpdated()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintPurchaseQuantity()
{
	throw ref new Platform::NotImplementedException();
}

void Stock::PrintPurchasePrice()
{
	throw ref new Platform::NotImplementedException();
}
