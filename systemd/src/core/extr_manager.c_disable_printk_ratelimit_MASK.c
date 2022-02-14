
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(void) {





        int VAR_0;

        VAR_0 = FUNC_1("kernel/printk_devkmsg", "on");
        if (VAR_0 < 0)
                FUNC_0(VAR_0, "Failed to set sysctl kernel.printk_devkmsg=on: %m");
}
