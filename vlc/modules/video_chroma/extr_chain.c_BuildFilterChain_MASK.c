
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_23__ {scalar_t__ const i_codec; } ;
struct TYPE_22__ {scalar_t__ const i_codec; } ;
struct TYPE_18__ {TYPE_8__ fmt_out; TYPE_7__ fmt_in; int pf_video_mouse; int p_cfg; int psz_name; TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_19__ {int p_chain; TYPE_9__* p_video_filter; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_21__ {scalar_t__ i_chroma; scalar_t__ i_bmask; scalar_t__ i_gmask; scalar_t__ i_rmask; } ;
struct TYPE_20__ {scalar_t__ i_codec; TYPE_4__ video; } ;
typedef TYPE_3__ es_format_t ;
struct TYPE_24__ {int * pf_video_mouse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_9__*,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 TYPE_9__* FUNC_4 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_7__*,TYPE_8__*) ;
 scalar_t__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,char*) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9( filter_t *VAR_4 )
{
    es_format_t VAR_5;
    int VAR_6 = VAR_2;

    filter_sys_t *VAR_7 = VAR_4->p_sys;


    const vlc_fourcc_t *VAR_8 = FUNC_6( VAR_4 );
    for( int VAR_9 = 0; VAR_8[VAR_9]; VAR_9++ )
    {
        FUNC_5( VAR_7->p_chain, &VAR_4->fmt_in, &VAR_4->fmt_out );

        const vlc_fourcc_t VAR_10 = VAR_8[VAR_9];
        if( VAR_10 == VAR_4->fmt_in.i_codec ||
            VAR_10 == VAR_4->fmt_out.i_codec )
            continue;

        FUNC_7( VAR_4, "Trying to use chroma %4.4s as middle man",
                 (char*)&VAR_10 );

        FUNC_1( &VAR_5, &VAR_4->fmt_in );
        VAR_5.i_codec =
        VAR_5.video.i_chroma = VAR_10;
        VAR_5.video.i_rmask = 0;
        VAR_5.video.i_gmask = 0;
        VAR_5.video.i_bmask = 0;
        FUNC_8(&VAR_5.video);

        if( FUNC_3( VAR_7->p_chain,
                                          &VAR_5 ) == VAR_3 )
        {
            VAR_7->p_video_filter =
                FUNC_4( VAR_7->p_chain,
                                           VAR_4->psz_name, VAR_4->p_cfg,
                                           &VAR_5 );
            if( VAR_7->p_video_filter )
            {
                FUNC_2( VAR_4,
                                          VAR_7->p_video_filter,
                                          VAR_1 );
                if (VAR_7->p_video_filter->pf_video_mouse != ((void*)0))
                    VAR_4->pf_video_mouse = VAR_0;
                FUNC_0( &VAR_5 );
                VAR_6 = VAR_3;
                break;
            }
        }
        FUNC_0( &VAR_5 );
    }
    if( VAR_6 != VAR_3 )
        FUNC_5( VAR_7->p_chain, &VAR_4->fmt_in, &VAR_4->fmt_out );

    return VAR_6;
}
