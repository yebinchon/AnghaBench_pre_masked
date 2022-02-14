
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int VAR_3 ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(int VAR_4, char *VAR_5[]) {
        int VAR_6 = 0;

        FUNC_5();

        if (VAR_4 > 1 && VAR_4 != 4)
                return FUNC_3(FUNC_0(VAR_0),
                                       "This program takes three or no arguments.");

        if (VAR_4 > 1)
                VAR_1 = VAR_5[1];


        if (!FUNC_1()) {
                FUNC_2("Not running in an initrd, quitting.");
                return 0;
        }

        VAR_6 = FUNC_7(VAR_3, ((void*)0), 0);
        if (VAR_6 < 0)
                FUNC_6(VAR_6, "Failed to parse kernel command line, ignoring: %m");

        if (VAR_2) {
                FUNC_4("Found \"noresume\" on the kernel command line, quitting.");
                return 0;
        }

        return FUNC_8();
}
