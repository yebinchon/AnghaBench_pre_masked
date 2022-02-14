
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; struct vlc_player_program** data; } ;
typedef TYPE_1__ vlc_player_program_vector ;
struct vlc_player_program {int group_id; } ;



struct vlc_player_program *
FUNC_0(vlc_player_program_vector *VAR_0, int VAR_1,
                                   size_t *VAR_2)
{
    for (size_t VAR_3 = 0; VAR_3 < VAR_0->size; ++VAR_3)
    {
        struct vlc_player_program *VAR_4 = VAR_0->data[VAR_3];
        if (VAR_4->group_id == VAR_1)
        {
            if (VAR_2)
                *VAR_2 = VAR_3;
            return VAR_4;
        }
    }
    return ((void*)0);
}
