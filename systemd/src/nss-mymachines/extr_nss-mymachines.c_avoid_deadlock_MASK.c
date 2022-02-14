
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(void) {






        if (FUNC_1() != 0)
                return 0;

        return FUNC_2(FUNC_0("SYSTEMD_ACTIVATION_UNIT"), "systemd-machined.service") &&
               FUNC_2(FUNC_0("SYSTEMD_ACTIVATION_SCOPE"), "system");
}
