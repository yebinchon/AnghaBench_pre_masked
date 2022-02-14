
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {unsigned long long vdev_ms_shift; TYPE_5__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
typedef int u_longlong_t ;
struct TYPE_19__ {int sm_shift; TYPE_2__* sm_phys; } ;
typedef TYPE_4__ space_map_t ;
struct TYPE_20__ {int spa_meta_objset; } ;
typedef TYPE_5__ spa_t ;
struct TYPE_21__ {unsigned long long ms_size; TYPE_4__* ms_sm; scalar_t__ ms_fragmentation; int ms_lock; int ms_allocatable; scalar_t__ ms_start; scalar_t__ ms_id; TYPE_1__* ms_group; } ;
typedef TYPE_6__ metaslab_t ;
typedef int freebuf ;
struct TYPE_17__ {int smp_histogram; } ;
struct TYPE_16__ {TYPE_3__* mg_vd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int* VAR_3 ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,...) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_4__*) ;
 scalar_t__ FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (scalar_t__,char*,int) ;

__attribute__((used)) static void
FUNC_16(metaslab_t *VAR_4)
{
 vdev_t *VAR_5 = VAR_4->ms_group->mg_vd;
 spa_t *VAR_6 = VAR_5->vdev_spa;
 space_map_t *VAR_7 = VAR_4->ms_sm;
 char VAR_8[32];

 FUNC_15(VAR_4->ms_size - FUNC_13(VAR_7), VAR_8,
     sizeof (VAR_8));

 (void) FUNC_10(
     "\tmetaslab %6llu   offset %12llx   spacemap %6llu   free    %5s\n",
     (u_longlong_t)VAR_4->ms_id, (u_longlong_t)VAR_4->ms_start,
     (u_longlong_t)FUNC_14(VAR_7), VAR_8);

 if (VAR_3['m'] > 2 && !VAR_3['L']) {
  FUNC_8(&VAR_4->ms_lock);
  FUNC_1(FUNC_5(VAR_4));
  FUNC_11(VAR_4->ms_allocatable);
  FUNC_3(VAR_4);
  FUNC_7(VAR_4);
  FUNC_9(&VAR_4->ms_lock);
 }

 if (VAR_3['m'] > 1 && VAR_7 != ((void*)0) &&
     FUNC_12(VAR_6, VAR_2)) {




  (void) FUNC_10("\tOn-disk histogram:\t\tfragmentation %llu\n",
      (u_longlong_t)VAR_4->ms_fragmentation);
  FUNC_2(VAR_7->sm_phys->smp_histogram,
      VAR_0, VAR_7->sm_shift);
 }

 FUNC_0(VAR_4->ms_size == (1ULL << VAR_5->vdev_ms_shift));
 FUNC_4(VAR_6->spa_meta_objset, VAR_4->ms_sm);

 if (FUNC_12(VAR_6, VAR_1)) {
  (void) FUNC_10("\tFlush data:\n\tunflushed txg=%llu\n\n",
      (u_longlong_t)FUNC_6(VAR_4));
 }
}
