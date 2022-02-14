
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* psz_password; TYPE_4__* psz_username; } ;
struct TYPE_8__ {TYPE_1__ login; } ;
struct TYPE_9__ {scalar_t__ i_type; TYPE_2__ u; } ;
struct TYPE_10__ {int wait; int lock; struct TYPE_10__* psz_progress_text; TYPE_3__ answer; } ;
typedef TYPE_4__ vlc_dialog_id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(vlc_dialog_id *VAR_1)
{
    if (VAR_1->answer.i_type == VAR_0)
    {
        FUNC_0(VAR_1->answer.u.login.psz_username);
        FUNC_0(VAR_1->answer.u.login.psz_password);
    }
    FUNC_0(VAR_1->psz_progress_text);
    FUNC_2(&VAR_1->lock);
    FUNC_1(&VAR_1->wait);
    FUNC_0(VAR_1);
}
