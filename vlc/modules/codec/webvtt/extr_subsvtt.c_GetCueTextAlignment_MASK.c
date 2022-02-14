
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int align; int const vertical; } ;
struct TYPE_5__ {TYPE_1__ settings; } ;
typedef TYPE_2__ webvtt_dom_cue_t ;


 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static int FUNC_0( const webvtt_dom_cue_t *VAR_2 )
{
    switch( VAR_2->settings.align )
    {
        case 130:
            return VAR_0;
        case 129:
            return VAR_1;
        case 128:
            return (VAR_2->settings.vertical == 129) ?
                     VAR_1 : VAR_0;
        case 131:
            return (VAR_2->settings.vertical == 129) ?
                     VAR_0 : VAR_1;
        default:
            return 0;
    }
}
