
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(int VAR_1, char *VAR_2[]) {
        int VAR_3;

        FUNC_7();
        FUNC_6();

        if (VAR_1 != 3)
                return FUNC_5(FUNC_1(VAR_0),
                                       "This program takes two arguments.");
        if (!FUNC_0(VAR_2[1], "start", "stop"))
                return FUNC_5(FUNC_1(VAR_0),
                                       "First argument must be either \"start\" or \"stop\".");

        VAR_3 = FUNC_8();
        if (VAR_3 < 0)
                return FUNC_5(VAR_3, "Could not initialize labelling: %m\n");

        FUNC_10(0022);

        if (FUNC_9(VAR_2[1], "start"))
                return FUNC_3(VAR_2[2]);
        if (FUNC_9(VAR_2[1], "stop"))
                return FUNC_4(VAR_2[2]);
        FUNC_2("Unknown verb!");
}
