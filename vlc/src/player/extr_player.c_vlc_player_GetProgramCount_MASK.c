
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_2__ {size_t size; } ;
struct vlc_player_input {TYPE_1__ program_vector; } ;


 struct vlc_player_input* FUNC_0 (int *) ;

size_t
FUNC_1(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_0(VAR_0);

    return VAR_1 ? VAR_1->program_vector.size : 0;
}
