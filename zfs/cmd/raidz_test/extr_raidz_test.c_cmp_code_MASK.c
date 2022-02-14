
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* rm_golden; } ;
typedef TYPE_1__ raidz_test_opts_t ;
typedef int raidz_map_t ;


 int FUNC_0 (int const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,char*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(raidz_test_opts_t *VAR_1, const raidz_map_t *VAR_2, const int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_2(VAR_3 >= 1 && VAR_3 <= 3);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_3(FUNC_0(VAR_2, VAR_4), FUNC_0(VAR_1->rm_golden, VAR_4))
      != 0) {
   VAR_5++;
   FUNC_1(VAR_0, VAR_1,
       "\nParity block [%d] different!\n", VAR_4);
  }
 }
 return (VAR_5);
}
