
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int lua_State ;
struct TYPE_3__ {int psz_name; } ;
typedef TYPE_1__ extension_t ;


 int FUNC_0 (char**,char*,char*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,char const*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (int *,int *,char*) ;
 TYPE_1__* FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_2( VAR_0, 1 );
    vlc_object_t *VAR_2 = FUNC_10( VAR_0 );
    extension_t *VAR_3 = FUNC_9( VAR_0 );
    FUNC_4( VAR_2, "loading module '%s' from extension package",
             VAR_1 );
    char *VAR_4, *VAR_5, *VAR_6;
    VAR_5 = FUNC_5( VAR_3->psz_name );
    VAR_6 = FUNC_7( VAR_5, '/' );
    if( !VAR_6 )
    {
        FUNC_1( VAR_5 );
        return FUNC_3( VAR_0, "could not find package name" );
    }
    *VAR_6 = '\0';
    if( -1 == FUNC_0( &VAR_4,
                        "%s/modules/%s.luac", VAR_5, VAR_1 ) )
    {
        FUNC_1( VAR_5 );
        return 1;
    }
    int VAR_7 = FUNC_8( VAR_2, VAR_0, VAR_4 );
    if( VAR_7 != 0 )
    {

        VAR_4[ FUNC_6( VAR_4 ) - 1 ] = '\0';
        VAR_7 = FUNC_8( VAR_2, VAR_0, VAR_4 );
    }
    FUNC_1( VAR_4 );
    FUNC_1( VAR_5 );
    if( VAR_7 != 0 )
    {
        return FUNC_3( VAR_0, "unable to load module '%s' from package",
                           VAR_1 );
    }
    return 0;
}
