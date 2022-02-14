
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_3__ {int desc; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
typedef int * Name ;
typedef int Datum ;
typedef int ChunkConstraints ;
typedef int ChunkConstraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int * FUNC_6 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_7 (int ,int ,int *,int*) ;
 int VAR_5 ;

__attribute__((used)) static ChunkConstraint *
FUNC_8(ChunkConstraints *VAR_6, TupleInfo *VAR_7)
{
 bool VAR_8[VAR_4];
 Datum VAR_9[VAR_4];
 int32 VAR_10;
 Name VAR_11;
 Name VAR_12;

 FUNC_7(VAR_7->tuple, VAR_7->desc, VAR_9, VAR_8);

 VAR_11 =
  FUNC_3(VAR_9[FUNC_0(VAR_1)]);

 if (VAR_8[FUNC_0(VAR_2)])
 {
  VAR_10 = 0;
  VAR_12 = FUNC_3(
   VAR_9[FUNC_0(VAR_3)]);
 }
 else
 {
  VAR_10 = FUNC_2(
   VAR_9[FUNC_0(VAR_2)]);
  VAR_12 = FUNC_3(FUNC_4(VAR_5, FUNC_1("")));
 }

 return FUNC_6(VAR_6,
         FUNC_2(VAR_9[FUNC_0(
          VAR_0)]),
         VAR_10,
         FUNC_5(*VAR_11),
         FUNC_5(*VAR_12));
}
