
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_9__ {size_t size; scalar_t__* data; } ;
struct TYPE_8__ {int need_update; TYPE_3__ pl_item_names; int * playlist; } ;
typedef TYPE_2__ intf_sys_t ;
typedef int input_item_t ;


 int FUNC_0 (void*) ;
 char* FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,size_t) ;

__attribute__((used)) static void FUNC_8(intf_thread_t *VAR_0)
{
    intf_sys_t *VAR_1 = VAR_0->p_sys;
    vlc_playlist_t *VAR_2 = VAR_1->playlist;

    for (size_t VAR_3 = 0; VAR_3 < VAR_1->pl_item_names.size; ++VAR_3)
        FUNC_0((void *)VAR_1->pl_item_names.data[VAR_3]);
    FUNC_5(&VAR_1->pl_item_names);

    size_t VAR_4 = FUNC_2(VAR_2);
    if (!FUNC_7(&VAR_1->pl_item_names, VAR_4))
        return;
    for (size_t VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
        vlc_playlist_item_t *VAR_6 = FUNC_3(VAR_2, VAR_5);
        input_item_t *VAR_7 = FUNC_4(VAR_6);
        char *VAR_8 = FUNC_1(VAR_7);
        FUNC_6(&VAR_1->pl_item_names, VAR_8);
    }

    VAR_1->need_update = 0;
}
