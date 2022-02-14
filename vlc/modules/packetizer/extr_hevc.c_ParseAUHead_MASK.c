
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_19__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_18__ {int pp_chain_last; int p_chain; } ;
struct TYPE_17__ {scalar_t__ p_chain; } ;
struct TYPE_16__ {scalar_t__ p_chain; } ;
struct TYPE_20__ {scalar_t__ sets; TYPE_3__ pre; scalar_t__ b_recovery_point; TYPE_2__ frame; TYPE_1__ post; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_21__ {int* p_buffer; size_t i_buffer; } ;
typedef TYPE_6__ block_t ;







 int FUNC_0 (TYPE_4__*,int,int,TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int*,size_t,int*) ;
 int FUNC_5 (int const**,size_t*) ;

__attribute__((used)) static block_t * FUNC_6(decoder_t *VAR_2, uint8_t VAR_3, block_t *VAR_4)
{
    decoder_sys_t *VAR_5 = VAR_2->p_sys;
    block_t *VAR_6 = ((void*)0);

    if(VAR_5->post.p_chain || VAR_5->frame.p_chain)
        VAR_6 = FUNC_1(VAR_5, VAR_5->sets != VAR_0 &&
                                    VAR_5->b_recovery_point);

    switch(VAR_3)
    {
        case 132:
            if(!VAR_6 && VAR_5->pre.p_chain)
                VAR_6 = FUNC_1(VAR_5, VAR_5->sets != VAR_0 &&
                                            VAR_5->b_recovery_point);
            break;

        case 128:
        case 129:
        case 131:
        {
            uint8_t VAR_7;
            const uint8_t *VAR_8 = VAR_4->p_buffer;
            size_t VAR_9 = VAR_4->i_buffer;
            if(FUNC_5(&VAR_8, &VAR_9) &&
               FUNC_4(VAR_4->p_buffer, VAR_4->i_buffer, &VAR_7))
                FUNC_0(VAR_2, VAR_3, VAR_7, VAR_4);
            if(VAR_5->sets != VAR_1)
            {
                FUNC_3(VAR_4);
                return VAR_6;
            }
            break;
        }

        case 130:

        default:
            break;
    }

    FUNC_2(&VAR_5->pre.pp_chain_last, VAR_4);

    return VAR_6;
}
