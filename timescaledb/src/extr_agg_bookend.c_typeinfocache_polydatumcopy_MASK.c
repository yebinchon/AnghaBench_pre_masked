
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type_oid; int typelen; int typebyval; } ;
typedef TYPE_1__ TypeInfoCache ;
struct TYPE_7__ {scalar_t__ type_oid; int is_null; int datum; } ;
typedef TYPE_2__ PolyDatum ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (scalar_t__,int *,int *) ;

__attribute__((used)) inline static void
FUNC_3(TypeInfoCache *VAR_0, PolyDatum VAR_1, PolyDatum *VAR_2)
{
 if (VAR_0->type_oid != VAR_1.type_oid)
 {
  VAR_0->type_oid = VAR_1.type_oid;
  FUNC_2(VAR_0->type_oid, &VAR_0->typelen, &VAR_0->typebyval);
 }
 *VAR_2 = VAR_1;
 if (!VAR_1.is_null)
 {
  VAR_2->datum = FUNC_1(VAR_1.datum, VAR_0->typebyval, VAR_0->typelen);
  VAR_2->is_null = 0;
 }
 else
 {
  VAR_2->datum = FUNC_0(((void*)0));
  VAR_2->is_null = 1;
 }
}
