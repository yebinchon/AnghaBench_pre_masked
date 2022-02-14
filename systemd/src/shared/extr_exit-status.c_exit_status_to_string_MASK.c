
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int class; char const* name; } ;
typedef int ExitStatusClass ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const char* FUNC_1(int VAR_1, ExitStatusClass VAR_2) {
        if (VAR_1 < 0 || (size_t) VAR_1 >= FUNC_0(VAR_0))
                return ((void*)0);
        return VAR_2 & VAR_0[VAR_1].class ? VAR_0[VAR_1].name : ((void*)0);
}
