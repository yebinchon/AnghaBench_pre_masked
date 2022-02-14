
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_btree_t ;
struct TYPE_3__ {int rt_type; int rt_btree_compare; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg_gap_t ;
typedef int range_seg64_t ;
typedef int range_seg32_t ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,size_t) ;

void
FUNC_2(range_tree_t *VAR_0, void *VAR_1)
{
 zfs_btree_t *VAR_2 = VAR_1;

 size_t VAR_3;
 switch (VAR_0->rt_type) {
 case 130:
  VAR_3 = sizeof (range_seg32_t);
  break;
 case 129:
  VAR_3 = sizeof (range_seg64_t);
  break;
 case 128:
  VAR_3 = sizeof (range_seg_gap_t);
  break;
 default:
  FUNC_0("Invalid range seg type %d", VAR_0->rt_type);
 }
 FUNC_1(VAR_2, VAR_0->rt_btree_compare, VAR_3);
}
