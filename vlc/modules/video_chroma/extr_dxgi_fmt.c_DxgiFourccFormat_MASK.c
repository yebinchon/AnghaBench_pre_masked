
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_3__ {scalar_t__ vlc_format; int format; int * name; } ;
typedef TYPE_1__ dxgi_format_t ;
typedef int DXGI_FORMAT ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

DXGI_FORMAT FUNC_0(vlc_fourcc_t VAR_2)
{
    for (const dxgi_format_t *VAR_3 = VAR_1; VAR_3->name != ((void*)0); ++VAR_3)
    {
        if (VAR_3->vlc_format == VAR_2)
            return VAR_3->format;
    }
    return VAR_0;
}
