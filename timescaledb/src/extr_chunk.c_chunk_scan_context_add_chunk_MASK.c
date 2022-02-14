
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** data; } ;
typedef TYPE_1__ ChunkScanCtx ;
typedef int ChunkResult ;
typedef int Chunk ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static ChunkResult
FUNC_1(ChunkScanCtx *VAR_1, Chunk *VAR_2)
{
 Chunk **VAR_3 = (Chunk **) VAR_1->data;

 FUNC_0(VAR_2, 0);
 *VAR_3 = VAR_2;
 VAR_1->data = VAR_3 + 1;
 return VAR_0;
}
