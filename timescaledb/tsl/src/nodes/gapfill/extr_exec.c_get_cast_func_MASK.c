
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int castfunc; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_cast ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static Oid
FUNC_10(Oid VAR_4, Oid VAR_5)
{
 Oid VAR_6 = VAR_3;
 HeapTuple VAR_7;

 VAR_7 = FUNC_5(VAR_0, FUNC_2(VAR_4), FUNC_2(VAR_5));
 if (FUNC_1(VAR_7))
 {
  Form_pg_cast VAR_8 = (Form_pg_cast) FUNC_0(VAR_7);

  VAR_6 = VAR_8->castfunc;
  FUNC_4(VAR_7);
 }

 if (!FUNC_3(VAR_6))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("could not find cast from %s to %s",
      FUNC_9(VAR_4),
      FUNC_9(VAR_5))));

 return VAR_6;
}
