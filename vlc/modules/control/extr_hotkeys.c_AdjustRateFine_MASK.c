
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 double FUNC_0 (float) ;
 double FUNC_1 (double) ;

__attribute__((used)) static inline float
FUNC_2(float VAR_2, int const VAR_3)
{
    float VAR_4 = VAR_1;
    float VAR_5 = VAR_0;
    int VAR_6 = VAR_2 < 0 ? -1 : 1;
    VAR_2 = FUNC_1(FUNC_0(VAR_2) / 0.1 + VAR_3 + 0.05) * 0.1;
    if (VAR_2 < VAR_4)
       VAR_2 = VAR_4;
    else if (VAR_2 > VAR_5)
        VAR_2 = VAR_5;
    return VAR_2 * VAR_6;
}
