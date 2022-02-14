
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_termination; int e_exit; } ;
struct utmpx {scalar_t__ ut_pid; int ut_tv; int ut_host; int ut_user; TYPE_1__ ut_exit; int ut_type; int ut_id; } ;
typedef int store_wtmp ;
typedef int store ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int,char const*) ;
 struct utmpx* FUNC_2 (struct utmpx*) ;
 int FUNC_3 (struct utmpx*,int ) ;
 int FUNC_4 (struct utmpx*,struct utmpx*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (struct utmpx*,struct utmpx*) ;
 int FUNC_7 (int ) ;

int FUNC_8(const char *VAR_2, pid_t VAR_3, int VAR_4, int VAR_5) {
        struct utmpx VAR_6 = {
                .ut_type = VAR_1
        }, VAR_7, VAR_8, *VAR_9;

        FUNC_0(VAR_2);

        FUNC_5();


        FUNC_1(VAR_7.ut_id, sizeof(VAR_7.ut_id), VAR_2);

        VAR_9 = FUNC_2(&VAR_6);
        if (!VAR_9)
                return 0;

        if (VAR_9->ut_pid != VAR_3)
                return 0;

        FUNC_4(&VAR_7, VAR_9, sizeof(VAR_7));
        VAR_7.ut_type = VAR_0;
        VAR_7.ut_exit.e_termination = VAR_4;
        VAR_7.ut_exit.e_exit = VAR_5;

        FUNC_7(VAR_7.ut_user);
        FUNC_7(VAR_7.ut_host);
        FUNC_7(VAR_7.ut_tv);

        FUNC_4(&VAR_8, &VAR_7, sizeof(VAR_8));

        FUNC_3(&VAR_8, 0);

        return FUNC_6(&VAR_7, &VAR_8);
}
