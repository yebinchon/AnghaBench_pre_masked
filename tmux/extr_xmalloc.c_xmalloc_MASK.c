
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;

void *
FUNC_3(size_t VAR_1)
{
 void *VAR_2;

 if (VAR_1 == 0)
  FUNC_0("xmalloc: zero size");
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_0("xmalloc: allocating %zu bytes: %s",
      VAR_1, FUNC_2(VAR_0));
 return VAR_2;
}
