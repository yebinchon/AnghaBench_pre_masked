
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int
FUNC_4(void)
{
 char VAR_2[] = "/proc/sys/vm/drop_caches";
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 == -1) {
  FUNC_0("Error %d: open(\"%s\", O_WRONLY)\n", VAR_1, VAR_2);
  return (VAR_1);
 }

 VAR_4 = FUNC_3(VAR_3, "3", 1);
 if ((VAR_4 == -1) || (VAR_4 != 1)) {
  FUNC_0("Error %d: write(%d, \"3\", 1)\n", VAR_1, VAR_3);
  (void) FUNC_1(VAR_3);
  return (VAR_1);
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 == -1) {
  FUNC_0("Error %d: close(%d)\n", VAR_1, VAR_3);
  return (VAR_1);
 }

 return (0);
}
