
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* rm_golden; } ;
typedef TYPE_1__ raidz_test_opts_t ;
struct TYPE_9__ {int rm_cols; } ;
typedef TYPE_2__ raidz_map_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(raidz_test_opts_t *VAR_1, raidz_map_t *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 int VAR_5 = VAR_1->rm_golden->rm_cols - FUNC_3(VAR_1->rm_golden);

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  if (FUNC_2(FUNC_0(VAR_1->rm_golden, VAR_3), FUNC_0(VAR_2, VAR_3))
      != 0) {
   VAR_4++;

   FUNC_1(VAR_0, VAR_1,
       "\nData block [%d] different!\n", VAR_3);
  }
 }
 return (VAR_4);
}
