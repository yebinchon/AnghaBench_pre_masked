
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_program {int group_id; int selected; int scrambled; int name; } ;


 int FUNC_0 (struct vlc_player_program*) ;
 struct vlc_player_program* FUNC_1 (int) ;
 int FUNC_2 (int,char const*) ;

struct vlc_player_program *
FUNC_3(int VAR_0, const char *VAR_1)
{
    struct vlc_player_program *VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (!VAR_2)
        return ((void*)0);
    VAR_2->name = FUNC_2(VAR_0, VAR_1);
    if (!VAR_2->name)
    {
        FUNC_0(VAR_2);
        return ((void*)0);
    }
    VAR_2->group_id = VAR_0;
    VAR_2->selected = VAR_2->scrambled = 0;

    return VAR_2;
}
