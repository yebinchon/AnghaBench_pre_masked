
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_3__ {int m_lock; int m_owner; } ;
typedef TYPE_1__ kmutex_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;

void
FUNC_3(kmutex_t *VAR_0)
{
 FUNC_1(&VAR_0->m_owner, 0, sizeof (pthread_t));
 FUNC_0(FUNC_2(&VAR_0->m_lock));
}
