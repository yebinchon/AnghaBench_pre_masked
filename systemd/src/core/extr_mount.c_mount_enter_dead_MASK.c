
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ result; int dynamic_creds; int exec_context; int exec_runtime; } ;
typedef scalar_t__ MountResult ;
typedef TYPE_1__ Mount ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(Mount *VAR_4, MountResult VAR_5) {
        FUNC_1(VAR_4);

        if (VAR_4->result == VAR_2)
                VAR_4->result = VAR_5;

        FUNC_7(FUNC_0(VAR_4), VAR_4->result == VAR_2, FUNC_4(VAR_4->result));
        FUNC_5(VAR_4, VAR_4->result != VAR_2 ? VAR_1 : VAR_0);

        VAR_4->exec_runtime = FUNC_3(VAR_4->exec_runtime, 1);

        FUNC_6(FUNC_0(VAR_4), &VAR_4->exec_context);

        FUNC_9(FUNC_0(VAR_4), 1);

        FUNC_2(&VAR_4->dynamic_creds);


        FUNC_8(FUNC_0(VAR_4), VAR_3);
}
