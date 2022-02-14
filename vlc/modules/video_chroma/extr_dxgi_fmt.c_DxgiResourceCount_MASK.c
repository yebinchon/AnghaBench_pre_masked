
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* resourceFormat; } ;
typedef TYPE_1__ d3d_format_t ;
typedef size_t UINT ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

UINT FUNC_0(const d3d_format_t *VAR_2)
{
    for (UINT VAR_3=0; VAR_3<VAR_0; VAR_3++)
    {
        if (VAR_2->resourceFormat[VAR_3] == VAR_1)
            return VAR_3;
    }
    return VAR_0;
}
