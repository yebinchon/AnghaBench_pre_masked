
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * db_scheduler_handle; } ;
typedef int HTAB ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_1__ DbHashEntry ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(int VAR_0, Datum VAR_1)
{
 HTAB *VAR_2 = *(HTAB **) FUNC_0(VAR_1);
 HASH_SEQ_STATUS VAR_3;
 DbHashEntry *VAR_4;


 if (VAR_2 != ((void*)0))
 {
  FUNC_2(&VAR_3, VAR_2);





  while ((VAR_4 = FUNC_3(&VAR_3)) != ((void*)0))
  {
   if (VAR_4->db_scheduler_handle != ((void*)0))
   {
    FUNC_5(VAR_4->db_scheduler_handle);
    FUNC_4(VAR_4->db_scheduler_handle);
   }
  }

  FUNC_1(VAR_2);
 }





 FUNC_6();
}
