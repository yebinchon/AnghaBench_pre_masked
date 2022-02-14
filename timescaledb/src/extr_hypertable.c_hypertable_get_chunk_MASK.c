
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * chunk; } ;
struct TYPE_9__ {int associated_table_prefix; int associated_schema_name; } ;
struct TYPE_10__ {TYPE_1__ fd; int space; int chunk_cache; } ;
typedef int Point ;
typedef TYPE_2__ Hypertable ;
typedef TYPE_3__ ChunkStoreEntry ;
typedef int Chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int *) ;
 int * FUNC_3 (TYPE_2__*,int *,int ,int ) ;
 int * FUNC_4 (int ,int *) ;
 TYPE_3__* FUNC_5 (int ,int *) ;

__attribute__((used)) static inline Chunk *
FUNC_6(Hypertable *VAR_0, Point *VAR_1, bool VAR_2)
{
 Chunk *VAR_3;
 ChunkStoreEntry *VAR_4 = FUNC_5(VAR_0->chunk_cache, VAR_1);
 if (VAR_4 != ((void*)0))
 {
  FUNC_0(((void*)0) != VAR_4->chunk);
  return VAR_4->chunk;
 }






 VAR_3 = FUNC_4(VAR_0->space, VAR_1);

 if (((void*)0) == VAR_3)
 {
  if (!VAR_2)
   return ((void*)0);

  VAR_3 = FUNC_3(VAR_0,
        VAR_1,
        FUNC_1(VAR_0->fd.associated_schema_name),
        FUNC_1(VAR_0->fd.associated_table_prefix));
 }

 FUNC_0(VAR_3 != ((void*)0));


 VAR_4 = FUNC_2(VAR_0, VAR_3);
 return VAR_3;
}
