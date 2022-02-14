
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dialog_array; } ;
typedef TYPE_1__ vlc_dialog_provider ;
struct TYPE_8__ {scalar_t__ i_refcount; int lock; } ;
typedef TYPE_2__ vlc_dialog_id ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(vlc_dialog_provider *VAR_0, vlc_dialog_id *VAR_1)
{
    ssize_t VAR_2 = FUNC_2(&VAR_0->dialog_array, VAR_1);
    FUNC_0(VAR_2 >= 0);
    FUNC_3(&VAR_0->dialog_array, VAR_2);

    FUNC_4(&VAR_1->lock);
    VAR_1->i_refcount--;
    if (VAR_1->i_refcount == 0)
    {
        FUNC_5(&VAR_1->lock);
        FUNC_1(VAR_1);
    }
    else
        FUNC_5(&VAR_1->lock);
}
