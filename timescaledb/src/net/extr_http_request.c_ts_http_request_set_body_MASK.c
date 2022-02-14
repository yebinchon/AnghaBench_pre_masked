
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* body; size_t body_len; int context; } ;
typedef int MemoryContext ;
typedef TYPE_1__ HttpRequest ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (size_t) ;

void
FUNC_3(HttpRequest *VAR_0, const char *VAR_1, size_t VAR_2)
{
 MemoryContext VAR_3 = FUNC_0(VAR_0->context);

 VAR_0->body = FUNC_2(VAR_2 + 1);
 FUNC_1(VAR_0->body, VAR_1, VAR_2);
 VAR_0->body[VAR_2] = '\0';
 VAR_0->body_len = VAR_2;
 FUNC_0(VAR_3);
}
