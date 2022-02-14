
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rlimit const*) ;
 int FUNC_1 (struct rlimit const*) ;
 int FUNC_2 (struct rlimit const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(const struct rlimit *VAR_2,
                               const struct rlimit *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);


        FUNC_7();

        VAR_4 = FUNC_5();
        if (VAR_4 < 0)
                FUNC_4(VAR_4, "Failed to parse config file, ignoring: %m");

        if (VAR_0) {
                VAR_4 = FUNC_6(VAR_1, ((void*)0), 0);
                if (VAR_4 < 0)
                        FUNC_4(VAR_4, "Failed to parse kernel command line, ignoring: %m");
        }


        FUNC_2(VAR_2);
        FUNC_1(VAR_3);


        FUNC_3();

        return 0;
}
