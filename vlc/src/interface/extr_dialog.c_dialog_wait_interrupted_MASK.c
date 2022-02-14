
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
typedef TYPE_1__ vlc_dialog_provider ;
struct TYPE_6__ {int lock; int wait; } ;
typedef TYPE_2__ vlc_dialog_id ;
struct dialog_i11e_context {TYPE_2__* p_id; TYPE_1__* p_provider; } ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
    struct dialog_i11e_context *VAR_1 = VAR_0;
    vlc_dialog_provider *VAR_2 = VAR_1->p_provider;
    vlc_dialog_id *VAR_3 = VAR_1->p_id;

    FUNC_2(&VAR_2->lock);
    FUNC_0(VAR_2, VAR_3);
    FUNC_3(&VAR_2->lock);

    FUNC_2(&VAR_3->lock);
    FUNC_1(&VAR_3->wait);
    FUNC_3(&VAR_3->lock);
}
