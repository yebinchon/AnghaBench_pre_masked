
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef enum xdr_op { ____Placeholder_xdr_op } xdr_op ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int x_op; scalar_t__ x_addr; scalar_t__ x_addr_end; int * x_ops; } ;
typedef TYPE_1__ XDR ;




 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(XDR *VAR_2, const caddr_t VAR_3, const uint_t VAR_4,
    const enum xdr_op VAR_5)
{
 switch (VAR_5) {
  case 128:
   VAR_2->x_ops = &VAR_1;
   break;
  case 129:
   VAR_2->x_ops = &VAR_0;
   break;
  default:
   VAR_2->x_ops = ((void*)0);
   return;
 }

 VAR_2->x_op = VAR_5;
 VAR_2->x_addr = VAR_3;
 VAR_2->x_addr_end = VAR_3 + VAR_4;

 if (VAR_2->x_addr_end < VAR_2->x_addr) {
  VAR_2->x_ops = ((void*)0);
 }
}
