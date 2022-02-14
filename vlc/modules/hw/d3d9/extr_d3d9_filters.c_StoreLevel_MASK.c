
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct filter_level {float default_val; float max; float min; } ;
struct TYPE_8__ {float ll; } ;
struct TYPE_7__ {float ll; } ;
struct TYPE_6__ {float ll; } ;
struct TYPE_9__ {TYPE_3__ DefaultValue; TYPE_2__ MinValue; TYPE_1__ MaxValue; } ;
typedef float LONG ;
typedef TYPE_4__ DXVA2_ValueRange ;



__attribute__((used)) static LONG FUNC_0(const struct filter_level *VAR_0, const DXVA2_ValueRange *VAR_1, float VAR_2)
{
    LONG VAR_3;
    if (VAR_2 > VAR_0->default_val)
    {
        VAR_3 = (VAR_1->MaxValue.ll - VAR_1->DefaultValue.ll) * (VAR_2 - VAR_0->default_val) /
                (VAR_0->max - VAR_0->default_val);
    }
    else if (VAR_2 < VAR_0->default_val)
    {
        VAR_3 = (VAR_1->MinValue.ll - VAR_1->DefaultValue.ll) * (VAR_2 - VAR_0->default_val) /
                (VAR_0->min - VAR_0->default_val);
    }
    else
        VAR_3 = 0;

    return VAR_3 + VAR_1->DefaultValue.ll;
}
