
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct group_info {int ngroups; } ;
struct TYPE_3__ {struct group_info* group_info; } ;
typedef TYPE_1__ cred_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int
FUNC_1(const cred_t *VAR_1)
{
 struct group_info *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->group_info;
 VAR_3 = VAR_2->ngroups;






 if (VAR_3 > VAR_0) {
  FUNC_0(1);
  VAR_3 = VAR_0;
 }

 return (VAR_3);
}
