
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,void const*) ;
 void** VAR_0 ;

int FUNC_1(int VAR_1, const char** VAR_2) {
  const void **VAR_3;
  (void)VAR_1;
  (void)VAR_2;

  for (VAR_3 = VAR_0; *VAR_3 != ((void*)0); ++VAR_3) {
    FUNC_0("%p\n", *VAR_3);
  }
  return 0;
}
