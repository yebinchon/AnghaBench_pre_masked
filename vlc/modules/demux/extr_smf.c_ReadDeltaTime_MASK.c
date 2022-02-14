
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ offset; scalar_t__ length; int next; } ;
typedef TYPE_1__ mtrk_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (stream_t *VAR_1, mtrk_t *VAR_2)
{
    int32_t VAR_3;

    FUNC_1 (FUNC_2 (VAR_1) == VAR_2->start + VAR_2->offset);

    if (VAR_2->offset >= VAR_2->length)
    {

        VAR_2->next = VAR_0;
        return 0;
    }

    VAR_3 = FUNC_0 (VAR_1);
    if (VAR_3 < 0)
        return -1;

    VAR_2->next += VAR_3;
    VAR_2->offset = FUNC_2 (VAR_1) - VAR_2->start;
    return 0;
}
