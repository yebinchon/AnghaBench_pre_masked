
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JsonVariant ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(JsonVariant **VAR_0, size_t VAR_1) {
        size_t VAR_2;

        FUNC_0(VAR_0 || VAR_1 == 0);

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                FUNC_1(VAR_0[VAR_2]);
}
