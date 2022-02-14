
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ err; } ;
typedef TYPE_1__ Connection ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int VAR_0 ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;

const char *
FUNC_4(Connection *VAR_1)
{
 const char *VAR_2 = "no connection error";





 if (FUNC_0(VAR_1->err))
  VAR_2 = FUNC_3(VAR_0);


 VAR_1->err = 0;

 return VAR_2;
}
