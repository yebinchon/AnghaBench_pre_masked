
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_17__ {scalar_t__ const i_codec; } ;
struct TYPE_13__ {scalar_t__ const i_codec; } ;
struct TYPE_14__ {TYPE_8__ fmt_in; TYPE_1__ fmt_out; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_16__ {scalar_t__ i_chroma; scalar_t__ i_bmask; scalar_t__ i_gmask; scalar_t__ i_rmask; } ;
struct TYPE_15__ {scalar_t__ i_codec; TYPE_4__ video; } ;
typedef TYPE_3__ es_format_t ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_8__*) ;
 scalar_t__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,char*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6( filter_t *VAR_2 )
{
    es_format_t VAR_3;
    int VAR_4 = VAR_0;


    const vlc_fourcc_t *VAR_5 = FUNC_3( VAR_2 );
    for( int VAR_6 = 0; VAR_5[VAR_6]; VAR_6++ )
    {
        const vlc_fourcc_t VAR_7 = VAR_5[VAR_6];
        if( VAR_7 == VAR_2->fmt_in.i_codec ||
            VAR_7 == VAR_2->fmt_out.i_codec )
            continue;

        FUNC_4( VAR_2, "Trying to use chroma %4.4s as middle man",
                 (char*)&VAR_7 );

        FUNC_2( &VAR_3, &VAR_2->fmt_in );
        VAR_3.i_codec =
        VAR_3.video.i_chroma = VAR_7;
        VAR_3.video.i_rmask = 0;
        VAR_3.video.i_gmask = 0;
        VAR_3.video.i_bmask = 0;
        FUNC_5(&VAR_3.video);

        VAR_4 = FUNC_0( VAR_2, &VAR_3 );
        FUNC_1( &VAR_3 );

        if( VAR_4 == VAR_1 )
            break;
    }

    return VAR_4;
}
