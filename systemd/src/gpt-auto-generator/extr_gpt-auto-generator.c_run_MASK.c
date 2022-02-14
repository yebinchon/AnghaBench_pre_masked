
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char const* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*) ;
 int VAR_3 ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_4, const char *VAR_5, const char *VAR_6) {
        int VAR_7, VAR_8;

        FUNC_2(VAR_0 = VAR_6);

        if (FUNC_3() > 0) {
                FUNC_5("In a container, exiting.");
                return 0;
        }

        VAR_7 = FUNC_7(VAR_3, ((void*)0), 0);
        if (VAR_7 < 0)
                FUNC_6(VAR_7, "Failed to parse kernel command line, ignoring: %m");

        if (!VAR_1) {
                FUNC_5("Disabled, exiting.");
                return 0;
        }

        if (VAR_2)
                VAR_7 = FUNC_1();

        if (!FUNC_4()) {
                VAR_8 = FUNC_0();
                if (VAR_7 >= 0)
                        VAR_7 = VAR_8;
        }

        return VAR_7;
}
