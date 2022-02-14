
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(void) {
        const char *VAR_3, *VAR_4 = "SYSTEMD_NSPAWN_UNIFIED_HIERARCHY";
        int VAR_5;



        VAR_3 = FUNC_0(VAR_4);
        if (!VAR_3) {

                VAR_4 = "UNIFIED_CGROUP_HIERARCHY";
                VAR_3 = FUNC_0(VAR_4);
        }

        if (!FUNC_1(VAR_3)) {
                VAR_5 = FUNC_3(VAR_3);
                if (VAR_5 < 0)
                        return FUNC_2(VAR_5, "Failed to parse $%s: %m", VAR_4);
                if (VAR_5 > 0)
                        VAR_2 = VAR_0;
                else
                        VAR_2 = VAR_1;
        }

        return 0;
}
