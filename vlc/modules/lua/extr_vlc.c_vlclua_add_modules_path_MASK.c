
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char const*) ;
 char* FUNC_8 (char*,char) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 int FUNC_10 (char*,char***) ;
 int FUNC_11 (char**) ;

int FUNC_12( lua_State *VAR_1, const char *VAR_2 )
{





    char *VAR_3 = FUNC_7( VAR_2 );
    if( !VAR_3 )
        return 1;

    char *VAR_4 = FUNC_8( VAR_3, VAR_0 );
    if( !VAR_4 )
    {
        FUNC_0( VAR_3 );
        return 1;
    }
    *VAR_4 = '\0';


    VAR_4 = FUNC_8( VAR_3, VAR_0 );
    if( !VAR_4 )
    {
        FUNC_0( VAR_3 );
        return 1;
    }
    *VAR_4 = '\0';


    int VAR_5 = 0;
    FUNC_3( VAR_1, "package" );


    VAR_5 += FUNC_9( VAR_1, VAR_3 );
    *VAR_4 = VAR_0;


    VAR_5 += FUNC_9( VAR_1, VAR_3 );

    char **VAR_6 = ((void*)0);
    FUNC_10( VAR_4+1 , &VAR_6 );
    char **VAR_7 = VAR_6;

    for( ; *VAR_7 && FUNC_6( *VAR_7, VAR_3 ); VAR_7++ );
    FUNC_0( VAR_3 );

    for( ; *VAR_7; VAR_7++ )
    {
        VAR_3 = *VAR_7;


        VAR_4 = FUNC_8( VAR_3, VAR_0 );
        if( !VAR_4 )
        {
            FUNC_11( VAR_6 );
            return 1;
        }

        *VAR_4 = '\0';
        VAR_5 += FUNC_9( VAR_1, VAR_3 );
        *VAR_4 = VAR_0;
        VAR_5 += FUNC_9( VAR_1, VAR_3 );
    }

    FUNC_2( VAR_1, -(VAR_5+1), "path" );
    FUNC_1( VAR_1, VAR_5+1 );
    FUNC_5( VAR_1, -2, "path");
    FUNC_4( VAR_1, 1 );

    FUNC_11( VAR_6 );
    return 0;
}
