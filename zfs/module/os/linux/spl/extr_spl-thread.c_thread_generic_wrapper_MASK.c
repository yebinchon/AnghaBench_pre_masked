
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tp_magic; void (* tp_func ) (void*) ;int tp_name_size; struct TYPE_3__* tp_name; int tp_pri; int tp_state; void* tp_args; } ;
typedef TYPE_1__ thread_priv_t ;
typedef int kthread_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2)
{
 thread_priv_t *VAR_3 = (thread_priv_t *)VAR_2;
 void (*VAR_4)(void *);
 void *VAR_5;

 FUNC_0(VAR_3->tp_magic == VAR_0);
 VAR_4 = VAR_3->tp_func;
 VAR_5 = VAR_3->tp_args;
 FUNC_3(VAR_3->tp_state);
 FUNC_4((kthread_t *)VAR_1, FUNC_1(VAR_3->tp_pri));
 FUNC_2(VAR_3->tp_name, VAR_3->tp_name_size);
 FUNC_2(VAR_3, sizeof (thread_priv_t));

 if (VAR_4)
  VAR_4(VAR_5);

 return (0);
}
