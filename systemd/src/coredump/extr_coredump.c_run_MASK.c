
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (int,char**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(int VAR_6, char *VAR_7[]) {
        int VAR_8;




        FUNC_5(VAR_1);
        FUNC_4();


        (void) FUNC_7(VAR_2, 0);


        (void) FUNC_6();

        FUNC_2("Selected storage '%s'.", FUNC_1(VAR_5));
        FUNC_2("Selected compression %s.", FUNC_13(VAR_4));

        VAR_8 = FUNC_11(0);
        if (VAR_8 < 0)
                return FUNC_3(VAR_8, "Failed to determine the number of file descriptors: %m");



        if (VAR_8 == 0) {
                if (FUNC_12(VAR_7[1], "--backtrace"))
                        return FUNC_8(VAR_6, VAR_7);
                else
                        return FUNC_9(VAR_6, VAR_7);
        } else if (VAR_8 == 1)
                return FUNC_10(VAR_3);

        return FUNC_3(FUNC_0(VAR_0),
                               "Received unexpected number of file descriptors.");
}
