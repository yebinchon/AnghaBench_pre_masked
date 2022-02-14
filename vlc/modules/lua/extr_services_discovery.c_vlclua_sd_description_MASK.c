
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int) ;
 char const* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*,char const*,...) ;

__attribute__((used)) static const char *FUNC_8( vlc_object_t *VAR_0, lua_State *VAR_1,
                                          const char *VAR_2 )
{
    FUNC_1( VAR_1, "descriptor" );
    if( !FUNC_2( VAR_1, -1 ) )
    {
        FUNC_7( VAR_0, "No 'descriptor' function in '%s'", VAR_2 );
        FUNC_5( VAR_1, 1 );
        return ((void*)0);
    }

    if( FUNC_4( VAR_1, 0, 1, 0 ) )
    {
        FUNC_7( VAR_0, "Error while running script %s, "
                  "function descriptor(): %s", VAR_2,
                  FUNC_6( VAR_1, -1 ) );
        FUNC_5( VAR_1, 1 );
        return ((void*)0);
    }

    FUNC_0( VAR_1, -1, "title" );
    if ( !FUNC_3( VAR_1, -1 ) )
    {
        FUNC_7( VAR_0, "'descriptor' function in '%s' returned no title",
                  VAR_2 );
        FUNC_5( VAR_1, 2 );
        return ((void*)0);
    }

    return FUNC_6( VAR_1, -1 );
}
