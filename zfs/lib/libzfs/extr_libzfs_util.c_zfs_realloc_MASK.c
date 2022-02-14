
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libzfs_handle_t ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (void*,size_t) ;

void *
FUNC_3(libzfs_handle_t *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3)
{
 void *VAR_4;

 if ((VAR_4 = FUNC_2(VAR_1, VAR_3)) == ((void*)0)) {
  (void) FUNC_1(VAR_0);
  return (((void*)0));
 }

 FUNC_0((char *)VAR_4 + VAR_2, (VAR_3 - VAR_2));
 return (VAR_4);
}
