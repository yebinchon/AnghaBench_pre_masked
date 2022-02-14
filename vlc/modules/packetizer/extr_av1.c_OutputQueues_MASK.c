
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_18__ {TYPE_7__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_19__ {int i_flags; void* i_pts; void* i_dts; } ;
typedef TYPE_6__ block_t ;
struct TYPE_16__ {TYPE_10__* p_chain; } ;
struct TYPE_15__ {TYPE_10__* p_chain; } ;
struct TYPE_14__ {TYPE_10__* p_chain; } ;
struct TYPE_17__ {int b_has_visible_frame; void* pts; void* dts; TYPE_3__ post; TYPE_2__ frame; TYPE_1__ pre; } ;
struct TYPE_20__ {scalar_t__ i_seen; TYPE_4__ tu; int i_next_block_flags; } ;
typedef TYPE_7__ av1_sys_t ;
struct TYPE_21__ {int post; int frame; int pre; } ;
struct TYPE_13__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_6__***,TYPE_10__*) ;
 TYPE_8__ VAR_2 ;

__attribute__((used)) static block_t * FUNC_2(decoder_t *VAR_3, bool VAR_4)
{
    av1_sys_t *VAR_5 = VAR_3->p_sys;
    block_t *VAR_6 = ((void*)0);
    block_t **VAR_7 = &VAR_6;
    uint32_t VAR_8 = 0;

    if(VAR_5->tu.pre.p_chain)
    {
        FUNC_1(&VAR_7, VAR_5->tu.pre.p_chain);
        FUNC_0(VAR_2.pre);
    }

    if(VAR_5->tu.frame.p_chain)
    {
        VAR_8 |= VAR_5->tu.frame.p_chain->i_flags;
        FUNC_1(&VAR_7, VAR_5->tu.frame.p_chain);
        FUNC_0(VAR_2.frame);
    }

    if(VAR_5->tu.post.p_chain)
    {
        FUNC_1(&VAR_7, VAR_5->tu.post.p_chain);
        FUNC_0(VAR_2.post);
    }

    if(VAR_6)
    {
        VAR_6->i_dts = VAR_5->tu.dts;
        VAR_6->i_pts = VAR_5->tu.pts;
        VAR_6->i_flags |= VAR_8;
        if(!VAR_4)
            VAR_6->i_flags |= VAR_0;
        else
        {
            VAR_6->i_flags |= VAR_5->i_next_block_flags;
            VAR_5->i_next_block_flags = 0;
        }
    }

    VAR_5->tu.b_has_visible_frame = 0;
    VAR_5->tu.dts = VAR_1;
    VAR_5->tu.pts = VAR_1;
    VAR_5->i_seen = 0;

    return VAR_6;
}
