
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int meta_fetcher_scope_t ;
struct TYPE_4__ {int (* pf_validator ) (TYPE_1__ const*,int ) ;} ;
typedef TYPE_1__ luabatch_context_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*,char const*) ;
 int FUNC_12 (int *,char*,char const*,char const*,...) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_15 (int *,int *,char const*) ;

__attribute__((used)) static int FUNC_16( vlc_object_t *VAR_4, const char * VAR_5,
                lua_State * VAR_6, const char *VAR_7,
                const luabatch_context_t *VAR_8 )
{


    FUNC_8( VAR_6 );
    FUNC_9( VAR_6, VAR_7 );


    if( FUNC_15( VAR_4, VAR_6, VAR_5 ) )
    {
        FUNC_12( VAR_4, "Error loading script %s: %s", VAR_5,
                 FUNC_10( VAR_6, FUNC_4( VAR_6 ) ) );
        goto error;
    }


    meta_fetcher_scope_t VAR_9 = VAR_1;
    FUNC_3( VAR_6, "descriptor" );
    if( FUNC_5( VAR_6, FUNC_4( VAR_6 ) ) && !FUNC_6( VAR_6, 0, 1, 0 ) )
    {
        FUNC_2( VAR_6, -1, "scope" );
        char *VAR_10 = FUNC_1( VAR_6, -1 );
        if ( VAR_10 && !FUNC_13( VAR_10, "local" ) )
            VAR_9 = VAR_0;
        FUNC_0( VAR_10 );
        FUNC_7( VAR_6, 1 );
    }
    FUNC_7( VAR_6, 1 );

    if ( VAR_8 && VAR_8->pf_validator && !VAR_8->pf_validator( VAR_8, VAR_9 ) )
    {
        FUNC_11( VAR_4, "skipping script (unmatched scope) %s", VAR_5 );
        goto error;
    }

    FUNC_3( VAR_6, VAR_7 );

    if( !FUNC_5( VAR_6, FUNC_4( VAR_6 ) ) )
    {
        FUNC_12( VAR_4, "Error while running script %s, "
                 "function %s() not found", VAR_5, VAR_7 );
        goto error;
    }

    if( FUNC_6( VAR_6, 0, 1, 0 ) )
    {
        FUNC_12( VAR_4, "Error while running script %s, "
                 "function %s(): %s", VAR_5, VAR_7,
                 FUNC_10( VAR_6, FUNC_4( VAR_6 ) ) );
        goto error;
    }
    return VAR_3;

error:
    FUNC_7( VAR_6, 1 );
    return VAR_2;
}
