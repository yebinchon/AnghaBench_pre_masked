
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_8__ {int mg_lock; } ;
typedef TYPE_2__ metaslab_group_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(metaslab_group_t *VAR_1, metaslab_t *VAR_2, uint64_t VAR_3)
{




 FUNC_0(VAR_3 >= VAR_0 || VAR_3 == 0);
 FUNC_0(FUNC_1(&VAR_2->ms_lock));

 FUNC_3(&VAR_1->mg_lock);
 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_1->mg_lock);
}
