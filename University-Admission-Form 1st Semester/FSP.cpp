#include <iostream>
#include<string>
#include<conio.h>
using namespace std;
void Student_Degree();
void Student_personal_detail();
void Qualification();
void designOUTPUT();
void designchallan();
void paymentinfo();
int LGU_roll_no[9]={1,2,3,4,5,6,7,8,9};
char press;
string Degree[5] = {"BSCS", "BSIT", "BSDS", "MSDS"}, check_Degree;
double FEE[4]={119260.000,125650.000,130345.000,145670.000},fee_check;
double Tutition_Fee[4]={95400.0000,101790.0000,106485.0000,121810.0000},Tutition_Fee_check;
string name, father_name, Guardian_Relationship, Nationality, job, Address,Permanent_Address, religion, blood_group, E_mail, Matric_Board, HSSC_Board, Private_Regular_study;
int i=0, form_no,Payment_Method, Select_Degree, Brith_date, Brith_month, Brith_year, Matric_Passed_Year, Matric_Roll_No, HSSC_Passed_Year, HSSC_Roll_No;
float Percentage, Percentage1, Matric_Marks_Obtained, Matric_Total_Marks, HSSC_Marks_Obtained, HSSC_Total_Marks;
long long int Student_cnic, Father_cnic, Dige_check, cnic_Dige_check, Father_Mobile_number, Student_Mobile_number,Emergency_number,Card_Number,Card_Expiry_Date,Cvv_Code,Payment_TID_Number;
string Card_Holder_Name,Send_Name;
int main()
{
	
    
    do
    {
    	
	system("CLS");	
    	//------------------------Student Degree Select opint---------------------------------
    
    Student_Degree();
        //------------------------Student personal detail opint---------------------------------
    
     Student_personal_detail();

         // Qualification
         Qualification();
        
         system("CLS");

         designOUTPUT();
         cout<<endl;
         cout<<endl;
         designchallan();
         cout<<endl;
         cout<<endl;
         paymentinfo();
         cout<<endl;
         cout<<endl;
		
	//	cout<<"fhhlkshdhscklsdhklchsd :"<<LGU_roll_no[i];
        cout<<"Do YOU Again Registration Other Persons Admission :Y/N\t:";
        cin>>press;
        i++;
    
	}while((press == 'y' || press == 'Y' )&& i<9);

    return 0;
}
void Student_Degree()
{
    do
    {
        cout << "Select Degree" << endl;
        cout << endl;
        cout << "BSCS Press 0" << endl;
        cout << "BSIT Press 1" << endl;
        cout << "BSSE Press 2" << endl;
        cout << "BSDS Press 3" << endl;
        cin >> Select_Degree;
        switch (Select_Degree)
        {
        case 0:
            check_Degree = Degree[0];
            fee_check = FEE[0];
            Tutition_Fee_check = Tutition_Fee[0];
            
            break;
        case 1:
            check_Degree = Degree[1];
            fee_check = FEE[1];
            Tutition_Fee_check = Tutition_Fee[1];
            break;
        case 2:
            check_Degree = Degree[2];
            fee_check = FEE[2];
            Tutition_Fee_check = Tutition_Fee[2];
            break;
        case 3:
            check_Degree = Degree[3];
            fee_check = FEE[3];
            Tutition_Fee_check = Tutition_Fee[3];
            break;

        default:
            cout << "Sorry You Enter Worng Number.";
            break;
        }
    } while (Select_Degree >! 5);
}
void Student_personal_detail()
{
    cout << "Enter Student Full Name :";
        cin >> name;
        
        do //do while condition use for cnic
        {
            cnic_Dige_check = 0;
            cout << "Enter Student National Identity Card No :";
            cin >> Student_cnic;
            Dige_check = Student_cnic;
            while (Dige_check > 0) // condition use for cnic check 13 digits complete
            {
                Dige_check = Dige_check / 10;
                cnic_Dige_check++;
            }
            if (cnic_Dige_check == 13) // after complete 13digits cnic run if condition
            {
                cout << "Enter Date of Birth (This Format dd/mm/yyyy):" << endl; // date of birth
                cin >> Brith_date;                                               // Enter Date
                cin >> Brith_month;                                              // Enter Month
                cin >> Brith_year;                                               // Enter Year
            }
            else // not complete 13 digits cnic
            {
                cout << "Please Enter CNIC 13 Digits Number." << endl;
            }
        } while (cnic_Dige_check != 13 || cnic_Dige_check > 13); // if not complete 13digits then agr run loop
        cout << "Enter Religion :";
        cin >> religion;
        cout << "Enter Nationalit :";
        cin >> Nationality;
        do //do while condition use for mobile number 
        {
            cnic_Dige_check = 0;
            cout << "Enter Student Mobile Number (Don't Use 0 on fist) :";
            cin >> Student_Mobile_number;
            Dige_check = Student_Mobile_number;
            while (Dige_check > 0) // condition use for Mobile Number check 11 digits complete
            {
                Dige_check = Dige_check / 10;
                cnic_Dige_check++;
            }
            if (cnic_Dige_check == 10) // after complete 11digits Mobile Number run if condition
            {
                //--------------//-------------------
            }
            else // not complete 10 digits Mobile Number
            {
                cout << "Please Enter 10 Digits Mobile Number. (Use This Format Like 3224937350)" << endl;
            }
        } while (cnic_Dige_check != 10 || cnic_Dige_check > 10); // if not complete 11digits then agr run loop
        cout << "Enter Father/Guardian Name :";
        cin >> father_name;
        cout << "Enter Relationship :";
        cin >> Guardian_Relationship;
        do //do while condition use for Father/Guardian cnic
        {
            cnic_Dige_check = 0;
            cout << "Enter CNIC of Father/Guardian :";
            cin >> Father_cnic;
            Dige_check = Father_cnic;
            while (Dige_check > 0) // condition use for cnic check 13 digits complete
            {
                Dige_check = Dige_check / 10;
                cnic_Dige_check++;
            }
            if (cnic_Dige_check == 13) // after complete 13digits cnic run if condition
            {
                cout << "Enter Father/Guardian JOB (Government/Private/Service) :";
                cin >> job;
            }
            else // not complete 13 digits cnic
            {
                cout << "Please Enter CNIC 13 Digits Number." << endl;
            }
        } while (cnic_Dige_check != 13 || cnic_Dige_check > 13); // if not complete 13digits then agr run loop
        cout << "Enter JOB Address :";
        cin >> Address;
        cout << "Enter Home Address :";
        cin >> Permanent_Address;
        do //do while condition use for mobile number
        {
            cnic_Dige_check = 0;
            cout << "Enter Mobile Number of Father/Guardian (Don't Use 0 on fist) :";
            cin >> Father_Mobile_number;
            Dige_check = Father_Mobile_number;
            while (Dige_check > 0) // condition use for Mobile Number check 11 digits complete
            {
                Dige_check = Dige_check / 10;
                cnic_Dige_check++;
            }
            if (cnic_Dige_check == 10) // after complete 11digits Mobile Number run if condition
            {
                //--------------------------------------------------------------
            }
            else // not complete 11 digits Mobile Number
            {
                cout << "Please Enter 10 Digits Mobile Number. ((Use This Format Like 3224937350))" << endl;
            }
        } while (cnic_Dige_check != 10 || cnic_Dige_check > 10);
        do //do while condition use for mobile number
        {
            cnic_Dige_check = 0;
            cout << "Enter Emergency Mobile Number  (Don't Use 0 on fist) :";
            cin >> Emergency_number;
            Dige_check = Emergency_number;
            while (Dige_check > 0) // condition use for Mobile Number check 11 digits complete
            {
                Dige_check = Dige_check / 10;
                cnic_Dige_check++;
            }
            if (cnic_Dige_check == 10) // after complete 11digits Mobile Number run if condition
            {
                //--------------------------------------------------------------
            }
            else // not complete 11 digits Mobile Number
            {
                cout << "Please Enter 10 Digits Mobile Number. ((Use This Format Like 3224937350))" << endl;
            }
        } while (cnic_Dige_check != 10 || cnic_Dige_check > 10); // if not complete 11digits then agr run loop
        cout << "Enter E-mail(if any) :";
        cin >> E_mail;
        cout << "Enter Blood Group :";
        cin >> blood_group;
}
void Qualification()
{
    // Matric
        cout << "Enter Matric Passed Year :"; 
        cin >> Matric_Passed_Year;
        cout << "Enter Matric Roll No :";
        cin >> Matric_Roll_No;
        cout << "Enter Regular / Private :";
        cin >> Private_Regular_study;

        cout << "Subjects Studied :Science" << endl;
        cout << "Board/University :";
        cin >> Matric_Board;
        cout << "Marks Obtained :";
        cin >> Matric_Marks_Obtained;
        cout << "Total Marks :";
        cin >> Matric_Total_Marks;
        Percentage = (Matric_Marks_Obtained / Matric_Total_Marks) * 100;

        // HSSC (intermediate)
        cout << "Enter HSSC (intermediate) Passed Year :";
        cin >> HSSC_Passed_Year;
        cout << "Enter HSSC (intermediate) Roll No :";
        cin >> HSSC_Roll_No;
        cout << "Enter Regular / Private :";
        cin >> Private_Regular_study;
        cout << "Subjects Studied :Science" << endl;
        cout << "Board/University :";
        cin >> HSSC_Board;
        cout << "Marks Obtained :";
        cin >> HSSC_Marks_Obtained;
        cout << "Total Marks :";
        cin >> HSSC_Total_Marks;
        Percentage1 = (HSSC_Marks_Obtained / HSSC_Total_Marks) * 100;
}
void designOUTPUT()
{
    cout << "\t\t\t\t\t\t\tADMISSION FORM" << endl;
    cout << "\t\t\t\t\t\tLAHORE GARRISON UNIVERSITY (LGU)" << endl;
    cout << "\t\t\t\t\t\t\t\t\t--------" << endl;
    cout << "\t\t\t\t\t\tProgramme applying for: "
         << "| " << check_Degree << " |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t--------" << endl;

    cout << "-----------------------------------------------------STUDENT INFORMATION----------------------------------------------------" << endl;
    cout << " Applicant's Name                          :" << name << endl;
    cout << " National Identity Card No.(If applicable) :" << Student_cnic << endl;

    cout << " Date of Birth         :" << Brith_date << " / " << Brith_month << " / " << Brith_year << "\t\tNationality :" << Nationality << "\t\t\tReligion :" << religion << endl;
    cout << " Student Mobile Number                     :0" << Student_Mobile_number << endl;

    cout << "-----------------------------------------------------FATHER INFORMATION-----------------------------------------------------" << endl;

    cout << " Name of Father/Guardian                   :" << father_name << endl;
    cout << " Relationship                              :" << Guardian_Relationship << endl;
    cout << " CNIC No. of Father/Guardian               :" << Father_cnic << endl;
    cout << " JOB                                       :" << job << endl;
    cout << " JOB Address                               :" << Address << endl;
    cout << " Mobile Number (Father/Guardian)           :0" << Father_Mobile_number << endl;
    cout << "------------------------------------------------------HOME INFORMATION------------------------------------------------------" << endl;
    cout << " Home Address                              :" << Permanent_Address << endl;
    cout << " Emergency Mobile Number                   :0" << Emergency_number << endl;
    cout << " E-mail(if any)             :" << E_mail << "\t\t\t\tStudent Blood Group  :" << blood_group << endl;
    // Qualification Design
    cout << "----------------------------------------------------STUDENT Qualification---------------------------------------------------\n" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| Examination Passed |  Year  | Roll No. | Admission | Subjects |   Board    | Marks Obtained | Total Marks  | Percentage  |" << endl;
    cout << "---------------------+--------+----------+-----------+----------+------------+----------------+--------------+--------------" << endl;
    cout << "|       Matric       |  " << Matric_Passed_Year << "  |  " << Matric_Roll_No << "  |  " << Private_Regular_study << "  | Science  |   " << Matric_Board << "   |      " << Matric_Marks_Obtained << "      |     " << Matric_Total_Marks << "     |   " << Percentage << "   |" << endl;
    cout << "---------------------+--------+----------+-----------+----------+------------+----------------+--------------+--------------" << endl;
    cout << "|        HSSC        |  " << HSSC_Passed_Year << "  |  " << HSSC_Roll_No << "  |  " << Private_Regular_study << "  | Science  |   " << HSSC_Board << "   |      " << HSSC_Marks_Obtained << "      |     " << HSSC_Total_Marks << "     |   " << Percentage << "   |" << endl;
    cout << "---------------------+--------+----------+-----------+----------+------------+----------------+--------------+--------------" << endl;
    cout << "|  BA/BSC/BS/B.Com   |        |          |           |          |            |                |              |             |" << endl;
    cout << "---------------------+--------+----------+-----------+----------+------------+----------------+--------------+--------------" << endl;
    cout << "|  MA/MSC/M.COM/MBA  |        |          |           |          |            |                |              |             |" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
}
void designchallan()
{
	cout << "\n----------------------------------------------------------------------- CHALLAN FORM --------------------------------------------------------------------" << endl;
	cout<<endl;
    cout<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<endl;
    cout<<"|                  Registration                   |"<<"|                  Registration                   |"<<"|                  Registration                   |"<<endl;
    cout<<"|           Lahore Garrison University            |"<<"|           Lahore Garrison University            |"<<"|           Lahore Garrison University            |"<<endl;
    cout<<"| ----------------------------------------------- |"<<"| ----------------------------------------------- |"<<"| ----------------------------------------------- |"<<endl;
    cout<<"|  Challan No: "<<LGU_roll_no[i]<<"                                  |"<<"|  Challan No: "<<LGU_roll_no[i]<<"                                  |"<<"|  Challan No: "<<LGU_roll_no[i]<<"                                  |"<<endl;
    cout<<"|                           Issue Date: 2/10/2022 |"<<"|                           Issue Date: 2/10/2022 |"<<"|                           Issue Date: 2/10/2022 |"<<endl;
    cout<<"|                            Due Date:  2/15/2022 |"<<"|                            Due Date:  2/15/2022 |"<<"|                            Due Date:  2/15/2022 |"<<endl;
    cout<<"| Name     : "<<name<<"                               |"<<"| Name     : "<<name<<"                               |"<<"| Name     : "<<name<<"                               |"<<endl;
    cout<<"| Roll No  : Fa-2022/"<<check_Degree<<"/"<<LGU_roll_no[i]<<"                       |"<<"| Roll No  : Fa-2022/"<<check_Degree<<"/"<<LGU_roll_no[i]<<"                       |"<<"| Roll No  : Fa-2022/"<<check_Degree<<"/"<<LGU_roll_no[i]<<"                       |"<<endl;
    cout<<"| Semester : Fa-2022      Degree:  "<<check_Degree<<"           |"<<"| Semester : Fa-2022      Degree:  "<<check_Degree<<"           |"<<"| Semester : Fa-2022      Degree:  "<<check_Degree<<"           |"<<endl;
    cout<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<endl;
    cout<<"|#|Particulars          | Amount                  |"<<"|#|Particulars          | Amount                  |"<<"|#|Particulars          | Amount                  |"<<endl;
    cout<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<endl;
    cout<<"|1 | Tutition Fee       |               "<<Tutition_Fee_check<<".0000|"<<"|1 | Tutition Fee       |               "<<Tutition_Fee_check<<".0000|"<<"|1 | Tutition Fee       |               "<<Tutition_Fee_check<<".0000|"<<endl;
    cout<<"|2 | Magazine Fee       |                 500.0000|"<<"|2 | Magazine Fee       |                 500.0000|"<<"|2 | Magazine Fee       |                 500.0000|"<<endl;
    cout<<"|3 | Exam Fee           |                2500.0000|"<<"|3 | Exam Fee           |                2500.0000|"<<"|3 | Exam Fee           |                2500.0000|"<<endl;
    cout<<"|4 | Society Fund       |                 100.0000|"<<"|4 | Society Fund       |                 100.0000|"<<"|4 | Society Fund       |                 100.0000|"<<endl;
    cout<<"|5 | Misc. Fee          |                 900.0000|"<<"|5 | Misc. Fee          |                 900.0000|"<<"|5 | Misc. Fee          |                 900.0000|"<<endl;
    cout<<"|6 | Registration Fee   |                1000.0000|"<<"|6 | Registration Fee   |                1000.0000|"<<"|6 | Registration Fee   |                1000.0000|"<<endl;
    cout<<"|7 | Practical Charges  |                1000.0000|"<<"|7 | Practical Charges  |                1000.0000|"<<"|7 | Practical Charges  |                1000.0000|"<<endl;
    cout<<"|8 | Sports Fund        |                 260.0000|"<<"|8 | Sports Fund        |                 260.0000|"<<"|8 | Sports Fund        |                 260.0000|"<<endl;
    cout<<"|9 |                    |                         |"<<"|9 |                    |                         |"<<"|9 |                    |                         |"<<endl;
    cout<<"|10|                    |                         |"<<"|10|                    |                         |"<<"|10|                    |                         |"<<endl;
    cout<<"|11|                    |                         |"<<"|11|                    |                         |"<<"|11|                    |                         |"<<endl;
    cout<<"|  |----------------------------------------------|"<<"|  |----------------------------------------------|"<<"|  |----------------------------------------------|"<<endl;
    cout<<"|  | Gross Payable      | "<<fee_check<<".0000             |"<<"|  | Gross Payable      | "<<fee_check<<".0000             |"<<"|  | Gross Payable      | "<<fee_check<<".0000             |"<<endl;
    cout<<"|  |----------------------------------------------|"<<"|  |----------------------------------------------|"<<"|  |----------------------------------------------|"<<endl;
    cout<<"|                                                 |"<<"|                                                 |"<<"|                                                 |"<<endl;
    cout<<"|   Scholarship            0.0000                 |"<<"|   Scholarship            0.0000                 |"<<"|   Scholarship            0.0000                 |"<<endl;
    cout<<"|   Amount Paid Now        "<<fee_check<<".0000            |"<<"|   Amount Paid Now        "<<fee_check<<".0000            |"<<"|   Amount Paid Now        "<<fee_check<<".0000            |"<<endl;
    cout<<"|  Rs. 20/- per day to be charged after due date  |"<<"|  Rs. 20/- per day to be charged after due date  |"<<"|  Rs. 20/- per day to be charged after due date  |"<<endl;
    cout<<"|   2/15/2022 11:34:44 PM                         |"<<"|   2/15/2022 11:34:44 PM                         |"<<"|   2/15/2022 11:34:44 PM                         |"<<endl;
    cout<<"|  ---------------------------------------------  |"<<"|  ---------------------------------------------  |"<<"|  ---------------------------------------------  |"<<endl;
    cout<<"|  |                 Bank Copy                 |  |"<<"|  |                Accounts Copy                 |"<<"|  |                Student Copy               |  |"<<endl;
    cout<<"|  ---------------------------------------------  |"<<"|  ---------------------------------------------  |"<<"|  ---------------------------------------------  |"<<endl;
    cout<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<"|-------------------------------------------------|"<<endl;
}

