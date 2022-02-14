
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ compressed_chunk_id; } ;
struct TYPE_5__ {int table_id; TYPE_1__ fd; } ;
typedef int Path ;
typedef TYPE_2__ Chunk ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int ) ;

Path *
FUNC_2(Path *VAR_0, Chunk *VAR_1)
{
 FUNC_0(VAR_1->fd.compressed_chunk_id > 0);
 return FUNC_1(VAR_0, VAR_1->table_id);
}
