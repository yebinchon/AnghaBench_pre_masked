
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lock; } ;
typedef TYPE_1__ vlc_dialog_provider ;
struct TYPE_11__ {int i_type; } ;
struct TYPE_10__ {int lock; TYPE_3__ answer; scalar_t__ b_cancelled; int wait; int b_answered; } ;
typedef TYPE_2__ vlc_dialog_id ;
struct dialog_i11e_context {TYPE_2__* p_id; TYPE_1__* p_provider; } ;
struct dialog_answer {int dummy; } ;
typedef enum dialog_type { ____Placeholder_dialog_type } dialog_type ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (struct dialog_answer*,TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,struct dialog_i11e_context*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(vlc_dialog_provider *VAR_2, vlc_dialog_id *VAR_3,
            enum dialog_type VAR_4, struct dialog_answer *VAR_5)
{
    struct dialog_i11e_context VAR_6 = {
        .p_provider = VAR_2,
        .p_id = VAR_3,
    };
    FUNC_4(VAR_1, &VAR_6);

    FUNC_6(&VAR_3->lock);

    while (!VAR_3->b_cancelled && !VAR_3->b_answered)
        FUNC_3(&VAR_3->wait, &VAR_3->lock);

    int VAR_7;
    if (VAR_3->b_cancelled)
        VAR_7 = 0;
    else if (VAR_3->answer.i_type != VAR_4)
        VAR_7 = VAR_0;
    else
    {
        VAR_7 = 1;
        FUNC_1(VAR_5, &VAR_3->answer, sizeof(VAR_3->answer));
        FUNC_2(&VAR_3->answer, 0, sizeof(VAR_3->answer));
    }

    FUNC_7(&VAR_3->lock);
    FUNC_5();

    FUNC_6(&VAR_2->lock);
    FUNC_0(VAR_2, VAR_3);
    FUNC_7(&VAR_2->lock);
    return VAR_7;
}
