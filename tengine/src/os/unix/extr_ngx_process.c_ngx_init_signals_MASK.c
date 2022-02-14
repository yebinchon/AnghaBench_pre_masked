
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; int sa_flags; scalar_t__ sa_sigaction; } ;
struct TYPE_3__ {scalar_t__ signo; int signame; scalar_t__ handler; } ;
typedef TYPE_1__ ngx_signal_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int ,char*,int ) ;
 int FUNC_1 (struct sigaction*,int) ;
 int FUNC_2 (scalar_t__,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_7 ;

ngx_int_t
FUNC_4(ngx_log_t *VAR_8)
{
    ngx_signal_t *VAR_9;
    struct sigaction VAR_10;

    for (VAR_9 = VAR_7; VAR_9->signo != 0; VAR_9++) {
        FUNC_1(&VAR_10, sizeof(struct sigaction));

        if (VAR_9->handler) {
            VAR_10.sa_sigaction = VAR_9->handler;
            VAR_10.sa_flags = VAR_4;

        } else {
            VAR_10.sa_handler = VAR_5;
        }

        FUNC_3(&VAR_10.sa_mask);
        if (FUNC_2(VAR_9->signo, &VAR_10, ((void*)0)) == -1) {




            FUNC_0(VAR_2, VAR_8, VAR_6,
                          "sigaction(%s) failed", VAR_9->signame);
            return VAR_0;

        }
    }

    return VAR_3;
}
