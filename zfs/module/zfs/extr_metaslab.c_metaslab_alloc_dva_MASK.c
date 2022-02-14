
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
struct TYPE_14__ {scalar_t__ vs_write_errors; int vs_space; int vs_alloc; } ;
struct TYPE_13__ {scalar_t__ vdev_pending_fastwrite; scalar_t__ vdev_state; scalar_t__ vdev_children; unsigned long long vdev_ashift; int vdev_id; TYPE_2__ vdev_stat; TYPE_3__* vdev_mg; } ;
typedef TYPE_1__ vdev_t ;
typedef TYPE_2__ vdev_stat_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_15__ {int mg_activation_count; int mg_initialized; int mg_bias; scalar_t__ mg_aliquot; struct TYPE_15__* mg_next; TYPE_4__* mg_class; TYPE_1__* mg_vd; } ;
typedef TYPE_3__ metaslab_group_t ;
struct TYPE_16__ {scalar_t__ mc_aliquot; int mc_space; int mc_alloc; int mc_alloc_groups; TYPE_3__* mc_rotor; } ;
typedef TYPE_4__ metaslab_class_t ;
typedef int int64_t ;
typedef int dva_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (scalar_t__,unsigned long long) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__*,scalar_t__) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_13 (TYPE_3__*,int *,scalar_t__,scalar_t__,int,int *,int,int,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_3__*,scalar_t__,int,int) ;
 int FUNC_15 (int *,TYPE_3__*,int *,scalar_t__,int,int ,int) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 TYPE_1__* FUNC_20 (int *,int ) ;
 scalar_t__ FUNC_21 (TYPE_1__*,scalar_t__) ;

