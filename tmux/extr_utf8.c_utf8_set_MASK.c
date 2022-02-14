
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int member_0; } ;
struct utf8_data {int member_1; int member_2; int member_3; int * data; TYPE_1__ member_0; } ;


 int FUNC_0 (struct utf8_data*,struct utf8_data const*,int) ;

void
FUNC_1(struct utf8_data *VAR_0, u_char VAR_1)
{
 static const struct utf8_data VAR_2 = { 0 , 1, 1, 1 };

 FUNC_0(VAR_0, &VAR_2, sizeof *VAR_0);
 *VAR_0->data = VAR_1;
}
