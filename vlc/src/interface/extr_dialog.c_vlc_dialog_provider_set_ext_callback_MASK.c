
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int lock; void* p_ext_data; int pf_ext_update; } ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int vlc_dialog_ext_update_cb ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(vlc_object_t *VAR_0,
                                     vlc_dialog_ext_update_cb VAR_1,
                                     void *VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    vlc_dialog_provider *VAR_3 = FUNC_1(VAR_0, 0);

    FUNC_2(&VAR_3->lock);

    VAR_3->pf_ext_update = VAR_1;
    VAR_3->p_ext_data = VAR_2;

    FUNC_3(&VAR_3->lock);
}
