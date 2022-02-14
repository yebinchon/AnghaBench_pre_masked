
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rlimit*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct rlimit *VAR_3,
                         struct rlimit *VAR_4) {

        FUNC_0(VAR_3);
        FUNC_0(VAR_4);

        if (FUNC_1(VAR_1, VAR_3) < 0)
                FUNC_2(VAR_2, "Reading RLIMIT_NOFILE failed, ignoring: %m");

        if (FUNC_1(VAR_0, VAR_4) < 0)
                FUNC_2(VAR_2, "Reading RLIMIT_MEMLOCK failed, ignoring: %m");
}
