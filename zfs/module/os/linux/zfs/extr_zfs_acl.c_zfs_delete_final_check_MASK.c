
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int znode_t ;
typedef int uid_t ;
typedef int mode_t ;
typedef int cred_t ;
struct TYPE_3__ {int i_uid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int ,int) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_6(znode_t *VAR_3, znode_t *VAR_4,
    mode_t VAR_5, cred_t *VAR_6)
{
 int VAR_7;
 uid_t VAR_8;

 VAR_8 = FUNC_4(FUNC_2(VAR_4), FUNC_0(FUNC_1(VAR_4)->i_uid),
     VAR_6, VAR_2);

 VAR_7 = FUNC_3(VAR_6, FUNC_1(VAR_4),
     VAR_8, VAR_5, VAR_0|VAR_1);

 if (VAR_7 == 0)
  VAR_7 = FUNC_5(VAR_4, VAR_3, VAR_6);

 return (VAR_7);
}
