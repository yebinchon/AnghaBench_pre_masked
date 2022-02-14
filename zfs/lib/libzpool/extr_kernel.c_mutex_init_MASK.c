
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_3__ {int m_owner; int m_lock; } ;
typedef TYPE_1__ kmutex_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(kmutex_t *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 FUNC_0(FUNC_2(&VAR_0->m_lock, ((void*)0)));
 FUNC_1(&VAR_0->m_owner, 0, sizeof (pthread_t));
}
