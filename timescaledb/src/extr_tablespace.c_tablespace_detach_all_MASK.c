
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(Oid VAR_2)
{
 Cache *VAR_3;
 Hypertable *VAR_4;
 int VAR_5;

 FUNC_8(VAR_2, FUNC_0());

 VAR_3 = FUNC_7();
 VAR_4 = FUNC_6(VAR_3, VAR_2);

 if (((void*)0) == VAR_4)
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("table \"%s\" is not a hypertable", FUNC_4(VAR_2))));

 VAR_5 = FUNC_9(VAR_4->fd.id, ((void*)0));

 FUNC_5(VAR_3);

 return VAR_5;
}
