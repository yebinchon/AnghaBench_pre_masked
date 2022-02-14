
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char const*,char**) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int *) ;

__attribute__((used)) static int FUNC_8(const char *VAR_6, char *VAR_7[], int VAR_8, pid_t *VAR_9) {

        pid_t VAR_10;
        int VAR_11;

        if (FUNC_4(VAR_6)) {
                FUNC_2("%s is empty (a mask).", VAR_6);
                return 0;
        }

        VAR_11 = FUNC_7("(direxec)", VAR_1|VAR_2, &VAR_10);
        if (VAR_11 < 0)
                return VAR_11;
        if (VAR_11 == 0) {
                char *VAR_12[2];

                if (VAR_8 >= 0) {
                        VAR_11 = FUNC_5(VAR_4, VAR_8, VAR_3);
                        if (VAR_11 < 0)
                                FUNC_0(VAR_0);
                }

                (void) FUNC_6();

                if (!VAR_7) {
                        VAR_12[0] = (char*) VAR_6;
                        VAR_12[1] = ((void*)0);
                        VAR_7 = VAR_12;
                } else
                        VAR_7[0] = (char*) VAR_6;

                FUNC_1(VAR_6, VAR_7);
                FUNC_3(VAR_5, "Failed to execute %s: %m", VAR_6);
                FUNC_0(VAR_0);
        }

        *VAR_9 = VAR_10;
        return 1;
}
