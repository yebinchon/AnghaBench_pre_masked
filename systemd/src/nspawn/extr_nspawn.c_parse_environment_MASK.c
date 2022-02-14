
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(void) {
        const char *VAR_8;
        int VAR_9;

        VAR_9 = FUNC_6("SYSTEMD_NSPAWN_SHARE_NS_IPC", VAR_0);
        if (VAR_9 < 0)
                return VAR_9;
        VAR_9 = FUNC_6("SYSTEMD_NSPAWN_SHARE_NS_PID", VAR_1);
        if (VAR_9 < 0)
                return VAR_9;
        VAR_9 = FUNC_6("SYSTEMD_NSPAWN_SHARE_NS_UTS", VAR_2);
        if (VAR_9 < 0)
                return VAR_9;
        VAR_9 = FUNC_6("SYSTEMD_NSPAWN_SHARE_SYSTEM", VAR_0|VAR_1|VAR_2);
        if (VAR_9 < 0)
                return VAR_9;

        VAR_9 = FUNC_5();
        if (VAR_9 < 0)
                return VAR_9;



        if (!FUNC_0())
                VAR_7 = 0;
        else {
                VAR_9 = FUNC_3("SYSTEMD_NSPAWN_USE_CGNS");
                if (VAR_9 < 0) {
                        if (VAR_9 != -VAR_3)
                                return FUNC_4(VAR_9, "Failed to parse $SYSTEMD_NSPAWN_USE_CGNS: %m");

                        VAR_7 = 1;
                } else {
                        VAR_7 = VAR_9 > 0;
                        VAR_6 |= VAR_4;
                }
        }

        VAR_8 = FUNC_2("SYSTEMD_NSPAWN_CONTAINER_SERVICE");
        if (VAR_8)
                VAR_5 = VAR_8;

        return FUNC_1();
}
