
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int job_type; int application_name; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int Interval ;
typedef TYPE_2__ BgwJob ;


 int FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (double) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;







 int FUNC_7 (int ,char*,int ,int) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_2 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_2__*,int ,int,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;

__attribute__((used)) static bool
FUNC_19(BgwJob *VAR_3)
{
 FUNC_18();
 FUNC_16(FUNC_9(FUNC_5(VAR_3->fd.application_name)));

 FUNC_6();
 FUNC_17();
 FUNC_0();

 switch (FUNC_8(&VAR_3->fd.job_type))
 {
  case 134:
   return FUNC_10();
  case 133:
   return FUNC_11();
  case 132:
   return FUNC_12();
  case 131:
  {

   Interval *VAR_4 = FUNC_1(FUNC_2(VAR_1,
                     FUNC_4(0),
                     FUNC_4(0),
                     FUNC_4(0),
                     FUNC_4(0),
                     FUNC_4(0),
                     FUNC_4(0),
                     FUNC_3(0.2)));

   return FUNC_15(VAR_3, VAR_2, 3, VAR_4);
  }
  case 130:
   return FUNC_13();
  case 129:
   return FUNC_14();
  case 128:
   FUNC_7(VAR_0,
     "unrecognized test job type: %s %d",
     FUNC_5(VAR_3->fd.job_type),
     FUNC_8(&VAR_3->fd.job_type));
 }
 return 0;
}
