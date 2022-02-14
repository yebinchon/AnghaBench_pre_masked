
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ line; scalar_t__ column; scalar_t__ source; } ;
typedef TYPE_1__ JsonVariant ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static JsonVariant *FUNC_2(JsonVariant *VAR_0) {




        if (!VAR_0)
                return ((void*)0);

        if (!FUNC_0(VAR_0))
                return VAR_0;

        if (VAR_0->source || VAR_0->line > 0 || VAR_0->column > 0)
                return VAR_0;

        return FUNC_1(VAR_0);
}
