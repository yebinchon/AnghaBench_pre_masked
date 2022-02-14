
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int es_format_t ;
struct TYPE_6__ {int out; TYPE_2__* p_sys; int pf_control; int pf_demux; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {int * es; int p_streamparser; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int *) ;

int FUNC_7 ( vlc_object_t *VAR_9 )
{
    demux_t *VAR_10 = (demux_t*)VAR_9;
    demux_sys_t *VAR_11;

    int VAR_12 = FUNC_0( VAR_10 );
    if( VAR_12 != VAR_8 )
        return VAR_12;

    VAR_10->pf_demux = VAR_1;
    VAR_10->pf_control = VAR_0;

    VAR_10->p_sys = VAR_11 = FUNC_1( 1, sizeof( demux_sys_t ) );
    if( VAR_11 == ((void*)0) )
        return VAR_7;

    VAR_11->p_streamparser = FUNC_6( VAR_10,
                                          VAR_4,
                                          VAR_3,
                                          ((void*)0) );
    if( !VAR_11->p_streamparser )
    {
        FUNC_5( VAR_9 );
        return VAR_6;
    }

    es_format_t VAR_13;
    FUNC_3( &VAR_13, VAR_2, VAR_5 );
    VAR_11->es = FUNC_4( VAR_10->out, &VAR_13 );
    FUNC_2( &VAR_13 );
    if( VAR_11->es == ((void*)0) )
    {
        FUNC_5( VAR_9 );
        return VAR_6;
    }

    return VAR_8;
}
