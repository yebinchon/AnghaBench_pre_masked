
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int column_type; int column_name; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Dimension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 (int ) ;

int
FUNC_8(Dimension *VAR_4, Oid VAR_5)
{
 if (!FUNC_0(VAR_5))
  FUNC_3(VAR_1,
    (FUNC_4(VAR_0),
     FUNC_6("cannot change data type of hypertable column \"%s\" from %s to %s",
      FUNC_1(VAR_4->fd.column_name),
      FUNC_7(VAR_4->fd.column_type),
      FUNC_7(VAR_5)),
     FUNC_5("time dimension of hypertable can only have types: TIMESTAMP, "
         "TIMESTAMPTZ, and DATE")));

 VAR_4->fd.column_type = VAR_5;

 return FUNC_2(VAR_4->fd.id, VAR_3, VAR_4, VAR_2);
}
