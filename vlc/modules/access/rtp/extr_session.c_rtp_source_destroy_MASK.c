
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int blocks; int * opaque; int ssrc; } ;
typedef TYPE_2__ rtp_source_t ;
struct TYPE_9__ {unsigned int ptc; TYPE_1__* ptv; } ;
typedef TYPE_3__ rtp_session_t ;
typedef int demux_t ;
struct TYPE_7__ {int (* destroy ) (int *,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (demux_t *VAR_0, const rtp_session_t *VAR_1,
                    rtp_source_t *VAR_2)
{
    FUNC_2 (VAR_0, "removing RTP source (%08x)", VAR_2->ssrc);

    for (unsigned VAR_3 = 0; VAR_3 < VAR_1->ptc; VAR_3++)
        VAR_1->ptv[VAR_3].destroy (VAR_0, VAR_2->opaque[VAR_3]);
    FUNC_0 (VAR_2->blocks);
    FUNC_1 (VAR_2);
}
