
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_13__ {int lock_out; TYPE_3__* p_encoder; int pp_pics; } ;
typedef TYPE_1__ transcode_encoder_t ;
struct TYPE_14__ {int i_cat; int i_group; int i_id; } ;
typedef TYPE_2__ es_format_t ;
struct TYPE_16__ {scalar_t__ psz_language; int i_group; int i_id; } ;
struct TYPE_15__ {TYPE_8__ fmt_out; TYPE_8__ fmt_in; int * p_module; } ;





 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_2__ const*) ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 TYPE_3__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;

transcode_encoder_t * FUNC_10( vlc_object_t *VAR_0,
                                             const es_format_t *VAR_1 )
{
    switch( VAR_1->i_cat )
    {
        case 128:
        case 130:
        case 129:
            break;
        default:
            return ((void*)0);
    }

    transcode_encoder_t *VAR_2 = FUNC_0( 1, sizeof(*VAR_2) );
    if( !VAR_2 )
        return ((void*)0);

    VAR_2->p_encoder = FUNC_6( VAR_0 );
    if( !VAR_2->p_encoder )
    {
        FUNC_4( VAR_2 );
        return ((void*)0);
    }
    VAR_2->p_encoder->p_module = ((void*)0);


    FUNC_3( &VAR_2->p_encoder->fmt_in, VAR_1->i_cat, 0 );
    FUNC_2( &VAR_2->p_encoder->fmt_in, VAR_1 );
    FUNC_3( &VAR_2->p_encoder->fmt_out, VAR_1->i_cat, 0 );
    VAR_2->p_encoder->fmt_out.i_id = VAR_1->i_id;
    VAR_2->p_encoder->fmt_out.i_group = VAR_1->i_group;
    if( VAR_2->p_encoder->fmt_in.psz_language )
        VAR_2->p_encoder->fmt_out.psz_language = FUNC_7( VAR_2->p_encoder->fmt_in.psz_language );

    switch( VAR_1->i_cat )
    {
        case 128:
            VAR_2->pp_pics = FUNC_5();
            if( !VAR_2->pp_pics )
            {
                FUNC_1( &VAR_2->p_encoder->fmt_in );
                FUNC_1( &VAR_2->p_encoder->fmt_out );
                FUNC_9(VAR_2->p_encoder);
                FUNC_4( VAR_2 );
                return ((void*)0);
            }
            FUNC_8( &VAR_2->lock_out );
            break;
        default:
            break;
    }

    return VAR_2;
}
