
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* pf_cancel ) (int ,TYPE_3__*) ;} ;
struct TYPE_8__ {int p_cbs_data; TYPE_1__ cbs; } ;
typedef TYPE_2__ vlc_dialog_provider ;
struct TYPE_9__ {int b_cancelled; int lock; scalar_t__ b_answered; } ;
typedef TYPE_3__ vlc_dialog_id ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(vlc_dialog_provider *VAR_0, vlc_dialog_id *VAR_1)
{
    FUNC_1(&VAR_1->lock);
    if (VAR_1->b_cancelled || VAR_1->b_answered)
    {
        FUNC_2(&VAR_1->lock);
        return;
    }
    VAR_1->b_cancelled = 1;
    FUNC_2(&VAR_1->lock);

    VAR_0->cbs.pf_cancel(VAR_0->p_cbs_data, VAR_1);
}
