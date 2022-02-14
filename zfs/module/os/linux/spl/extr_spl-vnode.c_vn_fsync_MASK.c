
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* v_file; } ;
typedef TYPE_1__ vnode_t ;
struct TYPE_7__ {int flags; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(vnode_t *VAR_3, int VAR_4, void *VAR_5, void *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 FUNC_0(VAR_3);
 FUNC_0(VAR_3->v_file);

 if (VAR_4 & VAR_0)
  VAR_7 = 1;





 VAR_9 = FUNC_1();
 if (VAR_9)
  VAR_2->flags &= ~(VAR_1);

 VAR_8 = -FUNC_2(VAR_3->v_file, VAR_7);
 if (VAR_9)
  VAR_2->flags |= VAR_1;

 return (VAR_8);
}
