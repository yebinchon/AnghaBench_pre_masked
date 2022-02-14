
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,int,int) ;
 int * FUNC_6 (char const*) ;
 char* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_1( VAR_0, 1 );
    DIR *VAR_2;
    int VAR_3 = 0;

    if( ( VAR_2 = FUNC_6( VAR_1 ) ) == ((void*)0) )
        return FUNC_2( VAR_0, "cannot open directory `%s'.", VAR_1 );

    FUNC_3( VAR_0 );
    for( ;; )
    {
        const char *VAR_4 = FUNC_7( VAR_2 );
        if( !VAR_4 ) break;
        VAR_3++;
        FUNC_4( VAR_0, VAR_4 );
        FUNC_5( VAR_0, -2, VAR_3 );
    }
    FUNC_0( VAR_2 );
    return 1;
}
