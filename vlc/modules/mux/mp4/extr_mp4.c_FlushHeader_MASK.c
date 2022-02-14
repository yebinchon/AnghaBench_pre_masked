
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {scalar_t__ p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_16__ {int i_pos; int b_header_sent; int muxh; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_17__ {TYPE_1__* b; } ;
typedef TYPE_4__ bo_t ;
struct TYPE_14__ {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(sout_mux_t *VAR_1)
{
    sout_mux_sys_t *VAR_2 = (sout_mux_sys_t*) VAR_1->p_sys;

    if(VAR_2->i_pos >= (((uint64_t)0x1) << 32))
        FUNC_6(VAR_2->muxh);


    bo_t *VAR_3 = FUNC_4(VAR_2->muxh);
    if(!VAR_3)
        return;

    bo_t *VAR_4 = FUNC_5(VAR_2->muxh, FUNC_0(VAR_1), 0);


    FUNC_2(VAR_3, VAR_4);


    VAR_3->b->i_flags |= VAR_0;
    VAR_2->i_pos += FUNC_1(VAR_3);
    FUNC_3(VAR_1, VAR_3);
    VAR_2->b_header_sent = 1;
}
