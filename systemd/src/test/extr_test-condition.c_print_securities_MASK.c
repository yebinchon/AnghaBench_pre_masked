
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void) {
        FUNC_1("------ enabled security technologies ------");
        FUNC_1("SELinux: %s", FUNC_8(FUNC_3()));
        FUNC_1("AppArmor: %s", FUNC_8(FUNC_2()));
        FUNC_1("Tomoyo: %s", FUNC_8(FUNC_5()));
        FUNC_1("IMA: %s", FUNC_8(FUNC_7()));
        FUNC_1("SMACK: %s", FUNC_8(FUNC_4()));
        FUNC_1("Audit: %s", FUNC_8(FUNC_6()));
        FUNC_1("UEFI secure boot: %s", FUNC_8(FUNC_0()));
        FUNC_1("-------------------------------------------");
}
