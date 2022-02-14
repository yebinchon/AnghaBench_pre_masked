
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; scalar_t__ format; } ;
typedef TYPE_1__ dxgi_format_t ;
typedef scalar_t__ DXGI_FORMAT ;


 TYPE_1__* VAR_0 ;

const char *FUNC_0(DXGI_FORMAT VAR_1)
{
    for (const dxgi_format_t *VAR_2 = VAR_0; VAR_2->name != ((void*)0); ++VAR_2)
    {
        if (VAR_2->format == VAR_1)
            return VAR_2->name;
    }
    return ((void*)0);
}
