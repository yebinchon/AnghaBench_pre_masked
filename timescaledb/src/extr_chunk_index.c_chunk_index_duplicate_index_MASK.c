
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent_indexoid; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__ ChunkIndexMapping ;
typedef int Chunk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static Oid
FUNC_6(Relation VAR_2, Chunk *VAR_3, Oid VAR_4,
       Relation VAR_5, Oid VAR_6)
{
 Relation VAR_7 = FUNC_4(VAR_4, VAR_0);
 ChunkIndexMapping VAR_8;
 Oid VAR_9;
 Oid VAR_10;

 FUNC_5(VAR_3, VAR_4, &VAR_8);

 VAR_9 = FUNC_2(VAR_8.parent_indexoid);

 VAR_10 = FUNC_1(VAR_2,
                VAR_7,
                VAR_5,
                FUNC_0(VAR_9),
                VAR_6);

 FUNC_3(VAR_7, VAR_1);
 return VAR_10;
}