void paymentinfo()
{
    
    cout<<"If You Pay Fee Online Press :Y/N\t:";
    cin>>press;
    system("CLS");
    if (press == 'y' || press == 'Y')
    {
        do
    {
        cout<<"Select Payment Method"<<endl;
        cout<<" Credit/Debit Card Press 1  :"<<endl;
        cout<<" Easypaisa         Press 2  :"<<endl;
        cout<<" JazzCash          Press 3  :"<<endl;
        cin>>Payment_Method;
        switch (Payment_Method)
        {
        case 1:
            {
               
                cout<<"Enter Card Holder Name   :";
                cin>>Card_Holder_Name;
                cout<<"Enter Card Number        :";
                cin>>Card_Number;
                cout<<"Enter Card Expiry Date   :";
                cin>>Card_Expiry_Date;
                cout<<"Enter Cvv Code           :";
                cin>>Cvv_Code;
                cout<<"Payment Successful"<<endl;
                cout<<"Admission Submit Successful and University inform you Via Through SMS Your Classes Star.";
            }
            break;
        case 2:
            {
                cout<<"         Easypaisa "<<endl;
                cout<<"Account Number : 03224937350";
                cout<<"\tAccount Name : Hammad Ali";
                cout<<"Send Payment "<<endl;
                cout<<"Enter Payment TID Number :";
                cin>>Payment_TID_Number;
                cout<<"Enter Send Name          :";
                cin>>Send_Name;
                cout<<"Payment Successful"<<endl;
                cout<<"Admission Submit Successful and University inform you Via Through SMS Your Classes Star.";
            }
            break;
        case 3:
            {
                cout<<"         JazzCash "<<endl;
                cout<<"Account Number  : 03224937350";
                cout<<"\tAccount Name  : Hammad Ali";
                cout<<"Send Payment "<<endl;
                cout<<"Enter Payment TID Number :";
                cin>>Payment_TID_Number;
                cout<<"Enter Send Name          :";
                cin>>Send_Name;
                cout<<"Payment Successful"<<endl;
                cout<<"Admission Submit Successful and University inform you Via Through SMS Your Classes Star.";
            }
            break;
        default:
        cout<<"Sorry You Enter Worng Number.";
            break;
        }

    } while (Payment_Method >4);    

    }
    else
    {
        cout<<"  Admission Form Submit Successful."<<endl;
        cout<<"  Print You Chall And Go To Bank And Submit Your Fee Thank You."<<endl;
        cout<<"  HBL Bank \n  MCB Bank";
        cout<<endl<<endl;
        designchallan();
    }
    
}



