
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int znode_t ;
struct TYPE_3__ {scalar_t__ z_replay; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint32_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*,scalar_t__,int *) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(znode_t *VAR_2, uint32_t VAR_3, uint32_t *VAR_4,
    boolean_t *VAR_5, boolean_t VAR_6, cred_t *VAR_7)
{
 zfsvfs_t *VAR_8 = FUNC_0(VAR_2);
 int VAR_9;

 *VAR_4 = VAR_3;
 *VAR_5 = VAR_1;




 if (VAR_3 == 0 || VAR_8->z_replay) {
  *VAR_4 = 0;
  return (0);
 }

 if ((VAR_9 = FUNC_2(VAR_2, VAR_3)) != 0) {
  *VAR_5 = VAR_0;
  return (VAR_9);
 }






 if (VAR_6) {
  *VAR_4 = 0;
  return (0);
 }

 return (FUNC_1(VAR_2, VAR_4, VAR_0, VAR_7));
}
