
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int* argnull; int isnull; int * arg; } ;
struct TYPE_7__ {TYPE_5__ combfn_fcinfo; } ;
struct TYPE_6__ {int trans_value_isnull; int trans_value; } ;
typedef TYPE_1__ FAPerGroupState ;
typedef TYPE_2__ FACombineFnMeta ;
typedef int Datum ;


 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_1(FAPerGroupState *VAR_0, FACombineFnMeta *VAR_1, Datum VAR_2,
     bool VAR_3)
{
 VAR_1->combfn_fcinfo.arg[0] = VAR_0->trans_value;
 VAR_1->combfn_fcinfo.argnull[0] = VAR_0->trans_value_isnull;
 VAR_1->combfn_fcinfo.arg[1] = VAR_2;
 VAR_1->combfn_fcinfo.argnull[1] = VAR_3;
 VAR_1->combfn_fcinfo.isnull = 0;
 VAR_0->trans_value = FUNC_0(&VAR_1->combfn_fcinfo);
 VAR_0->trans_value_isnull = VAR_1->combfn_fcinfo.isnull;
}
