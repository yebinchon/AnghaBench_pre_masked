
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ms_deferhist; int ms_synchist; int ms_loaded; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(metaslab_t *VAR_1)
{




 FUNC_0(VAR_1->ms_loaded);

 FUNC_1(VAR_1->ms_synchist, sizeof (VAR_1->ms_synchist));
 for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_1(VAR_1->ms_deferhist[VAR_2], sizeof (VAR_1->ms_deferhist[VAR_2]));
}
