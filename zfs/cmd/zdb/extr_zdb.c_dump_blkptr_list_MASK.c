
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uncomp ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {TYPE_1__* spa_dsl_pool; } ;
typedef TYPE_3__ spa_t ;
typedef int entries ;
struct TYPE_15__ {scalar_t__ bpo_object; } ;
struct TYPE_14__ {int dl_tree; TYPE_2__* dl_phys; TYPE_5__ dl_bpobj; scalar_t__ dl_oldfmt; int dl_object; int dl_os; } ;
typedef TYPE_4__ dsl_deadlist_t ;
typedef int comp ;
typedef int bytes ;
struct TYPE_12__ {int dl_uncomp; int dl_comp; int dl_used; } ;
struct TYPE_11__ {scalar_t__ dp_empty_bpobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*,char*,int ) ;
 int* VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9(dsl_deadlist_t *VAR_4, char *VAR_5)
{
 char VAR_6[32];
 char VAR_7[32];
 char VAR_8[32];
 char VAR_9[32];
 spa_t *VAR_10 = FUNC_3(VAR_4->dl_os);
 uint64_t VAR_11 = VAR_10->spa_dsl_pool->dp_empty_bpobj;

 if (VAR_4->dl_oldfmt) {
  if (VAR_4->dl_bpobj.bpo_object != VAR_11)
   FUNC_2(&VAR_4->dl_bpobj);
 } else {
  FUNC_6(VAR_4->dl_object);
  FUNC_4(VAR_4, VAR_1, VAR_10);
 }


 FUNC_0(sizeof (VAR_6) >= VAR_0);
 FUNC_0(sizeof (VAR_7) >= VAR_0);
 FUNC_0(sizeof (VAR_8) >= VAR_0);
 FUNC_0(sizeof (VAR_9) >= VAR_0);

 if (VAR_3['d'] < 3)
  return;

 if (VAR_4->dl_oldfmt) {
  FUNC_5(&VAR_4->dl_bpobj, "old-format deadlist", 0);
  return;
 }

 FUNC_8(VAR_4->dl_phys->dl_used, VAR_6, sizeof (VAR_6));
 FUNC_8(VAR_4->dl_phys->dl_comp, VAR_7, sizeof (VAR_7));
 FUNC_8(VAR_4->dl_phys->dl_uncomp, VAR_8, sizeof (VAR_8));
 FUNC_8(FUNC_1(&VAR_4->dl_tree), VAR_9, sizeof (VAR_9));
 (void) FUNC_7("\n    %s: %s (%s/%s comp), %s entries\n",
     VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_3['d'] < 4)
  return;

 (void) FUNC_7("\n");

 FUNC_4(VAR_4, VAR_2, ((void*)0));
}
