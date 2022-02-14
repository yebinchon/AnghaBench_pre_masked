
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (double) ;
 double FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(double *VAR_0, double *VAR_1, uint32_t *VAR_2)
{
    double VAR_3;
    double VAR_4, VAR_5;
    do {
        VAR_4 = 2 * FUNC_0(VAR_2) - 1;
        VAR_5 = 2 * FUNC_0(VAR_2) - 1;
        VAR_3 = VAR_4 * VAR_4 + VAR_5 * VAR_5;
    } while (VAR_3 >= 1.0);

    VAR_3 = FUNC_2(-2 * FUNC_1(VAR_3) / VAR_3);
    *VAR_0 = VAR_4 * VAR_3;
    *VAR_1 = VAR_5 * VAR_3;
}
