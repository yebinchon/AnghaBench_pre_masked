
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct group_info {scalar_t__ nblocks; int * blocks; int gid; } ;
typedef int gid_t ;
struct TYPE_3__ {struct group_info* group_info; } ;
typedef TYPE_1__ cred_t ;


 int * FUNC_0 (int ) ;

gid_t *
FUNC_1(const cred_t *VAR_0)
{
 struct group_info *VAR_1;
 gid_t *VAR_2 = ((void*)0);

 VAR_1 = VAR_0->group_info;



 if (VAR_1->nblocks > 0)
  VAR_2 = FUNC_0(VAR_1->blocks[0]);

 return (VAR_2);
}
