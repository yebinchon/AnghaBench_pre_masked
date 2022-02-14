
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_bytesrec {scalar_t__ xc_num_avail; int xc_is_last_record; } ;
typedef int bool_t ;
struct TYPE_3__ {scalar_t__ x_addr; scalar_t__ x_addr_end; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool_t
FUNC_0(XDR *VAR_3, int VAR_4, void *VAR_5)
{
 struct xdr_bytesrec *VAR_6 = (struct xdr_bytesrec *)VAR_5;

 if (VAR_4 != VAR_2)
  return (VAR_0);

 VAR_6->xc_is_last_record = VAR_1;
 VAR_6->xc_num_avail = VAR_3->x_addr_end - VAR_3->x_addr;

 return (VAR_1);
}
