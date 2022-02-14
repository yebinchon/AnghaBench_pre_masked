
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_arc_node; int b_freeze_lock; int b_refcnt; int b_cv; } ;
struct TYPE_5__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_2__ arc_buf_hdr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, void *VAR_3)
{
 arc_buf_hdr_t *VAR_4 = VAR_2;

 FUNC_0(FUNC_1(VAR_4));
 FUNC_3(&VAR_4->b_l1hdr.b_cv);
 FUNC_6(&VAR_4->b_l1hdr.b_refcnt);
 FUNC_5(&VAR_4->b_l1hdr.b_freeze_lock);
 FUNC_0(!FUNC_4(&VAR_4->b_l1hdr.b_arc_node));
 FUNC_2(VAR_1, VAR_0);
}
