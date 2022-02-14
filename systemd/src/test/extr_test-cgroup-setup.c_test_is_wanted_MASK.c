
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void) {
        FUNC_0(FUNC_1("SYSTEMD_PROC_CMDLINE",
                         "systemd.unified_cgroup_hierarchy", 1) >= 0);
        FUNC_2(0);

        FUNC_0(FUNC_1("SYSTEMD_PROC_CMDLINE",
                         "systemd.unified_cgroup_hierarchy=0", 1) >= 0);
        FUNC_2(0);

        FUNC_0(FUNC_1("SYSTEMD_PROC_CMDLINE",
                         "systemd.unified_cgroup_hierarchy=0 "
                         "systemd.legacy_systemd_cgroup_controller", 1) >= 0);
        FUNC_2(0);

        FUNC_0(FUNC_1("SYSTEMD_PROC_CMDLINE",
                         "systemd.unified_cgroup_hierarchy=0 "
                         "systemd.legacy_systemd_cgroup_controller=0", 1) >= 0);
        FUNC_2(0);



        FUNC_0(FUNC_1("SYSTEMD_PROC_CMDLINE",
                         "cgroup_no_v1=all", 1) >= 0);
        FUNC_2(0);

        FUNC_0(FUNC_1("SYSTEMD_PROC_CMDLINE",
                         "cgroup_no_v1=all "
                         "systemd.unified_cgroup_hierarchy=0", 1) >= 0);
        FUNC_2(0);
}
