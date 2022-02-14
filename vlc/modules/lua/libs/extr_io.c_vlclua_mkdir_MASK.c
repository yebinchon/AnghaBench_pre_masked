
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char const*,int *,int ) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_1 )
{
    if( FUNC_1( VAR_1 ) < 2 ) return FUNC_5( VAR_1 );

    const char* VAR_2 = FUNC_0( VAR_1, 1 );
    const char* VAR_3 = FUNC_0( VAR_1, 2 );
    if ( !VAR_2 || !VAR_3 )
        return FUNC_5( VAR_1 );
    int VAR_4 = FUNC_4( VAR_2, FUNC_3( VAR_3, ((void*)0), 0 ) );
    int VAR_5 = VAR_4 != 0 ? VAR_0 : 0;
    FUNC_2( VAR_1, VAR_4 );
    FUNC_2( VAR_1, VAR_5 );
    return 2;
}
