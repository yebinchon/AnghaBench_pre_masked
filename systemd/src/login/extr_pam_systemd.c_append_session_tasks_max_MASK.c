
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus_message ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*,char*,char*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 char const* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(pam_handle_t *VAR_2, sd_bus_message *VAR_3, const char *VAR_4) {
        uint64_t VAR_5;
        int VAR_6;


        if (FUNC_0(VAR_4) || FUNC_4(VAR_4, "infinity"))
                return 0;

        VAR_6 = FUNC_2(VAR_4, &VAR_5);
        if (VAR_6 >= 0) {
                VAR_6 = FUNC_3(VAR_3, "(sv)", "TasksMax", "t", VAR_5);
                if (VAR_6 < 0) {
                        FUNC_1(VAR_2, VAR_0, "Failed to append to bus message: %s", FUNC_5(VAR_6));
                        return VAR_6;
                }
        } else
                FUNC_1(VAR_2, VAR_1, "Failed to parse systemd.tasks_max: %s, ignoring.", VAR_4);

        return 0;
}
