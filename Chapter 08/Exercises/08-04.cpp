/*
Page 249
program 8.4
The database created in Exercise 8.3 dose not include educational information of
the staff.It has been decided to add this information to teachers and officers(and
not for typist) which will help the management in decision making with regard to training
promotion etc.Add another data class called education thats holds two pieces of educational
information namely highest qualification in general education and highest professional qualification
this class should be inherited by the class teacher and officer .Modify the program of exercise 8.19
incorporate these additions.
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class defination
class staff
{
protected:
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


class Educational
{
protected:

    char *General;
    char *professional;
    int len;
public:
    Educational()
    {
        len = 0;
        this->General = new char[len+1];
        this->professional =  new char[len+1];
    }
    Educational(char *General, char *professional)
    {
        len = strlen(General);
        this->General = new char[len+1];
        strcpy(this->General, General);
        len = strlen(professional);
        this->professional =  new char[len+1];
        strcpy(this->professional,professional);
    }
    char *getGeneral()
    {
        return General;
    }
    char *getProfessional()
    {
        return professional;
    }
    void show()
    {
         cout << "General Education = " << General << endl;
         cout << "Professional Education = " << professional << endl;
     }
};

class teacher: virtual public staff,virtual public Educational
{
protected:
    char *subject;
    char *publication;
public:
    static int teacherCounter;
    teacher()
    {
        staff();
        length = 0;
        subject = new char[length+1];
        publication = new char[length+1];
    }
    teacher(int code, char *name,char *subject, char *publication,char *General, char *professional):
        staff(code,name),Educational(General,professional)
        {
        length = strlen(subject);

        this->subject = new char[length+1];
        strcpy(this->subject,subject);
        length = strlen(publication);
        this->publication = new char[length+1];
        strcpy(this->publication,publication);
        fp = fopen("Teacher.txt","r");
        if(fp != NULL)
        {
            fclose(fp);
            fp = fopen("Teacher.txt","a");
            fseek(fp,0l,2);
            fprintf(fp,"%s %d %s %s %s %s ",name, code,subject,publication,General,professional);
            fclose(fp);
            CPF = fopen("TeacherCount.txt","w");
            putw(++teacherCounter,CPF);
            fclose(CPF);
        }
        else
        {
           fp = fopen("Teacher.txt", "w");
            fprintf(fp,"%s %d %s %s %s %s ",name, code,subject,publication,General,professional);
            CPF = fopen("TeacherCount.txt","w");
            putw(++teacherCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
    }
    void displayAllTeacher()
    {
        int i;
        fp = fopen("Teacher.txt","r");
        CPF = fopen("TeacherCount.txt","r");
        int count = getw(CPF);
        for(i = 0; i < count; i++)
        {
           fscanf(fp,"%s %d %s %s",name, &code,subject,publication,General,professional);
            fprintf(fp,"%s %d %s %s %s %s ",name, code,subject,publication,General,professional);
        }
        fclose(fp);
        fclose(CPF);
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
        staff::display();
        cout << "Subject     = " << subject << endl;
        cout << "Publication = " << publication << endl;
       show();
    }


};
int teacher:: teacherCounter = 0;
class officer:virtual public staff, virtual public Educational
{
protected:
    int grade;
public:
    static int officerCounter;
    officer()
    {
       staff();
       grade = 0;
    }
    officer(int code, char *name, int grade,char *General,char *professional):
    staff(code, name),Educational(General,professional)
    {
        this->grade = grade;
        fp = fopen("OFFICER.txt","r");
        if(fp != NULL)
        {
            fclose(fp);
            fp = fopen("OFFICER.txt","a");
            fseek(fp,0l,2);
           // cout << " hello from if\n";
            fprintf(fp,"%s %d %d %s %s ",this->name, this->code,this->grade,this->General,this->professional);
            //cout << " hello from if if\n";
            CPF = fopen("officerCounter.txt","w");
            putw(++officerCounter,CPF);
            fclose(fp);
            fclose(CPF);
        }
        else
        {
            fp = fopen("OFFICER.txt", "w");
           fprintf(fp,"%s %d %d %s %s ",this->name, this->code,this->grade,this->General,this->professional);
            CPF = fopen("officerCounter.txt","w");
            putw(++officerCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
    }
    void displayAllOfficer()
    {
        int i;
        fp = fopen("OFFICER.txt","r");
        CPF = fopen("officerCounter.txt","r");
        int count = getw(CPF);
        for(i = 0; i < count; i++)
        {
           fscanf(fp,"%s %d %d %s",name, &code,&grade,General,professional);
          fprintf(fp,"%s %d %d %s %s ",name,code,grade,General,professional);
        }
        fclose(fp);
        fclose(CPF);
    }
    int getGrade()
    {
        return grade;
    }
    void display()
    {
        staff::display();
        cout << "grade = " << grade << endl;
        show();
    }
};
int officer::officerCounter = 0;
class typist:public virtual staff
{
protected:
    int spreed;
public:
    static int typistCounter;
    typist()
    {
       staff();
       spreed = 0;
    }
    typist(int code , char *name, int spreed):
        staff(code, name)
    {
        this->spreed = spreed;
            fp = fopen("Typist.txt","r");
        if(fp != NULL)
        {
            fclose(fp);
            fp = fopen("Typist.txt","a");
            fseek(fp,0l,2);

            fprintf(fp,"%s %d %d ",name, code,spreed);
            CPF = fopen("typistCounter.txt","w");
            putw(++typistCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
        else
        {
            fp = fopen("Typist.txt", "w");
            fprintf(fp,"%s %d %d ",name, code,spreed);
            CPF = fopen("typistCounter.txt","w");
            putw(++typistCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
    }
    void displayAllTypist()
    {
        int i;
        fp = fopen("Typist.txt", "r");
        CPF = fopen("typistCounter.txt","r");
        int count = getw(CPF);
        for(i = 0; i < count; i++)
        {
            fscanf(fp,"%s %d %d",name, &code,&spreed);
            fprintf(stdout,"%s %d %d ",name, code, spreed);
        }
        fclose(fp);
        fclose(CPF);
    }
    int getSpreed()
    {
        return spreed;
    }
    void display()
    {
        staff::display();
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
        fp = fopen("Ragulartypist.txt","r");
        if(fp != NULL)
        {
            fclose(fp);
            fp = fopen("Ragulartypist.txt","a");
            fseek(fp,0l,2);

            fprintf(fp,"%s %d %d ",name, code,spreed);
            CPF = fopen("RagulartypistCounter.txt","w");
            putw(++RagulartypistCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
        else
        {
            fp = fopen("Ragulartypist.txt", "w");
            fprintf(fp,"%s %d %d ",name, code,spreed);
            CPF = fopen("RagulartypistCounter.txt","w");
            putw(++RagulartypistCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
    }
    void displayAllRagularTypist()
    {
        int i;
        fp = fopen("Ragulartypist.txt", "r");
        CPF = fopen("RagulartypistCounter.txt","r");
        int count = getw(CPF);
        for(i = 0; i < count; i++)
        {
            fscanf(fp,"%s %d %d",name, &code,&spreed);
            fprintf(stdout,"%s %d %d\n",name, code, spreed);
        }
        fclose(fp);
        fclose(CPF);
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
        fp = fopen("casualTypist.txt","r");
        if(fp != NULL)
        {
            fclose(fp);
            fp = fopen("casualTypist.txt","a");
            fseek(fp,0l,2);

            fprintf(fp,"%s %d %d %f ",name, code,spreed,dailyWagse);
            CPF = fopen("casualTypistCounter.txt","w");
            putw(++casualTypistCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
        else
        {
            fp = fopen("casualTypist.txt", "w");
            fprintf(fp,"%s %d %d %f ",name, code,spreed,dailyWagse);
            CPF = fopen("casualTypistCounter.txt","w");
            putw(++casualTypistCounter,CPF);
            fclose(CPF);
            fclose(fp);
        }
    }
    void displayAllCasualTypist()
    {
        int i;
        fp = fopen("casualTypist.txt", "r");
        CPF = fopen("casualTypistCounter.txt","r");
        int count = getw(CPF);
        cout << "count " << count << endl;
        for(i = 0; i < count; i++)
        {
            fscanf(fp,"%s %d %d %f",name, &code,&spreed, &dailyWagse);
            fprintf(stdout,"%s %d %d %f\n",name, code,spreed,dailyWagse);
        }
        fclose(fp);
        fclose(CPF);
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
    char name[20],subject[20], publication[40],General[20],professional[20];
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
            cout << "Name \tcode \tSubject \tPublication\tGeneral Education\tProfessional Education\n";
            cin >> name;
            while(strcmp(name,"end") != 0)
            {
                cin >> code >> subject >> publication >> General >> professional;
                a = teacher(code, name, subject, publication,General,professional);
                cout << "Name \tcode \tSubject \tPublication\tGeneral Education\tProfessional Education\n";
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
    char name[20],General[20],professional[20];
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
            cout << "Name \tcode \tGrade\t\tGeneral Education\tProfessional Education\n";
            cin >> name;
            while(strcmp(name,"end") != 0)
            {
                cin >> code >> grade >> General >> professional ;
                a = officer(code, name,grade,General,professional);
                cout << "Name \tcode \tGrade\t\tGeneral Education\tProfessional Education\n";
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
/*
output
*/
