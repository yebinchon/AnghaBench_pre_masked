
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static BgwHandleStatus
FUNC_2(BackgroundWorkerHandle *VAR_2, pid_t *VAR_3)
{
 BgwHandleStatus VAR_4;
 pid_t VAR_5;

 if (VAR_2 == ((void*)0))
  VAR_4 = VAR_1;
 else
 {
  VAR_4 = FUNC_0(VAR_2, &VAR_5);
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_5;
 }

 if (VAR_4 == VAR_0)
  FUNC_1();
 return VAR_4;
}
