
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_3__ {int space; } ;
typedef int Oid ;
typedef int Interval ;
typedef TYPE_1__ Hypertable ;
typedef int Dimension ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int * FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static Interval *
FUNC_9(int32 VAR_3, int64 VAR_4)
{
 Dimension *VAR_5;
 Interval *VAR_6 = VAR_0;
 Hypertable *VAR_7 = FUNC_8(VAR_3);
 Oid VAR_8;

 FUNC_0(VAR_7 != ((void*)0));





 VAR_5 = FUNC_6(VAR_7->space, 0);

 VAR_8 = FUNC_7(VAR_5);
 if (VAR_5 != ((void*)0) && FUNC_4(VAR_8))
 {
  VAR_6 = FUNC_1(
   FUNC_2(VAR_2,
        FUNC_5(0),
        FUNC_5(0),
        FUNC_5(0),
        FUNC_5(0),
        FUNC_5(0),
        FUNC_5(0),
        FUNC_3((VAR_4 * 2) / VAR_1)));
 }

 return VAR_6;
}
