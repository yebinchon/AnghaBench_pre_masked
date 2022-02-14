
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int test ;
struct TYPE_4__ {int cond; int mut; } ;
typedef TYPE_1__ poolTest_t ;
typedef int POOL_ctx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int * const) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int * const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int * const,TYPE_1__) ;

__attribute__((used)) static int FUNC_10(void) {
    int VAR_0;
    poolTest_t VAR_1;
    POOL_ctx* const VAR_2 = FUNC_2(4 , 2 );

    FUNC_1(VAR_2);

    FUNC_8(&VAR_1, 0, sizeof(VAR_1));
    FUNC_0( FUNC_7(&VAR_1.mut, ((void*)0)) );
    FUNC_0( FUNC_5(&VAR_1.cond, ((void*)0)) );

    VAR_0 = FUNC_9(VAR_2, VAR_1);

    FUNC_6(&VAR_1.mut);
    FUNC_4(&VAR_1.cond);
    FUNC_3(VAR_2);

    return VAR_0;
}
