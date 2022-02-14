
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cur_header_value_len; int state; } ;
typedef TYPE_1__ HttpResponseState ;



 int VAR_0 ;
 int VAR_1 ;


__attribute__((used)) static void
FUNC_0(HttpResponseState *VAR_2, const char VAR_3)
{

 switch (VAR_3)
 {
  case 129:
   VAR_2->state = VAR_1;
   break;
  case 128:

   VAR_2->state = VAR_0;
   break;
  default:
   VAR_2->cur_header_value_len++;
   break;
 }
}
