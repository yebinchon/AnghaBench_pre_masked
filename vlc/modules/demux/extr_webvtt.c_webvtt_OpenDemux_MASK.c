
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {size_t i_extra; int p_extra; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_12__ {int out; TYPE_3__* p_sys; int pf_control; int pf_demux; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int * es; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,size_t*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int * FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;

int FUNC_8 ( vlc_object_t *VAR_7 )
{
    demux_t *VAR_8 = (demux_t*)VAR_7;
    demux_sys_t *VAR_9;

    int VAR_10 = FUNC_1( VAR_8 );
    if( VAR_10 != VAR_6 )
        return VAR_10;

    VAR_8->pf_demux = VAR_1;
    VAR_8->pf_control = VAR_0;

    VAR_8->p_sys = VAR_9 = FUNC_3( 1, sizeof( demux_sys_t ) );
    if( VAR_9 == ((void*)0) )
        return VAR_5;

    if( FUNC_2( VAR_8 ) != VAR_6 )
    {
        FUNC_7( VAR_7 );
        return VAR_4;
    }

    es_format_t VAR_11;
    FUNC_5( &VAR_11, VAR_2, VAR_3 );
    size_t VAR_12 = 0;
    FUNC_0( VAR_9, &VAR_11.p_extra, &VAR_12 );
    VAR_11.i_extra = VAR_12;
    VAR_9->es = FUNC_6( VAR_8->out, &VAR_11 );
    FUNC_4( &VAR_11 );
    if( VAR_9->es == ((void*)0) )
    {
        FUNC_7( VAR_7 );
        return VAR_4;
    }

    return VAR_6;
}
