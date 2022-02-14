
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_0) {



        if (FUNC_0(VAR_0,
                        "/dev",
                        "/dev/mqueue",
                        "/dev/pts",
                        "/dev/shm",
                        "/proc",
                        "/proc/acpi",
                        "/proc/apm",
                        "/proc/asound",
                        "/proc/bus",
                        "/proc/fs",
                        "/proc/irq",
                        "/proc/kallsyms",
                        "/proc/kcore",
                        "/proc/keys",
                        "/proc/scsi",
                        "/proc/sys",
                        "/proc/sys/net",
                        "/proc/sysrq-trigger",
                        "/proc/timer_list",
                        "/run",
                        "/sys",
                        "/sys",
                        "/sys/fs/selinux",
                        "/tmp"))
                return 1;


        if (FUNC_1(VAR_0, "/sys/fs/cgroup"))
                return 1;

        return 0;
}
