
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ use_dictionary; } ;
typedef TYPE_5__ config_t ;
struct TYPE_9__ {int * data; } ;
struct TYPE_12__ {int * data; } ;
struct TYPE_11__ {int * data; } ;
struct TYPE_10__ {scalar_t__ size; } ;
struct TYPE_14__ {TYPE_1__ dictionary; TYPE_4__ decompressed; TYPE_3__ compressed; TYPE_2__ inputs; } ;
typedef TYPE_6__ buffer_state_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(
    buffer_state_t const* VAR_1,
    config_t const* VAR_2) {
    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_0, "buffer_state_t is NULL\n");
        return 1;
    }
    if (VAR_1->inputs.size == 0 || VAR_1->compressed.data == ((void*)0) ||
        VAR_1->decompressed.data == ((void*)0)) {
        FUNC_0(VAR_0, "buffer state allocation failure\n");
        return 1;
    }
    if (VAR_2->use_dictionary && VAR_1->dictionary.data == ((void*)0)) {
        FUNC_0(VAR_0, "dictionary loading failed\n");
        return 1;
    }
    return 0;
}
