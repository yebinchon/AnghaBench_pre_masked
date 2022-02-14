
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {TYPE_3__* p_sys; int pf_control; int pf_demux; int out; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_9__ {int i_width; int i_height; int i_visible_width; int i_visible_height; } ;
struct TYPE_12__ {TYPE_1__ video; } ;
struct TYPE_11__ {int pts; int * p_es; TYPE_5__ fmt; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_5__*,int ,int ) ;
 int * FUNC_5 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8( vlc_object_t * VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;



    if( !FUNC_3( VAR_10, ".cdg" ) && !FUNC_2( VAR_10, "cdg" ) )
        return VAR_5;
    demux_sys_t *VAR_11 = FUNC_7( VAR_9, sizeof (*VAR_11) );
    if( FUNC_6(VAR_11 == ((void*)0)) )
        return VAR_6;

    FUNC_4( &VAR_11->fmt, VAR_3, VAR_4 );
    VAR_11->fmt.video.i_width = 300-2*6;
    VAR_11->fmt.video.i_height = 216-2*12 ;
    VAR_11->fmt.video.i_visible_width = VAR_11->fmt.video.i_width;
    VAR_11->fmt.video.i_visible_height = VAR_11->fmt.video.i_height;

    VAR_11->p_es = FUNC_5( VAR_10->out, &VAR_11->fmt );
    if( FUNC_6(VAR_11->p_es == ((void*)0)) )
        return VAR_6;


    FUNC_0( &VAR_11->pts, VAR_0, 1 );
    FUNC_1( &VAR_11->pts, VAR_8 );

    VAR_10->pf_demux = VAR_2;
    VAR_10->pf_control = VAR_1;
    VAR_10->p_sys = VAR_11;
    return VAR_7;
}
