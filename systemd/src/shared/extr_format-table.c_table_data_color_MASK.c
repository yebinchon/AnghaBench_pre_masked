
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* color; scalar_t__ type; } ;
typedef TYPE_1__ TableData ;


 scalar_t__ VAR_0 ;
 char const* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static const char* FUNC_2(TableData *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->color)
                return VAR_1->color;


        if (VAR_1->type == VAR_0)
                return FUNC_0();

        return ((void*)0);
}
