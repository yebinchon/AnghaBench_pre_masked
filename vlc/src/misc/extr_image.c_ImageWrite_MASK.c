
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_25__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_13__ ;


struct TYPE_32__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; } ;
typedef TYPE_3__ video_format_t ;
typedef int picture_t ;
struct TYPE_33__ {int p_parent; TYPE_6__* p_enc; TYPE_8__* p_converter; } ;
typedef TYPE_4__ image_handler_t ;
struct TYPE_34__ {TYPE_3__ video; } ;
typedef TYPE_5__ es_format_t ;
typedef int block_t ;
struct TYPE_30__ {scalar_t__ i_chroma; scalar_t__ i_width; scalar_t__ i_height; } ;
struct TYPE_37__ {TYPE_25__ video; } ;
struct TYPE_36__ {int * (* pf_video_filter ) (TYPE_8__*,int *) ;TYPE_9__ fmt_out; TYPE_9__ fmt_in; } ;
struct TYPE_28__ {TYPE_25__ video; } ;
struct TYPE_29__ {scalar_t__ i_width; scalar_t__ i_height; } ;
struct TYPE_31__ {scalar_t__ i_codec; TYPE_1__ video; } ;
struct TYPE_35__ {int * (* pf_encode_video ) (TYPE_6__*,int *) ;TYPE_13__ fmt_in; TYPE_2__ fmt_out; } ;


 int FUNC_0 (TYPE_25__*,TYPE_3__ const*) ;
 TYPE_8__* FUNC_1 (int ,TYPE_5__*,TYPE_25__*) ;
 TYPE_6__* FUNC_2 (int ,TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*,TYPE_13__*) ;
 int FUNC_7 (TYPE_5__*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_9__*,TYPE_3__ const*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (TYPE_8__*,int *) ;
 int * FUNC_14 (TYPE_6__*,int *) ;
 int * FUNC_15 (TYPE_6__*,int *) ;

__attribute__((used)) static block_t *FUNC_16( image_handler_t *VAR_1, picture_t *VAR_2,
                            const video_format_t *VAR_3,
                            const video_format_t *VAR_4 )
{
    block_t *VAR_5;


    if( VAR_1->p_enc &&
        ( VAR_1->p_enc->fmt_out.i_codec != VAR_4->i_chroma ||
          VAR_1->p_enc->fmt_out.video.i_width != VAR_4->i_width ||
          VAR_1->p_enc->fmt_out.video.i_height != VAR_4->i_height ) )
    {
        FUNC_4( VAR_1->p_enc );
        VAR_1->p_enc = 0;
    }


    if( !VAR_1->p_enc )
    {
        VAR_1->p_enc = FUNC_2( VAR_1->p_parent,
                                        VAR_3, VAR_4 );
        if( !VAR_1->p_enc ) return ((void*)0);
    }


    if( VAR_1->p_enc->fmt_in.video.i_chroma != VAR_3->i_chroma ||
        VAR_1->p_enc->fmt_in.video.i_width != VAR_3->i_width ||
        VAR_1->p_enc->fmt_in.video.i_height != VAR_3->i_height ||
       !FUNC_0( &VAR_1->p_enc->fmt_in.video, VAR_3 ) )
    {
        picture_t *VAR_6;

        if( VAR_1->p_converter &&
            ( VAR_1->p_converter->fmt_in.video.i_chroma != VAR_3->i_chroma ||
              VAR_1->p_converter->fmt_out.video.i_chroma !=
              VAR_1->p_enc->fmt_in.video.i_chroma ||
             !FUNC_0( &VAR_1->p_converter->fmt_in.video, VAR_3 ) ) )
        {

            FUNC_3( VAR_1->p_converter );
            VAR_1->p_converter = ((void*)0);
        }


        if( !VAR_1->p_converter )
        {
            es_format_t VAR_7;
            FUNC_7( &VAR_7, VAR_0, VAR_3->i_chroma );
            VAR_7.video = *VAR_3;

            VAR_1->p_converter =
                FUNC_1( VAR_1->p_parent, &VAR_7,
                              &VAR_1->p_enc->fmt_in.video );

            if( !VAR_1->p_converter )
            {
                return ((void*)0);
            }
        }
        else
        {

            FUNC_5( &VAR_1->p_converter->fmt_in );
            FUNC_8( &VAR_1->p_converter->fmt_in, VAR_3 );
            FUNC_5( &VAR_1->p_converter->fmt_out );
            FUNC_6( &VAR_1->p_converter->fmt_out, &VAR_1->p_enc->fmt_in );
        }

        FUNC_11( VAR_2 );

        VAR_6 =
            VAR_1->p_converter->pf_video_filter( VAR_1->p_converter, VAR_2 );

        if( FUNC_9(VAR_6 != ((void*)0)) )
        {
            VAR_5 = VAR_1->p_enc->pf_encode_video( VAR_1->p_enc,
                                                       VAR_6 );
            FUNC_12( VAR_6 );
        }
        else
            VAR_5 = ((void*)0);
    }
    else
    {
        VAR_5 = VAR_1->p_enc->pf_encode_video( VAR_1->p_enc, VAR_2 );
    }

    if( !VAR_5 )
    {
        FUNC_10( VAR_1->p_parent, "no image encoded" );
        return 0;
    }

    return VAR_5;
}
