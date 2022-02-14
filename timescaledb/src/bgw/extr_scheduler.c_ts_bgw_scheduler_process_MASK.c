
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int register_background_worker_callback_type ;
typedef int int32 ;
typedef scalar_t__ TimestampTz ;
typedef int MemoryContext ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 () ;

void
FUNC_18(int32 VAR_11,
       register_background_worker_callback_type VAR_12)
{
 TimestampTz VAR_13 = FUNC_14();
 TimestampTz VAR_14 = VAR_2;
 MemoryContext VAR_15 = VAR_0;


 FUNC_4();
 VAR_9 = FUNC_16(VAR_9, VAR_15);
 FUNC_2();

 VAR_8 = 0;

 if (VAR_11 > 0)
  VAR_14 = FUNC_5(VAR_13, VAR_11);

 FUNC_10(VAR_1, (FUNC_11("database scheduler starting for database %d", VAR_3)));







 while (VAR_14 > FUNC_14() && !VAR_5 && !VAR_10)
 {
  TimestampTz VAR_16 = VAR_14;


  FUNC_13(VAR_12);
  VAR_16 = FUNC_12(VAR_16, FUNC_8());
  VAR_16 = FUNC_12(VAR_16, FUNC_7());

  FUNC_15(VAR_16);

  FUNC_1();

  if (VAR_7)
  {
   VAR_7 = 0;
   FUNC_3(VAR_4);
  }





  FUNC_0();


  if (VAR_8)
  {
   FUNC_4();
   VAR_9 = FUNC_16(VAR_9, VAR_15);
   FUNC_2();
   VAR_8 = 0;
  }

  FUNC_6();
 }






 FUNC_1();

 FUNC_17();
 FUNC_6();
}
