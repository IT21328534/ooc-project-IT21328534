// IT number
//name 

class Driver {
private:
	int DriverID;
	float DriverHours;
public:
	Driver();
	Driver(int pDriverID, float pDriverHours);
	void ViewStatus();
	void checkTours();
	~Driver();
};
