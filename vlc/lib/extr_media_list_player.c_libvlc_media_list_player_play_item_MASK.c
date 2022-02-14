
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_6__ {int p_mi; int p_mlist; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int libvlc_media_list_path_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(libvlc_media_list_player_t * VAR_0, libvlc_media_t * VAR_1)
{
    FUNC_3(VAR_0);
    libvlc_media_list_path_t VAR_2 = FUNC_0(VAR_0->p_mlist, VAR_1);
    if (!VAR_2)
    {
        FUNC_2("Item not found in media list");
        FUNC_5(VAR_0);
        return -1;
    }

    FUNC_4(VAR_0, VAR_2);
    FUNC_1(VAR_0->p_mi);
    FUNC_5(VAR_0);
    return 0;
}
