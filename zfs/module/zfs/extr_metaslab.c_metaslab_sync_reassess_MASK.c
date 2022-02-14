
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int spa_t ;
struct TYPE_8__ {scalar_t__ mg_activation_count; int mg_fragmentation; TYPE_1__* mg_class; } ;
typedef TYPE_2__ metaslab_group_t ;
struct TYPE_7__ {int * mc_spa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;

void
FUNC_5(metaslab_group_t *VAR_3)
{
 spa_t *VAR_4 = VAR_3->mg_class->mc_spa;

 FUNC_3(VAR_4, VAR_2, VAR_0, VAR_1);
 FUNC_0(VAR_3);
 VAR_3->mg_fragmentation = FUNC_1(VAR_3);
 if (VAR_3->mg_activation_count > 0) {
  FUNC_2(VAR_3);
 }
 FUNC_4(VAR_4, VAR_2, VAR_0);
}
