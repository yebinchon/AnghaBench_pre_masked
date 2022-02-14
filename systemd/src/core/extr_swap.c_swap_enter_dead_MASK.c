
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ result; int dynamic_creds; int exec_context; int exec_runtime; } ;
typedef scalar_t__ SwapResult ;
typedef TYPE_1__ Swap ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(Swap *VAR_3, SwapResult VAR_4) {
        FUNC_1(VAR_3);

        if (VAR_3->result == VAR_2)
                VAR_3->result = VAR_4;

        FUNC_7(FUNC_0(VAR_3), VAR_3->result == VAR_2, FUNC_4(VAR_3->result));
        FUNC_5(VAR_3, VAR_3->result != VAR_2 ? VAR_1 : VAR_0);

        VAR_3->exec_runtime = FUNC_3(VAR_3->exec_runtime, 1);

        FUNC_6(FUNC_0(VAR_3), &VAR_3->exec_context);

        FUNC_8(FUNC_0(VAR_3), 1);

        FUNC_2(&VAR_3->dynamic_creds);
}
