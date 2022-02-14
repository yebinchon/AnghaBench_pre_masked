
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* description; int event; int by_uid; int methods; } ;
typedef TYPE_1__ VarlinkServer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static VarlinkServer* FUNC_6(VarlinkServer *VAR_0) {
        char *VAR_1;

        if (!VAR_0)
                return ((void*)0);

        FUNC_5(VAR_0);

        while ((VAR_1 = FUNC_2(VAR_0->methods)))
                FUNC_0(VAR_1);

        FUNC_1(VAR_0->methods);
        FUNC_1(VAR_0->by_uid);

        FUNC_4(VAR_0->event);

        FUNC_0(VAR_0->description);

        return FUNC_3(VAR_0);
}
