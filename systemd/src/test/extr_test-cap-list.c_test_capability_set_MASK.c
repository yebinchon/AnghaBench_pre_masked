
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int*) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(void) {
        uint64_t VAR_11;

        FUNC_1(FUNC_3(((void*)0), &VAR_11) == 0);
        FUNC_1(VAR_11 == 0);

        FUNC_1(FUNC_3("", &VAR_11) == 0);
        FUNC_1(VAR_11 == 0);

        FUNC_1(FUNC_3("0", &VAR_11) == 0);
        FUNC_1(VAR_11 == FUNC_0(1));

        FUNC_1(FUNC_3("1", &VAR_11) == 0);
        FUNC_1(VAR_11 == FUNC_0(1) << 1);

        FUNC_1(FUNC_3("0 1 2 3", &VAR_11) == 0);
        FUNC_1(VAR_11 == (FUNC_0(1) << 4) - 1);

        FUNC_4(0, "");
        FUNC_4(
                FUNC_0(1) << VAR_2,
                "cap_dac_override");
        FUNC_4(
                FUNC_0(1) << VAR_2 |
                FUNC_0(1) << FUNC_2(),
                "cap_dac_override");
        FUNC_4(
                FUNC_0(1) << FUNC_2(), "");
        FUNC_4(
                FUNC_0(1) << VAR_1 |
                FUNC_0(1) << VAR_2 |
                FUNC_0(1) << VAR_3 |
                FUNC_0(1) << VAR_4 |
                FUNC_0(1) << VAR_6 |
                FUNC_0(1) << VAR_7 |
                FUNC_0(1) << VAR_10 |
                FUNC_0(1) << VAR_9 |
                FUNC_0(1) << VAR_0 |
                FUNC_0(1) << VAR_5 |
                FUNC_0(1) << VAR_8 |
                FUNC_0(1) << (FUNC_2() + 1),
                "cap_chown cap_dac_override cap_dac_read_search cap_fowner "
                "cap_setgid cap_setuid cap_sys_ptrace cap_sys_admin "
                "cap_audit_control cap_mac_override cap_syslog");
}
