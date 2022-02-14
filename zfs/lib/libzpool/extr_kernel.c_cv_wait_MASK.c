
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_3__ {int m_owner; int m_lock; } ;
typedef TYPE_1__ kmutex_t ;
typedef int kcondvar_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;

void
FUNC_4(kcondvar_t *VAR_0, kmutex_t *VAR_1)
{
 FUNC_1(&VAR_1->m_owner, 0, sizeof (pthread_t));
 FUNC_0(FUNC_2(VAR_0, &VAR_1->m_lock));
 VAR_1->m_owner = FUNC_3();
}
