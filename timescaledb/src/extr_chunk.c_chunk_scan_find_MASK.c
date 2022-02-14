
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {int constraints; int cube; TYPE_1__ fd; } ;
typedef int ScanKeyData ;
typedef int MemoryContext ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int,int *,int,int ,TYPE_2__*,int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static Chunk *
FUNC_6(int VAR_4, ScanKeyData VAR_5[], int VAR_6, int16 VAR_7,
    MemoryContext VAR_8, bool VAR_9)
{
 Chunk *VAR_10 = FUNC_0(VAR_8, sizeof(Chunk));
 int VAR_11;

 VAR_11 = FUNC_1(VAR_4,
         VAR_5,
         VAR_6,
         VAR_3,
         VAR_10,
         1,
         VAR_2,
         VAR_0,
         VAR_8);

 switch (VAR_11)
 {
  case 0:
   if (VAR_9)
    FUNC_2(VAR_1, "chunk not found");
   FUNC_3(VAR_10);
   VAR_10 = ((void*)0);
   break;
  case 1:
   if (VAR_7 > 0)
   {
    VAR_10->constraints =
     FUNC_4(VAR_10->fd.id, VAR_7, VAR_8);
    VAR_10->cube = FUNC_5(VAR_10->constraints, VAR_8);
   }
   break;
  default:
   FUNC_2(VAR_1, "unexpected number of chunks found: %d", VAR_11);
 }

 return VAR_10;
}
