
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ BgwJob ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static bool
FUNC_7(BgwJob *VAR_1)
{
 bool VAR_2 = 0;
 int32 VAR_3;
 bool VAR_4;

 if (!FUNC_1())
 {
  VAR_2 = 1;
  FUNC_2();
 }

 VAR_3 = FUNC_6(VAR_1->fd.id);
 if (VAR_3 < 0)
  FUNC_4(VAR_0, "cannot find continuous aggregate for job %d", VAR_1->fd.id);

 FUNC_0();


 VAR_4 = FUNC_3(VAR_3, 1);

 FUNC_2();

 if (!VAR_4)
  FUNC_5(VAR_1, "materialize continuous aggregate");

 if (VAR_2)
  FUNC_0();

 return 1;
}
