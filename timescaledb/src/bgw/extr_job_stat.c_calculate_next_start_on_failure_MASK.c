
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int float8 ;
typedef int TimestampTz ;
struct TYPE_4__ {int schedule_interval; int retry_period; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int Datum ;
typedef TYPE_2__ BgwJob ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static TimestampTz
FUNC_7(TimestampTz VAR_4, int VAR_5, BgwJob *VAR_6)
{
 float8 VAR_7 = FUNC_6();

 float8 VAR_8 = 1 << (VAR_5 - 1);


 Datum VAR_9 = FUNC_2(VAR_2,
          FUNC_4(&VAR_6->fd.retry_period),
          FUNC_3(VAR_8));


 Datum VAR_10 = FUNC_2(VAR_2,
           FUNC_4(&VAR_6->fd.schedule_interval),
           FUNC_3(VAR_0));

 if (FUNC_0(FUNC_2(VAR_1, VAR_9, VAR_10)) > 0)
  VAR_9 = VAR_10;


 VAR_9 = FUNC_2(VAR_2, VAR_9, FUNC_3(1.0 + VAR_7));

 return FUNC_1(
  FUNC_2(VAR_3, FUNC_5(VAR_4), VAR_9));
}
