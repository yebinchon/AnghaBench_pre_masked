
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int xxhash64; } ;
struct TYPE_5__ {int xxhash64; } ;
struct TYPE_7__ {int type; TYPE_2__ dict; TYPE_1__ data; int name; } ;
typedef TYPE_3__ data_t ;
typedef int XXH64_state_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static uint64_t FUNC_6(data_t const* const* VAR_0) {
    XXH64_state_t VAR_1;

    FUNC_1(&VAR_1, 0);
    FUNC_3(VAR_0 != ((void*)0));
    for (; *VAR_0 != ((void*)0); ++VAR_0) {
        data_t const* VAR_2 = *VAR_0;


        FUNC_2(&VAR_1, VAR_2->name, FUNC_4(VAR_2->name));
        FUNC_5(&VAR_1, VAR_2->data.xxhash64);
        FUNC_5(&VAR_1, VAR_2->dict.xxhash64);
        FUNC_5(&VAR_1, VAR_2->type);
    }
    return FUNC_0(&VAR_1);
}
