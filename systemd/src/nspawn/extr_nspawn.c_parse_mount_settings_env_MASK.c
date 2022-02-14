
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int) ;
 int VAR_4 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(void) {
        const char *VAR_5;
        int VAR_6;

        VAR_6 = FUNC_2("SYSTEMD_NSPAWN_TMPFS_TMP");
        if (VAR_6 < 0 && VAR_6 != -VAR_0)
                return FUNC_3(VAR_6, "Failed to parse $SYSTEMD_NSPAWN_TMPFS_TMP: %m");
        if (VAR_6 >= 0)
                FUNC_0(VAR_4, VAR_3, VAR_6 > 0);

        VAR_5 = FUNC_1("SYSTEMD_NSPAWN_API_VFS_WRITABLE");
        if (FUNC_5(VAR_5, "network"))
                VAR_4 |= VAR_2|VAR_1;

        else if (VAR_5) {
                VAR_6 = FUNC_4(VAR_5);
                if (VAR_6 < 0)
                        return FUNC_3(VAR_6, "Failed to parse $SYSTEMD_NSPAWN_API_VFS_WRITABLE: %m");

                FUNC_0(VAR_4, VAR_2, VAR_6 == 0);
                FUNC_0(VAR_4, VAR_1, 0);
        }

        return 0;
}
