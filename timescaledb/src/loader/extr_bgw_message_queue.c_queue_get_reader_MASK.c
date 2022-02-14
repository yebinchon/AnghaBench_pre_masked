
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_3__ {int mutex; int reader_pid; } ;
typedef TYPE_1__ MessageQueue ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static pid_t
FUNC_2(MessageQueue *VAR_0)
{
 pid_t VAR_1;
 volatile MessageQueue *VAR_2 = VAR_0;

 FUNC_0(&VAR_2->mutex);
 VAR_1 = VAR_2->reader_pid;
 FUNC_1(&VAR_2->mutex);
 return VAR_1;
}
