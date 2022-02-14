
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_2__ {int active; int installfunc; int changefunc; int text; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_8(void)
{
    struct stat VAR_10;
    char VAR_11[VAR_0];
    char *VAR_12;

    VAR_3[VAR_2].text = FUNC_0(150);
    VAR_3[VAR_2].changefunc = VAR_1;
    VAR_3[VAR_2].installfunc = VAR_4;
    VAR_3[VAR_2].active = 1;



    if (FUNC_2("HOME") != ((void*)0))
    {
 VAR_6 = (int)VAR_7;
 FUNC_4(VAR_11, "%s\\vimfiles\\compiler", FUNC_2("HOME"));
 if (FUNC_5(VAR_11, &VAR_10) == 0)
     VAR_6 = (int)VAR_8;
    }
    else
    {
 VAR_6 = (int)VAR_9;
 VAR_12 = FUNC_2("VIM");
 if (VAR_12 == ((void*)0))
     FUNC_1(VAR_5, VAR_11);
 else
     FUNC_7(VAR_11, VAR_12);
 FUNC_6(VAR_11, "\\vimfiles\\compiler");
 if (FUNC_5(VAR_11, &VAR_10) == 0)
     VAR_6 = (int)VAR_8;
    }

    FUNC_3(VAR_2);
    ++VAR_2;
}
