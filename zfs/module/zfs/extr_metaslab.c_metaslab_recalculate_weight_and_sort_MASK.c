
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int ms_weight; int ms_group; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void
FUNC_4(metaslab_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->ms_lock));


 uint64_t VAR_3 = VAR_2->ms_weight & VAR_1;
 FUNC_2(VAR_2->ms_group, VAR_2,
     FUNC_3(VAR_2, VAR_0) | VAR_3);
}
