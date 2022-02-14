
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_history_list_t ;
struct TYPE_3__ {int pl_lock; int * pl_private; } ;
typedef TYPE_1__ procfs_list_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(procfs_list_t *VAR_0)
{
 spa_history_list_t *VAR_1 = VAR_0->pl_private;
 FUNC_0(&VAR_0->pl_lock);
 FUNC_2(VAR_1, 0);
 FUNC_1(&VAR_0->pl_lock);
 return (0);
}
