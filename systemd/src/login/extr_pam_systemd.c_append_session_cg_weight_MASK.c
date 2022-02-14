
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,char*,char const*) ;
 int FUNC_3 (int *,char*,char const*,char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char const* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(pam_handle_t *VAR_2, sd_bus_message *VAR_3, const char *VAR_4, const char *VAR_5) {
        uint64_t VAR_6;
        int VAR_7;

        if (FUNC_1(VAR_4))
                return 0;

        VAR_7 = FUNC_0(VAR_4, &VAR_6);
        if (VAR_7 >= 0) {
                VAR_7 = FUNC_3(VAR_3, "(sv)", VAR_5, "t", VAR_6);
                if (VAR_7 < 0) {
                        FUNC_2(VAR_2, VAR_0, "Failed to append to bus message: %s", FUNC_5(VAR_7));
                        return VAR_7;
                }
        } else if (FUNC_4(VAR_5, "CPUWeight"))
                FUNC_2(VAR_2, VAR_1, "Failed to parse systemd.cpu_weight: %s, ignoring.", VAR_4);
        else
                FUNC_2(VAR_2, VAR_1, "Failed to parse systemd.io_weight: %s, ignoring.", VAR_4);

        return 0;
}
