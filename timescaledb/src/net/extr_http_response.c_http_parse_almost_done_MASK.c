
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int content_length; scalar_t__ parse_offset; scalar_t__ raw_buffer; int body_start; } ;
typedef TYPE_1__ HttpResponseState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


__attribute__((used)) static void
FUNC_0(HttpResponseState *VAR_3, const char VAR_4)
{

 switch (VAR_4)
 {
  case 128:
   VAR_3->state = VAR_0;
   VAR_3->body_start = VAR_3->raw_buffer + VAR_3->parse_offset + 1;

   if (VAR_3->content_length == 0)
    VAR_3->state = VAR_1;
   break;
  default:
   VAR_3->state = VAR_2;
   break;
 }
}
