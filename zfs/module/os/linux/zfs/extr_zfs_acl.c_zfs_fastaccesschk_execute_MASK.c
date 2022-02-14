
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z_pflags; int z_mode; int z_acl_lock; } ;
typedef TYPE_1__ znode_t ;
typedef scalar_t__ uid_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_8__ {int i_gid; int i_uid; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_10 ;
 int FUNC_13 (TYPE_1__*,int ,int ,int,int *) ;

int
FUNC_14(znode_t *VAR_11, cred_t *VAR_12)
{
 boolean_t VAR_13 = VAR_1;
 boolean_t VAR_14 = VAR_1;
 boolean_t VAR_15;
 uid_t VAR_16 = FUNC_9(VAR_12);
 int VAR_17;

 if (VAR_11->z_pflags & VAR_7)
  return (FUNC_3(VAR_3));

 VAR_15 = ((VAR_11->z_pflags & VAR_9) &&
     (FUNC_4(FUNC_7(VAR_11)->i_mode)));
 if (VAR_15)
  goto slow;


 FUNC_11(&VAR_11->z_acl_lock);

 if (VAR_11->z_pflags & VAR_8) {
  FUNC_12(&VAR_11->z_acl_lock);
  return (0);
 }

 if (FUNC_2(FUNC_7(VAR_11)->i_uid) != 0 ||
     FUNC_1(FUNC_7(VAR_11)->i_gid) != 0) {
  FUNC_12(&VAR_11->z_acl_lock);
  goto slow;
 }

 if (VAR_16 == FUNC_2(FUNC_7(VAR_11)->i_uid)) {
  VAR_13 = VAR_2;
  if (VAR_11->z_mode & VAR_6) {
   FUNC_12(&VAR_11->z_acl_lock);
   return (0);
  } else {
   FUNC_12(&VAR_11->z_acl_lock);
   goto slow;
  }
 }
 if (FUNC_10(FUNC_1(FUNC_7(VAR_11)->i_gid), VAR_12)) {
  VAR_14 = VAR_2;
  if (VAR_11->z_mode & VAR_4) {
   FUNC_12(&VAR_11->z_acl_lock);
   return (0);
  } else {
   FUNC_12(&VAR_11->z_acl_lock);
   goto slow;
  }
 }
 if (!VAR_13 && !VAR_14) {
  if (VAR_11->z_mode & VAR_5) {
   FUNC_12(&VAR_11->z_acl_lock);
   return (0);
  }
 }

 FUNC_12(&VAR_11->z_acl_lock);

slow:
 FUNC_0(VAR_10);
 FUNC_5(FUNC_8(VAR_11));
 VAR_17 = FUNC_13(VAR_11, VAR_0, 0, VAR_1, VAR_12);
 FUNC_6(FUNC_8(VAR_11));
 return (VAR_17);
}
