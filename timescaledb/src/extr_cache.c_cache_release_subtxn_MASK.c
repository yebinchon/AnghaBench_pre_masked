
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcount; } ;
typedef int SubTransactionId ;
typedef TYPE_1__ Cache ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_3(Cache *VAR_0, SubTransactionId VAR_1)
{
 int VAR_2 = VAR_0->refcount - 1;

 FUNC_0(VAR_0->refcount > 0);
 VAR_0->refcount--;

 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);

 return VAR_2;
}
