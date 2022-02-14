
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bytea ;
struct TYPE_11__ {TYPE_1__* flinfo; } ;
struct TYPE_10__ {scalar_t__ type_oid; int datum; scalar_t__ is_null; } ;
struct TYPE_9__ {scalar_t__ type_oid; int proc; } ;
struct TYPE_8__ {int fn_mcxt; } ;
typedef int StringInfo ;
typedef TYPE_2__ PolyDatumIOState ;
typedef TYPE_3__ PolyDatum ;
typedef int Oid ;
typedef TYPE_4__* FunctionCallInfo ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (scalar_t__,int *,int*) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(PolyDatum *VAR_1, StringInfo VAR_2, PolyDatumIOState *VAR_3, FunctionCallInfo VAR_4)
{
 bytea *VAR_5;

 FUNC_5(VAR_2, VAR_1->type_oid);

 if (VAR_1->is_null)
 {

  FUNC_7(VAR_2, -1);
  return;
 }

 if (VAR_3->type_oid != VAR_1->type_oid)
 {
  Oid VAR_6;
  bool VAR_7;

  FUNC_4(VAR_1->type_oid, &VAR_6, &VAR_7);
  FUNC_3(VAR_6, &VAR_3->proc, VAR_4->flinfo->fn_mcxt);
  VAR_3->type_oid = VAR_1->type_oid;
 }
 VAR_5 = FUNC_0(&VAR_3->proc, VAR_1->datum);
 FUNC_7(VAR_2, FUNC_2(VAR_5) - VAR_0);
 FUNC_6(VAR_2, FUNC_1(VAR_5), FUNC_2(VAR_5) - VAR_0);
}
