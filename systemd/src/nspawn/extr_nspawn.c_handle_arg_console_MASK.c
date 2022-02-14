
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
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_9) {
        if (FUNC_3(VAR_9, "help")) {
                FUNC_2("interactive\n"
                     "read-only\n"
                     "passive\n"
                     "pipe");
                return 0;
        }

        if (FUNC_3(VAR_9, "interactive"))
                VAR_6 = VAR_0;
        else if (FUNC_3(VAR_9, "read-only"))
                VAR_6 = VAR_3;
        else if (FUNC_3(VAR_9, "passive"))
                VAR_6 = VAR_1;
        else if (FUNC_3(VAR_9, "pipe"))
                VAR_6 = VAR_2;
        else
                return FUNC_1(FUNC_0(VAR_4), "Unknown console mode: %s", VAR_8);

        VAR_7 |= VAR_5;
        return 1;
}
