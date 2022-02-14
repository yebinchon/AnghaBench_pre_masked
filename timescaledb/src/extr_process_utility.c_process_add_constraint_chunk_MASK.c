
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* space; } ;
struct TYPE_4__ {int num_dimensions; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef int Chunk ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(Hypertable *VAR_0, Oid VAR_1, void *VAR_2)
{
 Oid VAR_3 = *((Oid *) VAR_2);
 Chunk *VAR_4 = FUNC_1(VAR_1, VAR_0->space->num_dimensions, 1);

 FUNC_0(VAR_4, VAR_3);
}
