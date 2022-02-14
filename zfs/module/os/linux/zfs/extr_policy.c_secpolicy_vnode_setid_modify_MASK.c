
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_5__ {int user_ns; } ;
typedef TYPE_1__ cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__ const*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(const cred_t *VAR_3, uid_t VAR_4)
{
 if (FUNC_1(VAR_3) == VAR_4)
  return (0);






 return (FUNC_3(VAR_3, VAR_1, VAR_0, VAR_2));
}
