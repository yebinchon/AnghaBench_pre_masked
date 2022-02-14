
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int AskPasswordFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char const*,int *,int ,int ,char const*,char***) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(
                const char *VAR_4,
                usec_t VAR_5,
                AskPasswordFlags VAR_6,
                const char *VAR_7,
                char ***VAR_8) {

        int VAR_9 = -1;
        int VAR_10;

        if (VAR_2) {
                const char *VAR_11 = VAR_3 ?: "/dev/console";

                VAR_9 = FUNC_0(VAR_11, VAR_0, VAR_1);
                if (VAR_9 < 0)
                        return FUNC_2(VAR_9, "Failed to acquire %s: %m", VAR_11);

                VAR_10 = FUNC_5(VAR_9, 1);
                if (VAR_10 < 0)
                        FUNC_3(VAR_10, "Failed to reset terminal, ignoring: %m");

        }

        VAR_10 = FUNC_1(VAR_9, VAR_4, ((void*)0), VAR_5, VAR_6, VAR_7, VAR_8);

        if (VAR_2) {
                VAR_9 = FUNC_6(VAR_9);
                FUNC_4();
        }

        return 0;
}
