
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ cmp_type; char op; int proc; } ;
struct TYPE_11__ {int fncollation; TYPE_1__* flinfo; } ;
struct TYPE_10__ {scalar_t__ type_oid; int datum; } ;
struct TYPE_9__ {int fn_mcxt; } ;
typedef TYPE_2__ PolyDatum ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* FunctionCallInfo ;
typedef TYPE_4__ CmpFuncCache ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) inline static bool
FUNC_10(CmpFuncCache *VAR_1, FunctionCallInfo VAR_2, char *VAR_3, PolyDatum VAR_4,
     PolyDatum VAR_5)
{
 FUNC_0(VAR_4.type_oid == VAR_5.type_oid);
 FUNC_0(VAR_3[1] == '\0');

 if (VAR_1->cmp_type != VAR_4.type_oid || VAR_1->op != VAR_3[0])
 {
  Oid VAR_6, VAR_7;

  if (!FUNC_3(VAR_4.type_oid))
   FUNC_5(VAR_0, "could not determine the type of the comparison_element");
  VAR_6 = FUNC_4(FUNC_8(FUNC_9(VAR_3)), VAR_4.type_oid, VAR_4.type_oid);
  if (!FUNC_3(VAR_6))
   FUNC_5(VAR_0, "could not find a %s operator for type %d", VAR_3, VAR_4.type_oid);
  VAR_7 = FUNC_7(VAR_6);
  if (!FUNC_3(VAR_7))
   FUNC_5(VAR_0,
     "could not find the procedure for the %s operator for type %d",
     VAR_3,
     VAR_4.type_oid);
  FUNC_6(VAR_7, &VAR_1->proc, VAR_2->flinfo->fn_mcxt);
 }
 return FUNC_1(
  FUNC_2(&VAR_1->proc, VAR_2->fncollation, VAR_4.datum, VAR_5.datum));
}
