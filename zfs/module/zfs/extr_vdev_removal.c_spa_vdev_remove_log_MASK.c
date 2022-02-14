
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ vs_alloc; } ;
struct TYPE_16__ {int vdev_islog; scalar_t__ vdev_top_zap; scalar_t__ vdev_leaf_zap; TYPE_1__ vdev_stat; int vdev_config_dirty_node; int vdev_state_dirty_node; int vdev_removing; struct TYPE_16__* vdev_top; int * vdev_spa; int * vdev_mg; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int sysevent_t ;
typedef int spa_t ;
typedef int metaslab_group_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ) ;
 int * FUNC_7 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,scalar_t__,int ,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_17 (TYPE_2__*,int ) ;
 int FUNC_18 (TYPE_2__*,int ,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_23(vdev_t *VAR_12, uint64_t *VAR_13)
{
 metaslab_group_t *VAR_14 = VAR_12->vdev_mg;
 spa_t *VAR_15 = VAR_12->vdev_spa;
 int VAR_16 = 0;

 FUNC_0(VAR_12->vdev_islog);
 FUNC_0(VAR_12 == VAR_12->vdev_top);
 FUNC_0(FUNC_2(&VAR_11));




 FUNC_5(VAR_14);





 FUNC_12(VAR_15, ((void*)0),
     *VAR_13 + VAR_5 + VAR_6, 0, VAR_2);







 FUNC_0(FUNC_2(&VAR_11));
 if (VAR_12->vdev_stat.vs_alloc != 0)
  VAR_16 = FUNC_10(VAR_15);

 *VAR_13 = FUNC_11(VAR_15);

 if (VAR_16 != 0) {
  FUNC_4(VAR_14);
  return (VAR_16);
 }
 FUNC_1(VAR_12->vdev_stat.vs_alloc);





 VAR_12->vdev_removing = VAR_0;

 FUNC_16(VAR_12, VAR_7, *VAR_13);
 FUNC_15(VAR_12);
 FUNC_19(VAR_12);
 FUNC_9(VAR_15);

 FUNC_12(VAR_15, ((void*)0), *VAR_13, 0, VAR_2);


 FUNC_17(VAR_12, VAR_8);
 FUNC_22(VAR_12, VAR_10);
 FUNC_13(VAR_12);

 *VAR_13 = FUNC_11(VAR_15);

 sysevent_t *VAR_17 = FUNC_7(VAR_15, VAR_12, ((void*)0),
     VAR_1);
 FUNC_0(FUNC_2(&VAR_11));
 FUNC_0(FUNC_6(VAR_15, VAR_4, VAR_3) == VAR_4);


 FUNC_1(VAR_12->vdev_top_zap);

 FUNC_1(VAR_12->vdev_leaf_zap);

 (void) FUNC_18(VAR_12, 0, VAR_9);

 if (FUNC_3(&VAR_12->vdev_state_dirty_node))
  FUNC_21(VAR_12);
 if (FUNC_3(&VAR_12->vdev_config_dirty_node))
  FUNC_14(VAR_12);

 FUNC_1(VAR_12->vdev_stat.vs_alloc);




 FUNC_20(VAR_12);

 if (VAR_17 != ((void*)0))
  FUNC_8(VAR_17);

 return (0);
}
