
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {int ut_type; int ut_user; int ut_line; int ut_id; int ut_session; int ut_pid; } ;
typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int,char const*) ;
 int FUNC_3 (struct utmpx*,int ) ;
 int FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (struct utmpx*) ;

int FUNC_7(const char *VAR_3, pid_t VAR_4, pid_t VAR_5, const char *VAR_6, int VAR_7, const char *VAR_8) {
        struct utmpx VAR_9 = {
                .ut_type = VAR_0,
                .ut_pid = VAR_4,
                .ut_session = VAR_5,
        };
        int VAR_10;

        FUNC_1(VAR_3);

        FUNC_3(&VAR_9, 0);


        FUNC_2(VAR_9.ut_id, sizeof(VAR_9.ut_id), VAR_3);

        if (VAR_6)
                FUNC_5(VAR_9.ut_line, VAR_6, sizeof(VAR_9.ut_line));

        VAR_10 = FUNC_6(&VAR_9);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_0(VAR_7, VAR_1, VAR_2)) {
                VAR_9.ut_type = VAR_1;
                VAR_10 = FUNC_6(&VAR_9);
                if (VAR_10 < 0)
                        return VAR_10;
        }

        if (VAR_7 == VAR_2) {
                VAR_9.ut_type = VAR_2;
                FUNC_4(VAR_9.ut_user, VAR_8, sizeof(VAR_9.ut_user)-1);
                VAR_10 = FUNC_6(&VAR_9);
                if (VAR_10 < 0)
                        return VAR_10;
        }

        return 0;
}
