
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int p_session; int i_fd; int psz_path; int i_tid; int psz_share; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,char const*,char const*) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_6, const char *VAR_7,
                        const char *VAR_8, const char *VAR_9)
{
    access_sys_t *VAR_10 = VAR_6->p_sys;
    int VAR_11;

    FUNC_3( VAR_10->p_session, VAR_9,
                           VAR_7, VAR_8 );
    if( FUNC_2( VAR_10->p_session ) != VAR_1 )
        return VAR_2;

    if( !VAR_10->psz_share )
        return 0;


    VAR_11 = FUNC_4( VAR_10->p_session, VAR_10->psz_share, &VAR_10->i_tid );
    if( VAR_11 != VAR_1 )
        goto error;


    VAR_11 = FUNC_0( VAR_10->p_session, VAR_10->i_tid, VAR_10->psz_path,
                     VAR_5, &VAR_10->i_fd );
    if( VAR_11 != VAR_1 )
        goto error;

    return 0;

error:
    return VAR_11 == VAR_0 && FUNC_1( VAR_10->p_session )
        == VAR_4 ? VAR_2 : VAR_3;
}
