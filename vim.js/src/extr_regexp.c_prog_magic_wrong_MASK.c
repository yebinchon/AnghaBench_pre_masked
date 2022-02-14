
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * engine; } ;
typedef TYPE_1__ regprog_T ;
struct TYPE_6__ {int program; } ;
typedef TYPE_2__ bt_regprog_T ;
struct TYPE_8__ {TYPE_1__* regprog; } ;
struct TYPE_7__ {TYPE_1__* regprog; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;

__attribute__((used)) static int
FUNC_3()
{
    regprog_T *VAR_8;

    VAR_8 = VAR_2 ? VAR_7->regprog : VAR_6->regprog;
    if (VAR_8->engine == &VAR_5)

 return VAR_0;

    if (FUNC_1(((bt_regprog_T *)VAR_8)->program) != VAR_1)
    {
 FUNC_0(FUNC_2(VAR_4));
 return VAR_3;
    }
    return VAR_0;
}
