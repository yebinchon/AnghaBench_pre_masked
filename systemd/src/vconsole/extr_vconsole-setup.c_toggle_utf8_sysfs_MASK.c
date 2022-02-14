
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(bool VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_4("/sys/module/vt/parameters/default_utf8", FUNC_3(VAR_1), VAR_0);
        if (VAR_2 < 0)
                return FUNC_2(VAR_2, "Failed to %s sysfs UTF-8 flag: %m", FUNC_0(VAR_1));

        FUNC_1("Sysfs UTF-8 flag %sd", FUNC_0(VAR_1));
        return 0;
}
