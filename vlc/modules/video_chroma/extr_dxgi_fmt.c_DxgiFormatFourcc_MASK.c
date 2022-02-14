
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_3__ {scalar_t__ format; int vlc_format; int * name; } ;
typedef TYPE_1__ dxgi_format_t ;
typedef scalar_t__ DXGI_FORMAT ;


 TYPE_1__* VAR_0 ;

vlc_fourcc_t FUNC_0(DXGI_FORMAT VAR_1)
{
    for (const dxgi_format_t *VAR_2 = VAR_0; VAR_2->name != ((void*)0); ++VAR_2)
    {
        if (VAR_2->format == VAR_1)
            return VAR_2->vlc_format;
    }
    return 0;
}
