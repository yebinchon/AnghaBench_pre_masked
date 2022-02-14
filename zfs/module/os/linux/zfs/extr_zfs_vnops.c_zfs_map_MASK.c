
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int z_pflags; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
struct inode {int dummy; } ;
typedef scalar_t__ offset_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct inode *VAR_11, offset_t VAR_12, caddr_t *VAR_13, size_t VAR_14,
    unsigned long VAR_15)
{
 znode_t *VAR_16 = FUNC_0(VAR_11);
 zfsvfs_t *VAR_17 = FUNC_1(VAR_11);

 FUNC_3(VAR_17);
 FUNC_5(VAR_16);

 if ((VAR_15 & VAR_6) && (VAR_16->z_pflags &
     (VAR_9 | VAR_10 | VAR_7))) {
  FUNC_4(VAR_17);
  return (FUNC_2(VAR_2));
 }

 if ((VAR_15 & (VAR_5 | VAR_4)) &&
     (VAR_16->z_pflags & VAR_8)) {
  FUNC_4(VAR_17);
  return (FUNC_2(VAR_0));
 }

 if (VAR_12 < 0 || VAR_14 > VAR_3 - VAR_12) {
  FUNC_4(VAR_17);
  return (FUNC_2(VAR_1));
 }

 FUNC_4(VAR_17);
 return (0);
}
