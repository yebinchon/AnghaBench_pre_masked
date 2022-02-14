
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;

void *
FUNC_3(size_t VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if (VAR_2 == 0 || VAR_1 == 0)
  FUNC_1("xcalloc: zero size");
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  FUNC_1("xcalloc: allocating %zu * %zu bytes: %s",
      VAR_1, VAR_2, FUNC_2(VAR_0));
 return VAR_3;
}
