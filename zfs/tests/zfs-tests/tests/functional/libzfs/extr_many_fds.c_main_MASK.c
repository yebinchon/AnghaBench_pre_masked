
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_cur; int rlim_max; } ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int ,struct rlimit*) ;

int
FUNC_6(int VAR_3, char **VAR_4)
{
 int VAR_5;
 struct rlimit VAR_6;
 libzfs_handle_t *VAR_7;

 VAR_6.rlim_cur = 65535;
 VAR_6.rlim_max = 65535;

 if (FUNC_5(VAR_1, &VAR_6) != 0) {
  (void) FUNC_4("many_fds: setrlimit() failed with errno=%d\n",
      VAR_2);
  FUNC_0(1);
 }

 for (VAR_5 = 0; VAR_5 < 255; ++VAR_5) {
  int VAR_8 = FUNC_3("/dev/null", VAR_0);
  if (VAR_8 == -1) {
   (void) FUNC_4("open failed with errno=%d\n", VAR_2);
   return (1);
  }
 }

 VAR_7 = FUNC_2();

 if (VAR_7 != ((void*)0)) {
  FUNC_1(VAR_7);
  return (0);
 } else {
  (void) FUNC_4("many_fds: libzfs_init() failed with errno=%d\n",
      VAR_2);
  return (1);
 }
}
