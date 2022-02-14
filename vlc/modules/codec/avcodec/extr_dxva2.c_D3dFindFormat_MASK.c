
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ format; scalar_t__ name; } ;
typedef TYPE_1__ d3d9_format_t ;
typedef scalar_t__ D3DFORMAT ;


 TYPE_1__ const* VAR_0 ;

__attribute__((used)) static const d3d9_format_t *FUNC_0(D3DFORMAT VAR_1)
{
    for (unsigned VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
        if (VAR_0[VAR_2].format == VAR_1)
            return &VAR_0[VAR_2];
    }
    return ((void*)0);
}
