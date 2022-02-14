
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int VAR_1 ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_2 ;
 int FUNC_14 () ;
 int VAR_3 ;
 int FUNC_15 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_16(void)
{
    if (!VAR_3)
    {
 FUNC_14();


 FUNC_7();







 FUNC_1();




 if (FUNC_10())
     goto fail;

 if (FUNC_11())
     goto fail;

 VAR_2 = FUNC_5(FUNC_3("__main__"));





 FUNC_6("import sys; sys.path = filter(lambda x: x != '/must>not&exist', sys.path)");
 VAR_4 =

     FUNC_2();

 VAR_3 = 1;
    }

    return 0;

fail:





    FUNC_9();
    return -1;
}
