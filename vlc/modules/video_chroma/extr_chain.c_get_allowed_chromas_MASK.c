
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_5__ {int i_chroma; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_7__ {TYPE_2__ fmt_out; } ;
typedef TYPE_3__ filter_t ;
 int const* VAR_0 ;
 int const* VAR_1 ;

__attribute__((used)) static const vlc_fourcc_t *FUNC_0( filter_t *VAR_2 )
{
    switch (VAR_2->fmt_out.video.i_chroma)
    {
        case 130:
        case 131:
        case 129:
        case 134:
        case 132:
        case 133:
        case 128:
            return VAR_1;
        default:
            return VAR_0;
    }
}
