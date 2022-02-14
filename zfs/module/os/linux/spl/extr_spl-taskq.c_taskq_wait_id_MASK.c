
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int taskqid_t ;
struct TYPE_4__ {int tq_wait_waitq; } ;
typedef TYPE_1__ taskq_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(taskq_t *VAR_0, taskqid_t VAR_1)
{
 FUNC_1(VAR_0->tq_wait_waitq, FUNC_0(VAR_0, VAR_1));
}
