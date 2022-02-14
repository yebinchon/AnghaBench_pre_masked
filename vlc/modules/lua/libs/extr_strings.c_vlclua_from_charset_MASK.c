
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int,size_t*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0 )
{
    if( FUNC_4( VAR_0 ) < 2 ) return FUNC_6( VAR_0 );

    size_t VAR_1;
    const char *VAR_2 = FUNC_2( VAR_0, 2, &VAR_1 );
    if( VAR_1 == 0 ) return FUNC_6( VAR_0 );

    const char *VAR_3 = FUNC_3( VAR_0, 1 );
    char *VAR_4 = FUNC_0( VAR_3, VAR_2, VAR_1 );
    FUNC_5( VAR_0, VAR_4 ? VAR_4 : "" );
    FUNC_1( VAR_4 );
    return 1;
}
