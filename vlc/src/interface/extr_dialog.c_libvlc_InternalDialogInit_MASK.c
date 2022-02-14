
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_ext_data; int * pf_ext_update; int * p_cbs_data; int cbs; int dialog_array; int lock; } ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int libvlc_int_t ;
struct TYPE_5__ {TYPE_1__* p_dialog_provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(libvlc_int_t *VAR_2)
{
    FUNC_0(VAR_2 != ((void*)0));
    vlc_dialog_provider *VAR_3 = FUNC_2(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
        return VAR_0;

    FUNC_5(&VAR_3->lock);
    FUNC_4(&VAR_3->dialog_array);

    FUNC_3(&VAR_3->cbs, 0, sizeof(VAR_3->cbs));
    VAR_3->p_cbs_data = ((void*)0);

    VAR_3->pf_ext_update = ((void*)0);
    VAR_3->p_ext_data = ((void*)0);
    FUNC_1(VAR_2)->p_dialog_provider = VAR_3;

    return VAR_1;
}
