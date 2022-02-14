
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
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char const*,char**) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (char*,int,int *) ;

__attribute__((used)) static int FUNC_11(const char* VAR_7, char** VAR_8) {
        pid_t VAR_9;
        int VAR_10[2], VAR_11;

        if (FUNC_5(VAR_10) < 0)
                return FUNC_3(VAR_6, "Failed to create pager pipe: %m");

        VAR_11 = FUNC_10("(remote)", VAR_3|VAR_1|VAR_2, &VAR_9);
        if (VAR_11 < 0) {
                FUNC_9(VAR_10);
                return VAR_11;
        }


        if (VAR_11 == 0) {
                FUNC_8(VAR_10[0]);

                VAR_11 = FUNC_6(VAR_5, VAR_10[1], VAR_4);
                if (VAR_11 < 0) {
                        FUNC_3(VAR_11, "Failed to dup pipe to stdout: %m");
                        FUNC_0(VAR_0);
                }

                (void) FUNC_7();

                FUNC_1(VAR_7, VAR_8);
                FUNC_3(VAR_6, "Failed to exec child %s: %m", VAR_7);
                FUNC_0(VAR_0);
        }

        FUNC_8(VAR_10[1]);

        VAR_11 = FUNC_2(VAR_10[0], 1);
        if (VAR_11 < 0)
                FUNC_4(VAR_6, "Failed to set child pipe to non-blocking: %m");

        return VAR_10[0];
}
