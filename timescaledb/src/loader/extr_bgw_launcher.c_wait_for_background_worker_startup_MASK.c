
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(BackgroundWorkerHandle *VAR_3, pid_t *VAR_4)
{
 BgwHandleStatus VAR_5;

 if (VAR_3 == ((void*)0))
  VAR_5 = VAR_2;
 else
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5 == VAR_0)
  FUNC_2();

 FUNC_0(VAR_5 == VAR_2 || VAR_5 == VAR_1);
 return;
}
