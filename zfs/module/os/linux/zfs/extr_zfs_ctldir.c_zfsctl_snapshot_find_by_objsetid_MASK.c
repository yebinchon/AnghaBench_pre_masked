
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int se_objsetid; int * se_spa; } ;
typedef TYPE_1__ zfs_snapentry_t ;
typedef int uint64_t ;
typedef int spa_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static zfs_snapentry_t *
FUNC_4(spa_t *VAR_2, uint64_t VAR_3)
{
 zfs_snapentry_t *VAR_4, VAR_5;

 FUNC_0(FUNC_1(&VAR_0));

 VAR_5.se_spa = VAR_2;
 VAR_5.se_objsetid = VAR_3;
 VAR_4 = FUNC_2(&VAR_1, &VAR_5, ((void*)0));
 if (VAR_4)
  FUNC_3(VAR_4);

 return (VAR_4);
}
