
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct statfs*) ;
 scalar_t__ FUNC_2 (struct statfs*) ;
 scalar_t__ FUNC_3 (char*,struct statfs*) ;

__attribute__((used)) static void FUNC_4(void) {
        struct statfs VAR_0;
        FUNC_0(FUNC_3("/sys/fs/cgroup", &VAR_0) == 0);
        if (FUNC_2(&VAR_0))
                FUNC_0(FUNC_3("/sys/fs/cgroup/systemd", &VAR_0) == 0);
        FUNC_0(FUNC_1(&VAR_0));
}
