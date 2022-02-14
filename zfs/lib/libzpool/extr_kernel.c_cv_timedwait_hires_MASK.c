
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
typedef int hrtime_t ;
typedef int clock_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int *,struct timespec*) ;
 int FUNC_6 () ;

clock_t
FUNC_7(kcondvar_t *VAR_4, kmutex_t *VAR_5, hrtime_t VAR_6, hrtime_t VAR_7,
    int VAR_8)
{
 int VAR_9;
 struct timeval VAR_10;
 struct timespec VAR_11;
 hrtime_t VAR_12;

 FUNC_0(VAR_8 == 0 || VAR_8 == VAR_0);

 VAR_12 = VAR_6;
 if (VAR_8 & VAR_0)
  VAR_12 -= FUNC_2();

 if (VAR_12 <= 0)
  return (-1);

 FUNC_1(FUNC_3(&VAR_10, ((void*)0)));

 VAR_11.tv_sec = VAR_10.tv_sec + VAR_12 / VAR_2;
 VAR_11.tv_nsec = VAR_10.tv_usec * VAR_3 + (VAR_12 % VAR_2);
 if (VAR_11.tv_nsec >= VAR_2) {
  VAR_11.tv_sec++;
  VAR_11.tv_nsec -= VAR_2;
 }

 FUNC_4(&VAR_5->m_owner, 0, sizeof (pthread_t));
 VAR_9 = FUNC_5(VAR_4, &VAR_5->m_lock, &VAR_11);
 VAR_5->m_owner = FUNC_6();

 if (VAR_9 == VAR_1)
  return (-1);

 FUNC_1(VAR_9);

 return (1);
}
