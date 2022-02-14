
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
typedef scalar_t__ int16 ;
struct TYPE_5__ {int compressed_chunk_id; int id; } ;
struct TYPE_6__ {int constraints; TYPE_1__ fd; } ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;

Chunk *
FUNC_2(int32 VAR_2, int16 VAR_3)
{
 Chunk *VAR_4;

 VAR_4 = FUNC_0(sizeof(Chunk));
 VAR_4->fd.id = VAR_2;
 VAR_4->fd.compressed_chunk_id = VAR_1;

 if (VAR_3 > 0)
  VAR_4->constraints = FUNC_1(VAR_3, VAR_0);

 return VAR_4;
}
