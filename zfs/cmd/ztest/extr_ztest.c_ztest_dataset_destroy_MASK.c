
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zo_verbose; int zo_threads; scalar_t__ zo_datasets; int zo_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int *,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void
FUNC_4(int VAR_5)
{
 char VAR_6[VAR_2];
 int VAR_7;

 FUNC_2(VAR_6, VAR_4.zo_pool, VAR_5);

 if (VAR_4.zo_verbose >= 3)
  (void) FUNC_1("Destroying %s to free up space\n", VAR_6);






 for (VAR_7 = VAR_5; VAR_7 < VAR_4.zo_threads;
     VAR_7 += VAR_4.zo_datasets)
  FUNC_3(VAR_6, VAR_7);

 (void) FUNC_0(VAR_6, VAR_3, ((void*)0),
     VAR_1 | VAR_0);
}
