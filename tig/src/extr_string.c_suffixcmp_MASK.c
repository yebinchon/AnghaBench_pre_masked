
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 size_t VAR_3 = VAR_1 >= 0 ? VAR_1 : FUNC_1(VAR_0);
 size_t VAR_4 = FUNC_1(VAR_2);

 return VAR_4 < VAR_3 ? FUNC_0(VAR_0 + VAR_3 - VAR_4, VAR_2) : -1;
}
