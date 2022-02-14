
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int p_next; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_15__ {scalar_t__ downstream_id; TYPE_2__* p_decoder; int b_transcode; scalar_t__ b_error; } ;
typedef TYPE_4__ sout_stream_id_sys_t ;
typedef int block_t ;
struct TYPE_12__ {int i_cat; } ;
struct TYPE_13__ {TYPE_1__ fmt_in; } ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int *,int **) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int *,int **) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int *,int **) ;

__attribute__((used)) static int FUNC_5( sout_stream_t *VAR_1, void *VAR_2, block_t *VAR_3 )
{
    sout_stream_id_sys_t *VAR_4 = (sout_stream_id_sys_t *)VAR_2;
    block_t *VAR_5 = ((void*)0);

    if( VAR_4->b_error )
        goto error;

    if( !VAR_4->b_transcode )
    {
        if( VAR_4->downstream_id )
            return FUNC_1( VAR_1->p_next, VAR_4->downstream_id, VAR_3 );
        else
            goto error;
    }

    int VAR_6;
    switch( VAR_4->p_decoder->fmt_in.i_cat )
    {
    case 130:
        VAR_6 = FUNC_2( VAR_1, VAR_4, VAR_3, &VAR_5 );
        break;

    case 128:
        VAR_6 = FUNC_4( VAR_1, VAR_4, VAR_3, &VAR_5 );
        break;

    case 129:
        VAR_6 = FUNC_3( VAR_1, VAR_4, VAR_3, &VAR_5 );
        break;

    default:
        goto error;
    }

    if( VAR_5 &&
        FUNC_1( VAR_1->p_next, VAR_4->downstream_id, VAR_5 ) )
        VAR_6 = VAR_0;

    return VAR_6;
error:
    if( VAR_3 )
        FUNC_0( VAR_3 );
    return VAR_0;
}
