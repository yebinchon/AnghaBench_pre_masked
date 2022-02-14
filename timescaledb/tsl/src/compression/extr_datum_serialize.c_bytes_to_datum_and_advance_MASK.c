
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type_len; int type_by_val; int type_align; } ;
typedef char* Pointer ;
typedef TYPE_1__ DatumDeserializer ;
typedef int Datum ;


 char* FUNC_0 (char const*,int ,char const*) ;
 scalar_t__ FUNC_1 (char const*,int ,int ,char const*) ;
 int FUNC_2 (char const*,int ,int ) ;

Datum
FUNC_3(DatumDeserializer *VAR_0, const char **VAR_1)
{
 Datum VAR_2;







 *VAR_1 =
  (Pointer) FUNC_1(*VAR_1, VAR_0->type_align, VAR_0->type_len, *VAR_1);
 VAR_2 = FUNC_2(*VAR_1, VAR_0->type_by_val, VAR_0->type_len);
 *VAR_1 = FUNC_0(*VAR_1, VAR_0->type_len, *VAR_1);
 return VAR_2;
}
