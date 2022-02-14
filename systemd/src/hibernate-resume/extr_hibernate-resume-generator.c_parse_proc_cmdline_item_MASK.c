
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char*,char const*,int *) ;

__attribute__((used)) static int FUNC_7(const char *VAR_4, const char *VAR_5, void *VAR_6) {

        if (FUNC_5(VAR_4, "resume")) {
                char *VAR_7;

                if (FUNC_4(VAR_4, VAR_5))
                        return 0;

                VAR_7 = FUNC_1(VAR_5);
                if (!VAR_7)
                        return FUNC_2();

                FUNC_0(VAR_1, VAR_7);

        } else if (FUNC_5(VAR_4, "resumeflags")) {

                if (FUNC_4(VAR_4, VAR_5))
                        return 0;

                if (!FUNC_6(&VAR_2, ",", VAR_5, ((void*)0)))
                        return FUNC_2();

        } else if (FUNC_5(VAR_4, "rootflags")) {

                if (FUNC_4(VAR_4, VAR_5))
                        return 0;

                if (!FUNC_6(&VAR_3, ",", VAR_5, ((void*)0)))
                        return FUNC_2();

        } else if (FUNC_5(VAR_4, "noresume")) {
                if (VAR_5) {
                        FUNC_3("\"noresume\" kernel command line switch specified with an argument, ignoring.");
                        return 0;
                }

                VAR_0 = 1;
        }

        return 0;
}
