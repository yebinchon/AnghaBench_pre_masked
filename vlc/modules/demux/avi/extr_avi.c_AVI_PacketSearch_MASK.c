
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {scalar_t__ i_track; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {scalar_t__ i_stream; scalar_t__ i_cat; int i_fourcc; } ;
typedef TYPE_3__ avi_packet_t ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;
    avi_packet_t VAR_6;
    unsigned short VAR_7 = 0;

    for( ;; )
    {
        if( FUNC_2( VAR_4->s, ((void*)0), 1 ) != 1 )
        {
            return VAR_2;
        }
        FUNC_0( VAR_4, &VAR_6 );
        if( VAR_6.i_stream < VAR_5->i_track &&
            ( VAR_6.i_cat == VAR_0 || VAR_6.i_cat == VAR_1 ) )
        {
            return VAR_3;
        }
        switch( VAR_6.i_fourcc )
        {
            case 131:
            case 130:
            case 129:
            case 128:
                return VAR_3;
        }

        if( !++VAR_7 )
            FUNC_1( VAR_4, "trying to resync..." );
    }
}
