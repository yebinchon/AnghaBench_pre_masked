
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_id; int * z_dirlocks; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_7__ {int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;

boolean_t
FUNC_2(znode_t *VAR_2)
{
 zfsvfs_t *VAR_3 = FUNC_0(VAR_2);
 uint64_t VAR_4;
 int VAR_5;

 if (VAR_2->z_dirlocks != ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_3->z_os, VAR_2->z_id, &VAR_4);
 if (VAR_5 != 0 || VAR_4 != 0)
  return (VAR_0);

 return (VAR_1);
}
