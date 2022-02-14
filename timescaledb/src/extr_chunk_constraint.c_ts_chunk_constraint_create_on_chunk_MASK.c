
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hypertable_id; int id; } ;
struct TYPE_5__ {TYPE_1__ fd; int hypertable_relid; int table_id; int constraints; } ;
typedef int Oid ;
typedef int ChunkConstraint ;
typedef TYPE_2__ Chunk ;


 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int ,int *,char const*) ;
 char* FUNC_3 (int ) ;

void
FUNC_4(Chunk *VAR_0, Oid VAR_1)
{
 const char *VAR_2;
 ChunkConstraint *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_0->constraints, VAR_0->fd.id, 0, ((void*)0), VAR_2);

 FUNC_1(VAR_3);

 FUNC_0(VAR_3,
       VAR_0->table_id,
       VAR_0->fd.id,
       VAR_0->hypertable_relid,
       VAR_0->fd.hypertable_id);
}
