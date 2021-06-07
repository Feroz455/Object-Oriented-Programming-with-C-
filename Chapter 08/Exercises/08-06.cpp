/*
Page 250
program 8.6
In exercise 8.3 the class teacher , officer and typist are
derive from the class staff.As know we can use container
class in place of inheritance in some situation.Redesign
the program of exercises 8.3 such that the class teacher,
officer and typist contain the objects of staff

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class defination
class staff
{

public:
    int code;
    char *name;
    int length;
    FILE *fp,*CPF;

public:
    /************************/
    static int staffCount;

    /************************/
    staff()
    {
        code = 0;
        length = 0;
        name = new char[length+1];
        *name = '\0';
        //if we have already work with this program then staffCounter should be store into memory.we are just retrieve that value
        CPF = fopen("staffCount.txt","r");
        if(CPF != NULL)
        {
        staffCount = getw(CPF);
        fclose(CPF);
        }


    }
    staff(int code, char *name)
    {

        this->code = code;
        length = strlen(name);
        this->name = new char[length+1];
        strncpy(this->name,name,length);
       // cout << code  << " " << name << " " << endl;
        //if we have already work with this program then staffCounter should be store into memory.we are just retrieve that value
        CPF = fopen("staffCount.txt","r");
        if(CPF != NULL)
        staffCount = getw(CPF);
        fclose(CPF);
        //opening file in read mode to check file is exist or not , if file is exist the program will enter into if condition
        //other wise program will enter into else condition
        fp = fopen("Staff.txt","r");
        if(fp != NULL)
        {
            //if file exist close file .we open file in read only mode.. we can't write into it
            fclose(fp);
            // opening file into append mode ...existing data should be safe ;
            fp = fopen("Staff.txt","a");
            fseek(fp,0l,2);
            fprintf(fp,"%s %d ",name,code);

            // count data into staffCount file
            //every time this program going to flash the 'staffCount.txt' file to restore new value of staffCounter value
            CPF = fopen("staffCount.txt","w");
            putw(++staffCount,CPF);
            //close both file
            fclose(CPF);
            fclose(fp);

        }
        //Totally new file going to create ...
        else
        {
            //write mode will create a new file.Fully new
            fp = fopen("Staff.txt", "w");
            //storing value into file
            fprintf(fp,"%s %d ",name,code);
            //write mode will create a new file.Fully new
            CPF = fopen("staffCount.txt","w");
            //Increment first then store value into file
            putw(++staffCount,CPF);
            fclose(CPF);
            fclose(fp);
        }
    }
    int getCode()
    {
        return code;
    }
    char *getName()
    {
        return name;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Code = " << code << endl;
    }
    void displayAllStaff()
    {
        int i;
        //opening both file into read mode
        fp = fopen("Staff.txt", "r");
        CPF = fopen("staffCount.txt","r");
        //storing staffCount value into count
        //we are not trying to change staffCount value
        int count = getw(CPF);
        for(i = 0; i < count; i++)
        {
            //read data from file through file pointer
           fscanf(fp,"%s %d",name,&code);
           //printing data into screen through stdout
           fprintf(stdout,"%s %20d \n",name,code);
        }
        fclose(fp);
        fclose(CPF);
    }
};
int staff::staffCount = 0;
class teacher
{
protected:
    char *subject;
    char *publication;
    staff s;
public:

    static int teacherCounter;
    teacher()
    {
        staff();
        s.length = 0;
        subject = new char[s.length+1];
        publication = new char[s.length+1];
    }
    teacher(int code, char *name,char *subject, char *publication)

