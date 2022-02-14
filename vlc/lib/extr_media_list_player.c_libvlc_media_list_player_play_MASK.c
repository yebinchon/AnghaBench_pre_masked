
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_mi; int current_playing_item_path; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(libvlc_media_list_player_t * VAR_0)
{
    FUNC_1(VAR_0);
    if (!VAR_0->current_playing_item_path)
    {
        FUNC_2(VAR_0, 1);
        FUNC_3(VAR_0);
        return;
    }
    FUNC_0(VAR_0->p_mi);
    FUNC_3(VAR_0);
}
