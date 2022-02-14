
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int thread; int * cat_delays; } ;
struct TYPE_3__ {int cat_delay; } ;
typedef TYPE_1__ input_control_param_t ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_1__ const*) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int,int ) ;
 struct vlc_player_input* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int) ;

int
FUNC_7(vlc_player_t *VAR_7, enum es_format_category_e VAR_8,
                            vlc_tick_t VAR_9, enum vlc_player_whence VAR_10)
{
    bool VAR_11 = VAR_10 == VAR_4;
    struct vlc_player_input *VAR_12 = FUNC_5(VAR_7);
    if (!VAR_12)
        return VAR_3;

    if (VAR_8 != VAR_0 && VAR_8 != VAR_2)
        return VAR_3;
    vlc_tick_t *VAR_13 = &VAR_12->cat_delays[VAR_8];

    if (VAR_11)
        *VAR_13 = VAR_9;
    else
    {
        *VAR_13 += VAR_9;
        VAR_9 = *VAR_13;
    }

    const input_control_param_t VAR_14 = { .cat_delay = { VAR_8, VAR_9 } };
    int VAR_15 = FUNC_3(VAR_12->thread, VAR_1,
                                &VAR_14);
    if (VAR_15 == VAR_5)
    {
        FUNC_6(VAR_7, FUNC_1("%s delay: %i ms"),
                               FUNC_2(VAR_8),
                               (int)FUNC_0(VAR_9));
        FUNC_4(VAR_7, VAR_6, VAR_8, VAR_9);
    }
    return VAR_5;
}
