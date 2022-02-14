
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ gid_t ;
struct TYPE_6__ {int user_ns; } ;
typedef TYPE_1__ cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (scalar_t__,TYPE_1__ const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__ const*,int ,int ,int) ;

int
FUNC_5(const cred_t *VAR_3, gid_t VAR_4)
{




 if (FUNC_1(VAR_3) != VAR_4 && !FUNC_2(VAR_4, VAR_3))
  return (FUNC_4(VAR_3, VAR_1, VAR_0, VAR_2));

 return (0);
}
