
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,void*) ;
 void* FUNC_1 (void*,size_t) ;
 void* FUNC_2 (void*,void*,size_t) ;

void *FUNC_3(void *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3)
{
  (void)VAR_2;
  if (VAR_3 == 0) {
    return FUNC_0(VAR_0, VAR_1);
  } else if (VAR_1 == ((void*)0)) {
    return FUNC_1(VAR_0, VAR_3);
  } else {
    return FUNC_2(VAR_0, VAR_1, VAR_3);
  }
}
