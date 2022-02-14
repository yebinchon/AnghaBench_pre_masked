
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_7__ {size_t size; int * data; } ;
struct TYPE_9__ {int box_idx; TYPE_1__ pl_item_names; scalar_t__ color; scalar_t__ plidx_follow; scalar_t__ need_update; int * playlist; } ;
typedef TYPE_3__ intf_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,size_t,char*,char,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(intf_thread_t *VAR_2)
{
    intf_sys_t *VAR_3 = VAR_2->p_sys;
    vlc_playlist_t *VAR_4 = VAR_3->playlist;

    FUNC_4(VAR_4);
    ssize_t VAR_5 = FUNC_3(VAR_4);
    if (VAR_3->need_update)
        FUNC_1(VAR_2);
    FUNC_5(VAR_4);

    if (VAR_3->plidx_follow)
        VAR_3->box_idx = VAR_5 == -1 ? 0 : VAR_5;

    for (size_t VAR_6 = 0; VAR_6 < VAR_3->pl_item_names.size; VAR_6++)
    {
        if (VAR_3->color)
            FUNC_2(VAR_6%3 + VAR_1, ((void*)0));

        FUNC_0(VAR_3, VAR_6, "%c %s",
                (ssize_t)VAR_6 == VAR_5 ? '>' : ' ',
                VAR_3->pl_item_names.data[VAR_6]);

        if (VAR_3->color)
            FUNC_2(VAR_0, ((void*)0));
    }

    return VAR_3->pl_item_names.size;
}
