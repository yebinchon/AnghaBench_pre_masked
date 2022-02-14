
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ use_dictionary; } ;
typedef TYPE_2__ config_t ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_13__ {TYPE_1__ dictionary; } ;
typedef TYPE_3__ buffer_state_t ;
struct TYPE_14__ {int fParams; int cParams; } ;
typedef TYPE_4__ ZSTD_parameters ;
typedef int ZSTD_CStream ;
typedef int ZSTD_CDict ;


 int const VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int const) ;
 int * FUNC_1 (int *,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (int *,int const) ;
 size_t FUNC_3 (int *,int *,int ,TYPE_4__ const,int ) ;
 size_t FUNC_4 (int *,int *) ;
 size_t FUNC_5 (int *,int *,int ,int ) ;
 size_t FUNC_6 (int *,int *,int ,int const) ;
 scalar_t__ FUNC_7 (size_t) ;
 int FUNC_8 (TYPE_2__ const*) ;
 TYPE_4__ FUNC_9 (TYPE_2__ const*,int ,int ) ;

__attribute__((used)) static int FUNC_10(
    buffer_state_t* VAR_5,
    ZSTD_CStream* VAR_6,
    config_t const* VAR_7,
    int const VAR_8,
    ZSTD_CDict** VAR_9)
{
    size_t VAR_10;
    if (VAR_8) {
        ZSTD_parameters const VAR_11 = FUNC_9(VAR_7, 0, 0);
        ZSTD_CDict* VAR_12 = ((void*)0);
        if (VAR_9) {
            if (!VAR_7->use_dictionary)
              return 1;
            *VAR_9 = FUNC_1(
                VAR_5->dictionary.data,
                VAR_5->dictionary.size,
                VAR_4,
                VAR_2,
                VAR_11.cParams,
                VAR_3);
            if (!*VAR_9) {
                return 1;
            }
            VAR_10 = FUNC_5(
                VAR_6, *VAR_9, VAR_11.fParams, VAR_1);
        } else {
            VAR_10 = FUNC_3(
                VAR_6,
                VAR_7->use_dictionary ? VAR_5->dictionary.data : ((void*)0),
                VAR_7->use_dictionary ? VAR_5->dictionary.size : 0,
                VAR_11,
                VAR_1);
        }
    } else {
        int const VAR_13 = FUNC_8(VAR_7);
        if (VAR_13 == VAR_0)
            return 1;
        if (VAR_9) {
            if (!VAR_7->use_dictionary)
              return 1;
            *VAR_9 = FUNC_0(
                VAR_5->dictionary.data,
                VAR_5->dictionary.size,
                VAR_13);
            if (!*VAR_9) {
                return 1;
            }
            VAR_10 = FUNC_4(VAR_6, *VAR_9);
        } else if (VAR_7->use_dictionary) {
            VAR_10 = FUNC_6(
                VAR_6,
                VAR_5->dictionary.data,
                VAR_5->dictionary.size,
                VAR_13);
        } else {
            VAR_10 = FUNC_2(VAR_6, VAR_13);
        }
    }
    if (FUNC_7(VAR_10)) {
        return 1;
    }
    return 0;
}
