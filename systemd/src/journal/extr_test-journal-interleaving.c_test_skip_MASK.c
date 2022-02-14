
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ,int ,int *,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int **,char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static void FUNC_17(void (*VAR_3)(void)) {
        char VAR_4[] = "/var/tmp/journal-skip-XXXXXX";
        sd_journal *VAR_5;
        int VAR_6;

        FUNC_4(VAR_4);

        VAR_3();



        FUNC_0(FUNC_10(&VAR_5, VAR_4, 0));
        FUNC_0(FUNC_13(VAR_5));
        FUNC_0(FUNC_8(VAR_5));
        FUNC_15(VAR_5, 4);
        FUNC_7(VAR_5);



        FUNC_0(FUNC_10(&VAR_5, VAR_4, 0));
        FUNC_0(FUNC_14(VAR_5));
        FUNC_0(FUNC_11(VAR_5));
        FUNC_16(VAR_5, 4);
        FUNC_7(VAR_5);



        FUNC_0(FUNC_10(&VAR_5, VAR_4, 0));
        FUNC_0(FUNC_14(VAR_5));
        FUNC_0(VAR_6 = FUNC_12(VAR_5, 4));
        FUNC_1(VAR_6 == 4);
        FUNC_15(VAR_5, 4);
        FUNC_7(VAR_5);



        FUNC_0(FUNC_10(&VAR_5, VAR_4, 0));
        FUNC_0(FUNC_13(VAR_5));
        FUNC_0(VAR_6 = FUNC_9(VAR_5, 4));
        FUNC_1(VAR_6 == 4);
        FUNC_16(VAR_5, 4);
        FUNC_7(VAR_5);

        FUNC_3("Done...");

        if (VAR_2)
                FUNC_3("Not removing %s", VAR_4);
        else {
                FUNC_2(".", 3000000, 0, 0, ((void*)0), 1);

                FUNC_1(FUNC_6(VAR_4, VAR_1|VAR_0) >= 0);
        }

        FUNC_5("------------------------------------------------------------");
}
