
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * path; } ;
struct TYPE_5__ {int * path; } ;
struct TYPE_7__ {TYPE_2__ dict; TYPE_1__ data; } ;
typedef TYPE_3__ data_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(data_t* const* VAR_0) {
    FUNC_0(VAR_0 != ((void*)0));
    for (; *VAR_0 != ((void*)0); ++VAR_0) {
        data_t* VAR_1 = *VAR_0;
        FUNC_1((void*)VAR_1->data.path);
        FUNC_1((void*)VAR_1->dict.path);
        VAR_1->data.path = ((void*)0);
        VAR_1->dict.path = ((void*)0);
    }
}
