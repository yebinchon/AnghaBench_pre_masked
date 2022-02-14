
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TimestampTz ;
struct TYPE_5__ {int end_time; } ;
struct TYPE_4__ {int day; } ;
typedef TYPE_1__ Interval ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 () ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_13(void)
{
 if (VAR_4)
  return;

 VAR_4 = 1;

 if (FUNC_11())
  FUNC_7(VAR_2,
    (FUNC_8(VAR_0),
     FUNC_10("Timescale License expired"),
     FUNC_9("Your license expired on %s. Renew your license to continue using "
       "enterprise features.",
       FUNC_0(
        FUNC_2(VAR_6,
             FUNC_6(VAR_3.end_time))))));
 else
 {
  Interval VAR_7 = {
   .day = 7,
  };
  TimestampTz VAR_8 =
   FUNC_1(FUNC_3(VAR_5,
             FUNC_6(VAR_3.end_time),
             FUNC_5(&VAR_7)));

  if (FUNC_12(FUNC_4(), VAR_8) >= 0)
   FUNC_7(VAR_2,
     (FUNC_8(VAR_1),
      FUNC_10("your Timescale Enterprise License expires on %s",
       FUNC_0(FUNC_2(VAR_6,
                FUNC_6(
                 VAR_3.end_time))))));
 }
}
