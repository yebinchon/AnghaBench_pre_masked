
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,int *) ;
 size_t FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1, size_t *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1, &VAR_3, 0);
 if (*VAR_1 != '\0' && *VAR_3 == '\0') {





  if (VAR_4 < VAR_0)
   VAR_4 *= VAR_0;
  *VAR_2 = VAR_4;
  VAR_5 = 0;
 } else
  VAR_5 = FUNC_0(VAR_1, ((uint64_t *) VAR_2));

 return (VAR_5);
}
