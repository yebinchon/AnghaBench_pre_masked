
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_5()
{
 FUNC_0();

 FUNC_1();

 FUNC_4(VAR_0, "Before lock job 6");


 FUNC_2(VAR_1, FUNC_3(1));

 FUNC_4(VAR_0, "After lock job 5");
 return 1;
}
