
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char const*,int *,int,char**,int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_7, bool VAR_8, char **VAR_9) {
        int VAR_10;






        if (FUNC_2(VAR_7)) {
                char *VAR_11;

                if (!VAR_5 && FUNC_3(VAR_7, VAR_4) >= 0)
                        FUNC_6("Ambiguous invocation: current working directory contains file matching non-path argument '%s', ignoring. "
                                    "Prefix argument with './' to force reference to file in current working directory.", VAR_7);

                VAR_11 = FUNC_7(VAR_7);
                if (!VAR_11)
                        return FUNC_5();

                *VAR_9 = VAR_11;
                return 0;
        }

        if (VAR_6 != VAR_0)
                return FUNC_4(FUNC_0(VAR_3),
                                       "Operations on images by path not supported when connecting to remote systems.");

        VAR_10 = FUNC_1(VAR_7, ((void*)0), VAR_2 | (VAR_8 ? VAR_1 : 0), VAR_9, ((void*)0));
        if (VAR_10 < 0)
                return FUNC_4(VAR_10, "Cannot normalize specified image path '%s': %m", VAR_7);

        return 0;
}
