
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {TYPE_5__* p_chain; } ;
struct TYPE_13__ {TYPE_5__* p_chain; } ;
struct TYPE_12__ {TYPE_5__* p_chain; } ;
struct TYPE_15__ {scalar_t__ sets; TYPE_3__ post; int pts; int dts; TYPE_2__ frame; TYPE_1__ pre; scalar_t__ b_recovery_point; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_16__ {int i_buffer; int i_flags; int i_pts; int i_dts; struct TYPE_16__* p_next; int * p_buffer; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_5__***,TYPE_5__*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static block_t * FUNC_5(decoder_sys_t *VAR_6, bool VAR_7)
{
    block_t *VAR_8 = ((void*)0);
    block_t **VAR_9 = &VAR_8;
    uint32_t VAR_10 = 0;

    if(VAR_6->pre.p_chain)
    {
        VAR_10 |= VAR_6->pre.p_chain->i_flags;
        if(VAR_6->b_recovery_point && VAR_6->sets != VAR_2)
        {
            if(VAR_6->pre.p_chain->i_buffer >= 5 &&
               FUNC_4(&VAR_6->pre.p_chain->p_buffer[4]) == VAR_1)
            {
                block_t *VAR_11 = VAR_6->pre.p_chain;
                VAR_6->pre.p_chain = VAR_6->pre.p_chain->p_next;
                VAR_11->p_next = ((void*)0);
                FUNC_2(&VAR_9, VAR_11);
            }
            FUNC_2(&VAR_9, FUNC_0(VAR_6));
        }
        if(VAR_6->pre.p_chain)
            FUNC_2(&VAR_9, VAR_6->pre.p_chain);
        FUNC_1(VAR_5);
    }

    if(VAR_6->frame.p_chain)
    {
        VAR_10 |= VAR_6->frame.p_chain->i_flags;
        FUNC_2(&VAR_9, VAR_6->frame.p_chain);
        VAR_8->i_dts = FUNC_3(&VAR_6->dts);
        VAR_8->i_pts = VAR_6->pts;
        FUNC_1(VAR_3);
    }

    if(VAR_6->post.p_chain)
    {
        VAR_10 |= VAR_6->post.p_chain->i_flags;
        FUNC_2(&VAR_9, VAR_6->post.p_chain);
        FUNC_1(VAR_4);
    }

    if(VAR_8)
    {
        VAR_8->i_flags |= VAR_10;
        if(!VAR_7)
            VAR_8->i_flags |= VAR_0;
    }

    return VAR_8;
}
