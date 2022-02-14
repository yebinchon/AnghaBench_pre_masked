
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int cube; } ;
struct TYPE_11__ {int chunk; int mcxt; } ;
struct TYPE_10__ {int chunk_cache; } ;
typedef int MemoryContext ;
typedef TYPE_1__ Hypertable ;
typedef TYPE_2__ ChunkStoreEntry ;
typedef TYPE_3__ Chunk ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ChunkStoreEntry *
FUNC_6(Hypertable *VAR_2, Chunk *VAR_3)
{
 ChunkStoreEntry *VAR_4;
 MemoryContext VAR_5, VAR_6;

 VAR_6 = FUNC_0(FUNC_5(VAR_2->chunk_cache),
            "chunk cache entry memory context",
            VAR_0);


 VAR_5 = FUNC_1(VAR_6);
 VAR_4 = FUNC_2(sizeof(ChunkStoreEntry));
 VAR_4->mcxt = VAR_6;
 VAR_4->chunk = FUNC_3(VAR_3);
 FUNC_4(VAR_2->chunk_cache, VAR_3->cube, VAR_4, VAR_1);
 FUNC_1(VAR_5);

 return VAR_4;
}
