
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_codec; int i_fourcc; } ;
typedef scalar_t__ OMX_COLOR_FORMATTYPE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_0 (int ,int ) ;

int FUNC_1( OMX_COLOR_FORMATTYPE VAR_2,
                        vlc_fourcc_t *VAR_3, const char **VAR_4 )
{
    unsigned int VAR_5;

    for( VAR_5 = 0; VAR_1[VAR_5].i_codec != 0; VAR_5++ )
        if( VAR_1[VAR_5].i_codec == VAR_2 ) break;

    if( VAR_3 ) *VAR_3 = VAR_1[VAR_5].i_fourcc;
    if( VAR_4 ) *VAR_4 = FUNC_0( VAR_0,
                                     VAR_1[VAR_5].i_fourcc );
    return !!VAR_1[VAR_5].i_fourcc;
}
