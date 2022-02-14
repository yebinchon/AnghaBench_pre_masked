
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


struct TYPE_13__ {unsigned long long zs_metaslab_sz; } ;
typedef TYPE_3__ ztest_shared_t ;
struct TYPE_14__ {TYPE_2__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
typedef int nvlist_t ;
struct TYPE_15__ {int paths; char** path; int can_be_active; int member_0; } ;
typedef TYPE_5__ importargs_t ;
struct TYPE_16__ {char* zo_pool; char* zo_dir; int zo_mmp_test; } ;
struct TYPE_12__ {TYPE_1__** vdev_child; } ;
struct TYPE_11__ {unsigned long long vdev_ms_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (char*,int *,int *,int) ;
 int FUNC_10 (char*,TYPE_4__**,int ) ;
 int FUNC_11 (int *,char*,int **,TYPE_5__*,int *) ;
 int VAR_7 ;
 int FUNC_12 () ;
 int VAR_8 ;
 TYPE_6__ VAR_9 ;
 int FUNC_13 (char*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_14(ztest_shared_t *VAR_11)
{
 importargs_t VAR_12 = { 0 };
 spa_t *VAR_13;
 nvlist_t *VAR_14 = ((void*)0);
 int VAR_15 = 1;
 char *VAR_16[VAR_15];
 char *VAR_17 = VAR_9.zo_pool;
 int VAR_18 = VAR_5;
 int VAR_19;

 FUNC_5(&VAR_10, ((void*)0), VAR_4, ((void*)0));
 FUNC_5(&VAR_7, ((void*)0), VAR_4, ((void*)0));
 FUNC_0(FUNC_7(&VAR_8, ((void*)0)));

 FUNC_3(VAR_1 | VAR_3);

 VAR_16[0] = VAR_9.zo_dir;
 VAR_12.paths = VAR_15;
 VAR_12.path = VAR_16;
 VAR_12.can_be_active = VAR_0;

 VAR_19 = FUNC_11(((void*)0), VAR_17, &VAR_14, &VAR_12,
     &VAR_6);
 if (VAR_19)
  (void) FUNC_1(0, "No pools found\n");

 FUNC_0(FUNC_9(VAR_17, VAR_14, ((void*)0), VAR_18));
 FUNC_0(FUNC_10(VAR_17, &VAR_13, VAR_2));
 VAR_11->zs_metaslab_sz =
     1ULL << VAR_13->spa_root_vdev->vdev_child[0]->vdev_ms_shift;
 FUNC_8(VAR_13, VAR_2);

 FUNC_2();

 if (!VAR_9.zo_mmp_test) {
  FUNC_13(VAR_9.zo_pool);
  FUNC_12();
  FUNC_13(VAR_9.zo_pool);
 }

 (void) FUNC_6(&VAR_8);
 FUNC_4(&VAR_10);
 FUNC_4(&VAR_7);
}
