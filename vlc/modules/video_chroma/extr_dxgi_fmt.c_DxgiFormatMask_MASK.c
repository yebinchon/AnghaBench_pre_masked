
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_rmask; int i_gmask; int i_bmask; } ;
typedef TYPE_1__ video_format_t ;
typedef scalar_t__ DXGI_FORMAT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(DXGI_FORMAT VAR_2, video_format_t *VAR_3)
{
    if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
    {
        VAR_3->i_rmask = 0x0000ff00;
        VAR_3->i_gmask = 0x00ff0000;
        VAR_3->i_bmask = 0xff000000;
    }
}
