
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int (* bgw_policy_job_execute ) (TYPE_2__*) ;} ;
struct TYPE_8__ {int job_type; } ;
struct TYPE_9__ {int bgw_type; TYPE_1__ fd; } ;
typedef int Interval ;
typedef TYPE_2__ BgwJob ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;






 int FUNC_5 (int ) ;
 int VAR_1 ;

 int FUNC_6 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int *) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (TYPE_2__*) ;

bool
FUNC_11(BgwJob *VAR_5)
{
 switch (VAR_5->bgw_type)
 {
  case 129:
  {
   bool VAR_6;





   Interval *VAR_7 = FUNC_1(FUNC_2(VAR_2,
                    FUNC_4(0),
                    FUNC_4(0),
                    FUNC_4(0),
                    FUNC_4(0),
                    FUNC_4(1),
                    FUNC_4(0),
                    FUNC_3(0)));

   VAR_6 = FUNC_9(VAR_5,
                  VAR_4,
                  VAR_1,
                  VAR_7);
   FUNC_7(VAR_7);
   return VAR_6;
  }
  case 131:
  case 132:
  case 133:
  case 134:
   return VAR_3->bgw_policy_job_execute(VAR_5);
  case 130:
   if (&FUNC_10 != ((void*)0))
    return FUNC_10(VAR_5);
   FUNC_6(VAR_0, "unknown job type \"%s\"", FUNC_5(VAR_5->fd.job_type));
   break;
  case 128:
   FUNC_6(VAR_0, "unknown job type \"%s\"", FUNC_5(VAR_5->fd.job_type));
   break;
 }
 FUNC_0(0);
 return 0;
}
