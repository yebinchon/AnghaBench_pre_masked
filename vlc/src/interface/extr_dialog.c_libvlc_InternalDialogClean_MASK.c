
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ vlc_dialog_provider ;
typedef int libvlc_int_t ;
struct TYPE_6__ {TYPE_1__* p_dialog_provider; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(libvlc_int_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    vlc_dialog_provider *VAR_1 = FUNC_3(VAR_0)->p_dialog_provider;

    if (VAR_1 == ((void*)0))
        return;
    FUNC_5(&VAR_1->lock);
    FUNC_1(VAR_1);
    FUNC_6(&VAR_1->lock);

    FUNC_4(&VAR_1->lock);
    FUNC_2(VAR_1);
    FUNC_3(VAR_0)->p_dialog_provider = ((void*)0);
}
