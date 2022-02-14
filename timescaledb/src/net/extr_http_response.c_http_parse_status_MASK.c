
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t parse_offset; void* state; int status_code; int version; int raw_buffer; } ;
typedef TYPE_1__ HttpResponseState ;



 void* VAR_0 ;
 void* VAR_1 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int ,char,int) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ,int *) ;

__attribute__((used)) static void
FUNC_6(HttpResponseState *VAR_2, const char VAR_3)
{
 char *VAR_4 = FUNC_3(VAR_2->parse_offset + 1);

 switch (VAR_3)
 {
  case 129:







   FUNC_1(VAR_4, VAR_2->raw_buffer, VAR_2->parse_offset);
   VAR_4[VAR_2->parse_offset] = '\0';
   VAR_2->state = VAR_0;
   FUNC_2(VAR_2->version, '\0', sizeof(VAR_2->version));

   if (FUNC_5(VAR_4, "%127s%*[ ]%d%*[ ]%*s", VAR_2->version, &VAR_2->status_code) == 2)
   {
    if (FUNC_0(VAR_2))
     VAR_2->state = VAR_1;
    else
     VAR_2->state = VAR_0;
   }
   break;
  case 128:
   VAR_2->state = VAR_0;
   break;
  default:

   break;
 }

 FUNC_4(VAR_4);
}
