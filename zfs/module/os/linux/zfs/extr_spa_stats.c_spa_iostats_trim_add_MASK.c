
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ trim_type_t ;
struct TYPE_8__ {TYPE_4__* kstat; } ;
struct TYPE_6__ {TYPE_3__ iostats; } ;
struct TYPE_7__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_iostats_t ;
typedef TYPE_3__ spa_history_kstat_t ;
struct TYPE_9__ {int * ks_data; } ;
typedef TYPE_4__ kstat_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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

void
FUNC_1(spa_t *VAR_13, trim_type_t VAR_14,
    uint64_t VAR_15, uint64_t VAR_16,
    uint64_t VAR_17, uint64_t VAR_18,
    uint64_t VAR_19, uint64_t VAR_20)
{
 spa_history_kstat_t *VAR_21 = &VAR_13->spa_stats.iostats;
 kstat_t *VAR_22 = VAR_21->kstat;
 spa_iostats_t *VAR_23;

 if (VAR_22 == ((void*)0))
  return;

 VAR_23 = VAR_22->ks_data;
 if (VAR_14 == VAR_0) {
  FUNC_0(VAR_12, VAR_15);
  FUNC_0(VAR_9, VAR_16);
  FUNC_0(VAR_11, VAR_17);
  FUNC_0(VAR_8, VAR_18);
  FUNC_0(VAR_10, VAR_19);
  FUNC_0(VAR_7, VAR_20);
 } else {
  FUNC_0(VAR_6, VAR_15);
  FUNC_0(VAR_3, VAR_16);
  FUNC_0(VAR_5, VAR_17);
  FUNC_0(VAR_2, VAR_18);
  FUNC_0(VAR_4, VAR_19);
  FUNC_0(VAR_1, VAR_20);
 }
}
