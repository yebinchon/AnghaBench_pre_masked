
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;
typedef int sd_id128_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (char*) ;

int FUNC_8(sd_journal *VAR_0, const char *VAR_1) {
        char VAR_2[9+32+1] = "_BOOT_ID=";
        sd_id128_t VAR_3;
        int VAR_4;

        FUNC_0(VAR_0);

        if (VAR_1) {
                VAR_4 = FUNC_1(VAR_1, &VAR_3);
                if (VAR_4 < 0)
                        return FUNC_2(VAR_4, "Failed to get boot id of container %s: %m", VAR_1);
        } else {
                VAR_4 = FUNC_3(&VAR_3);
                if (VAR_4 < 0)
                        return FUNC_2(VAR_4, "Failed to get boot id: %m");
        }

        FUNC_4(VAR_3, VAR_2 + 9);
        VAR_4 = FUNC_6(VAR_0, VAR_2, FUNC_7(VAR_2));
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to add match: %m");

        VAR_4 = FUNC_5(VAR_0);
        if (VAR_4 < 0)
                return FUNC_2(VAR_4, "Failed to add conjunction: %m");

        return 0;
}
