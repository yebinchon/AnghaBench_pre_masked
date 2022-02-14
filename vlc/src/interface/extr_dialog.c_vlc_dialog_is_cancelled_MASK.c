
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int b_cancelled; int lock; } ;
typedef TYPE_1__ vlc_dialog_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool
FUNC_3(vlc_object_t *VAR_0, vlc_dialog_id *VAR_1)
{
    (void) VAR_0;
    FUNC_0(VAR_1 != ((void*)0));

    FUNC_1(&VAR_1->lock);
    bool VAR_2 = VAR_1->b_cancelled;
    FUNC_2(&VAR_1->lock);
    return VAR_2;
}
