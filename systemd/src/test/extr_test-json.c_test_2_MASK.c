
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 double FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,char*) ;

__attribute__((used)) static void FUNC_12(JsonVariant *VAR_7) {
        JsonVariant *VAR_8, *VAR_9;


        FUNC_0(FUNC_4(VAR_7) == 4);


        VAR_8 = FUNC_3(VAR_7, "mutant");
        FUNC_0(VAR_8 && FUNC_9(VAR_8) == VAR_0 && FUNC_4(VAR_8) == 4);


        VAR_9 = FUNC_2(VAR_8, 0);
        FUNC_0(VAR_9 && FUNC_9(VAR_9) == VAR_6 && FUNC_10(VAR_9) == 1);
        FUNC_0(VAR_9 && FUNC_5(VAR_9, VAR_1) && FUNC_6(VAR_9) == 1);


        VAR_9 = FUNC_2(VAR_8, 1);
        FUNC_0(VAR_9 && FUNC_9(VAR_9) == VAR_2);


        VAR_9 = FUNC_2(VAR_8, 2);
        FUNC_0(VAR_9 && FUNC_9(VAR_9) == VAR_5 && FUNC_11(FUNC_8(VAR_9), "1"));


        VAR_9 = FUNC_2(VAR_8, 3);
        FUNC_0(VAR_9 && FUNC_9(VAR_9) == VAR_3 && FUNC_4(VAR_9) == 2);


        VAR_8 = FUNC_3(VAR_9, "1");
        FUNC_0(VAR_8 && FUNC_9(VAR_8) == VAR_0 && FUNC_4(VAR_8) == 2);


        VAR_9 = FUNC_2(VAR_8, 0);
        FUNC_0(VAR_9 && FUNC_9(VAR_9) == VAR_6 && FUNC_10(VAR_9) == 1);
        FUNC_0(VAR_9 && FUNC_5(VAR_9, VAR_1) && FUNC_6(VAR_9) == 1);


        VAR_9 = FUNC_2(VAR_8, 1);
        FUNC_0(VAR_9 && FUNC_9(VAR_9) == VAR_5 && FUNC_11(FUNC_8(VAR_9), "1"));


        VAR_8 = FUNC_3(VAR_7, "thisisaverylongproperty");
        FUNC_0(VAR_8 && FUNC_9(VAR_8) == VAR_4 && FUNC_1(FUNC_7(VAR_8) - 1.27) < 0.001);
}
