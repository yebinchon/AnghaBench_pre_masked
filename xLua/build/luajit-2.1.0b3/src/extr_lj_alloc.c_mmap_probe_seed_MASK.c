
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,uintptr_t*,int) ;

__attribute__((used)) static uintptr_t FUNC_3(void)
{
  uintptr_t VAR_1;
  int VAR_2 = FUNC_1("/dev/urandom", VAR_0);
  if (VAR_2 != -1) {
    int VAR_3 = ((size_t)FUNC_2(VAR_2, &VAR_1, sizeof(VAR_1)) == sizeof(VAR_1));
    (void)FUNC_0(VAR_2);
    if (VAR_3) return VAR_1;
  }
  return 1;
}
