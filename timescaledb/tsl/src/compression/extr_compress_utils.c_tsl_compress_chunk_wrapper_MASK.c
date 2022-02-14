
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ compressed_chunk_id; } ;
struct TYPE_5__ {int hypertable_relid; TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int ,int) ;

bool
FUNC_6(Oid VAR_4, bool VAR_5)
{
 Chunk *VAR_6 = FUNC_5(VAR_4, 0, 1);
 if (VAR_6->fd.compressed_chunk_id != VAR_2)
 {
  FUNC_1((VAR_5 ? VAR_3 : VAR_1),
    (FUNC_2(VAR_0),
     FUNC_3("chunk \"%s\" is already compressed", FUNC_4(VAR_4))));
  return 0;
 }

 FUNC_0(VAR_6->hypertable_relid, VAR_4);
 return 1;
}
