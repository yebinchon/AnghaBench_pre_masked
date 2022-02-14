
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int result_t ;
struct TYPE_13__ {size_t total_size; } ;
typedef TYPE_4__ result_data_t ;
typedef int out ;
struct TYPE_14__ {TYPE_3__* data; } ;
typedef TYPE_5__ method_state_t ;
struct TYPE_15__ {char* cli_args; scalar_t__ no_pledged_src_size; scalar_t__ use_dictionary; } ;
typedef TYPE_6__ config_t ;
typedef int cmd ;
struct TYPE_11__ {char* path; } ;
struct TYPE_10__ {int path; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_2__ dict; TYPE_1__ data; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*) ;
 size_t FUNC_2 (char*,int,int,int *) ;
 char* VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (TYPE_4__ const) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_7 (char*,int,char*,char*,char*,char*,char*,char*,char*,int ) ;
 int VAR_5 ;

__attribute__((used)) static result_t FUNC_8(method_state_t* VAR_6, config_t const* VAR_7) {
    if (VAR_7->cli_args == ((void*)0))
        return FUNC_6(VAR_3);


    if (VAR_6->data->type == VAR_0 && VAR_7->no_pledged_src_size)
        return FUNC_6(VAR_3);

    if (VAR_1 == ((void*)0))
        return FUNC_6(VAR_4);


    char VAR_8[1024];
    size_t const VAR_9 = FUNC_7(
        VAR_8,
        sizeof(VAR_8),
        "'%s' -cqr %s %s%s%s %s '%s'",
        VAR_1,
        VAR_7->cli_args,
        VAR_7->use_dictionary ? "-D '" : "",
        VAR_7->use_dictionary ? VAR_6->data->dict.path : "",
        VAR_7->use_dictionary ? "'" : "",
        VAR_7->no_pledged_src_size ? "<" : "",
        VAR_6->data->data.path);
    if (VAR_9 >= sizeof(VAR_8)) {
        FUNC_1(VAR_5, "command too large: %s\n", VAR_8);
        return FUNC_6(VAR_4);
    }
    FILE* VAR_10 = FUNC_4(VAR_8, "r");
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_5, "failed to popen command: %s\n", VAR_8);
        return FUNC_6(VAR_4);
    }

    char VAR_11[4096];
    size_t VAR_12 = 0;
    while (1) {
        size_t const VAR_13 = FUNC_2(VAR_11, 1, sizeof(VAR_11), VAR_10);
        VAR_12 += VAR_13;
        if (VAR_13 != sizeof(VAR_11))
            break;
    }
    if (FUNC_0(VAR_10) || FUNC_3(VAR_10) != 0) {
        FUNC_1(VAR_5, "zstd failed with command: %s\n", VAR_8);
        return FUNC_6(VAR_2);
    }

    result_data_t const VAR_14 = {.total_size = VAR_12};
    return FUNC_5(VAR_14);
}
