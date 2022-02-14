
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_viewpoint_t ;
typedef int vlc_player_t ;
struct vlc_player_input {int thread; } ;
struct TYPE_3__ {int const viewpoint; } ;
typedef TYPE_1__ input_control_param_t ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 struct vlc_player_input* FUNC_1 (int *) ;

void
FUNC_2(vlc_player_t *VAR_3,
                           const vlc_viewpoint_t *VAR_4,
                           enum vlc_player_whence VAR_5)
{
    struct vlc_player_input *VAR_6 = FUNC_1(VAR_3);
    if (VAR_6)
    {
        input_control_param_t VAR_7 = { .viewpoint = *VAR_4 };
        if (VAR_5 == VAR_2)
            FUNC_0(VAR_6->thread, VAR_0,
                              &VAR_7);
        else
            FUNC_0(VAR_6->thread, VAR_1,
                              &VAR_7);
    }
}
