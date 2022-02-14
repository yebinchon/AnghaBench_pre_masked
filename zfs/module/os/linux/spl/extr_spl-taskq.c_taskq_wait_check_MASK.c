
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tq_lowest_id; scalar_t__ tq_next_id; int tq_lock; int tq_lock_class; } ;
typedef TYPE_1__ taskq_t ;


 int FUNC_0 (int *,unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_2(taskq_t *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->tq_lock, VAR_2, VAR_0->tq_lock_class);
 VAR_1 = (VAR_0->tq_lowest_id == VAR_0->tq_next_id);
 FUNC_1(&VAR_0->tq_lock, VAR_2);

 return (VAR_1);
}
