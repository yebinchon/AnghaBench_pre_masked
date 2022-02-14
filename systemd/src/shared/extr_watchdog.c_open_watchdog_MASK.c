
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_info {int firmware_version; int identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,struct watchdog_info*) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_4(void) {
        struct watchdog_info VAR_6;

        if (VAR_5 >= 0)
                return 0;

        VAR_5 = FUNC_2(VAR_4 ?: "/dev/watchdog",
                           VAR_1|VAR_0);
        if (VAR_5 < 0)
                return -VAR_3;

        if (FUNC_0(VAR_5, VAR_2, &VAR_6) >= 0)
                FUNC_1("Hardware watchdog '%s', version %x",
                         VAR_6.identity,
                         VAR_6.firmware_version);

        return FUNC_3();
}
