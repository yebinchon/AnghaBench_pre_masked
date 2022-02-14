
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct rtp_pt_t {scalar_t__ number; } ;
struct TYPE_5__ {void** opaque; } ;
typedef TYPE_1__ rtp_source_t ;
struct TYPE_6__ {unsigned int ptc; struct rtp_pt_t const* ptv; } ;
typedef TYPE_2__ rtp_session_t ;
typedef int block_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static const struct rtp_pt_t *
FUNC_1 (const rtp_session_t *VAR_0, rtp_source_t *VAR_1,
                const block_t *VAR_2, void **VAR_3)
{
    uint8_t VAR_4 = FUNC_0 (VAR_2);

    for (unsigned VAR_5 = 0; VAR_5 < VAR_0->ptc; VAR_5++)
    {
        if (VAR_0->ptv[VAR_5].number == VAR_4)
        {
            if (VAR_3 != ((void*)0))
                *VAR_3 = VAR_1->opaque[VAR_5];
            return &VAR_0->ptv[VAR_5];
        }
    }
    return ((void*)0);
}
