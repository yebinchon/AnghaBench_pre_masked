
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, char **VAR_1,
                        char **VAR_2, int *VAR_3)
{
    char *VAR_4 = ((void*)0);
    char *VAR_5 = ((void*)0);

    VAR_4 = VAR_0 + FUNC_2( VAR_0 );


    for (; VAR_0 < VAR_4 && ( *VAR_0 == '\t' || *VAR_0 == ' ' );
         VAR_0++ );


    VAR_5 = VAR_0;
    VAR_0 = FUNC_1( VAR_0, ',' );
    if ( VAR_0 )
    {
        *VAR_0 = '\0';
        *VAR_3 = FUNC_0( VAR_5 );
    }
    else
    {
        return;
    }

    if ( VAR_0 < VAR_4 )
        VAR_0++;


    VAR_5 = FUNC_3( VAR_0, " - " );


    if ( VAR_5 )
    {

        *VAR_5 = '\0';
        *VAR_1 = VAR_0;
        *VAR_2 = VAR_5 + 3;
        return;
    }


    if ( *VAR_0 == ',' )
    {

        VAR_0++;
        *VAR_2 = VAR_0;
        return;
    }

    VAR_5 = VAR_0;
    VAR_0 = FUNC_1( VAR_0, ',' );
    if ( VAR_0 )
    {

        *VAR_0 = '\0';
        *VAR_1 = VAR_5;
        *VAR_2 = VAR_0+1;
    }
    else
    {

        *VAR_2 = VAR_5;
    }
    return;
}
