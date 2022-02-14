
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
    char VAR_6[VAR_0];
    FILE *VAR_7;
    struct stat VAR_8;


    VAR_5 = FUNC_7(VAR_4) - FUNC_7(VAR_1);
    if (VAR_5 <= 0
     || FUNC_6(VAR_4 + VAR_5, VAR_1) != 0
     || (VAR_4[VAR_5 - 1] != '/'
  && VAR_4[VAR_5 - 1] != '\\'))
    {
 FUNC_3("ERROR: Install program not in directory \"%s\"\n",
  VAR_1);
 FUNC_3("This program can only work when it is located in its original directory\n");
 FUNC_2(1);
    }



    FUNC_4(VAR_6, "%s\\filetype.vim", VAR_4);
    if (FUNC_5(VAR_6, &VAR_8) < 0)
    {
 FUNC_3("ERROR: Cannot find filetype.vim in \"%s\"\n", VAR_4);
 FUNC_3("It looks like you did not unpack the runtime archive.\n");
 FUNC_3("You must unpack the runtime archive \"vim%srt.zip\" before installing.\n",
  VAR_1 + 3);
 FUNC_2(1);
    }


    if ((VAR_7 = FUNC_1("gvim.exe", "r")) != ((void*)0))
    {
 FUNC_0(VAR_7);
 VAR_2 = 1;
    }
    if ((VAR_7 = FUNC_1("vim.exe", "r")) != ((void*)0))
    {
 FUNC_0(VAR_7);
 VAR_3 = 1;
    }
    if (!VAR_2 && !VAR_3)
    {
 FUNC_3("ERROR: Cannot find any Vim executables in \"%s\"\n\n",
          VAR_4);
 FUNC_2(1);
    }
}
