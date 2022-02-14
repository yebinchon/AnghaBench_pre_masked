
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_11__ {TYPE_1__* access; int first; int next; } ;
typedef TYPE_2__ access_sys_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(stream_t *VAR_3, uint64_t VAR_4)
{
    access_sys_t *VAR_5 = VAR_3->p_sys;

    if (VAR_5->access != ((void*)0))
    {
        FUNC_2(VAR_5->access);
        VAR_5->access = ((void*)0);
    }

    VAR_5->next = VAR_5->first;

    for (uint64_t VAR_6 = 0;;)
    {
        stream_t *VAR_7 = FUNC_0(VAR_3);
        if (VAR_7 == ((void*)0))
            break;

        bool VAR_8;
        FUNC_1(VAR_7, VAR_0, &VAR_8);
        if (!VAR_8)
            break;

        uint64_t VAR_9;

        if (FUNC_3(VAR_7, &VAR_9))
            break;
        if (VAR_4 - VAR_6 < VAR_9)
        {
            if (FUNC_4(VAR_7, VAR_4 - VAR_6))
                break;
            return VAR_2;
        }

        VAR_6 += VAR_9;
        FUNC_2(VAR_7);
        VAR_5->access = ((void*)0);
    }

    return VAR_1;
}