int
FUNC_22(spa_t *VAR_16, metaslab_class_t *VAR_17, uint64_t VAR_18,
    dva_t *VAR_19, int VAR_20, dva_t *VAR_21, uint64_t VAR_22, int VAR_23,
    zio_alloc_list_t *VAR_24, int VAR_25)
{
 metaslab_group_t *VAR_26, *VAR_27, *VAR_28;
 vdev_t *VAR_29;
 boolean_t VAR_30 = VAR_0;

 FUNC_0(!FUNC_2(&VAR_19[VAR_20]));
 if (VAR_18 >= VAR_15 && (FUNC_18(100) < 3)) {
  FUNC_15(VAR_24, ((void*)0), ((void*)0), VAR_18, VAR_20, VAR_10,
      VAR_25);
  return (FUNC_9(VAR_2));
 }
 if (VAR_21) {
  VAR_29 = FUNC_20(VAR_16, FUNC_1(&VAR_21[VAR_20]));







  if (VAR_29 != ((void*)0) && VAR_29->vdev_mg != ((void*)0)) {
   VAR_26 = VAR_29->vdev_mg;

   if (VAR_23 & VAR_6 &&
       VAR_26->mg_next != ((void*)0))
    VAR_26 = VAR_26->mg_next;
  } else {
   VAR_26 = VAR_17->mc_rotor;
  }
 } else if (VAR_20 != 0) {
  VAR_29 = FUNC_20(VAR_16, FUNC_1(&VAR_19[VAR_20 - 1]));
  VAR_26 = VAR_29->vdev_mg->mg_next;
 } else if (VAR_23 & VAR_4) {
  VAR_26 = VAR_27 = VAR_17->mc_rotor;

  do {
   if (VAR_27->mg_vd->vdev_pending_fastwrite <
       VAR_26->mg_vd->vdev_pending_fastwrite)
    VAR_26 = VAR_27;
  } while ((VAR_27 = VAR_27->mg_next) != VAR_17->mc_rotor);

 } else {
  FUNC_0(VAR_17->mc_rotor != ((void*)0));
  VAR_26 = VAR_17->mc_rotor;
 }





 if (VAR_26->mg_class != VAR_17 || VAR_26->mg_activation_count <= 0)
  VAR_26 = VAR_17->mc_rotor;

 VAR_28 = VAR_26;
top:
 do {
  boolean_t VAR_31;

  FUNC_0(VAR_26->mg_activation_count == 1);
  VAR_29 = VAR_26->mg_vd;




  if (VAR_30) {
   FUNC_16(VAR_16, VAR_8, VAR_3, VAR_7);
   VAR_31 = FUNC_19(VAR_29);
   FUNC_17(VAR_16, VAR_8, VAR_3);
  } else {
   VAR_31 = FUNC_19(VAR_29);
  }
  if (VAR_31 && !FUNC_7(VAR_23) && !VAR_30) {
   VAR_31 = FUNC_14(VAR_26, VAR_28,
       VAR_18, VAR_25, VAR_20);
  }

  if (!VAR_31) {
   FUNC_15(VAR_24, VAR_26, ((void*)0), VAR_18, VAR_20,
       VAR_11, VAR_25);
   goto next;
  }

  FUNC_0(VAR_26->mg_initialized);






  if ((VAR_29->vdev_stat.vs_write_errors > 0 ||
      VAR_29->vdev_state < VAR_13) &&
      VAR_20 == 0 && !VAR_30 && VAR_29->vdev_children == 0) {
   FUNC_15(VAR_24, VAR_26, ((void*)0), VAR_18, VAR_20,
       VAR_12, VAR_25);
   goto next;
  }

  FUNC_0(VAR_26->mg_class == VAR_17);

  uint64_t VAR_32 = FUNC_21(VAR_29, VAR_18);
  FUNC_0(FUNC_8(VAR_32, 1ULL << VAR_29->vdev_ashift) == 0);







  uint64_t VAR_33 = FUNC_13(VAR_26, VAR_24, VAR_32, VAR_22,
      !VAR_30, VAR_19, VAR_20, VAR_25, VAR_30);

  if (VAR_33 != -1ULL) {
   if (VAR_17->mc_aliquot == 0 && VAR_14) {
    vdev_stat_t *VAR_34 = &VAR_29->vdev_stat;
    int64_t VAR_35 = VAR_34->vs_space - VAR_34->vs_alloc;
    int64_t VAR_36 = VAR_17->mc_space - VAR_17->mc_alloc;
    int64_t VAR_37;
    VAR_37 = (VAR_35 * VAR_17->mc_alloc_groups * 100) /
        (VAR_36 + 1);
    VAR_26->mg_bias = ((VAR_37 - 100) *
        (int64_t)VAR_26->mg_aliquot) / 100;
   } else if (!VAR_14) {
    VAR_26->mg_bias = 0;
   }

   if ((VAR_23 & VAR_4) ||
       FUNC_11(&VAR_17->mc_aliquot, VAR_32) >=
       VAR_26->mg_aliquot + VAR_26->mg_bias) {
    VAR_17->mc_rotor = VAR_26->mg_next;
    VAR_17->mc_aliquot = 0;
   }

   FUNC_6(&VAR_19[VAR_20], VAR_29->vdev_id);
   FUNC_5(&VAR_19[VAR_20], VAR_33);
   FUNC_4(&VAR_19[VAR_20],
       ((VAR_23 & VAR_5) ? 1 : 0));
   FUNC_3(&VAR_19[VAR_20], VAR_32);

   if (VAR_23 & VAR_4) {
    FUNC_10(&VAR_29->vdev_pending_fastwrite,
        VAR_18);
   }

   return (0);
  }
next:
  VAR_17->mc_rotor = VAR_26->mg_next;
  VAR_17->mc_aliquot = 0;
 } while ((VAR_26 = VAR_26->mg_next) != VAR_28);




 if (!VAR_30) {
  VAR_30 = VAR_1;
  goto top;
 }

 FUNC_12(&VAR_19[VAR_20], sizeof (dva_t));

 FUNC_15(VAR_24, VAR_28, ((void*)0), VAR_18, VAR_20, VAR_9, VAR_25);
 return (FUNC_9(VAR_2));
}
