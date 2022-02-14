
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * headers; int context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ HttpResponseState ;
typedef int HttpHeader ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (char const*,size_t,char const*,size_t,int *) ;

__attribute__((used)) static void
FUNC_2(HttpResponseState *VAR_0, const char *VAR_1, size_t VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 MemoryContext VAR_5 = FUNC_0(VAR_0->context);
 HttpHeader *VAR_6 =
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0->headers);

 VAR_0->headers = VAR_6;
 FUNC_0(VAR_5);
}
