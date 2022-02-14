
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ capacity; scalar_t__ size; int * data; } ;
typedef TYPE_1__ data_buffer_t ;
typedef int buffer ;
typedef int FILE ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (int *,int,scalar_t__,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__ const) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

data_buffer_t FUNC_8(char const* VAR_2) {
    data_buffer_t VAR_3 = {};

    uint64_t const VAR_4 = FUNC_0(VAR_2);
    if (VAR_4 == VAR_0) {
        FUNC_3(VAR_1, "unknown size for %s\n", VAR_2);
        return VAR_3;
    }

    VAR_3.data = (uint8_t*)FUNC_6(VAR_4);
    if (VAR_3.data == ((void*)0)) {
        FUNC_3(VAR_1, "malloc failed\n");
        return VAR_3;
    }
    VAR_3.capacity = VAR_4;

    FILE* VAR_5 = FUNC_2(VAR_2, "rb");
    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_1, "file null\n");
        goto err;
    }
    VAR_3.size = FUNC_4(VAR_3.data, 1, VAR_3.capacity, VAR_5);
    FUNC_1(VAR_5);
    if (VAR_3.size != VAR_3.capacity) {
        FUNC_3(VAR_1, "read %zu != %zu\n", VAR_3.size, VAR_3.capacity);
        goto err;
    }

    return VAR_3;
err:
    FUNC_5(VAR_3.data);
    FUNC_7(&VAR_3, 0, sizeof(VAR_3));
    return VAR_3;
}
