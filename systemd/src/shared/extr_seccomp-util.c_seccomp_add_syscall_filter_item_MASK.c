
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef char const scmp_filter_ctx ;
typedef int SyscallFilterSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int,char*,char const*,...) ;
 int FUNC_4 (char const*,int const*,int ,char**,int) ;
 int FUNC_5 (char const*,int ,int,int ) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char**,char const*) ;
 int * FUNC_8 (char const*) ;

int FUNC_9(scmp_filter_ctx *VAR_3, const char *VAR_4, uint32_t VAR_5, char **VAR_6, bool VAR_7) {
        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        if (FUNC_7(VAR_6, VAR_4))
                return 0;

        if (VAR_4[0] == '@') {
                const SyscallFilterSet *VAR_8;

                VAR_8 = FUNC_8(VAR_4);
                if (!VAR_8)
                        return FUNC_3(FUNC_0(VAR_1),
                                               "Filter set %s is not known!",
                                               VAR_4);

                return FUNC_4(VAR_3, VAR_8, VAR_5, VAR_6, VAR_7);

        } else {
                int VAR_9, VAR_10;

                VAR_9 = FUNC_6(VAR_4);
                if (VAR_9 == VAR_2) {
                        if (VAR_7)
                                FUNC_2("System call %s is not known, ignoring.", VAR_4);
                        return 0;
                }

                VAR_10 = FUNC_5(VAR_3, VAR_5, VAR_9, 0);
                if (VAR_10 < 0) {

                        bool VAR_11 = VAR_10 == -VAR_0;

                        if (!VAR_11 || VAR_7)
                                FUNC_3(VAR_10, "Failed to add rule for system call %s() / %d%s: %m",
                                                VAR_4, VAR_9, VAR_11 ? ", ignoring" : "");
                        if (!VAR_11)
                                return VAR_10;
                }

                return 0;
        }
}
