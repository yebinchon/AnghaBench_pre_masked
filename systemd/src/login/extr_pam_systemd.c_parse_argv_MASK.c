
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,...) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(
                pam_handle_t *VAR_1,
                int VAR_2, const char **VAR_3,
                const char **VAR_4,
                const char **VAR_5,
                const char **VAR_6,
                bool *VAR_7) {

        unsigned VAR_8;

        FUNC_0(VAR_2 >= 0);
        FUNC_0(VAR_2 == 0 || VAR_3);

        for (VAR_8 = 0; VAR_8 < (unsigned) VAR_2; VAR_8++) {
                if (FUNC_3(VAR_3[VAR_8], "class=")) {
                        if (VAR_4)
                                *VAR_4 = VAR_3[VAR_8] + 6;

                } else if (FUNC_3(VAR_3[VAR_8], "type=")) {
                        if (VAR_5)
                                *VAR_5 = VAR_3[VAR_8] + 5;

                } else if (FUNC_3(VAR_3[VAR_8], "desktop=")) {
                        if (VAR_6)
                                *VAR_6 = VAR_3[VAR_8] + 8;

                } else if (FUNC_4(VAR_3[VAR_8], "debug")) {
                        if (VAR_7)
                                *VAR_7 = 1;

                } else if (FUNC_3(VAR_3[VAR_8], "debug=")) {
                        int VAR_9;

                        VAR_9 = FUNC_2(VAR_3[VAR_8] + 6);
                        if (VAR_9 < 0)
                                FUNC_1(VAR_1, VAR_0, "Failed to parse debug= argument, ignoring.");
                        else if (VAR_7)
                                *VAR_7 = VAR_9;

                } else
                        FUNC_1(VAR_1, VAR_0, "Unknown parameter '%s', ignoring", VAR_3[VAR_8]);
        }

        return 0;
}
