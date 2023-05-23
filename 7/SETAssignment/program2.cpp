// #include <iostream>
// #include <cstdio>

// using namespace std;

// int main()
// {
//     int count = 10;
//     char str[10];
//     FILE *fp;
    
//     fp = fopen("file.txt","w+");
//     fputs("An example file\n", fp);
//     fputs("Filename is file.txt\n", fp);
    
//     rewind(fp);
    
//     while(feof(fp) == 0)
//     {
//         fgets(str,count,fp);
//         cout << str << endl;
//     }
    
    
//     fclose(fp);
//     return 0;

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int count = 10;
    char str[count];
    FILE *fp;
    
    fopen_s(&fp, "file.txt","w+");
    if (fp != nullptr) {
        fputs("An example file\n", fp);
        fputs("Filename is file.txt\n", fp);
        rewind(fp);
        while(fgets(str, count, fp) != nullptr)
        {
            cout << str << endl;
        }
        fclose(fp);
    }
    return 0;
}

