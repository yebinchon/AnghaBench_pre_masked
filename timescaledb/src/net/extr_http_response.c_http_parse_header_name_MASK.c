
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* state; int cur_header_name_len; scalar_t__ parse_offset; scalar_t__ raw_buffer; int cur_header_value; } ;
typedef TYPE_1__ HttpResponseState ;



 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;


__attribute__((used)) static void
FUNC_0(HttpResponseState *VAR_3, const char VAR_4)
{
 switch (VAR_4)
 {
  case 128:
   VAR_3->state = VAR_2;
   VAR_3->cur_header_value = VAR_3->raw_buffer + VAR_3->parse_offset + 1;
   break;
  case 129:
   if (VAR_3->cur_header_name_len == 0)
   {
    VAR_3->state = VAR_0;
    break;
   }
   else
   {





    VAR_3->state = VAR_1;
    break;
   }
  default:

   if (('a' <= VAR_4 && VAR_4 <= 'z') || ('A' <= VAR_4 && VAR_4 <= 'Z') || VAR_4 == '-')
   {

    VAR_3->cur_header_name_len++;
    break;
   }
   VAR_3->state = VAR_1;
   break;
 }
}
