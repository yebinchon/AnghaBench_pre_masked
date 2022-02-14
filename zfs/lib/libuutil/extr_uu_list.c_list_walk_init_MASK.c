
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ulw_robust; int ulw_dir; struct TYPE_8__* ulw_next; struct TYPE_8__* ulw_prev; int ulw_next_result; TYPE_3__* ulw_list; } ;
typedef TYPE_2__ uu_list_walk_t ;
struct TYPE_7__ {int uln_prev; int uln_next; } ;
struct TYPE_9__ {TYPE_2__ ul_null_walk; scalar_t__ ul_debug; TYPE_1__ ul_null_node; } ;
typedef TYPE_3__ uu_list_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(uu_list_walk_t *VAR_2, uu_list_t *VAR_3, uint32_t VAR_4)
{
 uu_list_walk_t *VAR_5, *VAR_6;

 int VAR_7 = (VAR_4 & VAR_1);
 int VAR_8 = (VAR_4 & VAR_0)? -1 : 1;

 (void) FUNC_0(VAR_2, 0, sizeof (*VAR_2));
 VAR_2->ulw_list = VAR_3;
 VAR_2->ulw_robust = VAR_7;
 VAR_2->ulw_dir = VAR_8;
 if (VAR_8 > 0)
  VAR_2->ulw_next_result = VAR_3->ul_null_node.uln_next;
 else
  VAR_2->ulw_next_result = VAR_3->ul_null_node.uln_prev;

 if (VAR_3->ul_debug || VAR_7) {





  VAR_2->ulw_next = VAR_5 = &VAR_3->ul_null_walk;
  VAR_2->ulw_prev = VAR_6 = VAR_5->ulw_prev;
  VAR_5->ulw_prev = VAR_2;
  VAR_6->ulw_next = VAR_2;
 }
}
