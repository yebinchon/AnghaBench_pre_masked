
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct vlclua_playlist {int * L; int filename; int * access; int * path; } ;
struct TYPE_6__ {struct vlclua_playlist* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int luabatch_context_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int,char*) ;
 scalar_t__ FUNC_13 (int *,int) ;
 char* FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*,char*,char const*) ;
 int FUNC_21 (TYPE_1__*,char*,char const*,...) ;
 int VAR_3 ;
 int FUNC_22 (char const*) ;
 scalar_t__ FUNC_23 (int *,char const*) ;
 scalar_t__ FUNC_24 (int ,int *,char const*) ;
 int FUNC_25 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_26(vlc_object_t *VAR_4, const char *VAR_5,
                           const luabatch_context_t *VAR_6)
{
    stream_t *VAR_7 = (stream_t *)VAR_4;
    struct vlclua_playlist *VAR_8 = VAR_7->p_sys;


    lua_State *VAR_9 = FUNC_1();
    if( !VAR_9 )
        return VAR_1;

    VAR_8->L = VAR_9;


    FUNC_2( VAR_9 );

    FUNC_25(VAR_9, VAR_7);
    FUNC_3( VAR_9, "vlc", VAR_3 );
    FUNC_15( VAR_9 );
    FUNC_17( VAR_9 );
    FUNC_16( VAR_9 );
    FUNC_18( VAR_9 );
    FUNC_19( VAR_9 );

    if (VAR_8->path != ((void*)0))
        FUNC_11(VAR_9, VAR_8->path);
    else
        FUNC_10(VAR_9);
    FUNC_12( VAR_9, -2, "path" );

    if (VAR_8->access != ((void*)0))
        FUNC_11(VAR_9, VAR_8->access);
    else
        FUNC_10(VAR_9);
    FUNC_12( VAR_9, -2, "access" );

    FUNC_9( VAR_9, 1 );


    if (FUNC_23(VAR_9, VAR_5))
    {
        FUNC_21(VAR_7, "error setting the module search path for %s", VAR_5);
        goto error;
    }


    if (FUNC_24(FUNC_0(VAR_7), VAR_9, VAR_5))
    {
        FUNC_21(VAR_7, "error loading script %s: %s", VAR_5,
                 FUNC_14(VAR_9, FUNC_6(VAR_9)));
        goto error;
    }

    FUNC_5( VAR_9, "probe" );
    if( !FUNC_7( VAR_9, -1 ) )
    {
        FUNC_21(VAR_7, "error running script %s: function %s(): %s",
                 VAR_5, "probe", "not found");
        goto error;
    }

    if( FUNC_8( VAR_9, 0, 1, 0 ) )
    {
        FUNC_21(VAR_7, "error running script %s: function %s(): %s",
                 VAR_5, "probe", FUNC_14(VAR_9, FUNC_6(VAR_9)));
        goto error;
    }

    if( FUNC_6( VAR_9 ) )
    {
        if( FUNC_13( VAR_9, 1 ) )
        {
            FUNC_20(VAR_7, "Lua playlist script %s's "
                    "probe() function was successful", VAR_5 );
            FUNC_9( VAR_9, 1 );
            VAR_8->filename = FUNC_22(VAR_5);
            return VAR_2;
        }
    }

    (void) VAR_6;
error:
    FUNC_9( VAR_9, 1 );
    FUNC_4(VAR_8->L);
    return VAR_0;
}
