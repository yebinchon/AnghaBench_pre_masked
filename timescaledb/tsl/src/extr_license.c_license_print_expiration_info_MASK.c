
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end_time; scalar_t__ enterprise_features_enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_7(void)
{
 if (!FUNC_2(VAR_2.end_time) &&
  VAR_2.enterprise_features_enabled)
 {
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_5("your Timescale Enterprise License expires on %s",
      FUNC_0(
       FUNC_1(VAR_4, VAR_2.end_time)))));
 }

 else
 {
  VAR_3 = 0;
  FUNC_6();
 }
}
