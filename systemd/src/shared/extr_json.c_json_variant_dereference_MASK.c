
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* reference; int is_reference; } ;
typedef TYPE_1__ JsonVariant ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static JsonVariant *FUNC_1(JsonVariant *VAR_0) {



        if (!VAR_0)
                return ((void*)0);

        if (!FUNC_0(VAR_0))
                return VAR_0;

        if (!VAR_0->is_reference)
                return VAR_0;

        return FUNC_1(VAR_0->reference);
}
