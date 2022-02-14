
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int stop; int start; } ;
struct TYPE_8__ {TYPE_2__ term; } ;
struct TYPE_10__ {TYPE_1__ ae_u; } ;
typedef TYPE_3__ attrentry_T ;
struct TYPE_11__ {int ga_len; scalar_t__ ga_data; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ) ;

void
FUNC_2()
{
    int VAR_3;
    attrentry_T *VAR_4;




    for (VAR_3 = 0; VAR_3 < VAR_2.ga_len; ++VAR_3)
    {
 VAR_4 = &(((attrentry_T *)VAR_2.ga_data)[VAR_3]);
 FUNC_1(VAR_4->ae_u.term.start);
 FUNC_1(VAR_4->ae_u.term.stop);
    }
    FUNC_0(&VAR_2);
    FUNC_0(&VAR_0);
}
