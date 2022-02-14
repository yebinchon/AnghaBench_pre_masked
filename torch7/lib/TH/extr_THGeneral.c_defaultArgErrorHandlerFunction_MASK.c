
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void FUNC_2(int VAR_0, const char *VAR_1, void *VAR_2)
{
  if(VAR_1)
    FUNC_1("$ Invalid argument %d: %s\n", VAR_0, VAR_1);
  else
    FUNC_1("$ Invalid argument %d\n", VAR_0);
  FUNC_0(-1);
}
