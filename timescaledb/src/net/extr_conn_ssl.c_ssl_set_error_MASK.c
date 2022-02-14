
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int err; } ;
struct TYPE_5__ {TYPE_1__ conn; int errcode; } ;
typedef TYPE_2__ SSLConnection ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(SSLConnection *VAR_0, int VAR_1)
{
 VAR_0->errcode = FUNC_0();
 VAR_0->conn.err = VAR_1;
}
