
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* pl_private; } ;
struct TYPE_9__ {TYPE_6__ procfs_list; scalar_t__ size; } ;
struct TYPE_7__ {TYPE_3__ read_history; } ;
struct TYPE_8__ {TYPE_1__ spa_stats; } ;
typedef TYPE_2__ spa_t ;
typedef TYPE_3__ spa_history_list_t ;


 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,int,TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(spa_t *VAR_5)
{
 spa_history_list_t *VAR_6 = &VAR_5->spa_stats.read_history;
 char *VAR_7;

 VAR_6->size = 0;

 VAR_7 = FUNC_0("zfs/%s", FUNC_4(VAR_5));

 VAR_6->procfs_list.pl_private = VAR_6;
 FUNC_3(VAR_7,
     "reads",
     0600,
     &VAR_6->procfs_list,
     VAR_1,
     VAR_2,
     VAR_0,
     FUNC_2(VAR_3, VAR_4));

 FUNC_1(VAR_7);
}
