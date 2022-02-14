
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ucred_acquired; int ucred; int fd; } ;
typedef TYPE_1__ Varlink ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(Varlink *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);

        if (VAR_0->ucred_acquired)
                return 0;

        VAR_1 = FUNC_1(VAR_0->fd, &VAR_0->ucred);
        if (VAR_1 < 0)
                return VAR_1;

        VAR_0->ucred_acquired = 1;
        return 0;
}
