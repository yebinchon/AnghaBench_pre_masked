
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1, void *VAR_2) {
        FUNC_0(VAR_0);






        if (FUNC_4(VAR_0, "systemd.unit") && !FUNC_2(VAR_0, VAR_1))
                FUNC_1("Offline system update overridden by kernel command line systemd.unit= setting");
        else if (!VAR_1 && FUNC_3(VAR_0))
                FUNC_1("Offline system update overridden by runlevel \"%s\" on the kernel command line", VAR_0);

        return 0;
}
