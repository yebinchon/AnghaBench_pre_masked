
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 scalar_t__ FUNC_3 (int *,char const**) ;
 scalar_t__ FUNC_4 (int *,char*,char const**) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(sd_device *VAR_7) {
        const char *VAR_8;


        if (VAR_3 != VAR_1 && VAR_6 && VAR_4 >= 0)
                return 0;

        for (;;) {
                if (FUNC_4(VAR_7, "removable", &VAR_8) > 0)
                        break;

                if (FUNC_2(VAR_7, &VAR_7) < 0)
                        return 0;

                if (FUNC_3(VAR_7, &VAR_8) < 0 || !FUNC_5(VAR_8, "block"))
                        return 0;
        }

        if (FUNC_1(VAR_8) <= 0)
                return 0;

        FUNC_0("Discovered removable device.");

        if (VAR_3 == VAR_1) {
                FUNC_0("Automatically turning on automount.");
                VAR_3 = VAR_0;
        }

        if (!VAR_6) {
                FUNC_0("Setting idle timeout to 1s.");
                VAR_5 = VAR_2;
        }

        if (VAR_4 < 0) {
                FUNC_0("Binding automount unit to device.");
                VAR_4 = 1;
        }

        return 1;
}
