
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct inode {int dummy; } ;
struct TYPE_5__ {int user_ns; } ;
typedef TYPE_1__ cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,int ,int ,int) ;

int
FUNC_5(const cred_t *VAR_4, struct inode *VAR_5, uid_t VAR_6)
{
 if (FUNC_1(VAR_4) == VAR_6)
  return (0);

 if (FUNC_2(VAR_5))
  return (0);






 if (FUNC_4(VAR_4, VAR_1, VAR_0, VAR_3) == 0)
  return (0);

 if (FUNC_4(VAR_4, VAR_2, VAR_0, VAR_3) == 0)
  return (0);

 return (VAR_3);
}
