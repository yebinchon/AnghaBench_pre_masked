
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fmt; struct TYPE_4__* psz_language_code; struct TYPE_4__* psz_language; struct TYPE_4__* psz_title; int rc; } ;
typedef TYPE_1__ es_out_id_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(es_out_id_t *VAR_0)
{
    if (FUNC_2(&VAR_0->rc))
    {
        FUNC_1(VAR_0->psz_title);
        FUNC_1(VAR_0->psz_language);
        FUNC_1(VAR_0->psz_language_code);
        FUNC_0(&VAR_0->fmt);
        FUNC_1(VAR_0);
    }
}
