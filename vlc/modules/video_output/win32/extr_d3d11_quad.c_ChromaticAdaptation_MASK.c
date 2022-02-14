
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xy_primary {scalar_t__ y; scalar_t__ x; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct xy_primary *VAR_0,
                                const struct xy_primary *VAR_1,
                                double VAR_2[3 * 3])
{
    if (FUNC_0(VAR_0->x - VAR_1->x) < 1e-6 &&
        FUNC_0(VAR_0->y - VAR_1->y) < 1e-6)
        return;


}
