
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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,int ,int) ;

__attribute__((used)) static int FUNC_7(void) {
        const char *VAR_6;
        int VAR_7;

        VAR_6 = FUNC_4(VAR_5, "/etc/hostname");
        if (FUNC_1(VAR_6, VAR_0) >= 0)
                return 0;

        VAR_7 = FUNC_5();
        if (VAR_7 < 0)
                return VAR_7;

        if (FUNC_0(VAR_4))
                return 0;

        VAR_7 = FUNC_6(VAR_6, VAR_4,
                              VAR_1 | VAR_3 | VAR_2);
        if (VAR_7 < 0)
                return FUNC_2(VAR_7, "Failed to write %s: %m", VAR_6);

        FUNC_3("%s written.", VAR_6);
        return 0;
}
