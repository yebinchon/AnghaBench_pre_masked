
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int ms_weight; int ms_loaded; int ms_allocator; int ms_group; int ms_allocatable; int ms_primary; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__*,int,int) ;
 int FUNC_6 (int ,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(metaslab_t *VAR_4, int VAR_5, uint64_t VAR_6)
{
 FUNC_0(FUNC_3(&VAR_4->ms_lock));
 if ((VAR_4->ms_weight & VAR_2) != 0) {
  FUNC_0(VAR_4->ms_loaded);
  return (0);
 }

 int VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 != 0) {
  FUNC_6(VAR_4->ms_group, VAR_4, 0);
  return (VAR_7);
 }
 if ((VAR_4->ms_weight & VAR_2) != 0) {
  if (VAR_4->ms_allocator != VAR_5)
   return (VAR_0);

  if ((VAR_4->ms_weight & VAR_6) == 0)
   return (FUNC_4(VAR_0));

  FUNC_2((VAR_6 == VAR_3),
      VAR_4->ms_primary);
  return (0);
 }
 if (VAR_4->ms_weight == 0) {
  FUNC_1(FUNC_8(VAR_4->ms_allocatable));
  return (FUNC_4(VAR_1));
 }

 if ((VAR_7 = FUNC_5(VAR_4->ms_group, VAR_4,
     VAR_5, VAR_6)) != 0) {
  return (VAR_7);
 }

 FUNC_0(VAR_4->ms_loaded);
 FUNC_0(VAR_4->ms_weight & VAR_2);

 return (0);
}
