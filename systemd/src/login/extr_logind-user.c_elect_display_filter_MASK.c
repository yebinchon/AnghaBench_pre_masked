
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stopping; scalar_t__ started; int class; } ;
typedef TYPE_1__ Session ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(Session *VAR_2) {

        FUNC_1(VAR_2);

        return FUNC_0(VAR_2->class, VAR_1, VAR_0) && VAR_2->started && !VAR_2->stopping;
}
