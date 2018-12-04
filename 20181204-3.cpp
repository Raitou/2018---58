#include <iostream>

using namespace std;

int month, date, year;

int main(){
	cin >> month;
	cin >> date;
	cin >> year;
	
	int key_value;
	int base = 0;
	
	//print month
	switch(month){
		case 1:
			cout << "January ";
			key_value = 1;
			break;
		case 2:
			cout << "February ";
			key_value = 4;
			break;
		case 3:
			cout << "March ";
			key_value = 4;
			break;
		case 4:
			cout << "April ";
			break;
			key_value = 0;
		case 5:
			cout << "May ";
			key_value = 2;
			break;
		case 6:
			cout << "June ";
			key_value = 5;
			break;
		case 7:
			cout << "July ";
			key_value = 0;
			break;
		case 8:
			cout << "August ";
			key_value = 3;
			break;
		case 9:
			cout << "September ";
			key_value = 6;
			break;
		case 10:
			cout << "October ";
			key_value = 1;
			break;
		case 11:
			cout << "November ";
			key_value = 4;
			break;
		case 12:
			cout << "December ";
			key_value = 6;
			break;
		default:
			cout << "Unknown ";
			break;
	}
	
	//print day
	cout << date << ", ";
	
	//print year
	cout << year << " ";

	//checks if leap year
	int leap_year;
	if(year%4){
		leap_year = 0;
	} else {
		leap_year = 1;
	}
	
	//get day
	int key_month;
	int key_decade = (year%100);
	int key_year = key_decade/4;
	int key_day = key_year+date;
	if(leap_year == 1 && (month == 1 || month == 2)){
		
	//get century
	while(true){
		if(year >= 2100){
			year-=400;
			//cout << year;
		} else if(year < 1700) {
			year+=400;
			//cout << year;
		} else {
			break;
		}
	}
	
	//get century_code 4, 2, 0, 6
	int century = year/100;
	int century_code;
	switch(century){
		case 17:
			century_code = 4;
			break;
		case 18:
			century_code = 2;
			break;
		case 19:
			century_code = 0;
			break;
		case 20:
			century_code = 6;
			break;
		default:
			century_code = -1;
			break;
	}
	
	//get day
	int day = ((key_month + century_code)+key_decade)%7;
	cout << "is ";
	switch(day){
		case 0:
			cout << "Saturday";
			break;
		case 1:
			cout << "Sunday";
			break;
		case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tuesday";
			break;
		case 4:
			cout << "Wednesday";
			break;
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
			break;
		default:
			cout << "Unknown";
			break;
	}
	
	cout << " and that is ";
	
	//get how many days was that, we can do this by switch
	int days_past;
	switch(month-1){
		case 11:
			days_past+=30;
		case 10:
			days_past+=31;
		case 9:
			days_past+=30;
		case 8:
			days_past+=31;
		case 7:
			days_past+=31;
		case 6:
			days_past+=30;
		case 5:
			days_past+=31;
		case 4:
			days_past+=30;
		case 3:
			days_past+=31;
		case 2:
			if(leap_year == 1){
				days_past+=29;
			} else {
				days_past+=28;
			}
			
		case 1:
			days_past+=31;
		default:
			cout << days_past+date << " day of the year.";
		break;
	}
	
}
