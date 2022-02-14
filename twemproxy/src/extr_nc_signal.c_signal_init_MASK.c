
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal {scalar_t__ signo; int signame; int flags; int handler; } ;
struct sigaction {int sa_mask; int sa_flags; int sa_handler; } ;
typedef int sa ;
typedef scalar_t__ rstatus_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct sigaction*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,struct sigaction*,int *) ;
 int FUNC_3 (int *) ;
 struct signal* VAR_3 ;
 int FUNC_4 (int ) ;

rstatus_t
FUNC_5(void)
{
    struct signal *VAR_4;

    for (VAR_4 = VAR_3; VAR_4->signo != 0; VAR_4++) {
        rstatus_t VAR_5;
        struct sigaction VAR_6;

        FUNC_1(&VAR_6, 0, sizeof(VAR_6));
        VAR_6.sa_handler = VAR_4->handler;
        VAR_6.sa_flags = VAR_4->flags;
        FUNC_3(&VAR_6.sa_mask);

        VAR_5 = FUNC_2(VAR_4->signo, &VAR_6, ((void*)0));
        if (VAR_5 < 0) {
            FUNC_0("sigaction(%s) failed: %s", VAR_4->signame,
                      FUNC_4(VAR_2));
            return VAR_0;
        }
    }

    return VAR_1;
}
