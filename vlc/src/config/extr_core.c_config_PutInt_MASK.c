
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i; } ;
struct TYPE_6__ {scalar_t__ i; } ;
struct TYPE_8__ {scalar_t__ i; } ;
struct TYPE_9__ {TYPE_2__ value; TYPE_1__ max; TYPE_3__ min; int i_type; } ;
typedef TYPE_4__ module_config_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(const char *VAR_2, int64_t VAR_3 )
{
    module_config_t *VAR_4 = FUNC_2( VAR_2 );


    FUNC_1(VAR_4 != ((void*)0));
    FUNC_1(FUNC_0(VAR_4->i_type));

    if (VAR_3 < VAR_4->min.i)
        VAR_3 = VAR_4->min.i;
    if (VAR_3 > VAR_4->max.i)
        VAR_3 = VAR_4->max.i;

    FUNC_4 (&VAR_1);
    VAR_4->value.i = VAR_3;
    VAR_0 = 1;
    FUNC_3 (&VAR_1);
}
