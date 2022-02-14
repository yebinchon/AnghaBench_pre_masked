
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * path; } ;
struct TYPE_7__ {int * path; } ;
struct TYPE_8__ {TYPE_1__ dict; TYPE_2__ data; int name; } ;
typedef TYPE_3__ data_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*) ;
 int * FUNC_2 (char const*,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__* const) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(data_t* const* VAR_1, char const* VAR_2) {
    size_t const VAR_3 = FUNC_4(VAR_2);
    FUNC_0(VAR_1 != ((void*)0));
    for (; *VAR_1 != ((void*)0); ++VAR_1) {
        data_t* const VAR_4 = *VAR_1;
        VAR_4->data.path = FUNC_2(VAR_2, "/", VAR_4->name);
        if (VAR_4->data.path == ((void*)0))
            return VAR_0;
        if (FUNC_3(VAR_4)) {
            VAR_4->dict.path = FUNC_1(VAR_4->data.path, ".dict");
            if (VAR_4->dict.path == ((void*)0))
                return VAR_0;
        }
    }
    return 0;
}
