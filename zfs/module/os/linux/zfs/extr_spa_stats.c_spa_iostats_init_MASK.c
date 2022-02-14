
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int lock; TYPE_4__* kstat; } ;
struct TYPE_9__ {TYPE_3__ iostats; } ;
struct TYPE_10__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef int spa_iostats_t ;
typedef TYPE_3__ spa_history_kstat_t ;
struct TYPE_12__ {int ks_data; int ks_update; TYPE_2__* ks_private; int * ks_lock; } ;
typedef TYPE_4__ kstat_t ;
typedef int kstat_named_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_4__* FUNC_3 (char*,int ,char*,char*,int ,int,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_6)
{
 spa_history_kstat_t *VAR_7 = &VAR_6->spa_stats.iostats;

 FUNC_6(&VAR_7->lock, ((void*)0), VAR_3, ((void*)0));

 char *VAR_8 = FUNC_1("zfs/%s", FUNC_7(VAR_6));
 kstat_t *VAR_9 = FUNC_3(VAR_8, 0, "iostats", "misc",
     VAR_2, sizeof (spa_iostats_t) / sizeof (kstat_named_t),
     VAR_1);

 VAR_7->kstat = VAR_9;
 if (VAR_9) {
  int VAR_10 = sizeof (spa_iostats_t);
  VAR_9->ks_lock = &VAR_7->lock;
  VAR_9->ks_private = VAR_6;
  VAR_9->ks_update = VAR_5;
  VAR_9->ks_data = FUNC_0(VAR_10, VAR_0);
  FUNC_5(VAR_9->ks_data, &VAR_4, VAR_10);
  FUNC_4(VAR_9);
 }

 FUNC_2(VAR_8);
}
