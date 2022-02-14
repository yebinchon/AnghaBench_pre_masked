
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_2__ {int eof; int offset; int peek; } ;
typedef TYPE_1__ stream_priv_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,void*,size_t) ;
 scalar_t__ FUNC_2 (int *,void*,size_t) ;

ssize_t FUNC_3(stream_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    stream_priv_t *VAR_3 = (stream_priv_t *)VAR_0;
    ssize_t VAR_4;

    VAR_4 = FUNC_1(&VAR_3->peek, VAR_1, VAR_2);
    if (VAR_4 >= 0)
    {
        VAR_3->offset += VAR_4;
        FUNC_0(VAR_4 <= (ssize_t)VAR_2);
        return VAR_4;
    }

    VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
    if (VAR_4 > 0)
        VAR_3->offset += VAR_4;
    if (VAR_4 == 0)
        VAR_3->eof = VAR_2 != 0;
    FUNC_0(VAR_4 <= (ssize_t)VAR_2);
    return VAR_4;
}
