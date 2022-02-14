
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_title_list {size_t count; struct vlc_player_title const* array; } ;
struct vlc_player_title {int dummy; } ;


 int FUNC_0 (int) ;

const struct vlc_player_title *
FUNC_1(struct vlc_player_title_list *VAR_0, size_t VAR_1)
{
    FUNC_0(VAR_1 < VAR_0->count);
    return &VAR_0->array[VAR_1];
}
