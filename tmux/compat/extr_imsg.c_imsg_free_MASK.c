
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct imsg {TYPE_1__ hdr; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct imsg *VAR_1)
{
 FUNC_0(VAR_1->data, VAR_1->hdr.len - VAR_0);
}
