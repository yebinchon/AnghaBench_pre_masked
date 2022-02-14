
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {float Maximum; float Default; float Minimum; } ;
struct filter_level {int min; int max; int default_val; TYPE_3__ Range; int level; } ;
struct TYPE_7__ {int f; } ;
struct TYPE_6__ {int f; } ;
struct TYPE_9__ {TYPE_2__ max; TYPE_1__ min; } ;
typedef TYPE_4__ module_config_t ;
typedef int filter_t ;


 int FUNC_0 (int *,float) ;
 TYPE_4__* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 float FUNC_3 (int *,char const*) ;

__attribute__((used)) static void FUNC_4(filter_t *VAR_0, struct filter_level *VAR_1, const char *VAR_2, float VAR_3)
{
    int VAR_4 = 0;

    module_config_t *VAR_5 = FUNC_1(VAR_2);
    if (FUNC_2(VAR_5 == ((void*)0)))
    {
        VAR_1->min = 0.;
        VAR_1->max = 2.;
        VAR_1->default_val = 1.;
    }
    else
    {
        VAR_1->min = VAR_5->min.f;
        VAR_1->max = VAR_5->max.f;
        VAR_1->default_val = VAR_3;

        float VAR_6 = FUNC_3( VAR_0, VAR_2 );

        if (VAR_6 > VAR_1->default_val)
            VAR_4 = (VAR_1->Range.Maximum - VAR_1->Range.Default) * (VAR_6 - VAR_1->default_val) /
                    (VAR_1->max - VAR_1->default_val);
        else if (VAR_6 < VAR_1->default_val)
            VAR_4 = (VAR_1->Range.Minimum - VAR_1->Range.Default) * (VAR_6 - VAR_1->default_val) /
                    (VAR_1->min - VAR_1->default_val);
    }

    FUNC_0( &VAR_1->level, VAR_1->Range.Default + VAR_4 );
}
