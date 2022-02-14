
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int i_port; int psz_host; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_tls_t ;
struct vlc_memstream {scalar_t__ length; int ptr; } ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_10__ {int * stream; TYPE_1__ url; TYPE_1__ proxy; scalar_t__ b_proxy; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (struct vlc_memstream*) ;
 int FUNC_5 (struct vlc_memstream*,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_3,
                           struct vlc_memstream *restrict VAR_4 )
{
    access_sys_t *VAR_5 = VAR_3->p_sys;
    const vlc_url_t *VAR_6 = VAR_5->b_proxy ? &VAR_5->proxy : &VAR_5->url;


    FUNC_5( VAR_4, "Connection: Close\r\n" );

    FUNC_5( VAR_4, "\r\n" );

    if( FUNC_4( VAR_4 ) )
        return VAR_1;

    vlc_tls_t *VAR_7 = FUNC_7( FUNC_0(VAR_3),
                                             VAR_6->psz_host, VAR_6->i_port );
    if( VAR_7 == ((void*)0) )
    {
        FUNC_1( VAR_4->ptr );
        return VAR_0;
    }

    FUNC_2( VAR_3, "sending request:\n%s", VAR_4->ptr );

    ssize_t VAR_8 = FUNC_8( VAR_7, VAR_4->ptr, VAR_4->length );
    FUNC_1( VAR_4->ptr );
    if( VAR_8 < (ssize_t)VAR_4->length )
    {
        FUNC_3( VAR_3, "failed to send request" );
        FUNC_6( VAR_7 );
        VAR_4 = ((void*)0);
    }

    VAR_5->stream = VAR_7;
    return (VAR_7 != ((void*)0)) ? VAR_2 : VAR_0;
}
