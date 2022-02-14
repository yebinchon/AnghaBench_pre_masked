
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Varlink ;
typedef int JsonVariant ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *) ;

int FUNC_6(Varlink *VAR_2, JsonVariant *VAR_3) {

        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3, -VAR_0);






        if (FUNC_4(VAR_3))
                return FUNC_5(VAR_2, VAR_1, VAR_3);

        if (FUNC_3(VAR_3) &&
            FUNC_2(VAR_3) > 0)
                return FUNC_5(VAR_2, VAR_1,
                                     FUNC_1(VAR_3, 0));

        return -VAR_0;
}
