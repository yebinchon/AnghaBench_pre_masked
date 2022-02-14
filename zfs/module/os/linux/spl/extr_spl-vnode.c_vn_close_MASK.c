
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* v_file; int v_gfp_mask; int f_mapping; } ;
typedef TYPE_1__ vnode_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(vnode_t *VAR_0, int VAR_1, int VAR_2, int VAR_3, void *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_0);
 FUNC_0(VAR_0->v_file);

 FUNC_2(VAR_0->v_file->f_mapping, VAR_0->v_gfp_mask);
 VAR_6 = FUNC_1(VAR_0->v_file, 0);
 FUNC_3(VAR_0);

 return (-VAR_6);
}
