
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char const* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 int VAR_5 ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_6, const char *VAR_7, const char *VAR_8) {
        int VAR_9, VAR_10;

        FUNC_0(VAR_3 = VAR_7);

        VAR_9 = FUNC_6(VAR_5, ((void*)0), VAR_0 | VAR_1);
        if (VAR_9 < 0)
                FUNC_5(VAR_9, "Failed to parse kernel command line, ignoring: %m");

        if (VAR_2) {
                VAR_9 = FUNC_7(&VAR_4, "debug-shell.service");
                if (VAR_9 < 0)
                        return FUNC_4();

                FUNC_3(VAR_3);
        }

        VAR_9 = FUNC_1();
        VAR_10 = FUNC_2();

        return VAR_9 < 0 ? VAR_9 : VAR_10;
}
