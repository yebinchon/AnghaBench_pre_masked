
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char const*,size_t) ;

char *
FUNC_3(const char *VAR_1, size_t VAR_2)
{
 char *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) == ((void*)0))
  FUNC_0("xstrndup: %s", FUNC_1(VAR_0));
 return VAR_3;
}
