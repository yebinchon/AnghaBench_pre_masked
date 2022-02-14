
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef struct vlc_player_program const vlc_player_program ;
struct vlc_player_input {int program_vector; } ;


 struct vlc_player_input* FUNC_0 (int *) ;
 struct vlc_player_program const* FUNC_1 (int *,int,int *) ;

const struct vlc_player_program *
FUNC_2(vlc_player_t *VAR_0, int VAR_1)
{
    struct vlc_player_input *VAR_2 = FUNC_0(VAR_0);

    if (!VAR_2)
        return ((void*)0);

    struct vlc_player_program *VAR_3 =
        FUNC_1(&VAR_2->program_vector, VAR_1, ((void*)0));
    return VAR_3;
}
