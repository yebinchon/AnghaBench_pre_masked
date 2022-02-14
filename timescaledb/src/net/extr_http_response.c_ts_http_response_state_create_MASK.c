
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ HttpResponseState ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

HttpResponseState *
FUNC_5()
{
 MemoryContext VAR_2 =
  FUNC_0(VAR_1, "Http Response", VAR_0);
 MemoryContext VAR_3 = FUNC_1(VAR_2);
 HttpResponseState *VAR_4 = FUNC_3(sizeof(HttpResponseState));

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->context = VAR_2;
 FUNC_4(VAR_4);
 FUNC_1(VAR_3);
 return VAR_4;
}
