
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t arg; } ;
struct TYPE_3__ {char* batpath; char* oldbat; char* exenamearg; char* exearg; } ;
typedef int FILE ;


 char VAR_0 ;
 char* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,...) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void
FUNC_4(int VAR_6)
{
    char *VAR_7 = VAR_5[VAR_2[VAR_6].arg].batpath;
    char *VAR_8 = VAR_5[VAR_2[VAR_6].arg].oldbat;
    char *VAR_9 = VAR_5[VAR_2[VAR_6].arg].exenamearg;
    char *VAR_10 = VAR_5[VAR_2[VAR_6].arg].exearg;
    FILE *VAR_11;

    if (*VAR_7 != VAR_0)
    {
 VAR_11 = FUNC_1(VAR_7, "w");
 if (VAR_11 == ((void*)0))
     FUNC_3("\nERROR: Cannot open \"%s\" for writing.\n", VAR_7);
 else
 {
     VAR_4 = 1;

     FUNC_2(VAR_11, "@echo off\n");
     FUNC_2(VAR_11, "rem -- Run Vim --\n");
     FUNC_2(VAR_11, "\n");
     FUNC_2(VAR_11, "set VIM_EXE_DIR=%s\n", VAR_3);
     FUNC_2(VAR_11, "if exist \"%%VIM%%\\%s\\%s\" set VIM_EXE_DIR=%%VIM%%\\%s\n",
          VAR_1, VAR_9, VAR_1);
     FUNC_2(VAR_11, "if exist \"%%VIMRUNTIME%%\\%s\" set VIM_EXE_DIR=%%VIMRUNTIME%%\n", VAR_9);
     FUNC_2(VAR_11, "\n");


     FUNC_2(VAR_11, "if exist \"%%VIM_EXE_DIR%%\\%s\" goto havevim\n",
             VAR_9);
     FUNC_2(VAR_11, "echo \"%%VIM_EXE_DIR%%\\%s\" not found\n", VAR_9);
     FUNC_2(VAR_11, "goto eof\n");
     FUNC_2(VAR_11, "\n");
     FUNC_2(VAR_11, ":havevim\n");

     FUNC_2(VAR_11, "rem collect the arguments in VIMARGS for Win95\n");
     FUNC_2(VAR_11, "set VIMARGS=\n");
     if (*VAR_9 == 'g')
  FUNC_2(VAR_11, "set VIMNOFORK=\n");
     FUNC_2(VAR_11, ":loopstart\n");
     FUNC_2(VAR_11, "if .%%1==. goto loopend\n");
     if (*VAR_9 == 'g')
     {
  FUNC_2(VAR_11, "if NOT .%%1==.-f goto noforkarg\n");
  FUNC_2(VAR_11, "set VIMNOFORK=1\n");
  FUNC_2(VAR_11, ":noforkarg\n");
     }
     FUNC_2(VAR_11, "set VIMARGS=%%VIMARGS%% %%1\n");
     FUNC_2(VAR_11, "shift\n");
     FUNC_2(VAR_11, "goto loopstart\n");
     FUNC_2(VAR_11, ":loopend\n");
     FUNC_2(VAR_11, "\n");

     FUNC_2(VAR_11, "if .%%OS%%==.Windows_NT goto ntaction\n");
     FUNC_2(VAR_11, "\n");



     if (*VAR_9 == 'g')
     {
  FUNC_2(VAR_11, "if .%%VIMNOFORK%%==.1 goto nofork\n");
  FUNC_2(VAR_11, "start ");
     }


     FUNC_2(VAR_11, "\"%%VIM_EXE_DIR%%\\%s\" %s %%VIMARGS%%\n",
            VAR_9, VAR_10);
     FUNC_2(VAR_11, "goto eof\n");
     FUNC_2(VAR_11, "\n");

     if (*VAR_9 == 'g')
     {
  FUNC_2(VAR_11, ":nofork\n");
  FUNC_2(VAR_11, "start /w ");

  FUNC_2(VAR_11, "\"%%VIM_EXE_DIR%%\\%s\" %s %%VIMARGS%%\n",
            VAR_9, VAR_10);
  FUNC_2(VAR_11, "goto eof\n");
  FUNC_2(VAR_11, "\n");
     }

     FUNC_2(VAR_11, ":ntaction\n");
     FUNC_2(VAR_11, "rem for WinNT we can use %%*\n");



     if (*VAR_9 == 'g')
     {
  FUNC_2(VAR_11, "if .%%VIMNOFORK%%==.1 goto noforknt\n");
  FUNC_2(VAR_11, "start \"dummy\" /b ");
     }


     FUNC_2(VAR_11, "\"%%VIM_EXE_DIR%%\\%s\" %s %%*\n", VAR_9, VAR_10);
     FUNC_2(VAR_11, "goto eof\n");
     FUNC_2(VAR_11, "\n");

     if (*VAR_9 == 'g')
     {
  FUNC_2(VAR_11, ":noforknt\n");
  FUNC_2(VAR_11, "start \"dummy\" /b /wait ");

  FUNC_2(VAR_11, "\"%%VIM_EXE_DIR%%\\%s\" %s %%*\n",
            VAR_9, VAR_10);
     }

     FUNC_2(VAR_11, "\n:eof\n");
     FUNC_2(VAR_11, "set VIMARGS=\n");
     if (*VAR_9 == 'g')
  FUNC_2(VAR_11, "set VIMNOFORK=\n");

     FUNC_0(VAR_11);
     FUNC_3("%s has been %s\n", VAR_7,
     VAR_8 == ((void*)0) ? "created" : "overwritten");
 }
    }
}
