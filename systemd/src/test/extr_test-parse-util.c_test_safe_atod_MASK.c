
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 double FUNC_1 (double) ;
 int FUNC_2 (char*,double*) ;
 int FUNC_3 (int ,char*) ;
 double FUNC_4 (char*,char**) ;

__attribute__((used)) static void FUNC_5(void) {
        int VAR_3;
        double VAR_4;
        char *VAR_5;

        VAR_3 = FUNC_2("junk", &VAR_4);
        FUNC_0(VAR_3 == -VAR_0);

        VAR_3 = FUNC_2("0.2244", &VAR_4);
        FUNC_0(VAR_3 == 0);
        FUNC_0(FUNC_1(VAR_4 - 0.2244) < 0.000001);

        VAR_3 = FUNC_2("0,5", &VAR_4);
        FUNC_0(VAR_3 == -VAR_0);

        VAR_2 = 0;
        FUNC_4("0,5", &VAR_5);
        FUNC_0(*VAR_5 == ',');

        VAR_3 = FUNC_2("", &VAR_4);
        FUNC_0(VAR_3 == -VAR_0);


        if (FUNC_3(VAR_1, "de_DE.utf8")) {

                VAR_3 = FUNC_2("0.2244", &VAR_4);
                FUNC_0(VAR_3 == 0);
                FUNC_0(FUNC_1(VAR_4 - 0.2244) < 0.000001);

                VAR_3 = FUNC_2("0,5", &VAR_4);
                FUNC_0(VAR_3 == -VAR_0);

                VAR_2 = 0;
                FUNC_0(FUNC_1(FUNC_4("0,5", &VAR_5) - 0.5) < 0.00001);

                VAR_3 = FUNC_2("", &VAR_4);
                FUNC_0(VAR_3 == -VAR_0);
        }


        FUNC_0(FUNC_3(VAR_1, "C"));

        VAR_3 = FUNC_2("0.2244", &VAR_4);
        FUNC_0(VAR_3 == 0);
        FUNC_0(FUNC_1(VAR_4 - 0.2244) < 0.000001);

        VAR_3 = FUNC_2("0,5", &VAR_4);
        FUNC_0(VAR_3 == -VAR_0);

        VAR_2 = 0;
        FUNC_4("0,5", &VAR_5);
        FUNC_0(*VAR_5 == ',');

        VAR_3 = FUNC_2("", &VAR_4);
        FUNC_0(VAR_3 == -VAR_0);
}
