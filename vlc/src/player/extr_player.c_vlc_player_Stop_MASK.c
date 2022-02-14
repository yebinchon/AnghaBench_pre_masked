
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int started; int * input; } ;
typedef TYPE_1__ vlc_player_t ;
struct vlc_player_input {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct vlc_player_input*) ;
 struct vlc_player_input* FUNC_3 (TYPE_1__*) ;

int
FUNC_4(vlc_player_t *VAR_2)
{
    struct vlc_player_input *VAR_3 = FUNC_3(VAR_2);

    FUNC_0(VAR_2);

    FUNC_1(VAR_2);

    if (!VAR_3 || !VAR_2->started)
        return VAR_0;
    VAR_2->started = 0;

    FUNC_2(VAR_2, VAR_3);
    VAR_2->input = ((void*)0);
    return VAR_1;
}
