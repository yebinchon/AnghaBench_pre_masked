
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BgwHandleStatus ;
typedef int BackgroundWorkerHandle ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(BackgroundWorkerHandle *VAR_2)
{
 BgwHandleStatus VAR_3;

 if (VAR_2 == ((void*)0))
  VAR_3 = VAR_1;
 else
  VAR_3 = FUNC_1(VAR_2);


 if (VAR_3 == VAR_0)
  FUNC_2();

 FUNC_0(VAR_3 == VAR_1);
 return;
}
