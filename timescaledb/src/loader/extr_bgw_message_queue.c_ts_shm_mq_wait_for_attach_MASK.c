
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shm_mq_result ;
typedef int shm_mq_handle ;
typedef int PGPROC ;
typedef int MessageQueue ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,int ,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static shm_mq_result
FUNC_6(MessageQueue *VAR_9, shm_mq_handle *VAR_10)
{
 int VAR_11;
 PGPROC *VAR_12;

 for (VAR_11 = 1; VAR_11 <= VAR_0; VAR_11++)
 {

  VAR_12 = FUNC_5(FUNC_4(VAR_10));
  if (VAR_12 != ((void*)0))
   return VAR_5;
  else if (FUNC_3(VAR_9) == VAR_2)
   return VAR_4;




  FUNC_2(VAR_3, VAR_7 | VAR_8, VAR_1, VAR_6);


  FUNC_1(VAR_3);
  FUNC_0();
 }
 return VAR_4;
}
