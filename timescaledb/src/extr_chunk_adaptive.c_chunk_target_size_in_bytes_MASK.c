
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef scalar_t__ int64 ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 char* FUNC_3 (int const*) ;

__attribute__((used)) static int64
FUNC_4(const text *VAR_0)
{
 const char *VAR_1 = FUNC_3(VAR_0);
 int64 VAR_2 = 0;

 if (FUNC_2(VAR_1, "off") == 0 || FUNC_2(VAR_1, "disable") == 0)
  return 0;

 if (FUNC_2(VAR_1, "estimate") == 0)
  VAR_2 = FUNC_0();
 else
  VAR_2 = FUNC_1(VAR_1);


 if (VAR_2 <= 0)
  VAR_2 = 0;

 return VAR_2;
}
