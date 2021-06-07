/*
program /*****FILE PROGRAM*****
this program is for practice purpose. related with 8.3

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class defination

//main begin
int main()
{
    char name[22];
    int age,i,year;
    int  count = 0;
    FILE *CPF;
    char choice;

    double size;
    FILE *fp ;


    //opening file in read mode
    fp = fopen("Teacher.txt", "r");
    //checking if file is open or not ...if file not exist then goto else part
    if(NULL != fp)
    {
        cout << "File is open\n";
        fseek(fp, 0l, 2);
        size  = ftell(fp);
        //checking file is empty or not//
        if(0 == size)
        {
            cout << "File is Empty\nEnter new data into file\n";
            fclose(fp);
            fp = fopen("Teacher.txt", "w");
            while(1)
            {
             fscanf(stdin,"%s",name);
                if(strcmp(name,"end") == 0)
                {

                    CPF = fopen("COUNT.txt","w");
                    if(CPF != NULL)
                    {
                        cout << "Count = " << count << endl;
                    putw(count,CPF);
                    fclose(CPF);
                    fclose(fp);
                    break;
                    }

                }
            fscanf(stdin,"%d %d",&age, &year);
            fprintf(fp,"%s %d %d",name, age, year );
            count++;
            }

            fclose(fp);

        }

        fclose(fp);

        fp = fopen("Teacher.txt", "r");
        CPF = fopen("COUNT.txt","r");
        if(CPF != NULL)
            count = getw(CPF);
        for(i = 0; i < count; i++)
        {
            fscanf(fp,"%s %d %d",name, &age, &year);
            fprintf(stdout,"%s %d %d\n",name, age, year );
        }

        fclose(fp);
    }//Fully new file will be created
    else
    {
        cout << "New file created\n";
        cout << "Enter Name\n" << "Enter age\n" << "Enter pass Year\n" << "Enter 'end' to End input";
        fp = fopen("Teacher.txt", "w");
        if(fp != NULL)
            while(1)
            {
             fscanf(stdin,"%s",name);
                if(strcmp(name,"end") == 0)
                {

                    CPF = fopen("COUNT.txt","w");
                    if(CPF != NULL)
                    {
                        cout << "Count = " << count << endl;
                    putw(count,CPF);
                    fclose(CPF);
                    fclose(fp);
                    break;
                    }

                }
            fscanf(stdin,"%d %d",&age, &year);
            fprintf(fp,"%s %d %d",name, age, year );
            count++;
            }
    }

        cout  << "Want to add more data ? \n";
        cout << "If 'yes' press = y\n";
        cout << "Else N\n";
        cin >> choice;
        if(choice == 'Y' || choice == 'y')
        {
        cout << "Enter Name\n" << "Enter age\n" << "Enter pass Year\n" << "Enter 'end' to End input";
        CPF = fopen("COUNT.txt","r");
        if(CPF != NULL)
            count = getw(CPF);
            fclose(CPF);
        fp = fopen("Teacher.txt", "a");
        if(fp != NULL)
            while(1)
            {
             fscanf(stdin,"%s",name);
                if(strcmp(name,"end") == 0)
                {

                    CPF = fopen("COUNT.txt","w");
                    if(CPF != NULL)
                    {
                        cout << "Count = " << count << endl;
                    putw(count,CPF);
                    fclose(CPF);
                    fclose(fp);
                    break;
                    }

                }
            fscanf(stdin,"%d %d",&age, &year);
            fprintf(fp,"%s %d %d",name, age, year );
            count++;
            }
        }

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
