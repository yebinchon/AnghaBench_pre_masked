
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; int space; } ;
typedef TYPE_1__ ChunkScanCtx ;
typedef int ChunkResult ;
typedef int Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static ChunkResult
FUNC_1(ChunkScanCtx *VAR_3, Chunk *VAR_4)
{
 if (FUNC_0(VAR_4, VAR_3->space))
 {
  VAR_3->data = VAR_4;



  return VAR_0;

 }
 return VAR_1;
}
