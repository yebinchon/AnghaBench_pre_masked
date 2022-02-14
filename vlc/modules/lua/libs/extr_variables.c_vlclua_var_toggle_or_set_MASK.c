
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;

int FUNC_9( lua_State *VAR_0, vlc_object_t *VAR_1,
                              const char *VAR_2 )
{
    bool VAR_3;
    if( FUNC_1( VAR_0 ) > 1 ) return FUNC_8( VAR_0 );

    if( FUNC_1( VAR_0 ) == 0 )
    {
        VAR_3 = FUNC_7( VAR_1, VAR_2 );
        goto end;
    }


    const char *VAR_4 = FUNC_0( VAR_0, -1 );
    FUNC_2( VAR_0, 1 );

    if( VAR_4 && !FUNC_4(VAR_4, "on") )
        VAR_3 = 1;
    else if( VAR_4 && !FUNC_4(VAR_4, "off") )
        VAR_3 = 0;
    else
    {
        VAR_3 = FUNC_5( VAR_1, VAR_2 );
        goto end;
    }

    if( VAR_3 != FUNC_5( VAR_1, VAR_2 ) )
        FUNC_6( VAR_1, VAR_2, VAR_3 );

end:
    FUNC_3( VAR_0, VAR_3 );
    return 1;
}
