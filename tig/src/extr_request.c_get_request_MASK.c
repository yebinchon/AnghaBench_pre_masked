
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum request { ____Placeholder_request } request ;
struct TYPE_4__ {int request; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__,char const*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char const*) ;

enum request
FUNC_3(const char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (FUNC_1(VAR_1[VAR_4], VAR_2, VAR_3))
   return VAR_1[VAR_4].request;

 return VAR_0;
}
