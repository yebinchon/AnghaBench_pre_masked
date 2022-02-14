
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_9__ {int * p_httpd_file; scalar_t__ p_httpd_host; } ;
typedef TYPE_3__ sout_stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__,char*,char*,int *,int *,int ,void*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3( sout_stream_t *VAR_3, const vlc_url_t *VAR_4)
{
    sout_stream_sys_t *VAR_5 = VAR_3->p_sys;

    VAR_5->p_httpd_host = FUNC_2( FUNC_0(VAR_3) );
    if( VAR_5->p_httpd_host )
    {
        VAR_5->p_httpd_file = FUNC_1( VAR_5->p_httpd_host,
                                             VAR_4->psz_path ? VAR_4->psz_path : "/",
                                             "application/sdp",
                                             ((void*)0), ((void*)0),
                                             VAR_0, (void*)VAR_5 );
    }
    if( VAR_5->p_httpd_file == ((void*)0) )
    {
        return VAR_1;
    }
    return VAR_2;
}
