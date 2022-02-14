
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
typedef int int16 ;
struct TYPE_5__ {int num_dimensions; int dimensions; } ;
typedef int ScanKeyData ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_1__ Hyperspace ;
typedef int Dimension ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int,int ,TYPE_1__*,int ,int ,int ,int ) ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;

Hyperspace *
FUNC_5(int32 VAR_7, Oid VAR_8, int16 VAR_9,
      MemoryContext VAR_10)
{
 Hyperspace *VAR_11 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);
 ScanKeyData VAR_12[1];


 FUNC_1(&VAR_12[0],
    VAR_1,
    VAR_2,
    VAR_4,
    FUNC_0(VAR_7));

 FUNC_2(VAR_12,
       1,
       VAR_6,
       VAR_11,
       VAR_9,
       VAR_3,
       VAR_0,
       VAR_10);


 FUNC_4(VAR_11->dimensions, VAR_11->num_dimensions, sizeof(Dimension), VAR_5);

 return VAR_11;
}
