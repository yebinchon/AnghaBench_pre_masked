
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nvs_op; TYPE_2__* nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_6__ {char* n_curr; char* n_base; char* n_end; int n_flag; } ;
typedef TYPE_2__ nvs_native_t ;


 int VAR_0 ;




__attribute__((used)) static int
FUNC_0(nvstream_t *VAR_1, nvs_native_t *VAR_2, char *VAR_3,
    size_t VAR_4)
{
 switch (VAR_1->nvs_op) {
 case 129:
 case 130:
  VAR_1->nvs_private = VAR_2;
  VAR_2->n_curr = VAR_2->n_base = VAR_3;
  VAR_2->n_end = VAR_3 + VAR_4;
  VAR_2->n_flag = 0;
  return (0);

 case 128:
  VAR_1->nvs_private = VAR_2;
  VAR_2->n_curr = VAR_2->n_base = VAR_2->n_end = ((void*)0);
  VAR_2->n_flag = 0;
  return (0);
 default:
  return (VAR_0);
 }
}
