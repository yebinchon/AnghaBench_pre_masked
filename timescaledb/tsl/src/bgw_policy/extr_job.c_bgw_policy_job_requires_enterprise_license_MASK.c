
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int job_type; } ;
struct TYPE_5__ {int bgw_type; TYPE_1__ fd; } ;
typedef TYPE_2__ BgwJob ;


 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static bool
FUNC_4(BgwJob *VAR_1)
{
 FUNC_2();

 switch (VAR_1->bgw_type)
 {
  case 128:
   return 1;
  case 129:
   return 1;
  case 130:
   return 0;
  case 131:
   return 0;
  default:
   FUNC_1(VAR_0,
     "scheduler could not determine the license type for job type: \"%s\"",
     FUNC_0(VAR_1->fd.job_type));
 }
 FUNC_3();
}
