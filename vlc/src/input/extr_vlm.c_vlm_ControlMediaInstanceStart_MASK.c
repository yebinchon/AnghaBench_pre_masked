
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlm_t ;
struct TYPE_12__ {int i_input; char* psz_output; int i_option; char** ppsz_option; char** ppsz_input; int psz_name; scalar_t__ b_vod; int b_enabled; } ;
typedef TYPE_2__ vlm_media_t ;
struct TYPE_11__ {int p_media; } ;
struct TYPE_13__ {TYPE_2__ cfg; int instance; int i_instance; TYPE_1__ vod; } ;
typedef TYPE_3__ vlm_media_sys_t ;
struct TYPE_14__ {int i_index; int p_item; int * player; int p_parent; } ;
typedef TYPE_4__ vlm_media_instance_sys_t ;
typedef int vlc_player_t ;
typedef int int64_t ;


 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char**,char*,char*,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,char*,char const*) ;
 char* FUNC_9 (char*,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 TYPE_3__* FUNC_18 (int *,int ) ;
 TYPE_4__* FUNC_19 (TYPE_3__*,char const*) ;
 TYPE_4__* FUNC_20 (TYPE_3__*,char const*) ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_23( vlm_t *VAR_6, int64_t VAR_7, const char *VAR_8, int VAR_9, const char *VAR_10 )
{
    vlm_media_sys_t *VAR_11 = FUNC_18( VAR_6, VAR_7 );
    vlm_media_instance_sys_t *VAR_12;

    if( !VAR_11 || !VAR_11->cfg.b_enabled || VAR_11->cfg.i_input <= 0 )
        return VAR_0;



    if( ( VAR_11->cfg.b_vod && !VAR_10 ) || ( !VAR_11->cfg.b_vod && VAR_10 ) )
        return VAR_0;

    if( VAR_9 < 0 || VAR_9 >= VAR_11->cfg.i_input )
        return VAR_0;

    VAR_12 = FUNC_19( VAR_11, VAR_8 );
    if( !VAR_12 )
    {
        vlm_media_t *VAR_13 = &VAR_11->cfg;

        VAR_12 = FUNC_20( VAR_11, VAR_8 );
        if( !VAR_12 )
            return VAR_1;

        if ( VAR_13->b_vod )
        {
            FUNC_6( VAR_12->p_parent, "vod-media", VAR_4 );
            FUNC_7( VAR_12->p_parent, "vod-media",
                            VAR_11->vod.p_media );
            FUNC_6( VAR_12->p_parent, "vod-session", VAR_5 );
            FUNC_8( VAR_12->p_parent, "vod-session", VAR_8 );
        }

        if( VAR_13->psz_output != ((void*)0) || VAR_10 != ((void*)0) )
        {
            char *VAR_14;
            if( FUNC_1( &VAR_14, "sout=%s%s%s",
                      VAR_13->psz_output ? VAR_13->psz_output : "",
                      (VAR_13->psz_output && VAR_10) ? ":" : VAR_10 ? "#" : "",
                      VAR_10 ? VAR_10 : "" ) != -1 )
            {
                FUNC_3( VAR_12->p_item, VAR_14, VAR_2 );
                FUNC_2( VAR_14 );
            }
        }

        for( int VAR_15 = 0; VAR_15 < VAR_13->i_option; VAR_15++ )
            FUNC_3( VAR_12->p_item, VAR_13->ppsz_option[VAR_15], VAR_2 );
        FUNC_0( VAR_11->i_instance, VAR_11->instance, VAR_12 );
    }


    vlc_player_t *VAR_16 = VAR_12->player;
    FUNC_12(VAR_16);
    if (FUNC_10(VAR_16))
    {
        if( VAR_12->i_index == VAR_9 )
        {
            if (FUNC_11(VAR_16))
                FUNC_13(VAR_16);
            return VAR_3;
        }

        FUNC_16(VAR_16);
        FUNC_17(VAR_16);
        FUNC_22( VAR_6, VAR_7, VAR_11->cfg.psz_name );
        FUNC_12(VAR_16);
    }


    VAR_12->i_index = VAR_9;
    if( FUNC_5( VAR_11->cfg.ppsz_input[VAR_12->i_index], "://" ) == ((void*)0) )
    {
        char *VAR_17 = FUNC_9(
                          VAR_11->cfg.ppsz_input[VAR_12->i_index], ((void*)0) );
        FUNC_4( VAR_12->p_item, VAR_17 ) ;
        FUNC_2( VAR_17 );
    }
    else
        FUNC_4( VAR_12->p_item, VAR_11->cfg.ppsz_input[VAR_12->i_index] ) ;

    FUNC_14(VAR_16, VAR_12->p_item);
    FUNC_15(VAR_16);
    FUNC_17(VAR_16);

    FUNC_21( VAR_6, VAR_7, VAR_11->cfg.psz_name );

    return VAR_3;
}
