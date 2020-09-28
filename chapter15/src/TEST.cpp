#include "../header/ex15_3_Quote.h"
#include "../header/ex15_5_Bulk_quote.h"

using std::cout;

int main()
{
	cout << "\n===== ex03 =====" << endl;

	EX03::Quote quote_03("0-201-78345-X", 23.8);
	EX03::print_total(cout, quote_03, 3);

	cout << "\n===== ex05 =====" << endl;

	EX05::Bulk_quote bulk_quote("0-201-78345-X", 23.8, 3, 0.5);
	EX03::print_total(cout, bulk_quote, 4);
}