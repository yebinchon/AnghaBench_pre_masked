
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int content_length; void* state; int cur_header_value_len; int cur_header_name_len; int cur_header_value; int * cur_header_name; } ;
typedef TYPE_1__ HttpResponseState ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;

 int FUNC_0 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_3(HttpResponseState *VAR_3, const char VAR_4)
{
 int VAR_5;

 switch (VAR_4)
 {
  case 128:
   VAR_3->state = VAR_2;

   FUNC_0(VAR_3,
             VAR_3->cur_header_name,
             VAR_3->cur_header_name_len,
             VAR_3->cur_header_value,
             VAR_3->cur_header_value_len);


   if (VAR_3->cur_header_name != ((void*)0) &&
    FUNC_2(VAR_0, VAR_3->cur_header_name, VAR_3->cur_header_name_len) ==
     0)
   {
    if (FUNC_1(VAR_3->cur_header_value, "%d", &VAR_5) == 1)
    {
     VAR_3->content_length = VAR_5;
    }
    else
    {
     VAR_3->state = VAR_1;
     break;
    }
   }
   VAR_3->cur_header_name_len = 0;
   VAR_3->cur_header_value_len = 0;
   break;
  default:
   VAR_3->state = VAR_1;
   break;
 }
}
