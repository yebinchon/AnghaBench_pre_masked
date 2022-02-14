
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* userdata; } ;
typedef TYPE_1__ Varlink ;


 int FUNC_0 (TYPE_1__*,int *) ;

void* FUNC_1(Varlink *VAR_0, void *VAR_1) {
        void *VAR_2;

        FUNC_0(VAR_0, ((void*)0));

        VAR_2 = VAR_0->userdata;
        VAR_0->userdata = VAR_1;

        return VAR_2;
}
