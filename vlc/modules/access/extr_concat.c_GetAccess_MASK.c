
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_12__ {TYPE_1__* next; TYPE_2__* access; } ;
typedef TYPE_3__ access_sys_t ;
struct TYPE_10__ {struct TYPE_10__* next; int mrl; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static stream_t *FUNC_4(stream_t *VAR_0)
{
    access_sys_t *VAR_1 = VAR_0->p_sys;
    stream_t *VAR_2 = VAR_1->access;

    if (VAR_2 != ((void*)0))
    {
        if (!FUNC_3(VAR_2))
            return VAR_2;

        FUNC_2(VAR_2);
        VAR_1->access = ((void*)0);
    }

    if (VAR_1->next == ((void*)0))
        return ((void*)0);

    VAR_2 = FUNC_1(FUNC_0(VAR_0), VAR_1->next->mrl);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_1->access = VAR_2;
    VAR_1->next = VAR_1->next->next;
    return VAR_2;
}
