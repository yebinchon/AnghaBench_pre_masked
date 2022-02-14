
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int b_arc_node; int b_freeze_lock; int b_refcnt; int b_cv; int b_byteswap; } ;
struct TYPE_5__ {int b_l2node; } ;
struct TYPE_7__ {TYPE_2__ b_l1hdr; TYPE_1__ b_l2hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(void *VAR_5, void *VAR_6, int VAR_7)
{
 arc_buf_hdr_t *VAR_8 = VAR_5;

 FUNC_1(VAR_8, VAR_3);
 VAR_8->b_l1hdr.b_byteswap = VAR_2;
 FUNC_2(&VAR_8->b_l1hdr.b_cv, ((void*)0), VAR_1, ((void*)0));
 FUNC_6(&VAR_8->b_l1hdr.b_refcnt);
 FUNC_5(&VAR_8->b_l1hdr.b_freeze_lock, ((void*)0), VAR_4, ((void*)0));
 FUNC_3(&VAR_8->b_l1hdr.b_arc_node);
 FUNC_3(&VAR_8->b_l2hdr.b_l2node);
 FUNC_4(&VAR_8->b_l1hdr.b_arc_node);
 FUNC_0(VAR_3, VAR_0);

 return (0);
}
