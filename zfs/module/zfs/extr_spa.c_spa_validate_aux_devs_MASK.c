
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int vdev_guid; struct TYPE_10__* vdev_top; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int vdev_labeltype_t ;
typedef scalar_t__ uint_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_11__ {scalar_t__ sav_npending; int ** sav_pending; } ;
typedef TYPE_3__ spa_aux_vdev_t ;
typedef int nvlist_t ;
struct TYPE_9__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,char const*,int ***,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,TYPE_2__**,int *,int *,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_11(spa_t *VAR_7, nvlist_t *VAR_8, uint64_t VAR_9, int VAR_10,
    spa_aux_vdev_t *VAR_11, const char *VAR_12, uint64_t VAR_13,
    vdev_labeltype_t VAR_14)
{
 nvlist_t **VAR_15;
 uint_t VAR_16, VAR_17;
 vdev_t *VAR_18;
 int VAR_19;

 FUNC_0(FUNC_5(VAR_7, VAR_3, VAR_2) == VAR_3);




 if (FUNC_4(VAR_8, VAR_12, &VAR_15, &VAR_17) != 0)
  return (0);

 if (VAR_17 == 0)
  return (FUNC_1(VAR_0));





 if (FUNC_7(VAR_7) < VAR_13)
  return (FUNC_1(VAR_1));





 VAR_11->sav_pending = VAR_15;
 VAR_11->sav_npending = VAR_17;

 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if ((VAR_19 = FUNC_6(VAR_7, &VAR_18, VAR_15[VAR_16], ((void*)0), 0,
      VAR_10)) != 0)
   goto out;

  if (!VAR_18->vdev_ops->vdev_op_leaf) {
   FUNC_8(VAR_18);
   VAR_19 = FUNC_1(VAR_0);
   goto out;
  }

  VAR_18->vdev_top = VAR_18;

  if ((VAR_19 = FUNC_10(VAR_18)) == 0 &&
      (VAR_19 = FUNC_9(VAR_18, VAR_9, VAR_14)) == 0) {
   FUNC_2(FUNC_3(VAR_15[VAR_16], VAR_6,
       VAR_18->vdev_guid) == 0);
  }

  FUNC_8(VAR_18);

  if (VAR_19 &&
      (VAR_10 != VAR_5 && VAR_10 != VAR_4))
   goto out;
  else
   VAR_19 = 0;
 }

out:
 VAR_11->sav_pending = ((void*)0);
 VAR_11->sav_npending = 0;
 return (VAR_19);
}
