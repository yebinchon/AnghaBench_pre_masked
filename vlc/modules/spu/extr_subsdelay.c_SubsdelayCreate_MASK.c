
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {int p_cfg; int pf_sub_filter; TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int heap; void* i_min_start_stop_interval; void* i_min_stop_start_interval; void* i_min_stops_interval; void* i_min_alpha; void* i_overlap; int f_factor; void* i_mode; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*,int ,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 void* FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7( vlc_object_t *VAR_13 )
{
    filter_t *VAR_14 = (filter_t *) VAR_13;
    filter_sys_t *VAR_15;


    VAR_15 = (filter_sys_t*) FUNC_3( sizeof(filter_sys_t) );

    if( !VAR_15 )
    {
        return VAR_10;
    }



    VAR_15->i_mode = FUNC_6( VAR_14, VAR_5 );
    FUNC_4( VAR_14, VAR_5, VAR_8, VAR_15 );

    VAR_15->f_factor = FUNC_5( VAR_14, VAR_0 );
    FUNC_4( VAR_14, VAR_0, VAR_8, VAR_15 );

    VAR_15->i_overlap = FUNC_6( VAR_14, VAR_6 );
    FUNC_4( VAR_14, VAR_6, VAR_8, VAR_15 );

    VAR_15->i_min_alpha = FUNC_6( VAR_14, VAR_1 );
    FUNC_4( VAR_14, VAR_1, VAR_8, VAR_15 );

    VAR_15->i_min_stops_interval
            = FUNC_1( FUNC_6( VAR_14, VAR_3 ) );
    FUNC_4( VAR_14, VAR_3, VAR_8, VAR_15 );

    VAR_15->i_min_stop_start_interval
            = FUNC_1( FUNC_6( VAR_14, VAR_4 ) );
    FUNC_4( VAR_14, VAR_4, VAR_8, VAR_15 );

    VAR_15->i_min_start_stop_interval
            = FUNC_1( FUNC_6( VAR_14, VAR_2 ) );
    FUNC_4( VAR_14, VAR_2, VAR_8, VAR_15 );

    VAR_14->p_sys = VAR_15;
    VAR_14->pf_sub_filter = VAR_9;

    FUNC_2( VAR_14, VAR_7, VAR_12, VAR_14->p_cfg );

    FUNC_0( &VAR_15->heap );

    return VAR_11;
}
