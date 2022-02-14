
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ offset; char* raw_buffer; } ;
typedef TYPE_1__ HttpResponseState ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

char *
FUNC_2(HttpResponseState *VAR_1, ssize_t *VAR_2)
{
 FUNC_0(VAR_1->offset <= VAR_0);

 if (((void*)0) != VAR_2)
  *VAR_2 = FUNC_1(VAR_1);





 if (VAR_1->offset > VAR_0)
  return ((void*)0);

 return VAR_1->raw_buffer + VAR_1->offset;
}
