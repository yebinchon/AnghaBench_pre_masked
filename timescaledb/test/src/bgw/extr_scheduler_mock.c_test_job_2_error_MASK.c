
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static bool
FUNC_3()
{
 FUNC_1();
 FUNC_2(VAR_1, "Before error job 2");

 FUNC_2(VAR_0, "Error job 2");

 FUNC_2(VAR_1, "After error job 2");

 FUNC_0();
 return 1;
}
