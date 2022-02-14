
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int spa_config; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_13__ {int spa_load_state; int pool_name; int pool_guid; } ;
typedef TYPE_2__ spa_import_progress_t ;
struct TYPE_15__ {int pl_lock; } ;
struct TYPE_14__ {TYPE_9__ procfs_list; int size; } ;
typedef TYPE_3__ spa_history_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (TYPE_9__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_3__* VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;

void
FUNC_9(spa_t *VAR_3)
{
 spa_history_list_t *VAR_4 = VAR_2;
 spa_import_progress_t *VAR_5;
 char *VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(sizeof (spa_import_progress_t), VAR_0);
 VAR_5->pool_guid = FUNC_5(VAR_3);

 (void) FUNC_3(VAR_3->spa_config, VAR_1,
     &VAR_6);
 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_7(VAR_3);
 VAR_5->pool_name = FUNC_8(VAR_6);
 VAR_5->spa_load_state = FUNC_6(VAR_3);

 FUNC_1(&VAR_4->procfs_list.pl_lock);
 FUNC_4(&VAR_4->procfs_list, VAR_5);
 VAR_4->size++;
 FUNC_2(&VAR_4->procfs_list.pl_lock);
}
