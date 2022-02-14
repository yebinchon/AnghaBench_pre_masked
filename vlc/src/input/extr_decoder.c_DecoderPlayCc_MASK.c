
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int i_608_channels; int i_708_channels; } ;
struct TYPE_4__ {int ** pp_decoder; TYPE_2__ desc; } ;
struct decoder_owner {int lock; int p_fifo; TYPE_1__ cc; } ;
typedef int decoder_t ;
typedef TYPE_2__ decoder_cc_desc_t ;
typedef int block_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct decoder_owner* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( struct decoder_owner *VAR_0, block_t *VAR_1,
                           const decoder_cc_desc_t *VAR_2 )
{
    FUNC_4( &VAR_0->lock );

    VAR_0->cc.desc = *VAR_2;



    uint64_t VAR_3 = VAR_0->cc.desc.i_608_channels |
                        VAR_0->cc.desc.i_708_channels;

    for( int VAR_4=0; VAR_3 > 0; VAR_3 >>= 1, VAR_4++ )
    {
        decoder_t *VAR_5 = VAR_0->cc.pp_decoder[VAR_4];
        struct decoder_owner *VAR_6 = FUNC_3( VAR_5 );
        if( !VAR_5 )
            continue;

        if( VAR_3 > 1 )
        {
            FUNC_1( VAR_6->p_fifo, FUNC_0(VAR_1) );
        }
        else
        {
            FUNC_1( VAR_6->p_fifo, VAR_1 );
            VAR_1 = ((void*)0);
        }
    }

    FUNC_5( &VAR_0->lock );

    if( VAR_1 )
        FUNC_2( VAR_1 );
}
