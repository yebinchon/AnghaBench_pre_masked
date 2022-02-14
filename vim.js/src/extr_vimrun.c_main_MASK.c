
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 char* VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 char* VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;

int
FUNC_7(void)
{
    const char *VAR_2;
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;







    VAR_2 = VAR_0;





    while (*VAR_2)
    {
 if (*VAR_2 == '"')
     VAR_4 = !VAR_4;
 else if (!VAR_4 && *VAR_2 == ' ')
 {
     ++VAR_2;
     break;
 }
 ++VAR_2;
    }




    if (VAR_2[0] == '-' && VAR_2[1] == 's' && VAR_2[2] == ' ')
    {
 VAR_5 = 1;
 VAR_2 += 3;
 while (*VAR_2 == ' ')
     ++VAR_2;
    }


    FUNC_5(VAR_2);




    VAR_3 = FUNC_6(VAR_2);

    if (VAR_3 == -1)
 FUNC_3("vimrun system(): ");
    else if (VAR_3 != 0)
 FUNC_4("shell returned %d\n", VAR_3);

    if (!VAR_5)
    {
 FUNC_5("Hit any key to close this window...");


 while (FUNC_2())
     (void)FUNC_1();

 (void)FUNC_1();
    }

    return VAR_3;
}
