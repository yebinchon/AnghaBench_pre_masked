
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ texture; } ;
typedef TYPE_1__ d3d_region_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(size_t VAR_0, d3d_region_t *VAR_1)
{
    for (size_t VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        if (VAR_1[VAR_2].texture)
            FUNC_0(VAR_1[VAR_2].texture);
    }
    FUNC_1(VAR_1);
}
