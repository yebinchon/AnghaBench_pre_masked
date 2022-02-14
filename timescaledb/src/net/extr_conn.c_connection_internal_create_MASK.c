
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int size; } ;
struct TYPE_7__ {int type; TYPE_2__* ops; } ;
typedef int ConnectionType ;
typedef TYPE_1__ Connection ;
typedef TYPE_2__ ConnOps ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static Connection *
FUNC_2(ConnectionType VAR_0, ConnOps *VAR_1)
{
 Connection *VAR_2 = FUNC_1(VAR_1->size);

 if (((void*)0) == VAR_2)
  return ((void*)0);

 FUNC_0(VAR_2, 0, VAR_1->size);
 VAR_2->ops = VAR_1;
 VAR_2->type = VAR_0;

 return VAR_2;
}
