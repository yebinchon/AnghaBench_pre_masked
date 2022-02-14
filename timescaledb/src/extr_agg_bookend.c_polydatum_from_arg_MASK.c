
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flinfo; } ;
struct TYPE_5__ {int datum; int is_null; int type_oid; } ;
typedef TYPE_1__ PolyDatum ;
typedef TYPE_2__* FunctionCallInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static PolyDatum
FUNC_4(int VAR_0, FunctionCallInfo VAR_1)
{
 PolyDatum VAR_2;

 VAR_2.type_oid = FUNC_3(VAR_1->flinfo, VAR_0);
 VAR_2.is_null = FUNC_0(VAR_0);
 if (!VAR_2.is_null)
  VAR_2.datum = FUNC_1(VAR_0);
 else
  VAR_2.datum = FUNC_2(((void*)0));
 return VAR_2;
}
