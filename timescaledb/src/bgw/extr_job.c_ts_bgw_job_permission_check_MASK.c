
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ BgwJob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(BgwJob *VAR_2)
{
 Oid VAR_3 = FUNC_5(VAR_2);

 if (!FUNC_4(FUNC_0(), VAR_3))
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("insufficient permssions to alter job %d", VAR_2->fd.id)));
}
