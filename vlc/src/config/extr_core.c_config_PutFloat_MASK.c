
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {float f; } ;
struct TYPE_7__ {float f; } ;
struct TYPE_6__ {float f; } ;
struct TYPE_9__ {TYPE_3__ value; TYPE_2__ max; TYPE_1__ min; int i_type; } ;
typedef TYPE_4__ module_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(const char *VAR_2, float VAR_3)
{
    module_config_t *VAR_4 = FUNC_2( VAR_2 );


    FUNC_1(VAR_4 != ((void*)0));
    FUNC_1(FUNC_0(VAR_4->i_type));


    if ((VAR_4->min.f == 0.f) && (VAR_4->max.f == 0.f))
        ;
    else if (VAR_3 < VAR_4->min.f)
        VAR_3 = VAR_4->min.f;
    else if (VAR_3 > VAR_4->max.f)
        VAR_3 = VAR_4->max.f;

    FUNC_4 (&VAR_1);
    VAR_4->value.f = VAR_3;
    VAR_0 = 1;
    FUNC_3 (&VAR_1);
}
