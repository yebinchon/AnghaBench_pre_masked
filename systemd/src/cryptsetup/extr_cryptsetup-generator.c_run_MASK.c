
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char const*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int VAR_7 ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_8, const char *VAR_9, const char *VAR_10) {
        int VAR_11;

        FUNC_2(VAR_2 = VAR_8);

        VAR_1 = FUNC_3("SYSTEMD_CRYPTTAB") ?: "/etc/crypttab";
        VAR_5 = FUNC_3("RUNTIME_DIRECTORY") ?: "/run/systemd/cryptsetup";

        VAR_3 = FUNC_4(&VAR_6);
        if (!VAR_3)
                return FUNC_5();

        VAR_11 = FUNC_7(VAR_7, ((void*)0), VAR_0);
        if (VAR_11 < 0)
                return FUNC_6(VAR_11, "Failed to parse kernel command line: %m");

        if (!VAR_4)
                return 0;

        VAR_11 = FUNC_0();
        if (VAR_11 < 0)
                return VAR_11;

        VAR_11 = FUNC_1();
        if (VAR_11 < 0)
                return VAR_11;

        return 0;
}
