
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* msg; int code; } ;


 TYPE_1__* VAR_0 ;
 char const* VAR_1 ;

const char *FUNC_0 (int VAR_2)
{
    for (unsigned VAR_3 = 0; *VAR_0[VAR_3].msg; VAR_3++)
        if (VAR_2 == VAR_0[VAR_3].code)
            return VAR_0[VAR_3].msg;

    return VAR_1;
}
