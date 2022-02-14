
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int i_offset; TYPE_6__* p_parser_ctx; int p_codec_ctx; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int i_flags; int i_buffer; int i_dts; int i_pts; int * p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_13__ {int key_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ,int **,int*,int *,int,int ,int ,int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static block_t *FUNC_6 ( decoder_t *VAR_3, block_t **VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_3->p_sys;

    if( VAR_4 == ((void*)0) || *VAR_4 == ((void*)0) )
        return ((void*)0);
    if( (*VAR_4)->i_flags&(VAR_0) )
    {
        FUNC_3( *VAR_4 );
        return ((void*)0);
    }

    block_t * VAR_6 = *VAR_4;

    uint8_t * VAR_7 = VAR_6->p_buffer + VAR_5->i_offset;
    int VAR_8 = VAR_6->i_buffer - VAR_5->i_offset;
    uint8_t * VAR_9;
    int VAR_10;

    if( VAR_5->i_offset == VAR_8 )
        goto out;

    VAR_5->i_offset += FUNC_1( VAR_5->p_parser_ctx, VAR_5->p_codec_ctx,
                                         &VAR_9, &VAR_10, VAR_7, VAR_8,
                                         FUNC_0(VAR_6->i_pts), FUNC_0(VAR_6->i_dts), -1);

    if( FUNC_5( VAR_10 <= 0 || !VAR_9 ) )
        goto out;

    block_t * VAR_11 = FUNC_2( VAR_10 );

    if( FUNC_5 ( !VAR_11 ) )
        goto out;

    FUNC_4( VAR_11->p_buffer, VAR_9, VAR_10 );
    VAR_11->i_pts = VAR_6->i_pts;
    VAR_11->i_dts = VAR_6->i_dts;
    if( VAR_5->p_parser_ctx->key_frame == 1 )
        VAR_11->i_flags |= VAR_1;

    VAR_6->i_pts = VAR_6->i_dts = VAR_2;

    return VAR_11;

out:
    VAR_5->i_offset = 0;
    FUNC_3( *VAR_4 );
    *VAR_4 = ((void*)0);
    return ((void*)0);
}
