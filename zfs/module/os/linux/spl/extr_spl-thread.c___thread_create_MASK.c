
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tp_name_size; size_t tp_len; int tp_state; int * tp_name; int tp_pri; void* tp_args; int tp_func; int tp_magic; } ;
typedef TYPE_1__ thread_priv_t ;
typedef int thread_func_t ;
struct task_struct {int dummy; } ;
typedef int proc_t ;
typedef int pri_t ;
typedef int kthread_t ;
typedef int * caddr_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct task_struct* FUNC_4 (int ,void*,char*,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *,char const*,int) ;
 char* FUNC_7 (int *,char*) ;
 int VAR_2 ;
 int FUNC_8 (struct task_struct*) ;

kthread_t *
FUNC_9(caddr_t VAR_3, size_t VAR_4, thread_func_t VAR_5,
    const char *VAR_6, void *VAR_7, size_t VAR_8, proc_t *VAR_9, int VAR_10, pri_t VAR_11)
{
 thread_priv_t *VAR_12;
 struct task_struct *VAR_13;
 char *VAR_14;



 FUNC_0(VAR_3 == ((void*)0));

 VAR_12 = FUNC_2(sizeof (thread_priv_t), VAR_0);
 if (VAR_12 == ((void*)0))
  return (((void*)0));

 VAR_12->tp_magic = VAR_1;
 VAR_12->tp_name_size = FUNC_5(VAR_6) + 1;

 VAR_12->tp_name = FUNC_2(VAR_12->tp_name_size, VAR_0);
 if (VAR_12->tp_name == ((void*)0)) {
  FUNC_3(VAR_12, sizeof (thread_priv_t));
  return (((void*)0));
 }

 FUNC_6(VAR_12->tp_name, VAR_6, VAR_12->tp_name_size);





 VAR_14 = FUNC_7(VAR_12->tp_name, "_thread");
 if (VAR_14)
  VAR_14[0] = '\0';

 VAR_12->tp_func = VAR_5;
 VAR_12->tp_args = VAR_7;
 VAR_12->tp_len = VAR_8;
 VAR_12->tp_state = VAR_10;
 VAR_12->tp_pri = VAR_11;

 VAR_13 = FUNC_4(VAR_2, (void *)VAR_12,
     "%s", VAR_12->tp_name);
 if (FUNC_1(VAR_13))
  return (((void*)0));

 FUNC_8(VAR_13);
 return ((kthread_t *)VAR_13);
}
