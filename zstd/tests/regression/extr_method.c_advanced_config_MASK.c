
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int value; int param; } ;
typedef TYPE_3__ param_value_t ;
struct TYPE_9__ {size_t size; TYPE_3__* data; } ;
struct TYPE_11__ {scalar_t__ use_dictionary; TYPE_2__ param_values; } ;
typedef TYPE_4__ config_t ;
struct TYPE_8__ {int size; int data; } ;
struct TYPE_12__ {TYPE_1__ dictionary; } ;
typedef TYPE_5__ buffer_state_t ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(
    ZSTD_CCtx* VAR_1,
    buffer_state_t* VAR_2,
    config_t const* VAR_3) {
    FUNC_1(VAR_1, VAR_0);
    for (size_t VAR_4 = 0; VAR_4 < VAR_3->param_values.size; ++VAR_4) {
        param_value_t const VAR_5 = VAR_3->param_values.data[VAR_4];
        if (FUNC_3(FUNC_2(VAR_1, VAR_5.param, VAR_5.value))) {
            return 1;
        }
    }
    if (VAR_3->use_dictionary) {
        if (FUNC_3(FUNC_0(
                VAR_1, VAR_2->dictionary.data, VAR_2->dictionary.size))) {
            return 1;
        }
    }
    return 0;
}
