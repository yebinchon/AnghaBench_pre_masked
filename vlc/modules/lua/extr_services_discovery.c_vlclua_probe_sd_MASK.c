
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_probe_t ;
typedef int vlc_object_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,char*,char const*,int ) ;
 scalar_t__ FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *,int *,char*) ;
 char* FUNC_11 (char*,char const*) ;
 char* FUNC_12 (int *,int *,char*) ;

int FUNC_13( vlc_object_t *VAR_3, const char *VAR_4 )
{
    vlc_probe_t *VAR_5 = (vlc_probe_t *)VAR_3;

    char *VAR_6 = FUNC_11( "sd", VAR_4 );
    if( VAR_6 == ((void*)0) )
    {

        FUNC_7( VAR_5, "Couldn't probe lua services discovery script \"%s\".",
                 VAR_4 );
        return VAR_2;
    }

    lua_State *VAR_7 = FUNC_3();
    if( !VAR_7 )
    {
        FUNC_7( VAR_5, "Could not create new Lua State" );
        FUNC_2( VAR_6 );
        return VAR_1;
    }
    FUNC_4( VAR_7 );
    if( FUNC_9( VAR_7, VAR_6 ) )
    {
        FUNC_7( VAR_5, "Error while setting the module search path for %s",
                 VAR_6 );
        FUNC_5( VAR_7 );
        FUNC_2( VAR_6 );
        return VAR_1;
    }
    if( FUNC_10( VAR_3, VAR_7, VAR_6 ) )
    {
        FUNC_7( VAR_5, "Error loading script %s: %s", VAR_6,
                 FUNC_6( VAR_7, -1 ) );
        FUNC_5( VAR_7 );
        FUNC_2( VAR_6 );
        return VAR_2;
    }
    const char *VAR_8 = FUNC_12( VAR_3, VAR_7, VAR_6 );
    if( VAR_8 == ((void*)0) )
        VAR_8 = VAR_4;

    int VAR_9 = VAR_1;
    char *VAR_10 = FUNC_1( VAR_4 );
    char *VAR_11;
    if( FUNC_0( &VAR_11, "lua{sd='%s'}", VAR_10 ) != -1 )
    {
        VAR_9 = FUNC_8( VAR_5, VAR_11, VAR_8, VAR_0 );
        FUNC_2( VAR_11 );
    }
    FUNC_2( VAR_10 );

    FUNC_5( VAR_7 );
    FUNC_2( VAR_6 );
    return VAR_9;
}
