
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int invalidated; scalar_t__ ptr; int prot; int size; } ;
typedef TYPE_1__ Window ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_3(Window *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->invalidated)
                return;






        FUNC_1(FUNC_2(VAR_3->ptr, VAR_3->size, VAR_3->prot, VAR_2|VAR_0|VAR_1, -1, 0) == VAR_3->ptr);
        VAR_3->invalidated = 1;
}
