
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long int64 ;
typedef int TimestampTz ;


 int FUNC_0 () ;
 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,long*,int*) ;
 long VAR_2 ;

__attribute__((used)) static int64
FUNC_4(TimestampTz VAR_3)
{
 long VAR_4 = 0;
 int VAR_5 = 0;

 if (FUNC_1(VAR_3))
  return 0;

 if (FUNC_2(VAR_3))
  return VAR_1;

 FUNC_3(FUNC_0(), VAR_3, &VAR_4, &VAR_5);

 if (VAR_4 < 0 || VAR_5 < 0)
  return 0;

 return (int64)(VAR_4 * VAR_0 + ((int64) VAR_5) / VAR_2);
}
