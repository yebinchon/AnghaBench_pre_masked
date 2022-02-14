
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 long double FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 unsigned int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(JsonVariant *VAR_3) {
        size_t VAR_4;



        FUNC_1(FUNC_3(VAR_3) == 13);

        for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_3); VAR_4++) {
                JsonVariant *VAR_5;
                size_t VAR_6;

                FUNC_1(*(VAR_5 = FUNC_2(VAR_3, VAR_4)));

                FUNC_1(FUNC_5(VAR_5) == 0);
                FUNC_1(FUNC_13(VAR_5) == 0U);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
 FUNC_1(FUNC_11(VAR_5) == 0.0L);
#pragma GCC diagnostic pop

 FUNC_1(*FUNC_6(VAR_5));
                FUNC_1(*FUNC_10(VAR_5));
                FUNC_1(*FUNC_9(VAR_5));
                FUNC_1(*FUNC_8(VAR_5));

                FUNC_1(!FUNC_7(VAR_5));

                FUNC_1(*FUNC_0(FUNC_12(VAR_5), VAR_0, VAR_2, VAR_1));

                for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_3); VAR_6++) {
                        JsonVariant *VAR_7;

                        FUNC_1(*(VAR_7 = FUNC_2(VAR_3, VAR_6)));

                        FUNC_1(*FUNC_4(VAR_5, VAR_7));
                }
        }
}
