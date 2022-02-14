
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int spa_history_list_t ;
struct TYPE_5__ {TYPE_1__* pl_private; } ;
struct TYPE_4__ {TYPE_2__ procfs_list; scalar_t__ size; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,int,TYPE_2__*,int ,int ,int *,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(void)
{
 VAR_2 = FUNC_0(sizeof (spa_history_list_t),
     VAR_0);

 VAR_2->size = 0;

 VAR_2->procfs_list.pl_private =
     VAR_2;

 FUNC_2("zfs",
     "import_progress",
     0644,
     &VAR_2->procfs_list,
     VAR_3,
     VAR_4,
     ((void*)0),
     FUNC_1(VAR_5, VAR_1));
}
