
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int) ;
 int VAR_3 ;
 int FUNC_10 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_11(const char *VAR_4, const char *VAR_5, const char *VAR_6) {
        int VAR_7, VAR_8 = 0, VAR_9 = 0;

        FUNC_4(VAR_0 = VAR_4);
        FUNC_4(VAR_1 = VAR_6);

        VAR_7 = FUNC_10(VAR_3, ((void*)0), 0);
        if (VAR_7 < 0)
                FUNC_8(VAR_7, "Failed to parse kernel command line, ignoring: %m");

        (void) FUNC_5();


        if (FUNC_7()) {
                VAR_7 = FUNC_0();

                VAR_8 = FUNC_1();

                VAR_9 = FUNC_2();
        } else
                VAR_7 = FUNC_3();


        if (VAR_2) {

                VAR_8 = FUNC_9(0);


                if (FUNC_7())
                        VAR_9 = FUNC_9(1);
                else
                        VAR_9 = FUNC_6(VAR_0);
        }

        return VAR_7 < 0 ? VAR_7 : VAR_8 < 0 ? VAR_8 : VAR_9;
}
