
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum request { ____Placeholder_request } request ;
struct TYPE_3__ {int request; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 char const* FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;

const char *
FUNC_2(enum request VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (VAR_1[VAR_3].request == VAR_2)
   return FUNC_1(VAR_1[VAR_3].name);
 return VAR_2 == VAR_0 ? "unknown" : "run request";
}
