
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; } ;
typedef TYPE_1__ spu_scale_t ;


 void* VAR_0 ;

__attribute__((used)) static spu_scale_t FUNC_0(int VAR_1, int VAR_2)
{
    spu_scale_t VAR_3 = { .w = VAR_1, .h = VAR_2 };
    if (VAR_3.w <= 0)
        VAR_3.w = VAR_0;
    if (VAR_3.h <= 0)
        VAR_3.h = VAR_0;
    return VAR_3;
}
