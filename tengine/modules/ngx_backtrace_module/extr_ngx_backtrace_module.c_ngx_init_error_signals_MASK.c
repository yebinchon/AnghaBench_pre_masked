
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; } ;
struct TYPE_3__ {scalar_t__ signo; int signame; int handler; } ;
typedef TYPE_1__ ngx_signal_t ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,int ) ;
 int FUNC_1 (struct sigaction*,int) ;
 int FUNC_2 (scalar_t__,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_log_t *VAR_5)
{
    ngx_signal_t *VAR_6;
    struct sigaction VAR_7;

    for (VAR_6 = VAR_3; VAR_6->signo != 0; VAR_6++) {
        FUNC_1(&VAR_7, sizeof(struct sigaction));
        VAR_7.sa_handler = VAR_6->handler;
        FUNC_3(&VAR_7.sa_mask);
        if (FUNC_2(VAR_6->signo, &VAR_7, ((void*)0)) == -1) {
            FUNC_0(VAR_1, VAR_5, VAR_4,
                          "sigaction(%s) failed", VAR_6->signame);
            return VAR_0;
        }
    }

    return VAR_2;
}
