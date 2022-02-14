
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_port; int * psz_host; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_tls_t ;
typedef int vlc_object_t ;
struct TYPE_7__ {int * pf_seek; int pf_control; int * pf_block; int pf_read; int * p_sys; int psz_location; int psz_url; } ;
typedef TYPE_2__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(vlc_object_t *VAR_4)
{
    stream_t *VAR_5 = (stream_t *)VAR_4;
    vlc_tls_t *VAR_6;
    vlc_url_t VAR_7;

    if (FUNC_2(&VAR_7, VAR_5->psz_url)
     || VAR_7.psz_host == ((void*)0) || VAR_7.i_port == 0)
    {
        FUNC_0(VAR_5, "invalid location: %s", VAR_5->psz_location);
        FUNC_1(&VAR_7);
        return VAR_2;
    }

    VAR_6 = FUNC_3(VAR_4, VAR_7.psz_host, VAR_7.i_port);
    FUNC_1(&VAR_7);
    if (VAR_6 == ((void*)0))
        return VAR_2;

    VAR_5->p_sys = VAR_6;
    VAR_5->pf_read = VAR_1;
    VAR_5->pf_block = ((void*)0);
    VAR_5->pf_control = VAR_0;
    VAR_5->pf_seek = ((void*)0);
    return VAR_3;
}
