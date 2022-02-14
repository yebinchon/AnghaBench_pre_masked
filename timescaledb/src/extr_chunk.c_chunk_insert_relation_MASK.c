
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; } ;
typedef int Relation ;
typedef int HeapTuple ;
typedef TYPE_1__ Chunk ;
typedef int CatalogSecurityContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(Relation VAR_0, Chunk *VAR_1)
{
 HeapTuple VAR_2;

 CatalogSecurityContext VAR_3;

 VAR_2 = FUNC_1(&VAR_1->fd, FUNC_0(VAR_0));

 FUNC_3(FUNC_4(), &VAR_3);
 FUNC_5(VAR_0, VAR_2);
 FUNC_6(&VAR_3);

 FUNC_2(VAR_2);
}
