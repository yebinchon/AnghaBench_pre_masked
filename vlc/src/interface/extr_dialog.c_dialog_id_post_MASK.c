
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dialog_answer {int dummy; } ;
struct TYPE_4__ {int b_cancelled; int b_answered; scalar_t__ i_refcount; int lock; int wait; struct dialog_answer answer; } ;
typedef TYPE_1__ vlc_dialog_id ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(vlc_dialog_id *VAR_1, struct dialog_answer *VAR_2)
{
    FUNC_2(&VAR_1->lock);
    if (VAR_2 == ((void*)0))
    {
        VAR_1->b_cancelled = 1;
    }
    else
    {
        VAR_1->answer = *VAR_2;
        VAR_1->b_answered = 1;
    }
    VAR_1->i_refcount--;
    if (VAR_1->i_refcount > 0)
    {
        FUNC_1(&VAR_1->wait);
        FUNC_3(&VAR_1->lock);
    }
    else
    {
        FUNC_3(&VAR_1->lock);
        FUNC_0(VAR_1);
    }
    return VAR_0;
}
