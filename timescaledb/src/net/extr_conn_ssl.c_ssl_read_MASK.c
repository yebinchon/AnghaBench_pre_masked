
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int ssl; } ;
typedef TYPE_1__ SSLConnection ;
typedef int Connection ;


 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(Connection *VAR_0, char *VAR_1, size_t VAR_2)
{
 SSLConnection *VAR_3 = (SSLConnection *) VAR_0;

 int VAR_4 = FUNC_0(VAR_3->ssl, VAR_1, VAR_2);

 if (VAR_4 < 0)
  FUNC_1(VAR_3, VAR_4);

 return VAR_4;
}
