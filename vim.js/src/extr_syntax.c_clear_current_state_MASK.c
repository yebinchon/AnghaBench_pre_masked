
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int si_extmatch; } ;
typedef TYPE_1__ stateitem_T ;
struct TYPE_5__ {int ga_len; scalar_t__ ga_data; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2()
{
    int VAR_1;
    stateitem_T *VAR_2;

    VAR_2 = (stateitem_T *)(VAR_0.ga_data);
    for (VAR_1 = 0; VAR_1 < VAR_0.ga_len; VAR_1++)
 FUNC_1(VAR_2[VAR_1].si_extmatch);
    FUNC_0(&VAR_0);
}
