
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_1("foobar", "foobar");
        FUNC_1(".foobar", "_.foobar");
        FUNC_1("foobar.service", "foobar.service");
        FUNC_1("cgroup.service", "_cgroup.service");
        FUNC_1("tasks", "_tasks");
        if (FUNC_0("/sys/fs/cgroup/cpu", VAR_0) == 0)
                FUNC_1("cpu.service", "_cpu.service");
        FUNC_1("_foobar", "__foobar");
        FUNC_1("", "_");
        FUNC_1("_", "__");
        FUNC_1(".", "_.");
}
