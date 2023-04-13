#pragma once

#include "pch.h"

//#include <codegen\FancyMathSpec.g.h> // This file will be generated by the windows-codegen command from your js spec file

#include <functional>
#define _USE_MATH_DEFINES
#include <math.h>

//command用
// #include <windows.h> <WINDOWS.H>
// #include <strsafe.h> <STRSAFE.H>
// #include <stdio.h><STDIO.H>

//file書き込み
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
#pragma comment (lib, "user32.lib")

#include "NativeModules.h"

#define BUF_SIZE 255;

// void DisplayMessage (HANDLE hScreen)
// {

//     TCHAR msgBuf[BUF_SIZE];
//     size_t cchStringSize;
//     DWORD dwChars;

//     // Print message using thread-safe functions.
//     StringCchPrintf(msgBuf, BUF_SIZE, 
//        TEXT("Executing from thread")); 
//     StringCchLength(msgBuf, BUF_SIZE, &cchStringSize);
//     WriteConsole(hScreen, msgBuf, cchStringSize, 
//                  &dwChars, NULL);
// }



using namespace std; 
namespace WindowsSampleApp
{
  // The namespace here will align with the codegenConfig.windows.namespace property in your package.json
  //using ModuleSpec = HogeCodegen::FancyMathSpec; 

  REACT_MODULE(FancyMath);
  struct FancyMath
  {
    // REACT_GET_CONSTANTS(GetConstants)
    // HogeCodegen::FancyMathSpec_Constants GetConstants() noexcept {
    //   HogeCodegen::FancyMathSpec_Constants constants;
    //   constants.E = M_E;
    //   constants.PI = M_PI;
    //   return constants;
    // }

    REACT_METHOD(Add, L"add");
    double Add(double a, double b) noexcept
    {
      double result = a + b;
      AddEvent(result);
      return result;
    }

    REACT_METHOD(Subtract, L"subtract");
    double Subtract(double a, double b) noexcept
    {
      double result = a - b;
      //AddEvent(result);
      return result;
    }

    REACT_METHOD(Hoge, L"hoge");
    char* Hoge() noexcept
    {
      char *data = "hoge";
      return data;

    }

    // REACT_METHOD(Hogee, L"hogee");
    // char* Hogee(char* arg1) noexcept
    // {
    //   char *data = "hoge";
    //   strcat(data, arg1);
    //   return data;

    // }

    REACT_METHOD(Hogee, L"hogee");
    string Hogee(string arg1) noexcept
    {
      string data = "hoge"; 
      data += arg1;
      return data;
    }

    REACT_METHOD(RunCmd, L"runCmd");
    void RunCmd() noexcept
    {
        string test = "test";
        HANDLE thread = CreateThread( NULL, 0,runOnChildProcess, NULL, 0, NULL); 

        WaitForSingleObject(thread, INFINITE);
        CloseHandle(thread);
    }

    DWORD WINAPI runOnChildProcess( LPVOID lpParam ) 
            {

                HANDLE  hStdout = NULL;
                if( (hStdout = 
                    GetStdHandle(STD_OUTPUT_HANDLE)) 
                    == INVALID_HANDLE_VALUE )  
                return 1;

                // Cast the parameter to the correct
                // data type passed by callee i.e main() in our case.
                //command = *((string*)lpParam); 

                printf("Thread inside");
                char * ch = "this is test//////////////";
                //WriteConsole( hStdout, &ch, 1, 0, NULL );
                //HANDLE hFile = CreateFile(L"C:\\workspace\\WindowsSampleApp\\ZZZ.txt",GENERIC_WRITE,0,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
                //CloseHandle( hFile );
                ::MessageBox(NULL, TEXT("this is test"), TEXT(""), MB_OKCANCEL | MB_ICONQUESTION);
                return 0; 
            } 

    


    REACT_EVENT(AddEvent);
    std::function<void(double)> AddEvent;
            };
            }