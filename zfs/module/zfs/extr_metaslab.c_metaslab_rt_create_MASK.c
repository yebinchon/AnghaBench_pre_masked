
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_btree_t ;
struct TYPE_4__ {int rt_type; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg64_t ;
typedef int range_seg32_t ;
struct TYPE_5__ {int mra_floor_shift; int * mra_bt; } ;
typedef TYPE_2__ metaslab_rt_arg_t ;




 int VAR_0 ;
 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (void const*,void const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int (*) (void const*,void const*),size_t) ;

__attribute__((used)) static void
FUNC_4(range_tree_t *VAR_1, void *VAR_2)
{
 metaslab_rt_arg_t *VAR_3 = VAR_2;
 zfs_btree_t *VAR_4 = VAR_3->mra_bt;

 size_t VAR_5;
 int (*VAR_6) (const void *, const void *);
 switch (VAR_1->rt_type) {
 case 129:
  VAR_5 = sizeof (range_seg32_t);
  VAR_6 = FUNC_0;
  break;
 case 128:
  VAR_5 = sizeof (range_seg64_t);
  VAR_6 = FUNC_1;
  break;
 default:
  FUNC_2("Invalid range seg type %d", VAR_1->rt_type);
 }
 FUNC_3(VAR_4, VAR_6, VAR_5);
 VAR_3->mra_floor_shift = VAR_0;
}
