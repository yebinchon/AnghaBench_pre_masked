
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_13__ {int * p_chain; } ;
struct TYPE_14__ {int pp_chain_last; } ;
struct TYPE_16__ {TYPE_1__ frame; int b_recovery_point; int sets; TYPE_2__ post; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_17__ {int i_buffer; int p_buffer; int i_flags; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;



 int FUNC_0 (int ,int ,int,int ,TYPE_3__*) ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (TYPE_4__*,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_5__*) ;

__attribute__((used)) static block_t * FUNC_3(decoder_t *VAR_3, uint8_t VAR_4, block_t *VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_3->p_sys;
    block_t *VAR_7 = ((void*)0);

    FUNC_2(&VAR_6->post.pp_chain_last, VAR_5);

    switch(VAR_4)
    {
        case 129:
        case 130:
            VAR_7 = FUNC_1(VAR_6, VAR_6->sets != VAR_1 &&
                                        VAR_6->b_recovery_point);
            if( VAR_7 )
                VAR_7->i_flags |= VAR_0;
            break;

        case 128:
            FUNC_0( VAR_5->p_buffer, VAR_5->i_buffer,
                                  2 , VAR_2, VAR_3 );
            break;
    }

    if(!VAR_7 && VAR_6->frame.p_chain == ((void*)0))
        VAR_7 = FUNC_1(VAR_6, 0);

    return VAR_7;
}
