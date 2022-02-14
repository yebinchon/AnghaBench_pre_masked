
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 int VAR_2 ;



 char** VAR_3 ;

__attribute__((used)) static void
FUNC_7(int VAR_4)
{
    int VAR_5;
    char *VAR_6;
    char VAR_7[VAR_0];
    char VAR_8[VAR_0];
    char VAR_9[VAR_0];



    switch (VAR_2)
    {
 case 128:
 {




     VAR_6 = FUNC_2("VIM");
     if (VAR_6 == ((void*)0))
  FUNC_1(VAR_1, VAR_7);
     else
  FUNC_5(VAR_7, VAR_6);
     break;
 }
 case 130:
 {

     VAR_6 = FUNC_2("HOME");
     if (VAR_6 == ((void*)0))
     {
  FUNC_3("Internal error: $HOME is NULL\n");
  VAR_6 = "c:\\";
     }
     FUNC_5(VAR_7, VAR_6);
     break;
 }
 case 129:
 {

     return;
 }
    }



    FUNC_4(VAR_8, "%s\\vimfiles", VAR_7);
    FUNC_6(VAR_8, 0755);

    FUNC_3("Creating the following directories in \"%s\":\n", VAR_8);
    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
    {
 FUNC_4(VAR_9, "%s\\%s", VAR_8, VAR_3[VAR_5]);
 FUNC_3("  %s", VAR_3[VAR_5]);
 FUNC_6(VAR_9, 0755);
    }
    FUNC_3("\n");
}
