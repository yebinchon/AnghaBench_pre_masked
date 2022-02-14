
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_refcount; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(libvlc_media_list_player_t * VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_0(VAR_0);
    VAR_0->i_refcount++;
    FUNC_1(VAR_0);
}
