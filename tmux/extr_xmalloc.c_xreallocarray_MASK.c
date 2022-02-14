
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (void*,size_t,size_t) ;
 int FUNC_2 (int ) ;

void *
FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3)
{
 void *VAR_4;

 if (VAR_2 == 0 || VAR_3 == 0)
  FUNC_0("xreallocarray: zero size");
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  FUNC_0("xreallocarray: allocating %zu * %zu bytes: %s",
      VAR_2, VAR_3, FUNC_2(VAR_0));
 return VAR_4;
}
