
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct filter_level {float default_val; int Range; int level; int max; int min; } ;
struct TYPE_6__ {int f; } ;
struct TYPE_5__ {int f; } ;
struct TYPE_7__ {TYPE_2__ max; TYPE_1__ min; } ;
typedef TYPE_3__ module_config_t ;
typedef int filter_t ;


 int FUNC_0 (struct filter_level*,int *,float) ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__* FUNC_2 (char const*) ;
 float FUNC_3 (int *,char const*) ;

__attribute__((used)) static void FUNC_4(filter_t *VAR_0, struct filter_level *VAR_1, const char *VAR_2, float VAR_3)
{
    module_config_t *VAR_4 = FUNC_2(VAR_2);
    VAR_1->min = VAR_4->min.f;
    VAR_1->max = VAR_4->max.f;
    VAR_1->default_val = VAR_3;

    float VAR_5 = FUNC_3( VAR_0, VAR_2 );

    FUNC_1( &VAR_1->level, FUNC_0( VAR_1, &VAR_1->Range, VAR_5 ) );
}
