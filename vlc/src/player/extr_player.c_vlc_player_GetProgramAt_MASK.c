
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_program {int dummy; } ;
struct TYPE_2__ {size_t size; struct vlc_player_program const** data; } ;
struct vlc_player_input {TYPE_1__ program_vector; } ;


 int FUNC_0 (int) ;
 struct vlc_player_input* FUNC_1 (int *) ;

const struct vlc_player_program *
FUNC_2(vlc_player_t *VAR_0, size_t VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_1(VAR_0);

    if (!VAR_2)
        return ((void*)0);

    FUNC_0(VAR_1 < VAR_2->program_vector.size);
    return VAR_2->program_vector.data[VAR_1];
}
