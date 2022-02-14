
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i; } ;
struct TYPE_5__ {TYPE_1__ value; int i_type; } ;
typedef TYPE_2__ module_config_t ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (char const*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int64_t FUNC_5(const char *VAR_1)
{
    module_config_t *VAR_2 = FUNC_2( VAR_1 );


    FUNC_1(VAR_2 != ((void*)0));
    FUNC_1(FUNC_0(VAR_2->i_type));

    int64_t VAR_3;

    FUNC_3 (&VAR_0);
    VAR_3 = VAR_2->value.i;
    FUNC_4 (&VAR_0);
    return VAR_3;
}
