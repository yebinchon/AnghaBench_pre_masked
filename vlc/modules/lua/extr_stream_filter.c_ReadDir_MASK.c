
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vlclua_playlist {int filename; int * L; } ;
struct TYPE_6__ {int * psz_url; struct vlclua_playlist* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int lua_State ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int ,int,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (TYPE_1__*,char*) ;
 int FUNC_17 (TYPE_1__*,char*,...) ;
 int VAR_2 ;
 int * FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(stream_t *VAR_3, input_item_node_t *VAR_4)
{
    struct vlclua_playlist *VAR_5 = VAR_3->p_sys;
    lua_State *VAR_6 = VAR_5->L;

    FUNC_6( VAR_6, "vlc", VAR_2 );

    FUNC_7( VAR_6, "parse" );

    if( !FUNC_9( VAR_6, -1 ) )
    {
        FUNC_17(VAR_3, "error running script %s: function %s(): %s",
                 VAR_5->filename, "parse", "not found");
        return VAR_0;
    }

    if( FUNC_12( VAR_6, 0, 1, 0 ) )
    {
        FUNC_17(VAR_3, "error running script %s: function %s(): %s",
                 VAR_5->filename, "parse", FUNC_15(VAR_6, FUNC_8(VAR_6)));
        return VAR_0;
    }

    if (!FUNC_8(VAR_6))
    {
        FUNC_16(VAR_3, "script went completely foobar");
        return VAR_0;
    }

    if (!FUNC_10(VAR_6, -1))
    {
        FUNC_17(VAR_3, "Playlist should be a table.");
        return VAR_0;
    }

    FUNC_14(VAR_6);


    while (FUNC_11(VAR_6, -2))
    {
        input_item_t *VAR_7 = FUNC_18(FUNC_0(VAR_3), VAR_6);
        if (VAR_7 != ((void*)0))
        {


            char *VAR_8 = FUNC_2(VAR_7);
            if (VAR_8 == ((void*)0) && VAR_3->psz_url != ((void*)0))
                FUNC_4(VAR_7, VAR_3->psz_url);
            FUNC_1(VAR_8);

            FUNC_5(VAR_4, VAR_7);
            FUNC_3(VAR_7);
        }

        FUNC_13(VAR_6, 1);
    }


    return VAR_1;
}
