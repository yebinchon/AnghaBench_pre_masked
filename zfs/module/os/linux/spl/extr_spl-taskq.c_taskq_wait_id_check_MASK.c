
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int taskqid_t ;
struct TYPE_4__ {int tq_lock; int tq_lock_class; } ;
typedef TYPE_1__ taskq_t ;


 int FUNC_0 (int *,unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int * FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(taskq_t *VAR_0, taskqid_t VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0->tq_lock, VAR_3, VAR_0->tq_lock_class);
 VAR_2 = (FUNC_2(VAR_0, VAR_1) == ((void*)0));
 FUNC_1(&VAR_0->tq_lock, VAR_3);

 return (VAR_2);
}
