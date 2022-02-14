
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsm_segment ;
typedef int dsm_handle ;
typedef int TestParamsWrapper ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;

__attribute__((used)) static TestParamsWrapper *
FUNC_10()
{
 dsm_segment *VAR_1;
 dsm_handle VAR_2 = FUNC_9();
 TestParamsWrapper *VAR_3;

 VAR_1 = FUNC_5(VAR_2);
 if (VAR_1 == ((void*)0))
 {






  VAR_1 = FUNC_4(VAR_2);
  if (VAR_1 == ((void*)0))
   FUNC_8(VAR_0, "got NULL segment in params_open_wrapper");





 }

 FUNC_0(VAR_1 != ((void*)0));

 VAR_3 = FUNC_7(VAR_1);

 FUNC_0(VAR_3 != ((void*)0));

 return VAR_3;
}
