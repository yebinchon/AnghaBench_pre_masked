
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_program {int scrambled; } ;
struct TYPE_3__ {int * player; } ;
typedef TYPE_1__ libvlc_media_player_t ;


 struct vlc_player_program* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(libvlc_media_player_t *VAR_0)
{
    bool VAR_1 = 0;

    vlc_player_t *VAR_2 = VAR_0->player;
    FUNC_1(VAR_2);

    const struct vlc_player_program *VAR_3 =
        FUNC_0(VAR_2);
    if (!VAR_3)
        goto end;

    VAR_1 = VAR_3->scrambled;

    FUNC_2(VAR_2);
end:
    return VAR_1;
}
