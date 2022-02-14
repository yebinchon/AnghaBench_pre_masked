
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {char* psz_name; int out; TYPE_3__* p_sys; int pf_control; int pf_demux; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {int i_width; int i_height; } ;
struct TYPE_11__ {TYPE_1__ video; } ;
struct TYPE_10__ {TYPE_6__ fmt; int p_es; int pts; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char,char,char,char) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 TYPE_3__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_7 ( vlc_object_t *VAR_7 )
{
    demux_t *VAR_8 = (demux_t*)VAR_7;
    demux_sys_t *VAR_9;

    VAR_8->p_sys = ((void*)0);


    if( *VAR_8->psz_name == '\0' )
        return VAR_3;

    FUNC_6( VAR_8, "Init Stat demux" );

    VAR_8->pf_demux = VAR_0;
    VAR_8->pf_control = VAR_1;

    VAR_8->p_sys = VAR_9 = FUNC_5( sizeof( demux_sys_t ) );
    if( !VAR_8->p_sys )
        return VAR_4;

    FUNC_1( &VAR_9->pts, 1, 1 );
    FUNC_2( &VAR_9->pts, VAR_6 );

    FUNC_3( &VAR_9->fmt, VAR_2, FUNC_0('s','t','a','t') );
    VAR_9->fmt.video.i_width = 720;
    VAR_9->fmt.video.i_height= 480;

    VAR_9->p_es = FUNC_4( VAR_8->out, &VAR_9->fmt );

    return VAR_5;
}
