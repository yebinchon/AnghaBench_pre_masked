
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char const*,int ,int) ;

__attribute__((used)) static int FUNC_7(void) {
        const char *VAR_7;
        char VAR_8[VAR_1];
        int VAR_9;

        VAR_7 = FUNC_3(VAR_6, "/etc/machine-id");
        if (FUNC_0(VAR_7, VAR_0) >= 0)
                return 0;

        if (FUNC_4(VAR_5))
                return 0;

        VAR_9 = FUNC_6(VAR_7, FUNC_5(VAR_5, VAR_8),
                              VAR_2 | VAR_4 | VAR_3);
        if (VAR_9 < 0)
                return FUNC_1(VAR_9, "Failed to write machine id: %m");

        FUNC_2("%s written.", VAR_7);
        return 0;
}
