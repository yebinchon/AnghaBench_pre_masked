
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_memstream {int dummy; } ;
struct TYPE_6__ {int i_data; int p_data; } ;
struct TYPE_5__ {int i_data; int p_data; } ;
struct TYPE_7__ {TYPE_2__ styles_headers; TYPE_1__ regions_headers; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (struct vlc_memstream*,void**,size_t*) ;
 scalar_t__ FUNC_1 (struct vlc_memstream*) ;
 int FUNC_2 (struct vlc_memstream*,char*) ;
 int FUNC_3 (struct vlc_memstream*,int ,int ) ;

__attribute__((used)) static void FUNC_4( demux_sys_t *VAR_0, void **VAR_1, size_t *VAR_2 )
{
    struct vlc_memstream VAR_3;
    if( FUNC_1( &VAR_3 ) )
        return;
    FUNC_2( &VAR_3, "WEBVTT\n\n");
    FUNC_3( &VAR_3, VAR_0->regions_headers.p_data,
                                     VAR_0->regions_headers.i_data );
    FUNC_3( &VAR_3, VAR_0->styles_headers.p_data,
                                     VAR_0->styles_headers.i_data );
    FUNC_0( &VAR_3, VAR_1, VAR_2 );
}
