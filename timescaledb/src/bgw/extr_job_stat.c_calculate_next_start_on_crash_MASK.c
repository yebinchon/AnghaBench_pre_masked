
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimestampTz ;
typedef int BgwJob ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static TimestampTz
FUNC_3(int VAR_1, BgwJob *VAR_2)
{
 TimestampTz VAR_3 = FUNC_2();
 TimestampTz VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 TimestampTz VAR_5 = FUNC_0(VAR_3, VAR_0);

 if (VAR_5 > VAR_4)
  return VAR_5;
 return VAR_4;
}
