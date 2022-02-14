
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int send_info_set; int send_flinfo; int type_out; int type_send; scalar_t__ use_binary_send; } ;
typedef TYPE_1__ DatumSerializer ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_1(DatumSerializer *VAR_0)
{
 if (VAR_0->send_info_set)
  return;

 VAR_0->send_info_set = 1;

 if (VAR_0->use_binary_send)
  FUNC_0(VAR_0->type_send, &VAR_0->send_flinfo);
 else
  FUNC_0(VAR_0->type_out, &VAR_0->send_flinfo);
}
