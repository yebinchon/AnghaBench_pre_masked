
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* oldexe; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**) ;
 int * FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int) ;
 char* VAR_6 ;
 scalar_t__ FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (char*,...) ;
 int VAR_7 ;
 int FUNC_8 (char*,char*) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static void
FUNC_9(void)
{
    char *VAR_9;
    char VAR_10[VAR_0];
    FILE *VAR_11;
    int VAR_12;
    int VAR_13;


    FUNC_7("Inspecting system...\n");




    VAR_9 = FUNC_4("VIM");
    if (VAR_9 != ((void*)0) && FUNC_6(VAR_9, -1, VAR_4, VAR_7 - 1) != 0)
    {
 FUNC_7("------------------------------------------------------\n");
 FUNC_7("$VIM is set to \"%s\".\n", VAR_9);
 FUNC_7("This is different from where this version of Vim is:\n");
 FUNC_8(VAR_10, VAR_4);
 *(VAR_10 + VAR_7 - 1) = VAR_2;
 FUNC_7("\"%s\"\n", VAR_10);
 FUNC_7("You must adjust or remove the setting of $VIM,\n");
 if (VAR_5)
 {
     FUNC_7("to be able to use this install program.\n");
     FUNC_5(1);
 }
 FUNC_7("otherwise Vim WILL NOT WORK properly!\n");
 FUNC_7("------------------------------------------------------\n");
    }




    VAR_9 = FUNC_4("VIMRUNTIME");
    if (VAR_9 != ((void*)0) && FUNC_6(VAR_9, -1, VAR_4, -1) != 0)
    {
 FUNC_7("------------------------------------------------------\n");
 FUNC_7("$VIMRUNTIME is set to \"%s\".\n", VAR_9);
 FUNC_7("This is different from where this version of Vim is:\n");
 FUNC_7("\"%s\"\n", VAR_4);
 FUNC_7("You must adjust or remove the setting of $VIMRUNTIME,\n");
 if (VAR_5)
 {
     FUNC_7("to be able to use this install program.\n");
     FUNC_5(1);
 }
 FUNC_7("otherwise Vim WILL NOT WORK properly!\n");
 FUNC_7("------------------------------------------------------\n");
    }




    FUNC_1(VAR_1);






    VAR_13 = 0;
    for (VAR_12 = 1; VAR_12 < VAR_3; ++VAR_12)
    {
 FUNC_2(&(VAR_8[VAR_12].oldexe));
 if (VAR_8[VAR_12].oldexe != ((void*)0))
     VAR_13 = 1;
    }

    if (VAR_13)
    {
 FUNC_7("Warning: Found Vim executable(s) in your $PATH:\n");
 for (VAR_12 = 1; VAR_12 < VAR_3; ++VAR_12)
     if (VAR_8[VAR_12].oldexe != ((void*)0))
  FUNC_7("%s\n", VAR_8[VAR_12].oldexe);
 FUNC_7("It will be used instead of the version you are installing.\n");
 FUNC_7("Please delete or rename it, or adjust your $PATH setting.\n");
    }




    FUNC_8(VAR_6, VAR_4);
    FUNC_8(VAR_6 + VAR_7, "_vimrc");
    if ((VAR_11 = FUNC_3(VAR_6, "r")) == ((void*)0))
    {
 FUNC_8(VAR_6 + VAR_7, "vimrc~1");
 if ((VAR_11 = FUNC_3(VAR_6, "r")) == ((void*)0))
 {
     FUNC_8(VAR_6 + VAR_7, ".vimrc");
     VAR_11 = FUNC_3(VAR_6, "r");
 }
    }
    if (VAR_11 != ((void*)0))
 FUNC_0(VAR_11);
    else
 *VAR_6 = VAR_2;
}
