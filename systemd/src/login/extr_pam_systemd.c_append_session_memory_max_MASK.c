
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef unsigned int uint32_t ;
typedef int sd_bus_message ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,unsigned int*) ;
 int FUNC_4 (int *,char*,char*,char*,unsigned int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char const* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(pam_handle_t *VAR_3, sd_bus_message *VAR_4, const char *VAR_5) {
        uint64_t VAR_6;
        int VAR_7;

        if (FUNC_0(VAR_5))
                return 0;

        if (FUNC_5(VAR_5, "infinity")) {
                VAR_7 = FUNC_4(VAR_4, "(sv)", "MemoryMax", "t", (uint64_t)-1);
                if (VAR_7 < 0) {
                        FUNC_1(VAR_3, VAR_0, "Failed to append to bus message: %s", FUNC_6(VAR_7));
                        return VAR_7;
                }
        } else {
                VAR_7 = FUNC_2(VAR_5);
                if (VAR_7 >= 0) {
                        VAR_7 = FUNC_4(VAR_4, "(sv)", "MemoryMaxScale", "u", (uint32_t) (((uint64_t) VAR_7 * VAR_2) / 1000U));
                        if (VAR_7 < 0) {
                                FUNC_1(VAR_3, VAR_0, "Failed to append to bus message: %s", FUNC_6(VAR_7));
                                return VAR_7;
                        }
                } else {
                        VAR_7 = FUNC_3(VAR_5, 1024, &VAR_6);
                        if (VAR_7 >= 0) {
                                VAR_7 = FUNC_4(VAR_4, "(sv)", "MemoryMax", "t", VAR_6);
                                if (VAR_7 < 0) {
                                        FUNC_1(VAR_3, VAR_0, "Failed to append to bus message: %s", FUNC_6(VAR_7));
                                        return VAR_7;
                                }
                        } else
                                FUNC_1(VAR_3, VAR_1, "Failed to parse systemd.memory_max: %s, ignoring.", VAR_5);
                }
        }

        return 0;
}
