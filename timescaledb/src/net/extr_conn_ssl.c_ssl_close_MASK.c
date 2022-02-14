
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ssl_ctx; int * ssl; } ;
typedef TYPE_1__ SSLConnection ;
typedef int Connection ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(Connection *VAR_0)
{
 SSLConnection *VAR_1 = (SSLConnection *) VAR_0;

 if (VAR_1->ssl != ((void*)0))
 {
  FUNC_1(VAR_1->ssl);
  VAR_1->ssl = ((void*)0);
 }

 if (VAR_1->ssl_ctx != ((void*)0))
 {
  FUNC_0(VAR_1->ssl_ctx);
  VAR_1->ssl_ctx = ((void*)0);
 }

 FUNC_2(VAR_0);
}
