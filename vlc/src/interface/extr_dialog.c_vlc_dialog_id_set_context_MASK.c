
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; void* p_context; } ;
typedef TYPE_1__ vlc_dialog_id ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(vlc_dialog_id *VAR_0, void *VAR_1)
{
    FUNC_0(&VAR_0->lock);
    VAR_0->p_context = VAR_1;
    FUNC_1(&VAR_0->lock);
}
