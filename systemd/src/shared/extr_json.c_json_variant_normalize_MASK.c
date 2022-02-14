
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;





 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static JsonVariant *FUNC_9(JsonVariant *VAR_9) {




        if (!VAR_9)
                return ((void*)0);

        VAR_9 = FUNC_2(VAR_9);

        switch (FUNC_7(VAR_9)) {

        case 134:
                return FUNC_1(VAR_9) ? VAR_5 : VAR_3;

        case 132:
                return VAR_4;

        case 133:
                return FUNC_4(VAR_9) == 0 ? VAR_6 : VAR_9;

        case 128:
                return FUNC_8(VAR_9) == 0 ? VAR_8 : VAR_9;

        case 130:
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
 return FUNC_5(VAR_9) == 0.0 ? VAR_7 : VAR_9;
#pragma GCC diagnostic pop

 case 129:
                return FUNC_0(FUNC_6(VAR_9)) ? VAR_2 : VAR_9;

        case 135:
                return FUNC_3(VAR_9) == 0 ? VAR_0 : VAR_9;

        case 131:
                return FUNC_3(VAR_9) == 0 ? VAR_1 : VAR_9;

        default:
                return VAR_9;
        }
}
