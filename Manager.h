// IT number
//name 

class Manager {
private:
	int MgrID;
	char MgrName[30];
	char MgrEmail[30];
	int MgrNumber;
	char MgrUsername[20];
	char MgrPassword[20];
public:
	Manager();
	Manager(int pMgrID, const char pMgrName[], const char pMgrEmail[], int pMgrNumber, const char pMgrUsername[], const char pMgrPassword[]);
	void login(const char L_MgrUsername[], const char L_MgrPassword[]);
	char confirmBooking();
	void Manage();
	char getTours();
	~Manager();
};
