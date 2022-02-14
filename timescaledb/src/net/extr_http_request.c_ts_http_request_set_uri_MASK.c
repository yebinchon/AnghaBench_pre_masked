
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* uri; int uri_len; int context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ HttpRequest ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

void
FUNC_4(HttpRequest *VAR_0, const char *VAR_1)
{
 MemoryContext VAR_2 = FUNC_0(VAR_0->context);
 int VAR_3 = FUNC_3(VAR_1);

 VAR_0->uri = FUNC_2(VAR_3 + 1);
 FUNC_1(VAR_0->uri, VAR_1, VAR_3);
 VAR_0->uri[VAR_3] = '\0';
 VAR_0->uri_len = VAR_3;
 FUNC_0(VAR_2);
}
