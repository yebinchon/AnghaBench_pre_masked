
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int p_item; } ;
typedef TYPE_1__ luabatch_context_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *,char const*,int *,char*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_10( vlc_object_t *VAR_2, const char * VAR_3,
                      const luabatch_context_t *VAR_4 )
{
    lua_State *VAR_5 = FUNC_0( VAR_2, VAR_4->p_item, VAR_3 );
    if( !VAR_5 )
        return VAR_0;

    int VAR_6 = FUNC_9(VAR_2, VAR_3, VAR_5, "fetch_art", VAR_4);
    if(VAR_6 != VAR_1)
    {
        FUNC_3( VAR_5 );
        return VAR_6;
    }

    if(FUNC_4( VAR_5 ))
    {
        const char * VAR_7;

        if( FUNC_6( VAR_5, -1 ) )
        {
            VAR_7 = FUNC_7( VAR_5, -1 );
            if( VAR_7 && *VAR_7 != 0 )
            {
                FUNC_2( VAR_2, "setting arturl: %s", VAR_7 );
                FUNC_1 ( VAR_4->p_item, VAR_7 );
                FUNC_3( VAR_5 );
                return VAR_1;
            }
        }
        else if( !FUNC_5( VAR_5, -1 ) )
        {
            FUNC_8( VAR_2, "Lua art fetcher script %s: "
                 "didn't return a string", VAR_3 );
        }
    }
    else
    {
        FUNC_8( VAR_2, "Script went completely foobar" );
    }

    FUNC_3( VAR_5 );
    return VAR_0;
}
