
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_constraints; int * constraints; } ;
typedef int Relation ;
typedef TYPE_1__ ChunkConstraints ;
typedef int CatalogSecurityContext ;
typedef int Catalog ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(ChunkConstraints *VAR_2)
{
 Catalog *VAR_3 = FUNC_6();
 CatalogSecurityContext VAR_4;
 Relation VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(FUNC_0(VAR_3, VAR_0), VAR_1);

 FUNC_4(FUNC_5(), &VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_2->num_constraints; VAR_6++)
  FUNC_1(VAR_5, &VAR_2->constraints[VAR_6]);

 FUNC_7(&VAR_4);
 FUNC_2(VAR_5, VAR_1);
}
