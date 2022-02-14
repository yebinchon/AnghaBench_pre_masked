
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int pthread_t ;
struct TYPE_3__ {int m_owner; int m_lock; } ;
typedef TYPE_1__ kmutex_t ;
typedef int kcondvar_t ;
typedef int clock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct timeval*,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,struct timespec*) ;
 int FUNC_6 () ;

clock_t
FUNC_7(kcondvar_t *VAR_4, kmutex_t *VAR_5, clock_t VAR_6)
{
 int VAR_7;
 struct timeval VAR_8;
 struct timespec VAR_9;
 clock_t VAR_10;

 VAR_10 = VAR_6 - FUNC_2();
 if (VAR_10 <= 0)
  return (-1);

 FUNC_0(FUNC_3(&VAR_8, ((void*)0)) == 0);

 VAR_9.tv_sec = VAR_8.tv_sec + VAR_10 / VAR_3;
 VAR_9.tv_nsec = VAR_8.tv_usec * VAR_2 + (VAR_10 % VAR_3) * (VAR_1 / VAR_3);
 if (VAR_9.tv_nsec >= VAR_1) {
  VAR_9.tv_sec++;
  VAR_9.tv_nsec -= VAR_1;
 }

 FUNC_4(&VAR_5->m_owner, 0, sizeof (pthread_t));
 VAR_7 = FUNC_5(VAR_4, &VAR_5->m_lock, &VAR_9);
 VAR_5->m_owner = FUNC_6();

 if (VAR_7 == VAR_0)
  return (-1);

 FUNC_1(VAR_7);

 return (1);
}
