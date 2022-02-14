
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_program {int scrambled; int selected; int name; int group_id; } ;


 struct vlc_player_program* FUNC_0 (int ,int ) ;

struct vlc_player_program *
FUNC_1(const struct vlc_player_program *VAR_0)
{
    struct vlc_player_program *VAR_1 =
        FUNC_0(VAR_0->group_id, VAR_0->name);

    if (!VAR_1)
        return ((void*)0);
    VAR_1->selected = VAR_0->selected;
    VAR_1->scrambled = VAR_0->scrambled;
    return VAR_1;
}
