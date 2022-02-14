
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int se_name; int se_taskqid; int se_objsetid; int * se_spa; } ;
typedef TYPE_1__ zfs_snapentry_t ;
typedef int uint64_t ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 zfs_snapentry_t *VAR_6 = (zfs_snapentry_t *)VAR_5;
 spa_t *VAR_7 = VAR_6->se_spa;
 uint64_t VAR_8 = VAR_6->se_objsetid;

 if (VAR_3 <= 0) {
  FUNC_3(VAR_6);
  return;
 }

 VAR_6->se_taskqid = VAR_2;
 (void) FUNC_4(VAR_6->se_name, VAR_0);
 FUNC_3(VAR_6);





 FUNC_0(&VAR_4, VAR_1);
 if ((VAR_6 = FUNC_2(VAR_7, VAR_8)) != ((void*)0)) {
  FUNC_5(VAR_6, VAR_3);
  FUNC_3(VAR_6);
 }
 FUNC_1(&VAR_4);
}
