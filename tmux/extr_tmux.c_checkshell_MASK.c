
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_1)
{
 if (VAR_1 == ((void*)0) || *VAR_1 != '/')
  return (0);
 if (FUNC_1(VAR_1))
  return (0);
 if (FUNC_0(VAR_1, VAR_0) != 0)
  return (0);
 return (1);
}
