#include "pch.h"
#include "StockPortfolio.h"

StockPortfolio::StockPortfolio()
{
}


void StockPortfolio::AddToList(Platform::String^ tickerName, int32 quantity, float32 price)
{
	Stock newStock;
	newStock.UpdateStockInfo(tickerName);
	newStock.SetPurchaseQuantity(quantity);
	newStock.SetPurchasePrice(price);
	list.insert(list.end(), newStock);
}

Stock StockPortfolio::SearchForName(Platform::String^ searchName)
{
	for (int i = 0; i < list.size(); i++)
	{
		if (searchName == list.at(i).GetName())
		{
			return list.at(i);
		}

		Stock NotFound;
		return NotFound;
	}
}

Stock StockPortfolio::OutputStock(int32 position)
{
	return list.at(position);
}