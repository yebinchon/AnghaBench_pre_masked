
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_7__ {scalar_t__ i_es; int psz_destination; scalar_t__* psz_sdp; int * p_session; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2( sout_stream_t *VAR_1 )
{
    sout_stream_sys_t *VAR_2 = VAR_1->p_sys;


    if( VAR_2->p_session != ((void*)0))
    {
        FUNC_1( VAR_1, VAR_2->p_session);
        VAR_2->p_session = ((void*)0);
    }

    if( VAR_2->i_es > 0 && VAR_2->psz_sdp && *VAR_2->psz_sdp )
        VAR_2->p_session = FUNC_0( VAR_1,
                                                     VAR_2->psz_sdp,
                                                     VAR_2->psz_destination );

    return VAR_0;
}
