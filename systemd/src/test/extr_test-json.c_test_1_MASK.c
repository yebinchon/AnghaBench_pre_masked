
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
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,unsigned int) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void FUNC_10(JsonVariant *VAR_6) {
        JsonVariant *VAR_7, *VAR_8;
        unsigned VAR_9;


        FUNC_0(FUNC_3(VAR_6) == 6);


        VAR_7 = FUNC_2(VAR_6, "k");
        FUNC_0(VAR_7 && FUNC_7(VAR_7) == VAR_4);


        FUNC_0(FUNC_9(FUNC_6(VAR_7), "v"));


        VAR_7 = FUNC_2(VAR_6, "foo");
        FUNC_0(VAR_7 && FUNC_7(VAR_7) == VAR_0 && FUNC_3(VAR_7) == 3);


        for (VAR_9 = 0; VAR_9 < 3; ++VAR_9) {
                VAR_8 = FUNC_1(VAR_7, VAR_9);
                FUNC_0(VAR_8 && FUNC_7(VAR_8) == VAR_5 && FUNC_8(VAR_8) == (VAR_9+1));
                FUNC_0(VAR_8 && FUNC_4(VAR_8, VAR_1) && FUNC_5(VAR_8) == (VAR_9+1));
        }


        VAR_7 = FUNC_2(VAR_6, "bar");
        FUNC_0(VAR_7 && FUNC_7(VAR_7) == VAR_3 && FUNC_3(VAR_7) == 2);


        VAR_8 = FUNC_2(VAR_7, "zap");
        FUNC_0(VAR_8 && FUNC_7(VAR_8) == VAR_2);
}
