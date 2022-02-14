
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int recv_info_set; int use_binary_recv; int recv_flinfo; int type_in; int type_recv; } ;
typedef TYPE_1__ DatumDeserializer ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_1(DatumDeserializer *VAR_0, bool VAR_1)
{
 if (VAR_0->recv_info_set && VAR_0->use_binary_recv == VAR_1)
  return;

 VAR_0->recv_info_set = 1;
 VAR_0->use_binary_recv = VAR_1;

 if (VAR_0->use_binary_recv)
  FUNC_0(VAR_0->type_recv, &VAR_0->recv_flinfo);
 else
  FUNC_0(VAR_0->type_in, &VAR_0->recv_flinfo);
}
