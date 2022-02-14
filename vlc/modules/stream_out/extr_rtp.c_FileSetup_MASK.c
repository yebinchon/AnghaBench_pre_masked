
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_6__ {int * psz_sdp; int psz_sdp_file; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( sout_stream_t *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = VAR_3->p_sys;
    FILE *VAR_5;

    if( VAR_4->psz_sdp == ((void*)0) )
        return VAR_0;

    if( ( VAR_5 = FUNC_3( VAR_4->psz_sdp_file, "wt" ) ) == ((void*)0) )
    {
        FUNC_2( VAR_3, "cannot open file '%s' (%s)",
                 VAR_4->psz_sdp_file, FUNC_4(VAR_2) );
        return VAR_0;
    }

    FUNC_1( VAR_4->psz_sdp, VAR_5 );
    FUNC_0( VAR_5 );

    return VAR_1;
}
