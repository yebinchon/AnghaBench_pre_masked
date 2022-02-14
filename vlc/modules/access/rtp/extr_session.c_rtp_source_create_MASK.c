
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_8__ {int ref_ntp; int * opaque; int * blocks; void* last_seq; void* bad_seq; void* max_seq; scalar_t__ ref_rtp; scalar_t__ jitter; int ssrc; } ;
typedef TYPE_2__ rtp_source_t ;
struct TYPE_9__ {int ptc; TYPE_1__* ptv; } ;
typedef TYPE_3__ rtp_session_t ;
typedef int demux_t ;
struct TYPE_7__ {int (* init ) (int *) ;} ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static rtp_source_t *
FUNC_4 (demux_t *VAR_0, const rtp_session_t *VAR_1,
                   uint32_t VAR_2, uint16_t VAR_3)
{
    rtp_source_t *VAR_4;

    VAR_4 = FUNC_1 (sizeof (*VAR_4) + (sizeof (void *) * VAR_1->ptc));
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    VAR_4->ssrc = VAR_2;
    VAR_4->jitter = 0;
    VAR_4->ref_rtp = 0;
    VAR_4->ref_ntp = FUNC_0 (1) << 62;
    VAR_4->max_seq = VAR_4->bad_seq = VAR_3;
    VAR_4->last_seq = VAR_3 - 1;
    VAR_4->blocks = ((void*)0);


    for (unsigned VAR_5 = 0; VAR_5 < VAR_1->ptc; VAR_5++)
        VAR_4->opaque[VAR_5] = VAR_1->ptv[VAR_5].init (VAR_0);

    FUNC_2 (VAR_0, "added RTP source (%08x)", VAR_2);
    return VAR_4;
}
