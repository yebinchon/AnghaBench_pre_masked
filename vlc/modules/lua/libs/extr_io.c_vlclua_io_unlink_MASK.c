
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_1 )
{
    if( FUNC_2( VAR_1 ) < 1 )
        return FUNC_1( VAR_1, "Usage: vlc.io.unlink(path)" );
    const char* VAR_2 = FUNC_0( VAR_1, 1 );
    int VAR_3 = FUNC_4( VAR_2 );
    int VAR_4 = VAR_3 != 0 ? VAR_0 : 0;
    FUNC_3( VAR_1, VAR_3 );
    FUNC_3( VAR_1, VAR_4 );
    return 2;
}
