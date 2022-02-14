
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* stream; int last_seen; } ;
typedef TYPE_1__ rtsp_session_t ;
struct TYPE_5__ {scalar_t__ timeout; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2( rtsp_session_t *VAR_0 )
{
    if (VAR_0->stream->timeout == 0)
        return;

    VAR_0->last_seen = FUNC_1();
    FUNC_0(VAR_0->stream);
}
