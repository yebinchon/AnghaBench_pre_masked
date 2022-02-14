
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 for (uint64_t VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++) {
  (void) FUNC_0("MOS object %llu referenced but not allocated\n",
      (u_longlong_t)VAR_3);
 }
}
