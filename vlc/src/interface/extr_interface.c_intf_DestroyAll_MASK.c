
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; TYPE_2__* interfaces; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;
struct TYPE_8__ {int p_cfg; int p_module; struct TYPE_8__* p_next; } ;
typedef TYPE_2__ intf_thread_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(libvlc_int_t *VAR_1)
{
    libvlc_priv_t *VAR_2 = FUNC_1(VAR_1);

    FUNC_4(&VAR_2->lock);
    intf_thread_t *VAR_3, **VAR_4 = &VAR_2->interfaces;

    while ((VAR_3 = *VAR_4) != ((void*)0))
    {
        *VAR_4 = VAR_3->p_next;
        FUNC_5(&VAR_2->lock);

        FUNC_2(VAR_3, VAR_3->p_module);
        FUNC_0(VAR_3->p_cfg);
        FUNC_3(VAR_3, "intf-add", VAR_0, ((void*)0));
        FUNC_6(VAR_3);

        FUNC_4(&VAR_2->lock);
    }
    FUNC_5(&VAR_2->lock);
}
