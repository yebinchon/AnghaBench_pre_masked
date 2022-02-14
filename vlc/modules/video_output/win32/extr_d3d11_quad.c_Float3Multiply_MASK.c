
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const double VAR_0[3], const double VAR_1[3 * 3], double VAR_2[3])
{
    for (size_t VAR_3=0; VAR_3<3; VAR_3++)
    {
        VAR_2[VAR_3] = VAR_1[VAR_3 + 0*3] * VAR_0[0] +
                 VAR_1[VAR_3 + 1*3] * VAR_0[1] +
                 VAR_1[VAR_3 + 2*3] * VAR_0[2];
    }
}
