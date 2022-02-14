
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int description; int server; } ;
typedef TYPE_1__ Varlink ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static Varlink* FUNC_4(Varlink *VAR_0) {
        if (!VAR_0)
                return ((void*)0);



        FUNC_0(!VAR_0->server);

        FUNC_3(VAR_0);

        FUNC_1(VAR_0->description);
        return FUNC_2(VAR_0);
}
