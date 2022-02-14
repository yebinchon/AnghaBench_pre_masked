
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_24__ {TYPE_4__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_25__ {int i_flags; size_t p_buffer; size_t i_buffer; void* i_pts; void* i_dts; struct TYPE_25__* p_next; } ;
typedef TYPE_3__ block_t ;
struct TYPE_23__ {TYPE_3__* p_chain; TYPE_3__** pp_chain_last; } ;
struct TYPE_26__ {int * p_sequence_header_block; TYPE_1__ obus; } ;
typedef TYPE_4__ av1_sys_t ;
typedef int AV1_OBU_iterator_ctx_t ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *,int const**,size_t*) ;
 int FUNC_2 (int *,size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 void* VAR_2 ;
 TYPE_3__* FUNC_8 (size_t) ;
 int FUNC_9 (TYPE_3__***,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (size_t,size_t,size_t) ;
 int FUNC_12 (TYPE_2__*,char*) ;

__attribute__((used)) static block_t *FUNC_13(decoder_t *VAR_3, block_t **VAR_4)
{
    av1_sys_t *VAR_5 = VAR_3->p_sys;

    block_t *VAR_6 = VAR_4 ? *VAR_4 : ((void*)0);
    if(VAR_6)
    {
        if( VAR_6->i_flags & (VAR_1 | VAR_0) )
        {

            block_t *VAR_7 = FUNC_13( VAR_3, ((void*)0) );
            if(VAR_7)
                return VAR_7;

            FUNC_5( VAR_3 );

            if( VAR_6->i_flags & VAR_0 )
            {
                FUNC_10( VAR_6 );
                return ((void*)0);
            }
        }

        if(!FUNC_0(VAR_6->p_buffer, VAR_6->i_buffer))
        {
            FUNC_12(VAR_3,"fed with invalid OBU");
            FUNC_10(VAR_6);
            return ((void*)0);
        }
        *VAR_4 = ((void*)0);
        FUNC_9(&VAR_5->obus.pp_chain_last, VAR_6);
    }

    block_t *VAR_8 = ((void*)0);
    while(VAR_5->obus.p_chain)
    {
        block_t *VAR_9 = VAR_5->obus.p_chain;

        AV1_OBU_iterator_ctx_t VAR_10;
        FUNC_2(&VAR_10, VAR_9->p_buffer, VAR_9->i_buffer);
        const uint8_t *VAR_11; size_t VAR_12;

        if(!FUNC_1(&VAR_10, &VAR_11, &VAR_12))
        {
            FUNC_12(VAR_3,"Invalid OBU header in sequence, discarding");

            VAR_5->obus.p_chain = VAR_9->p_next;
            if(VAR_9->p_next == ((void*)0))
                VAR_5->obus.pp_chain_last = &VAR_5->obus.p_chain;
            else
                VAR_9->p_next = ((void*)0);
            FUNC_10(VAR_9);
            continue;
        }

        block_t *VAR_13;
        if(VAR_12 == VAR_9->i_buffer)
        {
            VAR_5->obus.p_chain = VAR_9->p_next;
            if(VAR_9->p_next == ((void*)0))
                VAR_5->obus.pp_chain_last = &VAR_5->obus.p_chain;
            else
                VAR_9->p_next = ((void*)0);
            VAR_13 = VAR_9;
        }
        else
        {
            VAR_13 = FUNC_8(VAR_12);
            FUNC_11(VAR_13->p_buffer, VAR_9->p_buffer, VAR_12);
            VAR_9->i_buffer -= VAR_12;
            VAR_9->p_buffer += VAR_12;
            VAR_13->i_dts = VAR_9->i_dts;
            VAR_13->i_pts = VAR_9->i_pts;
            VAR_13->i_flags = VAR_9->i_flags;
            VAR_9->i_flags = 0;
            VAR_9->i_dts = VAR_2;
            VAR_9->i_pts = VAR_2;
        }

        VAR_8 = FUNC_6(VAR_3, VAR_13);
        if(VAR_8)
            break;
    }


    if(!VAR_8 && VAR_4 == ((void*)0))
        VAR_8 = FUNC_4(VAR_3, VAR_5->p_sequence_header_block != ((void*)0));

    if(VAR_8)
    {
        VAR_8 = FUNC_3(VAR_3, VAR_8);
        FUNC_7(VAR_3);
    }

    return VAR_8;
}
