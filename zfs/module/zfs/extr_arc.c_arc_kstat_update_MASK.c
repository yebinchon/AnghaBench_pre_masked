
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_8__* ks_data; } ;
typedef TYPE_7__ kstat_t ;
struct TYPE_14__ {int i64; } ;
struct TYPE_15__ {TYPE_5__ value; } ;
struct TYPE_12__ {int ui64; } ;
struct TYPE_13__ {TYPE_3__ value; } ;
struct TYPE_10__ {int ui64; } ;
struct TYPE_11__ {TYPE_1__ value; } ;
struct TYPE_17__ {TYPE_6__ arcstat_memory_available_bytes; TYPE_4__ arcstat_memory_free_bytes; TYPE_2__ arcstat_memory_all_bytes; int arcstat_mfu_ghost_evictable_metadata; int arcstat_mfu_ghost_evictable_data; int arcstat_mfu_ghost_size; int arcstat_mfu_evictable_metadata; int arcstat_mfu_evictable_data; int arcstat_mfu_size; int arcstat_mru_ghost_evictable_metadata; int arcstat_mru_ghost_evictable_data; int arcstat_mru_ghost_size; int arcstat_mru_evictable_metadata; int arcstat_mru_evictable_data; int arcstat_mru_size; int arcstat_anon_evictable_metadata; int arcstat_anon_evictable_data; int arcstat_anon_size; } ;
typedef TYPE_8__ arc_stats_t ;
typedef int ARCSTAT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_6(kstat_t *VAR_16, int VAR_17)
{
 arc_stats_t *VAR_18 = VAR_16->ks_data;

 if (VAR_17 == VAR_1) {
  return (FUNC_0(VAR_0));
 } else {
  FUNC_5(VAR_2,
      &VAR_18->arcstat_anon_size,
      &VAR_18->arcstat_anon_evictable_data,
      &VAR_18->arcstat_anon_evictable_metadata);
  FUNC_5(VAR_6,
      &VAR_18->arcstat_mru_size,
      &VAR_18->arcstat_mru_evictable_data,
      &VAR_18->arcstat_mru_evictable_metadata);
  FUNC_5(VAR_7,
      &VAR_18->arcstat_mru_ghost_size,
      &VAR_18->arcstat_mru_ghost_evictable_data,
      &VAR_18->arcstat_mru_ghost_evictable_metadata);
  FUNC_5(VAR_4,
      &VAR_18->arcstat_mfu_size,
      &VAR_18->arcstat_mfu_evictable_data,
      &VAR_18->arcstat_mfu_evictable_metadata);
  FUNC_5(VAR_5,
      &VAR_18->arcstat_mfu_ghost_size,
      &VAR_18->arcstat_mfu_ghost_evictable_data,
      &VAR_18->arcstat_mfu_ghost_evictable_metadata);

  ARCSTAT(VAR_19) = FUNC_1(&VAR_8);
  ARCSTAT(VAR_20) = FUNC_1(&VAR_3);
  ARCSTAT(VAR_21) = FUNC_1(&VAR_10);
  ARCSTAT(VAR_22) =
      FUNC_1(&VAR_15);
  ARCSTAT(VAR_23) = FUNC_1(&VAR_13);
  ARCSTAT(VAR_24) = FUNC_1(&VAR_14);
  ARCSTAT(VAR_25) = FUNC_1(&VAR_11);
  ARCSTAT(VAR_26) = FUNC_1(&VAR_12);
  ARCSTAT(VAR_27) = FUNC_1(&VAR_9);

  VAR_18->arcstat_memory_all_bytes.value.ui64 =
      FUNC_2();
  VAR_18->arcstat_memory_free_bytes.value.ui64 =
      FUNC_4();
  VAR_18->arcstat_memory_available_bytes.value.i64 =
      FUNC_3();
 }

 return (0);
}
