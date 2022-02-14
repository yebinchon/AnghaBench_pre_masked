
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct tm*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*) ;
 size_t FUNC_6 (char*,size_t,char const*,struct tm*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

char *FUNC_10( const char *VAR_0 )
{
    time_t VAR_1;
    struct tm VAR_2;

    if (FUNC_4 (VAR_0, "") == 0)
        return FUNC_5 ("");


    FUNC_8( &VAR_1 );


    FUNC_1( &VAR_1, &VAR_2 );
    for (size_t VAR_3 = FUNC_7 (VAR_0) + 32;; VAR_3 += 32)
    {
        char *VAR_4 = FUNC_2 (VAR_3);
        if (VAR_4 == ((void*)0))
            return ((void*)0);

        size_t VAR_5 = FUNC_6 (VAR_4, VAR_3, VAR_0, &VAR_2);
        if (VAR_5 > 0)
        {
            char *VAR_6 = FUNC_3 (VAR_4, VAR_5 + 1);
            return VAR_6 ? VAR_6 : VAR_4;
        }
        FUNC_0 (VAR_4);
    }
    FUNC_9 ();
}
