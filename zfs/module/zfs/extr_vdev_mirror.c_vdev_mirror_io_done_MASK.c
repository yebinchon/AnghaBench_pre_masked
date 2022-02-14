
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ io_type; int io_flags; int io_size; int io_abd; int io_bp; int io_txg; int io_spa; void* io_error; int io_priority; int * io_vd; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_13__ {int mm_children; TYPE_3__* mm_child; scalar_t__ mm_resilvering; } ;
typedef TYPE_2__ mirror_map_t ;
struct TYPE_14__ {scalar_t__ mc_error; int mc_offset; TYPE_6__* mc_vd; scalar_t__ mc_tried; int mc_skipped; } ;
typedef TYPE_3__ mirror_child_t ;
struct TYPE_15__ {int * vdev_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ,int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_6__*,int ,int ,int ,scalar_t__,int ,int,int *,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(zio_t *VAR_11)
{
 mirror_map_t *VAR_12 = VAR_11->io_vsd;
 mirror_child_t *VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 0;

 if (VAR_12 == ((void*)0))
  return;

 for (VAR_14 = 0; VAR_14 < VAR_12->mm_children; VAR_14++) {
  VAR_13 = &VAR_12->mm_child[VAR_14];

  if (VAR_13->mc_error) {
   if (!VAR_13->mc_skipped)
    VAR_16++;
  } else if (VAR_13->mc_tried) {
   VAR_15++;
  }
 }

 if (VAR_11->io_type == VAR_8) {
  if (VAR_15 != VAR_12->mm_children) {
   if (VAR_15 == 0 || VAR_11->io_vd == ((void*)0))
    VAR_11->io_error = FUNC_5(VAR_12);
  }
  return;
 }

 FUNC_0(VAR_11->io_type == VAR_7);





 if (VAR_15 == 0 && (VAR_14 = FUNC_4(VAR_11)) != -1) {
  FUNC_0(VAR_14 >= 0 && VAR_14 < VAR_12->mm_children);
  VAR_13 = &VAR_12->mm_child[VAR_14];
  FUNC_8(VAR_11);
  FUNC_6(FUNC_7(VAR_11, VAR_11->io_bp,
      VAR_13->mc_vd, VAR_13->mc_offset, VAR_11->io_abd, VAR_11->io_size,
      VAR_7, VAR_11->io_priority, 0,
      VAR_10, VAR_13));
  return;
 }


 if (VAR_15 == 0) {
  VAR_11->io_error = FUNC_5(VAR_12);
  FUNC_0(VAR_11->io_error != 0);
 }

 if (VAR_15 && FUNC_2(VAR_11->io_spa) &&
     (VAR_16 ||
     (VAR_11->io_flags & VAR_3) ||
     ((VAR_11->io_flags & VAR_4) && VAR_12->mm_resilvering))) {



  for (VAR_14 = 0; VAR_14 < VAR_12->mm_children; VAR_14++) {







   VAR_13 = &VAR_12->mm_child[VAR_14];

   if (VAR_13->mc_error == 0) {
    if (VAR_13->mc_tried)
     continue;
    if (!(VAR_11->io_flags & VAR_4) &&
        VAR_13->mc_vd->vdev_ops != &VAR_9 &&
        !FUNC_3(VAR_13->mc_vd, VAR_0,
        VAR_11->io_txg, 1))
     continue;
    VAR_13->mc_error = FUNC_1(VAR_1);
   }

   FUNC_6(FUNC_7(VAR_11, VAR_11->io_bp,
       VAR_13->mc_vd, VAR_13->mc_offset,
       VAR_11->io_abd, VAR_11->io_size,
       VAR_8, VAR_6,
       VAR_2 | (VAR_16 ?
       VAR_5 : 0), ((void*)0), ((void*)0)));
  }
 }
}
