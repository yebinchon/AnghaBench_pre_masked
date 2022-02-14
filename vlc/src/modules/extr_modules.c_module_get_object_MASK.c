
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_shortcuts; char const** pp_shortcuts; } ;
typedef TYPE_1__ module_t ;


 scalar_t__ FUNC_0 (int) ;

const char *FUNC_1( const module_t *VAR_0 )
{
    if (FUNC_0(VAR_0->i_shortcuts == 0))
        return "unnamed";
    return VAR_0->pp_shortcuts[0];
}
