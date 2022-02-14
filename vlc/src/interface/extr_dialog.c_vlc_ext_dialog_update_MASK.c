
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int lock; int p_ext_data; int (* pf_ext_update ) (int *,int ) ;} ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int extension_dialog_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(vlc_object_t *VAR_2, extension_dialog_t *VAR_3)
{
    FUNC_0(VAR_2 != ((void*)0));
    vlc_dialog_provider *VAR_4 = FUNC_1(VAR_2, 0);

    FUNC_3(&VAR_4->lock);
    if (VAR_4->pf_ext_update == ((void*)0))
    {
        FUNC_4(&VAR_4->lock);
        return VAR_0;
    }
    VAR_4->pf_ext_update(VAR_3, VAR_4->p_ext_data);
    FUNC_4(&VAR_4->lock);
    return VAR_1;
}
