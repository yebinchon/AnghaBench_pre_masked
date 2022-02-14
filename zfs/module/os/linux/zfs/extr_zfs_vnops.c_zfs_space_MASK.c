
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int znode_t ;
typedef int zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct inode {int dummy; } ;
typedef int offset_t ;
struct TYPE_4__ {scalar_t__ l_len; scalar_t__ l_start; } ;
typedef TYPE_1__ flock64_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,TYPE_1__*,int ,int ) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int ,int *) ;

int
FUNC_10(struct inode *VAR_7, int VAR_8, flock64_t *VAR_9, int VAR_10,
    offset_t VAR_11, cred_t *VAR_12)
{
 znode_t *VAR_13 = FUNC_0(VAR_7);
 zfsvfs_t *VAR_14 = FUNC_1(VAR_7);
 uint64_t VAR_15, VAR_16;
 int VAR_17;

 FUNC_3(VAR_14);
 FUNC_5(VAR_13);

 if (VAR_8 != VAR_4) {
  FUNC_4(VAR_14);
  return (FUNC_2(VAR_2));
 }





 if (FUNC_8(VAR_14)) {
  FUNC_4(VAR_14);
  return (FUNC_2(VAR_3));
 }

 if ((VAR_17 = FUNC_6(VAR_7, VAR_9, VAR_5, VAR_11))) {
  FUNC_4(VAR_14);
  return (VAR_17);
 }

 if (VAR_9->l_len < 0) {
  FUNC_4(VAR_14);
  return (FUNC_2(VAR_2));
 }







 if ((VAR_17 = FUNC_9(VAR_13, VAR_0, 0, VAR_1, VAR_12))) {
  FUNC_4(VAR_14);
  return (VAR_17);
 }

 VAR_15 = VAR_9->l_start;
 VAR_16 = VAR_9->l_len;

 VAR_17 = FUNC_7(VAR_13, VAR_15, VAR_16, VAR_10, VAR_6);

 FUNC_4(VAR_14);
 return (VAR_17);
}
