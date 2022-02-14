
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type_oid; size_t type_name; int schema_name; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ CustomTypeInfo ;
typedef size_t CustomType ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (int ,char*,size_t) ;
 TYPE_1__* VAR_4 ;

extern CustomTypeInfo *
FUNC_6(CustomType VAR_5)
{
 CustomTypeInfo *VAR_6;

 if (VAR_5 >= VAR_3)
  FUNC_5(VAR_0, "invalid timescaledb type %d", VAR_5);

 VAR_6 = &VAR_4[VAR_5];

 if (VAR_6->type_oid == VAR_1)
 {
  Oid VAR_7 = FUNC_2(VAR_6->schema_name, 0);
  Oid VAR_8 = FUNC_1(VAR_2,
            FUNC_0(VAR_6->type_name),
            FUNC_3(VAR_7));
  if (!FUNC_4(VAR_8))
   FUNC_5(VAR_0, "unknown timescaledb type %s", VAR_6->type_name);

  VAR_6->type_oid = VAR_8;
 }

 return VAR_6;
}
