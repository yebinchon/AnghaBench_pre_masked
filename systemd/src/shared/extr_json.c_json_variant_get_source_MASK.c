
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int line; unsigned int column; TYPE_1__* source; } ;
struct TYPE_6__ {char* name; } ;
typedef TYPE_2__ JsonVariant ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

int FUNC_2(JsonVariant *VAR_1, const char **VAR_2, unsigned *VAR_3, unsigned *VAR_4) {
        FUNC_0(VAR_1, -VAR_0);

        if (VAR_2)
                *VAR_2 = FUNC_1(VAR_1) && VAR_1->source ? VAR_1->source->name : ((void*)0);

        if (VAR_3)
                *VAR_3 = FUNC_1(VAR_1) ? VAR_1->line : 0;

        if (VAR_4)
                *VAR_4 = FUNC_1(VAR_1) ? VAR_1->column : 0;

        return 0;
}
