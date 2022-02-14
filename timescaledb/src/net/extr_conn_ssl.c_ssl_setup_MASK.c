
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sock; } ;
struct TYPE_6__ {int * ssl; TYPE_1__ conn; int * ssl_ctx; } ;
typedef TYPE_2__ SSLConnection ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_6(SSLConnection *VAR_0)
{
 int VAR_1;

 VAR_0->ssl_ctx = FUNC_4();

 if (((void*)0) == VAR_0->ssl_ctx)
 {
  FUNC_5(VAR_0, -1);
  return -1;
 }

 FUNC_0();

 VAR_0->ssl = FUNC_2(VAR_0->ssl_ctx);

 if (VAR_0->ssl == ((void*)0))
 {
  FUNC_5(VAR_0, -1);
  return -1;
 }

 FUNC_0();

 VAR_1 = FUNC_3(VAR_0->ssl, VAR_0->conn.sock);

 if (VAR_1 == 0)
 {
  FUNC_5(VAR_0, -1);
  return -1;
 }

 VAR_1 = FUNC_1(VAR_0->ssl);

 if (VAR_1 <= 0)
 {
  FUNC_5(VAR_0, VAR_1);
  VAR_1 = -1;
 }

 return VAR_1;
}
