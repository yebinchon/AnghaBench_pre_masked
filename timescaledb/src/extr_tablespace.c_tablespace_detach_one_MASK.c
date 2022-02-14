
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef int Cache ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int ) ;
 int * FUNC_7 () ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char const*) ;

__attribute__((used)) static int
FUNC_11(Oid VAR_4, const char *VAR_5, Oid VAR_6, bool VAR_7)
{
 Cache *VAR_8;
 Hypertable *VAR_9;
 int VAR_10 = 0;

 FUNC_9(VAR_4, FUNC_0());

 VAR_8 = FUNC_7();
 VAR_9 = FUNC_6(VAR_8, VAR_4);

 if (((void*)0) == VAR_9)
  FUNC_1(VAR_2,
    (FUNC_2(VAR_0),
     FUNC_3("table \"%s\" is not a hypertable", FUNC_4(VAR_4))));

 if (FUNC_8(VAR_9, VAR_6))
  VAR_10 = FUNC_10(VAR_9->fd.id, VAR_5);
 else if (VAR_7)
  FUNC_1(VAR_3,
    (FUNC_2(VAR_1),
     FUNC_3("tablespace \"%s\" is not attached to hypertable \"%s\", skipping",
      VAR_5,
      FUNC_4(VAR_4))));
 else
  FUNC_1(VAR_2,
    (FUNC_2(VAR_1),
     FUNC_3("tablespace \"%s\" is not attached to hypertable \"%s\"",
      VAR_5,
      FUNC_4(VAR_4))));

 FUNC_5(VAR_8);

 return VAR_10;
}
