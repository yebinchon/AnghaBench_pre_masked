
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_input {int chapter_selected; } ;
typedef int ssize_t ;


 struct vlc_player_input* FUNC_0 (int *) ;

ssize_t
FUNC_1(vlc_player_t *VAR_0)
{
    struct vlc_player_input *VAR_1 = FUNC_0(VAR_0);

    if (!VAR_1)
        return -1;
    return VAR_1->chapter_selected;
}
