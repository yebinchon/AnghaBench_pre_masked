
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int DIR ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int,int) ;
 int * FUNC_7 (char const*) ;
 char* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_0 )
{
    if( FUNC_3( VAR_0 ) < 1 )
        return FUNC_2( VAR_0, "Usage: vlc.io.readdir(name)" );
    const char* VAR_1 = FUNC_1( VAR_0, 1 );
    DIR* VAR_2 = FUNC_7( VAR_1 );
    if ( VAR_2 == ((void*)0) )
        return 0;

    FUNC_4( VAR_0 );
    const char* VAR_3;
    int VAR_4 = 1;
    while ( ( VAR_3 = FUNC_8( VAR_2 ) ) != ((void*)0) )
    {
        FUNC_5( VAR_0, VAR_3 );
        FUNC_6( VAR_0, -2, VAR_4 );
        VAR_4++;
    }
    FUNC_0( VAR_2 );
    return 1;
}
