
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ data_type_t ;
struct TYPE_5__ {int path; } ;
typedef TYPE_1__ data_resource_t ;
struct TYPE_6__ {void* error; int * file; int xxhash64; } ;
typedef TYPE_2__ curl_data_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,int ,char*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 void* FUNC_5 (char*,char*) ;

__attribute__((used)) static curl_data_t FUNC_6(
    data_resource_t const* VAR_4,
    data_type_t VAR_5) {
    curl_data_t VAR_6 = {};

    FUNC_1(&VAR_6.xxhash64, 0);

    FUNC_2(FUNC_0(VAR_3));

    if (VAR_5 == VAR_1) {

        char* VAR_7 = FUNC_3("zstd -dqfo '", VAR_4->path, "'");
        if (VAR_7 == ((void*)0)) {
            VAR_6.error = VAR_0;
            return VAR_6;
        }
        VAR_6.file = FUNC_5(VAR_7, "w");
        FUNC_4(VAR_7);
    } else {

        char* VAR_8 = FUNC_3("zstd -dc | tar -x -C '", VAR_3, "'");
        if (VAR_8 == ((void*)0)) {
            VAR_6.error = VAR_0;
            return VAR_6;
        }
        VAR_6.file = FUNC_5(VAR_8, "w");
        FUNC_4(VAR_8);
    }
    if (VAR_6.file == ((void*)0)) {
        VAR_6.error = VAR_2;
    }

    return VAR_6;
}
