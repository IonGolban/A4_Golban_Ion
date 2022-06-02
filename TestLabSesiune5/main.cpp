#include "Advertisment.h"
#include "Agency.h"
#include "HouseAdvertisment.h"
#include "ApartamentAdvertisment.h"
int main() {
	Agency agency("RealEstate");
	HouseAdvertisment* h1 = new HouseAdvertisment(200, 100000, 3);
	HouseAdvertisment* h2 = new HouseAdvertisment(150, 85000, 2);
	ApartamentAdvertisment* a1 = new ApartamentAdvertisment(60, 50000, 7);
	ApartamentAdvertisment* a2 = new ApartamentAdvertisment(80, 70000, 3);
	ApartamentAdvertisment* a3 = new ApartamentAdvertisment(45, 30000, 5);
	agency.AddAdvertisment(h1);
	agency.AddAdvertisment(h2);
	agency.AddAdvertisment(a1);
	agency.AddAdvertisment(a2);
	agency.AddAdvertisment(a3);
	agency.PrintOffers(100, 1000);
	agency.PrintOffers(50, 99000);
	return 0;
}
