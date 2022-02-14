
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * headers; int context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ HttpRequest ;
typedef int HttpHeader ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (char const*,int,char const*,int,int *) ;

void
FUNC_3(HttpRequest *VAR_0, const char *VAR_1, const char *VAR_2)
{
 MemoryContext VAR_3 = FUNC_0(VAR_0->context);
 int VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_1(VAR_2);
 HttpHeader *VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_2, VAR_5, VAR_0->headers);

 VAR_0->headers = VAR_6;
 FUNC_0(VAR_3);
}
