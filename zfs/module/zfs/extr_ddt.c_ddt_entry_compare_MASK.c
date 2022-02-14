
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* u16; } ;
typedef TYPE_1__ ddt_key_cmp_t ;
struct TYPE_4__ {int dde_key; } ;
typedef TYPE_2__ ddt_entry_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
 const ddt_entry_t *VAR_3 = VAR_1;
 const ddt_entry_t *VAR_4 = VAR_2;
 const ddt_key_cmp_t *VAR_5 = (const ddt_key_cmp_t *)&VAR_3->dde_key;
 const ddt_key_cmp_t *VAR_6 = (const ddt_key_cmp_t *)&VAR_4->dde_key;
 int32_t VAR_7 = 0;

 for (int VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = (int32_t)VAR_5->u16[VAR_8] - (int32_t)VAR_6->u16[VAR_8];
  if (FUNC_1(VAR_7))
   break;
 }

 return (FUNC_0(VAR_7));
}
