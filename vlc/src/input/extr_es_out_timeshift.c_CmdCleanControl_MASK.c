
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int p_fmt; } ;
struct TYPE_12__ {int p_evt; } ;
struct TYPE_11__ {int p_epg; } ;
struct TYPE_10__ {int p_meta; } ;
struct TYPE_14__ {TYPE_4__ es_fmt; TYPE_3__ int_epg_evt; TYPE_2__ int_epg; TYPE_1__ int_meta; } ;
struct TYPE_15__ {int i_query; TYPE_5__ u; } ;
struct TYPE_16__ {TYPE_6__ control; } ;
struct TYPE_17__ {TYPE_7__ u; } ;
typedef TYPE_8__ ts_cmd_t ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( ts_cmd_t *VAR_0 )
{
    switch( VAR_0->u.control.i_query )
    {
    case 129:
    case 128:
        if( VAR_0->u.control.u.int_meta.p_meta )
            FUNC_4( VAR_0->u.control.u.int_meta.p_meta );
        break;
    case 131:
        if( VAR_0->u.control.u.int_epg.p_epg )
            FUNC_2( VAR_0->u.control.u.int_epg.p_epg );
        break;
    case 130:
        if( VAR_0->u.control.u.int_epg_evt.p_evt )
            FUNC_3( VAR_0->u.control.u.int_epg_evt.p_evt );
        break;
    case 132:
        if( VAR_0->u.control.u.es_fmt.p_fmt )
        {
            FUNC_0( VAR_0->u.control.u.es_fmt.p_fmt );
            FUNC_1( VAR_0->u.control.u.es_fmt.p_fmt );
        }
        break;
    }
}
