
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; int sa_flags; } ;
struct TYPE_6__ {int tv_sec; int tv_usec; } ;
struct TYPE_5__ {int tv_sec; int tv_usec; } ;
struct itimerval {TYPE_2__ it_interval; TYPE_1__ it_value; } ;
struct TYPE_7__ {int interval; int oldsa; } ;
typedef TYPE_3__ ProfileState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct itimerval*,int *) ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ProfileState *VAR_4)
{
  int VAR_5 = VAR_4->interval;
  struct itimerval VAR_6;
  struct sigaction VAR_7;
  VAR_6.it_value.tv_sec = VAR_6.it_interval.tv_sec = VAR_5 / 1000;
  VAR_6.it_value.tv_usec = VAR_6.it_interval.tv_usec = (VAR_5 % 1000) * 1000;
  FUNC_0(VAR_0, &VAR_6, ((void*)0));
  VAR_7.sa_flags = VAR_1;
  VAR_7.sa_handler = VAR_3;
  FUNC_2(&VAR_7.sa_mask);
  FUNC_1(VAR_2, &VAR_7, &VAR_4->oldsa);
}
