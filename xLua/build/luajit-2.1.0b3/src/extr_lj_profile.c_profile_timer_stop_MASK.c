
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct itimerval {TYPE_2__ it_interval; TYPE_1__ it_value; } ;
struct TYPE_7__ {int oldsa; } ;
typedef TYPE_3__ ProfileState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct itimerval*,int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_2(ProfileState *VAR_2)
{
  struct itimerval VAR_3;
  VAR_3.it_value.tv_sec = VAR_3.it_interval.tv_sec = 0;
  VAR_3.it_value.tv_usec = VAR_3.it_interval.tv_usec = 0;
  FUNC_0(VAR_0, &VAR_3, ((void*)0));
  FUNC_1(VAR_1, &VAR_2->oldsa, ((void*)0));
}
