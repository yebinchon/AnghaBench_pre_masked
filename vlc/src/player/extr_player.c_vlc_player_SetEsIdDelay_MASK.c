
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_6__ {int name; TYPE_1__ fmt; } ;
struct vlc_player_track_priv {scalar_t__ delay; TYPE_2__ t; } ;
struct vlc_player_input {int thread; } ;
struct TYPE_7__ {int es_delay; } ;
typedef TYPE_3__ input_control_param_t ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,TYPE_3__ const*) ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int *,scalar_t__) ;
 struct vlc_player_input* FUNC_4 (int *) ;
 struct vlc_player_track_priv* FUNC_5 (struct vlc_player_input*,int *,int *) ;
 int FUNC_6 (int *,int ,int ,int) ;

int
FUNC_7(vlc_player_t *VAR_8, vlc_es_id_t *VAR_9,
                        vlc_tick_t VAR_10, enum vlc_player_whence VAR_11)
{
    bool VAR_12 = VAR_11 == VAR_5;
    struct vlc_player_input *VAR_13 = FUNC_4(VAR_8);
    if (!VAR_13)
        return VAR_4;

    struct vlc_player_track_priv *VAR_14 =
        FUNC_5(VAR_13, VAR_9, ((void*)0));
    if (VAR_14 == ((void*)0) ||
        (VAR_14->t.fmt.i_cat != VAR_0 && VAR_14->t.fmt.i_cat != VAR_3))
        return VAR_4;

    if (VAR_12)
        VAR_14->delay = VAR_10;
    else
    {
        if (VAR_14->delay == VAR_2)
            VAR_14->delay = 0;
        VAR_14->delay += VAR_10;
        VAR_10 = VAR_14->delay;
    }

    const input_control_param_t VAR_15 = { .es_delay = { *VAR_9, VAR_10 } };
    int VAR_16 = FUNC_2(VAR_13->thread, VAR_1,
                                &VAR_15);
    if (VAR_16 == VAR_6)
    {
        if (VAR_10 != VAR_2)
            FUNC_6(VAR_8, FUNC_1("%s delay: %i ms"),
                                   VAR_14->t.name,
                                   (int)FUNC_0(VAR_10));
        FUNC_3(VAR_8, VAR_7, VAR_9, VAR_10);
    }

    return VAR_6;
}
