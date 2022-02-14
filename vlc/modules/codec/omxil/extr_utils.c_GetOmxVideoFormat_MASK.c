
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_codec; scalar_t__ i_fourcc; } ;
typedef scalar_t__ OMX_VIDEO_CODINGTYPE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 char* FUNC_1 (int ,scalar_t__) ;

int FUNC_2( vlc_fourcc_t VAR_2,
                       OMX_VIDEO_CODINGTYPE *VAR_3,
                       const char **VAR_4 )
{
    unsigned int VAR_5;

    VAR_2 = FUNC_0( VAR_0, VAR_2 );

    for( VAR_5 = 0; VAR_1[VAR_5].i_codec != 0; VAR_5++ )
        if( VAR_1[VAR_5].i_fourcc == VAR_2 ) break;

    if( VAR_3 ) *VAR_3 = VAR_1[VAR_5].i_codec;
    if( VAR_4 ) *VAR_4 = FUNC_1( VAR_0, VAR_2 );
    return !!VAR_1[VAR_5].i_codec;
}
