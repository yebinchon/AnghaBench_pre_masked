
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,char const*,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,int) ;
 char* FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char const*,char**) ;

__attribute__((used)) static int FUNC_11(void) {
        const char *VAR_6;
        char **VAR_7;
        int VAR_8;

        VAR_6 = FUNC_7(VAR_5, "/etc/vconsole.conf");
        if (FUNC_3(VAR_6, VAR_2) >= 0)
                return 0;

        if (VAR_3 && VAR_5) {

                (void) FUNC_6(VAR_6, 0755);
                VAR_8 = FUNC_1("/etc/vconsole.conf", VAR_6, 0, 0644, 0, 0, VAR_0);
                if (VAR_8 != -VAR_1) {
                        if (VAR_8 < 0)
                                return FUNC_4(VAR_8, "Failed to copy %s: %m", VAR_6);

                        FUNC_5("%s copied.", VAR_6);
                        return 0;
                }
        }

        VAR_8 = FUNC_8();
        if (VAR_8 == -VAR_1)
                return 0;
        if (VAR_8 < 0)
                return VAR_8;

        if (FUNC_2(VAR_4))
                return 0;

        VAR_7 = FUNC_0(FUNC_9("KEYMAP=", VAR_4));

        VAR_8 = FUNC_6(VAR_6, 0755);
        if (VAR_8 < 0)
                return FUNC_4(VAR_8, "Failed to create the parent directory of %s: %m", VAR_6);

        VAR_8 = FUNC_10(VAR_6, VAR_7);
        if (VAR_8 < 0)
                return FUNC_4(VAR_8, "Failed to write %s: %m", VAR_6);

        FUNC_5("%s written.", VAR_6);
        return 0;
}
