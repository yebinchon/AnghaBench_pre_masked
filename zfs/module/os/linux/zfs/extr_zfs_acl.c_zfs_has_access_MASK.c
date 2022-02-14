
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int znode_t ;
typedef int uint32_t ;
typedef int uid_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_3__ {int i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int,int *) ;

boolean_t
FUNC_6(znode_t *VAR_3, cred_t *VAR_4)
{
 uint32_t VAR_5 = VAR_0;

 if (FUNC_5(VAR_3, &VAR_5, VAR_1, VAR_4) != 0) {
  uid_t VAR_6;

  VAR_6 = FUNC_4(FUNC_2(VAR_3),
      FUNC_0(FUNC_1(VAR_3)->i_uid), VAR_4, VAR_2);
  return (FUNC_3(VAR_4, FUNC_1(VAR_3), VAR_6) == 0);
 }
 return (VAR_1);
}
