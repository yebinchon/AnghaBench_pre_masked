
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sm_shift; } ;
typedef TYPE_1__ space_map_t ;
struct TYPE_6__ {int ms_freeing; int ms_synchist; int * ms_defer; int * ms_deferhist; int ms_freed; scalar_t__ ms_loaded; TYPE_1__* ms_sm; } ;
typedef TYPE_2__ metaslab_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(metaslab_t *VAR_1)
{
 space_map_t *VAR_2 = VAR_1->ms_sm;
 FUNC_0(VAR_2 != ((void*)0));







 if (VAR_1->ms_loaded) {
  FUNC_2(VAR_1);

  FUNC_1(VAR_1->ms_synchist,
      VAR_2->sm_shift, VAR_1->ms_freed);

  for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_1(VAR_1->ms_deferhist[VAR_3],
       VAR_2->sm_shift, VAR_1->ms_defer[VAR_3]);
  }
 }

 FUNC_1(VAR_1->ms_synchist,
     VAR_2->sm_shift, VAR_1->ms_freeing);
}
