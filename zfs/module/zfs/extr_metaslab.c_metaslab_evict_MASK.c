
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ ms_disabled; int ms_allocator; int ms_weight; int * ms_allocating; int ms_loaded; } ;
typedef TYPE_1__ metaslab_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(metaslab_t *VAR_4, uint64_t VAR_5)
{
 if (!VAR_4->ms_loaded || VAR_4->ms_disabled != 0)
  return;

 for (int VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  FUNC_0(FUNC_3(
      VAR_4->ms_allocating[(VAR_5 + VAR_6) & VAR_2]));
 }
 if (VAR_4->ms_allocator != -1)
  FUNC_1(VAR_4, VAR_4->ms_weight & ~VAR_0);

 if (!VAR_3)
  FUNC_2(VAR_4);
}
