
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float Maximum; float Default; float Minimum; } ;
struct filter_level {float default_val; float max; float min; TYPE_1__ Range; int level; } ;


 int FUNC_0 (int *,float) ;

__attribute__((used)) static void FUNC_1(struct filter_level *VAR_0, float VAR_1)
{
    int VAR_2;
    if (VAR_1 > VAR_0->default_val)
        VAR_2 = (VAR_0->Range.Maximum - VAR_0->Range.Default) * (VAR_1 - VAR_0->default_val) /
                (VAR_0->max - VAR_0->default_val);
    else if (VAR_1 < VAR_0->default_val)
        VAR_2 = (VAR_0->Range.Minimum - VAR_0->Range.Default) * (VAR_1 - VAR_0->default_val) /
                (VAR_0->min - VAR_0->default_val);
    else
        VAR_2 = 0;

    FUNC_0( &VAR_0->level, VAR_0->Range.Default + VAR_2 );
}
