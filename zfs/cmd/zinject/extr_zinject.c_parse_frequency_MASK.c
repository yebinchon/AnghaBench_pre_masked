
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (char const*,char**) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3, uint32_t *VAR_4)
{
 double VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_0(VAR_3, &VAR_6);
 if (VAR_6 == ((void*)0) || *VAR_6 != '\0')
  return (VAR_0);


 VAR_5 /= 100.0f;
 if (VAR_5 < 0.000001f || VAR_5 > 1.0f)
  return (VAR_1);


 *VAR_4 = ((uint32_t)(VAR_5 * VAR_2));

 return (0);
}
