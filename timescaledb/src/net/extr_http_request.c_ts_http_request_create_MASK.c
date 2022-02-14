
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; } ;
typedef int MemoryContext ;
typedef int HttpRequestMethod ;
typedef TYPE_1__ HttpRequest ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

HttpRequest *
FUNC_4(HttpRequestMethod VAR_2)
{
 MemoryContext VAR_3 =
  FUNC_0(VAR_1, "Http Request", VAR_0);
 MemoryContext VAR_4 = FUNC_1(VAR_3);
 HttpRequest *VAR_5 = FUNC_2(sizeof(HttpRequest));

 VAR_5->context = VAR_3;
 FUNC_3(VAR_5, VAR_2);

 FUNC_1(VAR_4);
 return VAR_5;
}
