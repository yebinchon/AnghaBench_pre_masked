
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_1__ JsonVariant ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint16_t FUNC_2(JsonVariant *VAR_0) {

        VAR_0 = FUNC_0(VAR_0);
        if (!VAR_0)
                return 0;

        if (!FUNC_1(VAR_0))
                return 0;

        return VAR_0->depth;
}
