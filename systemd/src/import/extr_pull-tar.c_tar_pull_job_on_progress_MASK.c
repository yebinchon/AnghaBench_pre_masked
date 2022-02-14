
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* userdata; } ;
typedef TYPE_1__ TarPull ;
typedef TYPE_1__ PullJob ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(PullJob *VAR_1) {
        TarPull *VAR_2;

        FUNC_0(VAR_1);
        FUNC_0(VAR_1->userdata);

        VAR_2 = VAR_1->userdata;

        FUNC_1(VAR_2, VAR_0);
}