        {
        s = staff(code,name);
        s.length = strlen(subject);

        this->subject = new char[s.length+1];
        strcpy(this->subject,subject);
        s.length = strlen(publication);
        this->publication = new char[s.length+1];
        strcpy(this->publication,publication);
        s.fp = fopen("Teacher.txt","r");
        if(s.fp != NULL)
        {
            fclose(s.fp);
            s.fp = fopen("Teacher.txt","a");
            fseek(s.fp,0l,2);
            fprintf(s.fp,"%s %d %s %s ",s.name, s.code,subject,publication);
            fclose(s.fp);
            s.CPF = fopen("TeacherCount.txt","w");
            putw(++teacherCounter,s.CPF);
            fclose(s.CPF);
        }
        else
        {
           s.fp = fopen("Teacher.txt", "w");
            fprintf(s.fp,"%s %d %s %s ",s.name, s.code,subject,publication);
            s.CPF = fopen("TeacherCount.txt","w");
            putw(++teacherCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
    }
    void displayAllTeacher()
    {
        int i;
        s.fp = fopen("Teacher.txt","r");
        s.CPF = fopen("TeacherCount.txt","r");
        int count = getw(s.CPF);
        for(i = 0; i < count; i++)
        {
           fscanf(s.fp,"%s %d %s %s ",s.name, &s.code,subject,publication);
            fprintf(stdout,"%s %d %s %s\n ",s.name, s.code,subject,publication);
        }
        fclose(s.fp);
        fclose(s.CPF);
    }
    char *getSubject()
    {
        return subject;
    }
    char *get_publication()
    {
        return publication;
    }
    void display()
    {
        s.display();
        cout << "Subject = " << subject << endl;
        cout << "Publication = " << publication << endl;
    }


};
int teacher:: teacherCounter = 0;
class officer
{
protected:
    int grade;

public:
    staff s;
    static int officerCounter;
    officer()
    {
       grade = 0;
    }
    officer(int code, char *name, int grade):
    s(code, name)
    {
        this->grade = grade;
        s.fp = fopen("OFFICER.txt","r");
        if(s.fp != NULL)
        {
            fclose(s.fp);
            s.fp = fopen("OFFICER.txt","a");
            fseek(s.fp,0l,2);
           // cout << " hello from if\n";
            fprintf(s.fp,"%s %d %d ",s.name, s.code,this->grade);
            //cout << " hello from if if\n";
            s.CPF = fopen("officerCounter.txt","w");
            putw(++officerCounter,s.CPF);
            fclose(s.fp);
            fclose(s.CPF);
        }
        else
        {
            s.fp = fopen("OFFICER.txt", "w");
            fprintf(s.fp,"%s %d %s ",s.name, s.code,grade);
            s.CPF = fopen("officerCounter.txt","w");
            putw(++officerCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
    }
    void displayAllOfficer()
    {
        int i;
        s.fp = fopen("OFFICER.txt","r");
        s.CPF = fopen("officerCounter.txt","r");
        int count = getw(s.CPF);
        for(i = 0; i < count; i++)
        {
           fscanf(s.fp,"%s %d %d ",s.name, &s.code,&grade);
            fprintf(stdout,"%s %d %d ",s.name, s.code,grade);
        }
        fclose(s.fp);
        fclose(s.CPF);
    }
    int getGrade()
    {
        return grade;
    }
    void display()
    {
        s.display();
        cout << "grade = " << grade << endl;
    }
};
int officer::officerCounter = 0;
class typist
{
protected:
    int spreed;
public:
    staff s;
    static int typistCounter;
    typist()
    {
       staff();
       spreed = 0;
    }
    typist(int code , char *name, int spreed)
    {
        s = staff(code, name);
        this->spreed = spreed;
            s.fp = fopen("Typist.txt","r");
        if(s.fp != NULL)
        {
            fclose(s.fp);
            s.fp = fopen("Typist.txt","a");
            fseek(s.fp,0l,2);

            fprintf(s.fp,"%s %d %d ",s.name, s.code,spreed);
            s.CPF = fopen("typistCounter.txt","w");
            putw(++typistCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
        else
        {
            s.fp = fopen("Typist.txt", "w");
            fprintf(s.fp,"%s %d %d ",s.name,s.code,spreed);
            s.CPF = fopen("typistCounter.txt","w");
            putw(++typistCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
    }
    void displayAllTypist()
    {
        int i;
        s.fp = fopen("Typist.txt", "r");
        s.CPF = fopen("typistCounter.txt","r");
        int count = getw(s.CPF);
        for(i = 0; i < count; i++)
        {
            fscanf(s.fp,"%s %d %d",s.name, &s.code,&spreed);
            fprintf(stdout,"%s %d %d ",s.name, s.code, spreed);
        }
        fclose(s.fp);
        fclose(s.CPF);
    }
    int getSpreed()
    {
        return spreed;
    }
    void display()
    {
        s.display();
        cout << "Spreed = " << spreed <<endl;
    }

};

int typist::typistCounter = 0;
class ragular:public typist
{
public:
    static int RagulartypistCounter;
    ragular()
    {
        typist();
    }
    ragular(int code , char *name, int spreed):
         typist(code ,name,spreed)
        {
        s.fp = fopen("Ragulartypist.txt","r");
        if(s.fp != NULL)
        {
            fclose(s.fp);
            s.fp = fopen("Ragulartypist.txt","a");
            fseek(s.fp,0l,2);

            fprintf(s.fp,"%s %d %d ",s.name, s.code,spreed);
            s.CPF = fopen("RagulartypistCounter.txt","w");
            putw(++RagulartypistCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
        else
        {
            s.fp = fopen("Ragulartypist.txt", "w");
            fprintf(s.fp,"%s %d %d ",s.name, s.code,spreed);
            s.CPF = fopen("RagulartypistCounter.txt","w");
            putw(++RagulartypistCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
    }
    void displayAllRagularTypist()
    {
        int i;
        s.fp = fopen("Ragulartypist.txt", "r");
        s.CPF = fopen("RagulartypistCounter.txt","r");
        int count = getw(s.CPF);
        for(i = 0; i < count; i++)
        {
            fscanf(s.fp,"%s %d %d",s.name, &s.code,&spreed);
            fprintf(stdout,"%s %d %d\n",s.name, s.code, spreed);
        }
        fclose(s.fp);
        fclose(s.CPF);
    }
};
int ragular::RagulartypistCounter = 0;
class casual :public virtual typist
{
    float dailyWagse;
public:
    static int casualTypistCounter;
    casual()
    {
        dailyWagse = 0.0;
        typist();

    }
    casual(int code , char *name, int spreed, float dailyWagse):
     typist(code, name, spreed),dailyWagse(dailyWagse)
             {
        s.fp = fopen("casualTypist.txt","r");
        if(s.fp != NULL)
        {
            fclose(s.fp);
            s.fp = fopen("casualTypist.txt","a");
            fseek(s.fp,0l,2);

            fprintf(s.fp,"%s %d %d %f ",s.name, s.code,spreed,dailyWagse);
            s.CPF = fopen("casualTypistCounter.txt","w");
            putw(++casualTypistCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
        else
        {
            s.fp = fopen("casualTypist.txt", "w");
            fprintf(s.fp,"%s %d %d %f ",s.name, s.code,spreed,dailyWagse);
            s.CPF = fopen("casualTypistCounter.txt","w");
            putw(++casualTypistCounter,s.CPF);
            fclose(s.CPF);
            fclose(s.fp);
        }
    }
    void displayAllCasualTypist()
    {
        int i;
        s.fp = fopen("casualTypist.txt", "r");
        s.CPF = fopen("casualTypistCounter.txt","r");
        int count = getw(s.CPF);
        cout << "count " << count << endl;
        for(i = 0; i < count; i++)
        {
            fscanf(s.fp,"%s %d %d %f",s.name, &s.code,&spreed, &dailyWagse);
            fprintf(stdout,"%s %d %d %f\n",s.name, s.code,spreed,dailyWagse);
        }
        fclose(s.fp);
        fclose(s.CPF);
    }
     void display()
     {
         typist::display();
         cout << "daily Wages = " << dailyWagse << endl;
     }

};
int casual::casualTypistCounter = 0;

/**************************************************************************/

/*************************STYLIG*******************************************/

void printLine(int i = 50, char c = '*')
{
    cout << "\n";
    for( ; i > 0 ; i--)
        cout << c;
    cout << "\n";
}
void printNewlin(int i = 20)
{
    for( ;i > 0;i--)
        cout << "\n";
}

void displayManu()
{
    cout << "1\t" << "Store Teacher Info" << endl;
    cout << "2\t" << "Store Officer Info" << endl;
    cout << "3\t" << "Store Regular Typist Info" << endl;
    cout << "4\t" << "Store Casual Typist Info" << endl;
    cout << "5\t" << "Print All Staff info" << endl;
    cout << "6\t" << "Print all typist info" << endl;
    cout << "7\t" << "Return to main" << endl;
    cout << "8\t" << "Programming exit" << endl;
}


/***************************************************************************/
void SubManu(char *temp)
{
    cout << "1\t" << "Enter info " <<endl;
    cout << "2\t" << "Print immediate Store info" << endl;
    cout << "3\t" << "Display all "<< temp << " info" << endl;
    cout << "4\t" << "Return to Main Manu\n" << endl;
    cout << "5\t" << "Program exit" << endl;

}
void Teacher()
{
    char name[20],subject[20], publication[40];
    int i, code;
    char choice;
    teacher a;
    printNewlin();
    printLine();
    while(1)
    {
        SubManu("Teacher");
        printLine();
        printLine();
        cout << "Your choice ??\n";
        cin >> choice;
        switch(choice)
        {
        case '1':
            cout << "Valid Input\t" << "Enter info " <<endl;
            cout << "Enter 'end' to end input\n";
            cout << "Name \tcode \tSubject \tPublication\n";
            cin >> name;
            while(strcmp(name,"end") != 0)
            {
                cin >> code >> subject >> publication;
                a = teacher(code, name, subject, publication);
                cout << "Name \tcode \tSubject \tPublication\n";
                cin >> name;

            }
            break;
        case '2':
            cout  << "Valid Input\t" << "Print immediate Store info" << endl;
            a.teacher::display();
            break;
        case '3':
            cout  << "Valid Input\t" << "Display all  info" << endl;
            a.displayAllTeacher();
            break;
        case '4':
            cout  << "Valid Input\t"<< "Return to Main Teachers Manu\n" << endl;
            return;
            break;
        case '5':
            cout  << "Valid Input\t" << "Program exit" << endl;
            exit(0);
            break;
        default:
            cout << "INVALID INPUT\n"<< "TRY AGAIN!!\n";
            break;
        }
    }

}
/*************************************************************************/
void Officer()
{
    char name[20];
    int i, code,grade;
    char choice;
    officer a;
    printNewlin();
    printLine();
    while(1)
    {
        SubManu("Officer");
        printLine();
        printLine();
        cout << "Your choice ??\n";
        cin >> choice;
        switch(choice)
        {
        case '1':
            cout << "Valid Input\t" << "Enter info " <<endl;
            cout << "Enter 'end' to end input\n";
            cout << "Name \tcode \tGrade" << endl;
            cin >> name;
            while(strcmp(name,"end") != 0)
            {
                cin >> code >> grade;
                a = officer(code, name,grade);
                cout << "Name \tcode \tGrade" << endl;
                cin >> name;

            }
            break;
        case '2':
            cout  << "Valid Input\t" << "Print immediate Store info" << endl;
            a.officer::display();
            break;
        case '3':
            cout  << "Valid Input\t" << "Display all Officer info" << endl;
            a.displayAllOfficer();
            break;
        case '4':
            cout  << "Valid Input\t"<< "Return to Main Manu\n" << endl;
            return;
            break;
        case '5':
            cout  << "Valid Input\t" << "Program exit" << endl;
            exit(0);
            break;
        default:
            cout << "INVALID INPUT\n"<< "TRY AGAIN!!\n";
            break;
        }
    }
}
/***********************************************************************/
void RegularTypist()
{
    char name[20];
    int i, code,spreed;
    char choice;
    ragular a;
    printNewlin();
    printLine();
    while(1)
    {
        SubManu("Ragular");
        printLine();
        printLine();
        cout << "Your choice ??\n";
        cin >> choice;
        switch(choice)
        {
        case '1':
            cout << "Valid Input\t" << "Enter info " <<endl;
            cout << "Enter 'end' to end input\n";
            cout << "Name \tcode \tSpreed" << endl;
            cin >> name;
            while(strcmp(name,"end") != 0)
            {
                cin >> code >> spreed;
                a = ragular(code, name, spreed);
                cout << "Name \tcode \tspreed" << endl;
                cin >> name;

            }
            break;
        case '2':
            cout  << "Valid Input\t" << "Print immediate Store info" << endl;
            a.ragular::display();
            break;
        case '3':
            cout  << "Valid Input\t" << "Display all Regular Typist info" << endl;
            a.displayAllRagularTypist();
            break;
        case '4':
            cout  << "Valid Input\t"<< "Return to Main Manu\n" << endl;
            return;
            break;
        case '5':
            cout  << "Valid Input\t" << "Program exit" << endl;
            exit(0);
            break;
        default:
            cout << "INVALID INPUT\n"<< "TRY AGAIN!!\n";
            break;
        }
    }
}
/**************************************************************************/
void CasualTypist()
{
     char name[20];
    int i, code,spreed;
    float dailyWagse;
    char choice;
    casual a;
    printNewlin();
    printLine();
    while(1)
    {
        SubManu("Casual");
        printLine();
        printLine();
        cout << "Your choice ??\n";
        cin >> choice;
        switch(choice)
        {
        case '1':
            cout << "Valid Input\t" << "Enter info " <<endl;
            cout << "Enter 'end' to end input\n";
            cout << "Name \tcode \tSpreed\tdailyWagse" << endl;
            cin >> name;
            while(strcmp(name,"end") != 0)
            {
                cin >> code >> spreed >> dailyWagse;
                a = casual(code, name, spreed, dailyWagse);
                cout << "Name \tcode \tSpreed\tdailyWagse" << endl;
                cin >> name;

            }
            break;
        case '2':
            cout  << "Valid Input\t" << "Print immediate Store info" << endl;
            a.casual::display();
            break;
        case '3':
            cout  << "Valid Input\t" << "Display all Regular Typist info" << endl;
            a.displayAllCasualTypist();
            break;
        case '4':
            cout  << "Valid Input\t"<< "Return to Main Manu\n" << endl;
            return;
            break;
        case '5':
            cout  << "Valid Input\t" << "Program exit" << endl;
            exit(0);
            break;
        default:
            cout << "INVALID INPUT\n"<< "TRY AGAIN!!\n";
            break;
        }
    }
}
/************************************************************************/
void start()
{
    staff s;
    typist t;

    int i,j,grade, spreed;
    char choice;
    char name[20],subject[20],publicatio[40];
    float wages;
    printNewlin();
    printLine();
    printLine();
    while(1)
    {
        displayManu();
        printLine();
        cout << "Enter your choice\n";
        cin >> choice;
        switch(choice)
        {
        case '1':
            cout << "Valid input\t" << "Store Teacher Info" << endl;
            Teacher();
            break;
        case '2':
             cout << "Valid input\t" << "Store Officer Info" << endl;
             Officer();
            break;
        case '3':
            cout << "Valid input\t" << "Store Regular Typist Info" << endl;
            RegularTypist();
            break;
        case '4':
            cout << "Valid input\t" << "Store Casual Typist Info" << endl;
            CasualTypist();
            break;
        case '5':
            cout << "Valid input\t" << "Print All Staff info" << endl;

            s.displayAllStaff();
            break;
        case '6':
            cout << "Valid input\t" << "Print all  typist info" << endl;

            t.displayAllTypist();
            break;
        case '7':
            cout << "Valid input\t" << "Return to main" << endl;
            return;
            break;
        case '8':
            cout << "Valid input\t" << "Programming exit" << endl;
            exit(0);
            break;
        default:
            cout << "INVALID INPUT\n"<< "TRY AGAIN!!\n";
            break;
        }
    }

}
/*************************************************************************/

//main begin
int main()
{
    start();
    getchar();
    return 0;
}
//main end
///Program end

/*
output


**************************************************

**************************************************
1       Store Teacher Info
2       Store Officer Info
3       Store Regular Typist Info
4       Store Casual Typist Info
5       Print All Staff info
6       Print all typist info
7       Return to main
8       Programming exit

**************************************************
Enter your choice
1
Valid input     Store Teacher Info





















**************************************************
1       Enter info
2       Print immediate Store info
3       Display all Teacher info
4       Return to Main Manu

5       Program exit

**************************************************

**************************************************
Your choice ??
1
Valid Input     Enter info
Enter 'end' to end input
Name    code    Subject         Publication
Firoz_mahmud 01 math ncbc
Name    code    Subject         Publication
end
1       Enter info
2       Print immediate Store info
3       Display all Teacher info
4       Return to Main Manu

5       Program exit

**************************************************

**************************************************
Your choice ??
3
Valid Input     Display all  info
Firoz_mahmud 1 math ncbc
 1      Enter info
2       Print immediate Store info
3       Display all Teacher info
4       Return to Main Manu

5       Program exit

**************************************************

**************************************************
Your choice ??
5
Valid Input     Program exit

Process returned 0 (0x0)   execution time : 42.286 s
Press any key to continue.
*/
