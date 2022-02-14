
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int schema_name; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
struct TYPE_7__ {int chunk_id; } ;
typedef int Oid ;
typedef TYPE_2__* Form_chunk_index ;
typedef TYPE_3__ Chunk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static inline Oid
FUNC_3(Form_chunk_index VAR_0, bool VAR_1)
{
 Chunk *VAR_2 = FUNC_2(VAR_0->chunk_id, 0, 1);

 return FUNC_1(FUNC_0(VAR_2->fd.schema_name), VAR_1);
}
