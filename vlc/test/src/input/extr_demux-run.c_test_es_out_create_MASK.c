
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * cbs; } ;
struct test_es_out_t {int * parent; TYPE_1__ out; int * ids; } ;
typedef TYPE_1__ es_out_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct test_es_out_t* FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static es_out_t *FUNC_2(vlc_object_t *VAR_2)
{
    struct test_es_out_t *VAR_3 = FUNC_1(sizeof (*VAR_3));
    if (VAR_3 == ((void*)0))
    {
        FUNC_0(VAR_1, "Error: cannot create ES output.\n");
        return ((void*)0);
    }

    VAR_3->ids = ((void*)0);

    es_out_t *VAR_4 = &VAR_3->out;
    VAR_4->cbs = &VAR_0;



    (void) VAR_2;

    return VAR_4;
}
