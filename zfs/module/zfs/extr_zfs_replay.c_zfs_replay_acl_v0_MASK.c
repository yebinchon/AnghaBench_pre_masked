
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
struct TYPE_6__ {int vsa_mask; int vsa_aclcnt; int vsa_aclentsz; int * vsa_aclentp; scalar_t__ vsa_aclflags; } ;
typedef TYPE_1__ vsecattr_t ;
typedef int vsa ;
struct TYPE_7__ {int lr_aclcnt; int lr_foid; } ;
typedef TYPE_2__ lr_acl_v0_t ;
typedef scalar_t__ boolean_t ;
typedef int ace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_6 (int *,int ,int **) ;

__attribute__((used)) static int
FUNC_7(void *VAR_3, void *VAR_4, boolean_t VAR_5)
{
 zfsvfs_t *VAR_6 = VAR_3;
 lr_acl_v0_t *VAR_7 = VAR_4;
 ace_t *VAR_8 = (ace_t *)(VAR_7 + 1);
 vsecattr_t VAR_9;
 znode_t *VAR_10;
 int VAR_11;

 if (VAR_5) {
  FUNC_1(VAR_7, sizeof (*VAR_7));
  FUNC_4(VAR_8, VAR_7->lr_aclcnt);
 }

 if ((VAR_11 = FUNC_6(VAR_6, VAR_7->lr_foid, &VAR_10)) != 0)
  return (VAR_11);

 FUNC_2(&VAR_9, sizeof (VAR_9));
 VAR_9.vsa_mask = VAR_0 | VAR_1;
 VAR_9.vsa_aclcnt = VAR_7->lr_aclcnt;
 VAR_9.vsa_aclentsz = sizeof (ace_t) * VAR_9.vsa_aclcnt;
 VAR_9.vsa_aclflags = 0;
 VAR_9.vsa_aclentp = VAR_8;

 VAR_11 = FUNC_5(FUNC_0(VAR_10), &VAR_9, 0, VAR_2);

 FUNC_3(FUNC_0(VAR_10));

 return (VAR_11);
}
