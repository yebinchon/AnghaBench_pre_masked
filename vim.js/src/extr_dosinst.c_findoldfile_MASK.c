
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 int * FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_12(char **VAR_1)
{
    char *VAR_2 = *VAR_1;
    size_t VAR_3 = FUNC_10(VAR_0);
    char *VAR_4 = VAR_2 + VAR_3;
    char *VAR_5;
    char *VAR_6;




    if (VAR_2 == ((void*)0)
     || FUNC_11(VAR_2, VAR_0, VAR_3) != 0
     || FUNC_7("/\\", *VAR_4++) == ((void*)0)
     || FUNC_7(VAR_4, '\\') != ((void*)0)
     || FUNC_7(VAR_4, '/') != ((void*)0))
 return;

    VAR_5 = FUNC_1((int)FUNC_10(VAR_4) + 1);
    FUNC_8(VAR_5, VAR_4);
    VAR_5[FUNC_10(VAR_5) - 1] = 'x';

    if (FUNC_0(VAR_5, 0) == 0)
    {
 FUNC_4("\nERROR: %s and %s clash.  Remove or rename %s.\n",
     VAR_5, VAR_4, VAR_5);
 FUNC_3(1);
    }

    if (FUNC_5(VAR_4, VAR_5) != 0)
    {
 FUNC_4("\nERROR: failed to rename %s to %s: %s\n",
     VAR_4, VAR_5, FUNC_9(0));
 FUNC_3(1);
    }

    VAR_6 = FUNC_6(VAR_4);

    if (FUNC_5(VAR_5, VAR_4) != 0)
    {
 FUNC_4("\nERROR: failed to rename %s back to %s: %s\n",
     VAR_5, VAR_4, FUNC_9(0));
 FUNC_3(1);
    }

    FUNC_2(*VAR_1);
    FUNC_2(VAR_5);
    *VAR_1 = VAR_6;
}
