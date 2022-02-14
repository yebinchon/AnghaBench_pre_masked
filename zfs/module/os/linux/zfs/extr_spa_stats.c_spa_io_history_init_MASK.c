
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int lock; TYPE_4__* kstat; } ;
struct TYPE_9__ {TYPE_3__ io_history; } ;
struct TYPE_10__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_history_kstat_t ;
struct TYPE_12__ {int ks_update; TYPE_2__* ks_private; int * ks_lock; } ;
typedef TYPE_4__ kstat_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (char*,int ,char*,char*,int ,int,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(spa_t *VAR_3)
{
 spa_history_kstat_t *VAR_4 = &VAR_3->spa_stats.io_history;
 char *VAR_5;
 kstat_t *VAR_6;

 FUNC_4(&VAR_4->lock, ((void*)0), VAR_1, ((void*)0));

 VAR_5 = FUNC_0("zfs/%s", FUNC_5(VAR_3));

 VAR_6 = FUNC_2(VAR_5, 0, "io", "disk", VAR_0, 1, 0);
 VAR_4->kstat = VAR_6;

 if (VAR_6) {
  VAR_6->ks_lock = &VAR_4->lock;
  VAR_6->ks_private = VAR_3;
  VAR_6->ks_update = VAR_2;
  FUNC_3(VAR_6);
 }
 FUNC_1(VAR_5);
}
