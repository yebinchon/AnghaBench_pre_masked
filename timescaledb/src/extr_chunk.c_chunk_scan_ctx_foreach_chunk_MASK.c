
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16 ;
typedef int (* on_chunk_func ) (TYPE_1__*,int ) ;
struct TYPE_8__ {int chunk; } ;
struct TYPE_7__ {int htab; } ;
typedef int HASH_SEQ_STATUS ;
typedef TYPE_2__ ChunkScanEntry ;
typedef TYPE_1__ ChunkScanCtx ;





 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(ChunkScanCtx *VAR_0, on_chunk_func VAR_1, uint16 VAR_2)
{
 HASH_SEQ_STATUS VAR_3;
 ChunkScanEntry *VAR_4;
 uint16 VAR_5 = 0;

 FUNC_0(&VAR_3, VAR_0->htab);

 for (VAR_4 = FUNC_1(&VAR_3); VAR_4 != ((void*)0); VAR_4 = FUNC_1(&VAR_3))
 {
  switch (VAR_1(VAR_0, VAR_4->chunk))
  {
   case 130:
    VAR_5++;
    FUNC_2(&VAR_3);
    return VAR_5;
   case 128:
    VAR_5++;

    if (VAR_2 > 0 && VAR_5 == VAR_2)
    {
     FUNC_2(&VAR_3);
     return VAR_5;
    }
    break;
   case 129:
    break;
  }
 }

 return VAR_5;
}
