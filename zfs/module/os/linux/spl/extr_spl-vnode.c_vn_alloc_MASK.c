
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ v_type; int * v_file; } ;
typedef TYPE_1__ vnode_t ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int VAR_0 ;

vnode_t *
FUNC_1(int VAR_1)
{
 vnode_t *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0)) {
  VAR_2->v_file = ((void*)0);
  VAR_2->v_type = 0;
 }

 return (VAR_2);
}
