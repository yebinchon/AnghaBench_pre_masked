
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct group_info {int dummy; } ;
typedef int gid_t ;
struct TYPE_3__ {struct group_info* group_info; } ;
typedef TYPE_1__ cred_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct group_info*,int ) ;

int
FUNC_2(gid_t VAR_0, const cred_t *VAR_1)
{
 struct group_info *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->group_info;
 VAR_3 = FUNC_1(VAR_2, FUNC_0(VAR_0));

 return (VAR_3);
}
