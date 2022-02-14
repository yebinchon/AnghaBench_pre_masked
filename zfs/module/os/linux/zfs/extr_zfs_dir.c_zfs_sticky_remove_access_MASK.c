
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z_mode; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_12__ {scalar_t__ z_replay; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uid_t ;
typedef int cred_t ;
struct TYPE_13__ {int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_9__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ,int ,int *) ;

int
FUNC_7(znode_t *VAR_4, znode_t *VAR_5, cred_t *VAR_6)
{
 uid_t VAR_7;
 uid_t VAR_8;
 uid_t VAR_9;
 zfsvfs_t *VAR_10 = FUNC_2(VAR_4);

 if (VAR_10->z_replay)
  return (0);

 if ((VAR_4->z_mode & VAR_2) == 0)
  return (0);

 VAR_8 = FUNC_5(VAR_10, FUNC_0(FUNC_1(VAR_4)->i_uid),
     VAR_6, VAR_3);
 VAR_9 = FUNC_5(VAR_10, FUNC_0(FUNC_1(VAR_5)->i_uid),
     VAR_6, VAR_3);

 if ((VAR_7 = FUNC_3(VAR_6)) == VAR_8 || VAR_7 == VAR_9 ||
     FUNC_6(VAR_5, VAR_0, 0, VAR_1, VAR_6) == 0)
  return (0);
 else
  return (FUNC_4(VAR_6));
}
