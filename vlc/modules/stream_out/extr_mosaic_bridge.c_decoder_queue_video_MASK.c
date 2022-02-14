
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {unsigned int i_sar_num; unsigned int i_width; unsigned int i_sar_den; unsigned int i_height; unsigned int i_visible_width; unsigned int i_visible_height; } ;
typedef TYPE_3__ video_format_t ;
struct decoder_owner {TYPE_4__* p_stream; } ;
struct TYPE_26__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ sout_stream_t ;
struct TYPE_27__ {unsigned int i_height; unsigned int i_width; unsigned int const i_sar_num; unsigned int const i_sar_den; TYPE_7__* p_es; scalar_t__ p_vf2; int p_image; scalar_t__ i_chroma; TYPE_2__* p_decoder; } ;
typedef TYPE_5__ sout_stream_sys_t ;
struct TYPE_28__ {struct TYPE_28__* p_next; TYPE_3__ format; } ;
typedef TYPE_6__ picture_t ;
typedef unsigned int int64_t ;
typedef int decoder_t ;
struct TYPE_29__ {TYPE_6__** pp_last; } ;
typedef TYPE_7__ bridged_es_t ;
struct TYPE_23__ {TYPE_3__ video; } ;
struct TYPE_24__ {TYPE_1__ fmt_out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int const VAR_2 ;
 struct decoder_owner* FUNC_0 (int *) ;
 TYPE_6__* FUNC_1 (scalar_t__,TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int ,TYPE_6__*,TYPE_3__ const*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_6__*,TYPE_6__*) ;
 TYPE_6__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11( decoder_t *VAR_3, picture_t *VAR_4 )
{
    struct decoder_owner *VAR_5 = FUNC_0( VAR_3 );
    sout_stream_t *VAR_6 = VAR_5->p_stream;
    sout_stream_sys_t *VAR_7 = VAR_6->p_sys;
    picture_t *VAR_8;
    const video_format_t *VAR_9 = &VAR_7->p_decoder->fmt_out.video;

    if( VAR_7->i_height || VAR_7->i_width )
    {
        video_format_t VAR_10;

        FUNC_8( &VAR_10, VAR_7->i_chroma ? VAR_7->i_chroma : VAR_0 );

        const unsigned VAR_11 =
            (int64_t)VAR_2 *
            VAR_9->i_sar_num * VAR_9->i_width /
            (VAR_9->i_sar_den * VAR_9->i_height);
        if ( !VAR_7->i_height )
        {
            VAR_10.i_width = VAR_7->i_width;
            VAR_10.i_height = (VAR_7->i_width * VAR_2
                * VAR_7->i_sar_num / VAR_7->i_sar_den / VAR_11)
                  & ~0x1;
        }
        else if ( !VAR_7->i_width )
        {
            VAR_10.i_height = VAR_7->i_height;
            VAR_10.i_width = (VAR_7->i_height * VAR_11
                * VAR_7->i_sar_den / VAR_7->i_sar_num / VAR_2)
                  & ~0x1;
        }
        else
        {
            VAR_10.i_width = VAR_7->i_width;
            VAR_10.i_height = VAR_7->i_height;
        }
        VAR_10.i_visible_width = VAR_10.i_width;
        VAR_10.i_visible_height = VAR_10.i_height;

        VAR_8 = FUNC_2( VAR_7->p_image,
                                   VAR_4, VAR_9, &VAR_10 );
        FUNC_7( &VAR_10 );
        if( VAR_8 == ((void*)0) )
        {
            FUNC_3( VAR_6, "image conversion failed" );
            FUNC_6( VAR_4 );
            return;
        }
    }
    else
    {

        video_format_t VAR_12 = VAR_4->format;
        VAR_12.i_sar_num = VAR_9->i_sar_num;
        VAR_12.i_sar_den = VAR_9->i_sar_den;

        VAR_8 = FUNC_5( &VAR_12 );
        if( !VAR_8 )
        {
            FUNC_6( VAR_4 );
            FUNC_3( VAR_6, "image allocation failed" );
            return;
        }

        FUNC_4( VAR_8, VAR_4 );
    }
    FUNC_6( VAR_4 );

    if( VAR_7->p_vf2 )
        VAR_8 = FUNC_1( VAR_7->p_vf2, VAR_8 );


    bridged_es_t *VAR_13 = VAR_7->p_es;
    FUNC_9( VAR_1 );
    *VAR_13->pp_last = VAR_8;
    VAR_8->p_next = ((void*)0);
    VAR_13->pp_last = &VAR_8->p_next;
    FUNC_10( VAR_1 );
}
