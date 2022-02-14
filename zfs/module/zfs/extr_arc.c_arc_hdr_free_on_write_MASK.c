
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int arcs_size; int * arcs_esize; } ;
typedef TYPE_3__ arc_state_t ;
struct TYPE_13__ {int b_pabd; int b_refcnt; int b_arc_node; TYPE_3__* b_state; } ;
struct TYPE_12__ {int b_rabd; } ;
struct TYPE_15__ {TYPE_2__ b_l1hdr; TYPE_1__ b_crypt_hdr; } ;
typedef TYPE_4__ arc_buf_hdr_t ;
typedef size_t arc_buf_contents_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* VAR_4 ;
 size_t FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,size_t) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_9(arc_buf_hdr_t *VAR_6, boolean_t VAR_7)
{
 arc_state_t *VAR_8 = VAR_6->b_l1hdr.b_state;
 arc_buf_contents_t VAR_9 = FUNC_2(VAR_6);
 uint64_t VAR_10 = (VAR_7) ? FUNC_1(VAR_6) : FUNC_3(VAR_6);


 if (FUNC_6(&VAR_6->b_l1hdr.b_arc_node)) {
  FUNC_0(FUNC_7(&VAR_6->b_l1hdr.b_refcnt));
  FUNC_0(VAR_8 != VAR_4 && VAR_8 != VAR_5);

  (void) FUNC_8(&VAR_8->arcs_esize[VAR_9],
      VAR_10, VAR_6);
 }
 (void) FUNC_8(&VAR_8->arcs_size, VAR_10, VAR_6);
 if (VAR_9 == VAR_1) {
  FUNC_4(VAR_10, VAR_3);
 } else {
  FUNC_0(VAR_9 == VAR_0);
  FUNC_4(VAR_10, VAR_2);
 }

 if (VAR_7) {
  FUNC_5(VAR_6->b_crypt_hdr.b_rabd, VAR_10, VAR_9);
 } else {
  FUNC_5(VAR_6->b_l1hdr.b_pabd, VAR_10, VAR_9);
 }
}
