
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_6__ {int p_mi; int p_mlist; int current_playing_item_path; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int libvlc_media_list_path_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(libvlc_media_list_player_t * VAR_0, libvlc_media_list_path_t VAR_1)
{
    FUNC_0(VAR_0);


    if (VAR_0->current_playing_item_path != VAR_1)
    {
        FUNC_1(VAR_0->current_playing_item_path);
        VAR_0->current_playing_item_path = VAR_1;
    }

    if (!VAR_1)
        return;

    libvlc_media_t * VAR_2;
    VAR_2 = FUNC_3(VAR_0->p_mlist, VAR_1);
    if (!VAR_2)
        return;


    FUNC_6(VAR_0);

    FUNC_4(VAR_0->p_mi, VAR_2);

    FUNC_2(VAR_0);
    FUNC_5(VAR_2);
}
