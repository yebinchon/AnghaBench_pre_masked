
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int lock; TYPE_4__* kstat; } ;
struct TYPE_10__ {TYPE_3__ state; } ;
struct TYPE_11__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_history_kstat_t ;
struct TYPE_13__ {int ks_flags; TYPE_2__* ks_private; int * ks_data; int * ks_lock; } ;
typedef TYPE_4__ kstat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (char*,int ,char*,char*,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_7(spa_t *VAR_6)
{
 spa_history_kstat_t *VAR_7 = &VAR_6->spa_stats.state;
 char *VAR_8;
 kstat_t *VAR_9;

 FUNC_5(&VAR_7->lock, ((void*)0), VAR_3, ((void*)0));

 VAR_8 = FUNC_0("zfs/%s", FUNC_6(VAR_6));
 VAR_9 = FUNC_2(VAR_8, 0, "state", "misc",
     VAR_2, 0, VAR_1);

 VAR_7->kstat = VAR_9;
 if (VAR_9) {
  VAR_9->ks_lock = &VAR_7->lock;
  VAR_9->ks_data = ((void*)0);
  VAR_9->ks_private = VAR_6;
  VAR_9->ks_flags |= VAR_0;
  FUNC_4(VAR_9, ((void*)0), VAR_5, VAR_4);
  FUNC_3(VAR_9);
 }

 FUNC_1(VAR_8);
}
