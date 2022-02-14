
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_14__ {int count; int size; scalar_t__ private; int lock; TYPE_5__* kstat; } ;
struct TYPE_11__ {TYPE_4__ tx_assign_histogram; } ;
struct TYPE_13__ {TYPE_1__ spa_stats; } ;
typedef TYPE_3__ spa_t ;
typedef TYPE_4__ spa_history_kstat_t ;
struct TYPE_15__ {int ks_ndata; int ks_data_size; int ks_update; TYPE_3__* ks_private; scalar_t__ ks_data; int * ks_lock; } ;
typedef TYPE_5__ kstat_t ;
struct TYPE_12__ {scalar_t__ ui64; } ;
struct TYPE_16__ {int name; TYPE_2__ value; int data_type; } ;
typedef TYPE_6__ kstat_named_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_5__* FUNC_3 (char*,int ,char*,char*,int ,int ,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_7)
{
 spa_history_kstat_t *VAR_8 = &VAR_7->spa_stats.tx_assign_histogram;
 char *VAR_9;
 kstat_named_t *VAR_10;
 kstat_t *VAR_11;
 int VAR_12;

 FUNC_5(&VAR_8->lock, ((void*)0), VAR_5, ((void*)0));

 VAR_8->count = 42;
 VAR_8->size = VAR_8->count * sizeof (kstat_named_t);
 VAR_8->private = FUNC_0(VAR_8->size, VAR_0);

 VAR_9 = FUNC_1("zfs/%s", FUNC_7(VAR_7));

 for (VAR_12 = 0; VAR_12 < VAR_8->count; VAR_12++) {
  VAR_10 = &((kstat_named_t *)VAR_8->private)[VAR_12];
  VAR_10->data_type = VAR_1;
  VAR_10->value.ui64 = 0;
  (void) FUNC_6(VAR_10->name, VAR_3, "%llu ns",
      (u_longlong_t)1 << VAR_12);
 }

 VAR_11 = FUNC_3(VAR_9, 0, "dmu_tx_assign", "misc",
     VAR_4, 0, VAR_2);
 VAR_8->kstat = VAR_11;

 if (VAR_11) {
  VAR_11->ks_lock = &VAR_8->lock;
  VAR_11->ks_data = VAR_8->private;
  VAR_11->ks_ndata = VAR_8->count;
  VAR_11->ks_data_size = VAR_8->size;
  VAR_11->ks_private = VAR_7;
  VAR_11->ks_update = VAR_6;
  FUNC_4(VAR_11);
 }
 FUNC_2(VAR_9);
}
