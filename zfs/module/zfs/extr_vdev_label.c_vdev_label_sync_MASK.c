
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_10__ {int vdev_children; int vdev_spa; TYPE_1__* vdev_ops; struct TYPE_10__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_11__ {char* vp_nvlist; } ;
typedef TYPE_3__ vdev_phys_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int abd_t ;
struct TYPE_9__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char**,size_t*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,TYPE_2__*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *,TYPE_2__*,int,int *,int ,int,int ,int *,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(zio_t *VAR_9, uint64_t *VAR_10,
    vdev_t *VAR_11, int VAR_12, uint64_t VAR_13, int VAR_14)
{
 nvlist_t *VAR_15;
 vdev_phys_t *VAR_16;
 abd_t *VAR_17;
 char *VAR_18;
 size_t VAR_19;

 for (int VAR_20 = 0; VAR_20 < VAR_11->vdev_children; VAR_20++) {
  FUNC_10(VAR_9, VAR_10,
      VAR_11->vdev_child[VAR_20], VAR_12, VAR_13, VAR_14);
 }

 if (!VAR_11->vdev_ops->vdev_op_leaf)
  return;

 if (!FUNC_9(VAR_11))
  return;




 VAR_15 = FUNC_7(VAR_11->vdev_spa, VAR_11, VAR_13, VAR_0);

 VAR_17 = FUNC_0(sizeof (vdev_phys_t), VAR_1);
 FUNC_3(VAR_17, sizeof (vdev_phys_t));
 VAR_16 = FUNC_2(VAR_17);

 VAR_18 = VAR_16->vp_nvlist;
 VAR_19 = sizeof (VAR_16->vp_nvlist);

 if (!FUNC_5(VAR_15, &VAR_18, &VAR_19, VAR_3, VAR_2)) {
  for (; VAR_12 < VAR_4; VAR_12 += 2) {
   FUNC_8(VAR_9, VAR_11, VAR_12, VAR_17,
       FUNC_6(VAR_7, VAR_8),
       sizeof (vdev_phys_t),
       VAR_6, VAR_10,
       VAR_14 | VAR_5);
  }
 }

 FUNC_1(VAR_17);
 FUNC_4(VAR_15);
}
