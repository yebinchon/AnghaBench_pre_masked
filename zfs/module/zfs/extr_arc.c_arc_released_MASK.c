
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int b_evict_lock; TYPE_2__* b_hdr; int * b_data; } ;
typedef TYPE_3__ arc_buf_t ;
struct TYPE_5__ {scalar_t__ b_state; } ;
struct TYPE_6__ {TYPE_1__ b_l1hdr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(arc_buf_t *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->b_evict_lock);
 VAR_2 = (VAR_1->b_data != ((void*)0) &&
     VAR_1->b_hdr->b_l1hdr.b_state == VAR_0);
 FUNC_1(&VAR_1->b_evict_lock);
 return (VAR_2);
}
