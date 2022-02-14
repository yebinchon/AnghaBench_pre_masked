
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,char*,int,char*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2) {
        int VAR_3;

        if (FUNC_2(VAR_1, FUNC_1(VAR_0)))
                return;

        VAR_3 = FUNC_3(VAR_2, "debug-shell.service", 50, "tty",
                        "[Unit]\n"
                        "Description=Early root shell on /dev/%s FOR DEBUGGING ONLY\n"
                        "ConditionPathExists=\n"
                        "[Service]\n"
                        "TTYPath=/dev/%s",
                        VAR_1, VAR_1);
        if (VAR_3 < 0)
                FUNC_0(VAR_3, "Failed to write drop-in for debug-shell.service, ignoring: %m");
}
