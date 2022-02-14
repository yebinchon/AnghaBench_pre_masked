
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int FUNC_4(void) {
        int VAR_1;
        int VAR_2;

        VAR_1 = FUNC_2("/dev/console", VAR_0);
        if (VAR_1 < 0)
                return FUNC_1(VAR_1, "Failed to open console: %m");



        VAR_2 = FUNC_0();
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to duplicate stderr: %m");


        VAR_2 = FUNC_3(VAR_1, VAR_1, VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to move console to stdin/stdout/stderr: %m");

        return 0;
}
