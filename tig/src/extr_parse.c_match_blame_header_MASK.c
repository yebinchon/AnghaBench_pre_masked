
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0, char **VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);
 bool VAR_3 = !FUNC_1(VAR_0, *VAR_1, VAR_2);

 if (VAR_3)
  *VAR_1 += VAR_2;

 return VAR_3;
}
