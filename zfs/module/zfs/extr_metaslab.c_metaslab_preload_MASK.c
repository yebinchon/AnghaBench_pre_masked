
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_7__ {int ms_lock; TYPE_1__* ms_group; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_8__ {int * mc_spa; } ;
typedef TYPE_3__ metaslab_class_t ;
typedef int fstrans_cookie_t ;
struct TYPE_6__ {int mg_lock; TYPE_3__* mg_class; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_0)
{
 metaslab_t *VAR_1 = VAR_0;
 metaslab_class_t *VAR_2 = VAR_1->ms_group->mg_class;
 spa_t *VAR_3 = VAR_2->mc_spa;
 fstrans_cookie_t VAR_4 = FUNC_7();

 FUNC_0(!FUNC_1(&VAR_1->ms_group->mg_lock));

 FUNC_4(&VAR_1->ms_lock);
 (void) FUNC_2(VAR_1);
 FUNC_3(VAR_1, FUNC_6(VAR_3));
 FUNC_5(&VAR_1->ms_lock);
 FUNC_8(VAR_4);
}
