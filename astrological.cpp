  #include <iostream>
  #include <iomanip>
  #include <string.h> 
  using namespace std;
  

  // Prototypes //


  char Menu (char Choice);
  void GetMonth(char *Month);
  void MapSelectMonth (char *Month,int &Day);
  bool ProcessDate (char *Month, int &Day);
  int DayThirtyOne (char *Month,int &Day);
  int DayThirty (char *Month,int &Day);
  int February (char *Month,int &Day);
  int Extension1 (int &Day,int &Year);
  int GetYear (int &Year);
	void GetTodaysMonth(char *TMonth);
	void MapSelectTMonth (char *TMonth,int &TDay);
	bool ProcessTDate (char *TMonth, int&TDay);
	int TDayThirtyOne (char *TMonth,int &TDay);
	int TDayThirty (char *TMonth,int &TDay);
	int TFebruary (char *TMonth,int &TDay);
	int Extension2 (int &TDay,int &TYear);
	int GetTodaysYear (int &TYear);
	 void ProcessSign (char *Month,int &Day);
	 int PrintFortune (int Randomize);
	 void GetName (char *FirstName,char *LastName);
	 void PrintName (char *FirstName,char *LastName);
	 void PrintAge (int &TYear,int &Year,int &Age);
	 int PrintBirthDate (char *Month,int &Day);
	 int PrintTodaysDate (char *TMonth,int &TDay);
	 void ConsoleOutput(char *FirstName,char *LastName,char *Month,int &Day,
							  int &TYear,int &Year,int &Age,char *TMonth,int &TDay);
	 int EscSequence (char Quit);
	 void Terminate (int index);
	  void Aquarius ();
	  void Pisces ();      
	  void Aries ();
	  void Taurus ();
	  void Gemini ();
	  void Cancer ();
	  void Leo ();
	  void Virgo ();
	  void Libra ();
	  void Scorpio ();
	  void Sagittarius ();
	  void Capricorn ();


  
  //Local Declarations//
  
  char LastName [30];
  char FirstName [30];
  char TMonth [10];
  char Month[32] = " ";
  int Day = 22;
  int Year;
  int Age;
  int TYear;
  int TDay;
  char Choice;
  char Quit;
  int index;

	//Main//

	int main()
	{
	char choice;
	do
	{
	choice = Menu(Choice);

	switch (choice)
	{
	case 'E' : GetMonth(Month);
				  MapSelectMonth (Month,Day);
				  GetYear (Year);
				  GetName (FirstName,LastName);
				  GetTodaysMonth(TMonth);
				  MapSelectTMonth (TMonth,TDay);
				  GetTodaysYear(TYear);
				  ConsoleOutput (FirstName,LastName,Month,Day,
									  TYear,Year,Age,TMonth,TDay);
				  EscSequence (Quit);
				  break;

	default  : choice = 'C';
				  Terminate (index);
				  break;
		 }
	}
	while (choice != 'C');

	return(0);
	}



	void GetMonth(char *Month)
  {

	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*              Welcome to astrological magic                  *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t*               your horoscope for this month                 *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*      1) January                             7) July         *\n";
	 cout<<"\t*      2) February                            8) August       *\n";
	 cout<<"\t*      3) March                               9) September    *\n";
	 cout<<"\t*      4) April                              10) October      *\n";
	 cout<<"\t*      5) May                                11) November     *\n";
	 cout<<"\t*      6) June                               12) December     *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\t\t   When were you born?\n";
	 cout<<"\t\tenter the month you were born.ie: January\n\t\t";
	 cin>>Month;
	 }


	void MapSelectMonth (char *Month, int &Day)
	 {
	    const bool False = 0; 
		bool success = False;

		do
	  {
		success = ProcessDate (Month, Day);
		if (!success)
	  {
		cout<< "\t\tError: Month could not be found due to invalid input" << endl;
		cout<< "\t\t";
	  }
     else return; 
	  }
	  while (cin >> Month);

	  cout << "\t\tError: problem encountered reading from cin" << endl;
	  exit (-1);

	  }


	bool ProcessDate (char *Month, int &Day)
	{
	const bool True = 1; 
	const bool False = 0; 
	bool retVal = True;

	if (!strcmp (Month, "january") ||
	!strcmpi (Month, "march")       ||
	!strcmpi (Month, "may")         ||
	!strcmpi (Month, "july")        ||
	!strcmpi (Month, "august")      ||
	!strcmpi (Month, "october")     ||
	!strcmpi (Month, "december"))
	{
	DayThirtyOne (Month, Day);
	}
	else if(!strcmpi (Month, "february"))
	{
	February (Month, Day);
	}
	else if(!strcmpi (Month, "april") ||
	!strcmpi (Month, "june")          ||
	!strcmpi (Month, "september")     ||
	!strcmpi (Month, "november"))
	{
	DayThirty (Month, Day);
	}
	else {
	 retVal = False;
	}
	return retVal;
	}


	 int DayThirtyOne (char *Month,int &Day)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<setw(9)<<"*"<<setw(34)<<Month<<setw(29)<<                       "*\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*            1)    2)    3)    4)    5)    6)    7)           *\n";
	 cout<<"\t*            8)    9)   10)   11)   12)   13)   14)           *\n";
	 cout<<"\t*           15)   16)   17)   18)   19)   20)   21)           *\n";
	 cout<<"\t*           22)   23)   24)   25)   26)   27)   28)           *\n";
	 cout<<"\t*           29)   30)   31)                                   *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\tenter the day that you were born IE: 1 -> 31\n \t\t";
	 cin>>Day;

	 cin.clear();
	 cin.ignore();

	 while (Day<1 || Day >31)
	 {
	 cout<<"\t\tThat is not a valid day for\t" << Month<<"\n\t\t";
	 cin>>Day;
	 }
	 return(Day);
	 }


	 int DayThirty (char *Month,int &Day)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<setw(9)<<"*"<<setw(34)<<Month<<setw(29)<<                       "*\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*            1)    2)    3)    4)    5)    6)    7)           *\n";
	 cout<<"\t*            8)    9)   10)   11)   12)   13)   14)           *\n";
	 cout<<"\t*           15)   16)   17)   18)   19)   20)   21)           *\n";
	 cout<<"\t*           22)   23)   24)   25)   26)   27)   28)           *\n";
	 cout<<"\t*           29)   30)                                         *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\tenter the day that you were born IE: 1 -> 30\n \t\t";
	 cin>>Day;

    cin.clear();
	 cin.ignore();

	  while (Day<1 || Day >30)
	 {
	 cout<<"\t\tThat is not a valid day for\t" << Month<<"\n\t\t";
	 cin>>Day;
	 }
	 return(Day);
	 }

	 int February (char *Month,int &Day)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<setw(9)<<"*"<<setw(34)<<Month<<setw(29)<<                       "*\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*            1)    2)    3)    4)    5)    6)    7)           *\n";
	 cout<<"\t*            8)    9)   10)   11)   12)   13)   14)           *\n";
	 cout<<"\t*           15)   16)   17)   18)   19)   20)   21)           *\n";
	 cout<<"\t*           22)   23)   24)   25)   26)   27)   28)           *\n";
	 cout<<"\t*           29)                                               *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\tenter the day that you were born IE: 1 -> 29\n \t\t";
	 cin>>Day;

    cin.clear();
	 cin.ignore();

	 while (Day<1 || Day >29)
	 {
	 cout<<"\t\tThat is not a valid day for\t" << Month<<"\n\t\t";
	 cin>>Day;
	 }
	 return(Day);
	 }


		int Extension1 (int &Day,int &Year)
	  {
	 switch (Day)
	{
		  case 1:
			 cout<< "'st. "<<Year<<endl;
			 break;
		  case 2:
			 cout<< "'nd. "<<Year<<endl;
			 break;
		  case 3:
			 cout<< "'rd. "<<Year<<endl;
			 break;
		  case 21:
			 cout<< "'st. "<<Year<<endl;
			 break;
		  case 22:
			 cout<< "'nd. "<<Year<<endl;
			 break;
		  case 23:
			 cout<< "'rd. "<<Year<<endl;
			 break;
		  case 31:
			 cout<< "'st. "<<Year<<endl;
			 break;
		  default:
			 cout<< "'th. "<<Year<<endl;
			 break;
	}
	return (0);
	}

	int GetYear (int &Year)
  {

	cout<<"\t\tEnter the year you were born IE: 1999\n\t\t";
	cin>> Year;

	while ( Year<1920 )
		{
		cout<<"\n\t\tError:Year "<<Year<<"is not valid ..try again\n";
		cout<< "\t\t";
		cin>>Year;

      cin.clear();
		cin.ignore();
		}

	return (Year);
	} 



	void GetTodaysMonth(char *TMonth)
  {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*      1) January                             7) July         *\n";
	 cout<<"\t*      2) February                            8) August       *\n";
	 cout<<"\t*      3) March                               9) September    *\n";
	 cout<<"\t*      4) April                              10) October      *\n";
	 cout<<"\t*      5) May                                11) November     *\n";
	 cout<<"\t*      6) June                               12) December     *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\n\t\t        What is todays date?";
	 cout<<"\n\t\tEnter the month of todays date IE: january\n\t\t";
	 cin>>TMonth;
	 }
      
	void MapSelectTMonth (char *TMonth, int &TDay)
	 {
	    	
   	    const bool False = 0;
		bool success = False;

		do
	  {
		success = ProcessTDate (TMonth, TDay);
		if (!success)
	  {
		cout << "\t\tError: Month could not be found due to invalid input" << endl;
		cout<< "\t\t";
	  }
     else return; 
	  }
	  while (cin >> TMonth);

	  cout << "\t\tError: problem encountered reading from cin" << endl;
	  exit (-1);

	  }

	bool ProcessTDate (char *TMonth, int &TDay)
	{
	const bool True = 1; 
	const bool False = 0;
	bool retVal = True;

	if (!strcmpi (TMonth, "january") ||
	!strcmpi (TMonth, "march")       ||
	!strcmpi (TMonth, "may")         ||
	!strcmpi (TMonth, "july")        ||
	!strcmpi (TMonth, "august")      ||
	!strcmpi (TMonth, "october")     ||
	!strcmpi (TMonth, "december"))
	{
	TDayThirtyOne (TMonth, TDay);
	}
	else if(!strcmpi (TMonth, "february"))
	{
	TFebruary (TMonth, TDay);
	}
	else if(!strcmpi (TMonth, "april") ||
	!strcmpi (TMonth, "june")          ||
	!strcmpi (TMonth, "september")     ||
	!strcmpi (TMonth, "november"))
	{
	TDayThirty (TMonth, TDay);
	}
	else {
	 retVal = False;
	}
	return retVal;
	}
 
	 int TDayThirtyOne (char *TMonth,int &TDay)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<setw(9)<<"*"<<setw(34)<<TMonth<<setw(29)<<                      "*\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*            1)    2)    3)    4)    5)    6)    7)           *\n";
	 cout<<"\t*            8)    9)   10)   11)   12)   13)   14)           *\n";
	 cout<<"\t*           15)   16)   17)   18)   19)   20)   21)           *\n";
	 cout<<"\t*           22)   23)   24)   25)   26)   27)   28)           *\n";
	 cout<<"\t*           29)   30)   31)                                   *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\tenter the day of todays date IE: 1 -> 31\n \t\t";
	 cin>>TDay;

    cin.clear();
	 cin.ignore();

	  while (TDay<1 || TDay >31)
	 {
	 cout<<"\t\tThat is not a valid day for\t" << TMonth<<"\n\t\t";
	 cin>>TDay;
	 }
	 return(TDay);
	 }
 
	 int TDayThirty (char *TMonth,int &TDay)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<setw(9)<<"*"<<setw(34)<<TMonth<<setw(29)<<                      "*\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*            1)    2)    3)    4)    5)    6)    7)           *\n";
	 cout<<"\t*            8)    9)   10)   11)   12)   13)   14)           *\n";
	 cout<<"\t*           15)   16)   17)   18)   19)   20)   21)           *\n";
	 cout<<"\t*           22)   23)   24)   25)   26)   27)   28)           *\n";
	 cout<<"\t*           29)   30)                                         *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\tenter the day of todays date IE: 1 -> 30\n \t\t";
	 cin>>TDay;

    cin.clear();
	 cin.ignore();

	 while (TDay<1 || TDay >30)
	 {
	 cout<<"\t\tThat is not a valid day for\t" << TMonth<<"\n\t\t";
	 cin>>TDay;
	 }
	 return(TDay);
	 }
 
	 int TFebruary (char *TMonth,int &TDay)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*                                                             *\n";
	 cout<<setw(9)<<"*"<<setw(34)<<TMonth<<setw(29)<<                      "*\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t*            1)    2)    3)    4)    5)    6)    7)           *\n";
	 cout<<"\t*            8)    9)   10)   11)   12)   13)   14)           *\n";
	 cout<<"\t*           15)   16)   17)   18)   19)   20)   21)           *\n";
	 cout<<"\t*           22)   23)   24)   25)   26)   27)   28)           *\n";
	 cout<<"\t*           29)                                               *\n";
	 cout<<"\t*                                                             *\n";
	 cout<<"\t***************************************************************\n";
	 cout<<"\t\tenter the day of todays date IE: 1 -> 29\n \t\t";
	 cin>>TDay;

    cin.clear();
	 cin.ignore();

	 while (TDay<1 || TDay >29)
	 {
	 cout<<"\t\tThat is not a valid day for\t" << TMonth<<"\n\t\t";
	 cin>>TDay;
	 }
	 return(TDay);
	 }

  
	  int Extension2 (int &TDay,int &TYear)
	  {
	 switch (TDay)
	{
		  case 1:
			 cout<< "'st. "<<TYear<<endl;
			 break;
		  case 2:
			 cout<< "'nd. "<<TYear<<endl;
			 break;
		  case 3:
			 cout<< "'rd. "<<TYear<<endl;
			 break;
		  case 21:
			 cout<< "'st. "<<TYear<<endl;
			 break;
		  case 22:
			 cout<< "'nd. "<<TYear<<endl;
			 break;
		  case 23:
			 cout<< "'rd. "<<TYear<<endl;
			 break;
		  case 31:
			 cout<< "'st. "<<TYear<<endl;
			 break;
		  default:
			 cout<< "'th. "<<TYear<<endl;
			 break;
	}
	return (0);
	}

  int GetTodaysYear (int &TYear)
  {
	cout<<"\t\tenter four digits of current year IE: 1999\n\t\t";
	cin>> TYear;

		cin.clear();
		cin.ignore();

		while ( TYear<2003)
		{
		cout<<"\n\t\tError: This year"<<TYear<<"has either passed or is invalid\n";
		cout<< "\t\t";
		cin>>TYear;
		}
		return (TYear);
		}

 
		void GetName (char *FirstName,char *LastName)
	 {
	  cout<<"\t\tEnter your first name IE:john\n\t\t";
	  cin>>FirstName;
	  cout<<"\t\tEnter last name: \n\t\t";
	  cin>>LastName;
	 }
  

	 void PrintName (char *FirstName,char *LastName)
	 {
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	 cout<<"\t Your name is:\t"<<FirstName<<' '<<LastName<<"\n";
	 }
 
		 void PrintAge (int &TYear,int &Year,int &Age)
		 {
			  Age =  TYear -Year;
			  cout<<"\tyour age is "<< Age <<endl;
		 }

	int PrintBirthDate (char *Month,int &Day)
	{
	  cout<<"\tYour birthday is: "<<Month<<" "<<Day<< " ";
	  Extension1 (Day,Year);

	return 0;
	}

	int PrintTodaysDate (char *TMonth,int &TDay)
	{
	 cout<<"\tTodays Date is:\t"<<TMonth<<" "<<TDay<<" ";
	 Extension2 (TDay,TYear);

	return 0;
	}


	 void ConsoleOutput   (char *FirstName,char *LastName,char *Month,int &Day,
		                   int &TYear,int &Year,int &Age,char *TMonth,int &TDay)
  {
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	PrintName (FirstName,LastName);
	PrintBirthDate (Month,Day);
	PrintTodaysDate (TMonth,TDay);
	PrintAge(TYear,Year,Age);
	ProcessSign(Month,Day);
	srand (time (NULL));
	PrintFortune ((rand()%21)+1);
  }

		void ProcessSign(char *Month,int &Day)
	{
		cout << "\tYour Sign is : ";
		if (!strcmpi (Month, "january")&& Day>=21)
		Aquarius ();
		if (!strcmpi (Month, "february")&& Day<=19)
		Aquarius ();
		if (!strcmpi (Month, "february")&& Day>=20)
		Pisces ();
		if (!strcmpi (Month, "march")&& Day<=20)
		Pisces ();
		if (!strcmpi (Month, "march")&& Day>=21)
		Aries ();
		if (!strcmpi (Month, "april")&& Day<=20)
		Aries ();
		if (!strcmpi (Month, "april")&& Day>=21)
		Taurus ();
		if (!strcmpi (Month, "may")&& Day<=21)
		Taurus ();
		if (!strcmpi (Month, "may")&& Day>=22)
		Gemini ();
		if (!strcmpi (Month, "june")&& Day<=21)
		Gemini ();
		if (!strcmpi (Month, "june")&& Day>=22)
		Cancer ();
		if (!strcmpi (Month, "july")&& Day<=22)
		Cancer ();
		if (!strcmpi (Month, "july")&& Day>=23)
		Leo();
		if (!strcmpi (Month, "august")&& Day<=22)
		Leo();
		if (!strcmpi (Month, "august")&& Day>=23)
		Virgo ();
		if (!strcmpi (Month, "september")&& Day<=23)
		Virgo ();
		if (!strcmpi (Month, "september")&& Day>=24)
		Libra ();
		if (!strcmpi (Month, "october")&& Day<=23)
		Libra ();
		if (!strcmpi (Month, "october")&& Day>=24)
		Scorpio ();
		if (!strcmpi (Month, "november")&& Day<=22)
		Scorpio ();
		if (!strcmpi (Month, "november")&& Day>=23)
		Sagittarius ();
		if (!strcmpi (Month, "december")&& Day<=21)
		Sagittarius ();
		if (!strcmpi (Month, "december")&& Day>=22)
		Capricorn ();
		if (!strcmpi (Month, "january")&& Day<=20)
		Capricorn ();
		}


	void Aquarius ()
		{
	 cout<<"Aquarius- sign of the water bearer"<<endl;
	 cout<<"\t\t .--._.--._.- "<<endl;
	 cout<<"\t\t .--._.--._.- "<<endl;
	 cout<<"\t\t you were born in the winter\n\n" ;
	 cout<<"\tAquarius is also the fixed air sign. Fixed signs are\n";
	 cout<<"\tthe most persistent and unchanging.Air signs are the\n";
	 cout<<"\tmost mental.So Aquarius persists by way of ideas.\n\n";
	  }

	 void Pisces ()
	 {
	 cout<<"Pisces- sign of the fish"<<endl;
	 cout<<"\t\t`-.    .-'"<<endl;
	 cout<<"\t\t   :  :   "<<endl;
	 cout<<"\t\t --:--:-- "<<endl;
	 cout<<"\t\t   :  :   "<<endl;
	 cout<<"\t\t.-'    `-."<<endl;
	 cout<<"\t\t you were born in the winter\n\n";
	 cout<<"\tPisces is the mutable water sign. Water is the most\n";
	 cout<<"\temotional element,and mutable is the most adaptable\n";
	 cout<<"\tmodality.\n\n";
	 }

	  void Aries ()
	  {
		cout<<"Aries- sign of the ram"<<endl;
		cout<<"\t\t .-.   .-. "<<endl;
		cout<<"\t\t(_    /  _)"<<endl;
		cout<<"\t\t     |     "<<endl;
		cout<<"\t\t     |     "<<endl;
		cout<<"\t\t you were born in the spring\n\n";
		cout<<"\tAries is the cardinal fire sign. Cardinal means\n";
		cout<<"\toriginal or starting. cardinal signs are the most\n";
		cout<<"\tself-motivating of all.\n\n";
	 }

	 void Taurus ()
	 {
	 cout<<"Taurus- sign of the bull"<<endl;
	 cout<<"\t\t  .     . "<<endl;
	 cout<<"\t\t   .___.' "<<endl;
	 cout<<"\t\t . '   `. "<<endl;
	 cout<<"\t\t :       :"<<endl;
	 cout<<"\t\t :       :"<<endl;
	 cout<<"\t\t  `.___.' "<<endl;
	 cout<<"\t\t you were born in the spring\n\n";
	 cout<<"\tTaurus is the fixed earth sign. Fixed means not moving,\n";
	 cout<<"\tand all fixed signs are the most unchanging signs of\n";
	 cout<<"\tall. Earth signs are practical and grounded.\n\n";
	 }

		void Gemini ()
		{
	  cout<<"Gemini- sign of the twins"<<endl;
	  cout<<"\t\t._____. "<<endl;
	  cout<<"\t\t  | |   "<<endl;
	  cout<<"\t\t  | |   "<<endl;
	  cout<<"\t\t  |_|   "<<endl;
	  cout<<"\t\t'     ' "<<endl;
	  cout<<"\t\t you were born in the spring\n\n";
	  cout<<"\tGemini is the mutable air sign. Mutable signs are the\n";
	  cout<<"\tmost flexible.Air signs are the most mental signs.\n";
	  cout<<"\tGemini posesses a natural mental flexibility.\n\n";
	  }

	  void Cancer ()
	  {
	 cout<<"Cancer- sign of the crab"<<endl;
	 cout<<"\t\t   .--. "<<endl;
	 cout<<"\t\t  /   _`."<<endl;
	 cout<<"\t\t (_) ( )"<<endl;
	 cout<<"\t\t'.    / "<<endl;
	 cout<<"\t\t  `--'  "<<endl;
	 cout<<"\t\t you were born in the summer\n\n";
	 cout<<"\tCancer is the cardinal water sign. Cardinal signs are\n";
	 cout<<"\tthe most active. Water signs are the most emotional.\n\n";
	  }

	 void Leo ()
	 {
	 cout<<"Leo- sign of the lion"<<endl;
	 cout<<"\t\t  .--. "<<endl;
	 cout<<"\t\t (    )"<<endl;
	 cout<<"\t\t(_)  / "<<endl;
	 cout<<"\t\t    (_,"<<endl;
	 cout<<"\t\t you were born in the summer\n\n";
	 cout<<"\tLeo is the fixed fire sign. Fixed signs are the most\n";
	 cout<<"\tunchanging signs of all. Fire signs are the most\n";
	 cout<<"\tidealistic.\n\n";
		}

	 void Virgo ()
	 {
		cout<<"Virgo- sign of the virgin"<<endl;
		cout<<setw(13)<<" _ "            <<endl;
		cout<<setw(20)<<"' `:--.--."     <<endl;
		cout<<setw(22)<<"   |  |  |_ "   <<endl;
		cout<<setw(22)<<"   |  |  | )"   <<endl;
		cout<<setw(22)<<"   |  |  |/ "   <<endl;
		cout<<setw(22)<<"         (J "   <<endl;
		cout<<"\t\t you were born in the fall\n\n";
		cout<<"\tVirgo is the mutable earth sign. Mutable signs are\n";
		cout<<"\tthe most flexible and adaptable. Earth signs are the\n";
		cout<<"\tmost utilitarian and practical.\n\n";
	 }

		void Libra ()
		{
	 cout<<"Libra- sign of the scales"<<endl;
	 cout<<"\t\t       __      "<<endl;
	 cout<<"\t\t  ___.'  '.___ "<<endl;
	 cout<<"\t\t  ____________ "<<endl;
	 cout<<"\t\t you were born in the fall\n\n";
	 cout<<"\tLibra is the cardinal air sign. Cardinal signs \n";
	 cout<<"\tare the most direct. Air signs are the most\n";
	 cout<<"\tcommunicative.\n\n" ;
	 }

	  void Scorpio ()
	  {
	 cout<<"Scorpio- sign of the scorpion"<<endl;
	 cout<<setw(33)<<" _                "<<endl;
	 cout<<setw(31)<<"  ' `:--.--.      "<<endl;
	 cout<<setw(25)<<"	  |  |  |       "<<endl;
	 cout<<setw(25)<<"	  |  |  |       "<<endl;
	 cout<<setw(25)<<"	  |  |  |   .., "<<endl;
	 cout<<setw(32)<<"           `---': "<<endl;
	 cout<<"\t\t you were born in the fall\n\n";
	 cout<<"\tScorpio is the fixed water sign. Fixed signs\n";
	 cout<<"\tare the most immovable. Water signs are the\n";
	 cout<<"\tmost emotional.\n\n";
	  }

	  void Sagittarius ()
	  {
	 cout<<"Sagittarius- sign of the archer"<<endl;
	 cout<<setw(31)<<"      ... "<<endl;
	 cout<<setw(28)<<"	   .': "<<endl;
	 cout<<setw(31)<<"    .'    "<<endl;
	 cout<<setw(31)<<"`..'      "<<endl;
	 cout<<setw(31)<<".'`.      "<<endl;
	 cout<<"\t you were born in the winter\n\n";
	 cout<<"\tSagittarius is the mutable fire sign.Fire is the most\n";
	 cout<<"\tidealistic of the elements, and mutables are the most\n";
	 cout<<"\tadaptable and flexible.\n\n";
	 }

	void Capricorn ()
	  {
	 cout<<setw(15)<<"Capricorn- sign of the goat"<<endl;
	 cout<<setw(25)<<" _          "<<endl;
	 cout<<setw(25)<<"  /      /_)"<<endl;
	 cout<<setw(25)<<"   /    /`. "<<endl;
	 cout<<setw(25)<<"	 /  /   ."<<endl;
	 cout<<setw(25)<<"	  // __.'"<<endl;
	 cout<<"\tyou were born in the winter\n\n";
	 cout<<"\tCapricorn is the cardinal earth sign. Cardinal\n";
	 cout<<"\tsigns are the most ambitious and motivated.\n";
	 cout<<"\tEarth signs are the most practical.\n\n";
	 }


	int PrintFortune (int Randomize)
		{
		switch (Randomize)
		{


	case 1:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tDoing kind and helpful deeds.\n\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tArguing with subordinates.\n";
		cout<<"\tYou shall find yourself juggling to many tasks.\n";
		break;
	case 2:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tBeing friendly in business dealings.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tActing in a way that arouses resentment.\n";
		cout<<"\tYou shall notice improvements in your skill level.\n";
		break;
	case 3:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tFinding causes of past mistakes.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tEmphasising the bad side of things.\n";
		cout<<"\tYou shall pursue credit and prestige.\n";
		break;
	case 4:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tTaking a renewed interest in home affairs.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tForcing issues needlessly.\n";
		cout<<"\tYou shall understand the competitive nature of people.\n";
		break;
	case 5:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tEnhancing the value of your services.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tEngaging in too many social activitys.\n";
		cout<<"\tYou shall sever ties with many friends this month.\n";
		break;
	case 6:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tHaving a knowledge of current affairs.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tClinging to outmoded ideas and methods.\n";
		cout<<"\tYou shall become involved in humanitarian activitys.\n";
		break;
	case 7:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tPlanning future career achievements.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tMaking changes that unsettle security.\n";
		cout<<"\tYou shall take the initiative to excel in life.\n";
		break;
	case 8:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tHighlighting social events and hobbys.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tDoing things to quickly and extravagantly.\n";
		cout<<"\tYou shall become interested in intellectual pursuits.\n";
		break;
	case 9:
	 	cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tBeing aware of things around you.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tHandling responsibilitys carelessly.\n";
		cout<<"\tYou shall mercilessly crush your competitors.\n";
		break;
	case 10:
	 	cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tEstablishing a tranquil marital atmosphere.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tBecoming entangled in dubious alliances.\n";
		cout<<"\tYou shall have lots of recreational time.\n";
		break;
	case 11:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tBeing thrifty and resourceful.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tRevealing valuable ideas too soon.\n";
		cout<<"\tYou shall begin a long term affair.\n";
		break;
	case 12:
	 	cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tRemaining calm and optimistic.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tBecoming to rebellious,aggressive.\n";
		cout<<"\tYou shall find a new educational advancement.\n";
		break;
	case 13:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tBeing friendly in business dealings.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tActing in a way that arouses resentment.\n";
		cout<<"\tYou shall get season tickets for the N.Y.JETS.\n";
		break;
	case 14:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tLetting people know your objectives.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tBecoming involved in other peoples problems.\n";
		cout<<"\tYou shall inherit a lot of money from a relative.\n";
		break;
	case 15:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tFinding causes of past mistakes.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tEmphasising the bad side of things.\n";
		cout<<"\tYou shall win a brand new car.\n";
		break;
	case 16:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tTaking a renewed interest in home affairs.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tForcing issues needlessly.\n";
		cout<<"\tYou shall travel the world soon.\n";
		break;
	case 17:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tEnhancing the value of your services.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tEngaging in too many social activitys.\n";
		cout<<"\tYou shall not feel that well this month.\n";
		break;
	case 18:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tHaving a knowledge of current affairs.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tClinging to outmoded ideas and methods.\n";
		cout<<"\tYou shall overcome adversity.\n";
		break;
	case 19:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tPlanning future career achievements.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tMaking changes that unsettle security.\n";
		cout<<"\tYou shall get ahead in your projects.\n";
		break;
	case 20:
		cout<<"\tYou acheive the greatest success by-\n";
		cout<<"\tHighlighting social events and hobbys.\n";
		cout<<"\tYou should avoid-\n";
		cout<<"\tDoing things to quickly and extravagantly.\n";
		cout<<"\tYou shall recieve a large sum of money.\n";
		break;
		default:
		cout<<"\t Your Fate Remains Unknown.\n"<<endl;

	 }

		return 0;
		}
	 
		  int EscSequence (char Quit)
		  {

	 cout<<"\n\t----------------------------------";
	 cout<<"-----------------\n";


	do
	 {
	 cout<<endl;
	 cout<<"\tEnter Q to return to the main menu : ";
	 cin >> Quit;
	 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	 Quit = toupper  (Quit);
	 }
	while (strchr("Q", Quit) == NULL);

		cin.get();

	return (Quit);
  }
  
	void Terminate (int index)
  {
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	for (index=0; index <2; ++index)
	{
  cout<<"\n\n\n\t*********************************************************\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*              You have selected to cancel              *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*          The program has since become inactive        *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*          View your horoscope and fortune again        *\n";
  cout<<"\t*********************************************************\n";
		}

  }


	char Menu(char Choice)
  {

  cout<<"\n\n\n\t*********************************************************\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*       This program will evaluate your horoscope       *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*    return your fortune and project astrological info  *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*********************************************************\n";


  cout<<"   \n\t*********************************************************\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*             E - Evaluate astrological info            *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*                 C -    Cancel                         *\n";
  cout<<"\t*                                                       *\n";
  cout<<"\t*********************************************************\n";

	do
	 {
	 cout<<endl;
	 cout<<"\t\t      Enter your choice ( E,C ) : ";
	 cin >> Choice;
	 Choice = toupper  (Choice);
	}
	while (strchr("EC", Choice) == NULL);

		cin.get();

	return (Choice);
	}
