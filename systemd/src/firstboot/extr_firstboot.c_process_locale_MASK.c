
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,char const*,int ,int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*,int) ;
 char* FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 char* FUNC_9 (char*,int ) ;
 int FUNC_10 (char const*,char**) ;

__attribute__((used)) static int FUNC_11(void) {
        const char *VAR_7;
        char* VAR_8[3];
        unsigned VAR_9 = 0;
        int VAR_10;

        VAR_7 = FUNC_6(VAR_6, "/etc/locale.conf");
        if (FUNC_2(VAR_7, VAR_2) >= 0)
                return 0;

        if (VAR_3 && VAR_6) {

                (void) FUNC_5(VAR_7, 0755);
                VAR_10 = FUNC_0("/etc/locale.conf", VAR_7, 0, 0644, 0, 0, VAR_0);
                if (VAR_10 != -VAR_1) {
                        if (VAR_10 < 0)
                                return FUNC_3(VAR_10, "Failed to copy %s: %m", VAR_7);

                        FUNC_4("%s copied.", VAR_7);
                        return 0;
                }
        }

        VAR_10 = FUNC_7();
        if (VAR_10 < 0)
                return VAR_10;

        if (!FUNC_1(VAR_4))
                VAR_8[VAR_9++] = FUNC_9("LANG=", VAR_4);
        if (!FUNC_1(VAR_5) && !FUNC_8(VAR_5, VAR_4))
                VAR_8[VAR_9++] = FUNC_9("LC_MESSAGES=", VAR_5);

        if (VAR_9 == 0)
                return 0;

        VAR_8[VAR_9] = ((void*)0);

        (void) FUNC_5(VAR_7, 0755);
        VAR_10 = FUNC_10(VAR_7, VAR_8);
        if (VAR_10 < 0)
                return FUNC_3(VAR_10, "Failed to write %s: %m", VAR_7);

        FUNC_4("%s written.", VAR_7);
        return 0;
}
