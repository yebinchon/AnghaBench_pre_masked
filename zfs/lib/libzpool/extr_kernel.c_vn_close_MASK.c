
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int v_fd; int v_dump_fd; int v_path; } ;
typedef TYPE_1__ vnode_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(vnode_t *VAR_0)
{
 FUNC_0(VAR_0->v_fd);
 if (VAR_0->v_dump_fd != -1)
  FUNC_0(VAR_0->v_dump_fd);
 FUNC_1(VAR_0->v_path);
 FUNC_2(VAR_0, sizeof (vnode_t));
}
