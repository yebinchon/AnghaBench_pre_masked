
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int lock; int * p_cbs_data; int cbs; } ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int vlc_dialog_cbs ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(vlc_object_t *VAR_0,
                                  const vlc_dialog_cbs *VAR_1, void *VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    vlc_dialog_provider *VAR_3 = FUNC_2(VAR_0, 0);

    FUNC_4(&VAR_3->lock);
    FUNC_1(VAR_3);

    if (VAR_1 == ((void*)0))
    {
        FUNC_3(&VAR_3->cbs, 0, sizeof(VAR_3->cbs));
        VAR_3->p_cbs_data = ((void*)0);
    }
    else
    {
        VAR_3->cbs = *VAR_1;
        VAR_3->p_cbs_data = VAR_2;
    }
    FUNC_5(&VAR_3->lock);
}
