
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int job_type; int id; } ;
struct TYPE_9__ {int bgw_type; TYPE_1__ fd; } ;
typedef TYPE_2__ BgwJob ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_1 ;

bool
FUNC_10(BgwJob *VAR_2)
{
 if (FUNC_1(VAR_2))
  FUNC_7();
 FUNC_8();

 switch (VAR_2->bgw_type)
 {
  case 128:
   return FUNC_6(VAR_2, VAR_1, 1);
  case 129:
   return FUNC_4(VAR_2->fd.id);
  case 130:
   return FUNC_5(VAR_2);
  case 131:
   return FUNC_3(VAR_2);
  default:
   FUNC_2(VAR_0,
     "scheduler tried to run an invalid job type: \"%s\"",
     FUNC_0(VAR_2->fd.job_type));
 }
 FUNC_9();
}
