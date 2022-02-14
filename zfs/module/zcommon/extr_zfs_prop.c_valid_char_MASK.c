
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char VAR_0)
{
 return ((VAR_0 >= 'a' && VAR_0 <= 'z') ||
     (VAR_0 >= '0' && VAR_0 <= '9') ||
     VAR_0 == '-' || VAR_0 == '_' || VAR_0 == '.' || VAR_0 == ':');
}
