
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int b_hits; int b_daddr; } ;
typedef TYPE_1__ l2arc_buf_hdr_t ;
struct TYPE_15__ {int b_refcnt; int b_mfu_ghost_hits; int b_mfu_hits; int b_mru_ghost_hits; int b_mru_hits; int b_arc_access; int b_bufcnt; TYPE_3__* b_state; } ;
typedef TYPE_2__ l1arc_buf_hdr_t ;
struct TYPE_16__ {int arcs_state; } ;
typedef TYPE_3__ arc_state_t ;
struct TYPE_17__ {TYPE_6__* b_hdr; } ;
typedef TYPE_4__ arc_buf_t ;
struct TYPE_18__ {int abi_size; int abi_state_contents; int abi_state_type; int abi_l2arc_hits; int abi_l2arc_dattr; int abi_holds; int abi_mfu_ghost_hits; int abi_mfu_hits; int abi_mru_ghost_hits; int abi_mru_hits; int abi_access; int abi_bufcnt; int abi_flags; } ;
typedef TYPE_5__ arc_buf_info_t ;
struct TYPE_19__ {TYPE_1__ b_l2hdr; TYPE_2__ b_l1hdr; int b_flags; } ;
typedef TYPE_6__ arc_buf_hdr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (int *) ;

void
FUNC_6(arc_buf_t *VAR_1, arc_buf_info_t *VAR_2, int VAR_3)
{
 arc_buf_hdr_t *VAR_4 = VAR_1->b_hdr;
 l1arc_buf_hdr_t *VAR_5 = ((void*)0);
 l2arc_buf_hdr_t *VAR_6 = ((void*)0);
 arc_state_t *VAR_7 = ((void*)0);

 FUNC_4(VAR_2, 0, sizeof (arc_buf_info_t));

 if (VAR_4 == ((void*)0))
  return;

 VAR_2->abi_flags = VAR_4->b_flags;

 if (FUNC_0(VAR_4)) {
  VAR_5 = &VAR_4->b_l1hdr;
  VAR_7 = VAR_5->b_state;
 }
 if (FUNC_1(VAR_4))
  VAR_6 = &VAR_4->b_l2hdr;

 if (VAR_5) {
  VAR_2->abi_bufcnt = VAR_5->b_bufcnt;
  VAR_2->abi_access = VAR_5->b_arc_access;
  VAR_2->abi_mru_hits = VAR_5->b_mru_hits;
  VAR_2->abi_mru_ghost_hits = VAR_5->b_mru_ghost_hits;
  VAR_2->abi_mfu_hits = VAR_5->b_mfu_hits;
  VAR_2->abi_mfu_ghost_hits = VAR_5->b_mfu_ghost_hits;
  VAR_2->abi_holds = FUNC_5(&VAR_5->b_refcnt);
 }

 if (VAR_6) {
  VAR_2->abi_l2arc_dattr = VAR_6->b_daddr;
  VAR_2->abi_l2arc_hits = VAR_6->b_hits;
 }

 VAR_2->abi_state_type = VAR_7 ? VAR_7->arcs_state : VAR_0;
 VAR_2->abi_state_contents = FUNC_2(VAR_4);
 VAR_2->abi_size = FUNC_3(VAR_4);
}
