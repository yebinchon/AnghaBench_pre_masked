
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int i_codec; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_13__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_14__ {int updates; scalar_t__ p_meta; } ;
typedef TYPE_3__ demux_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int const*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int const*,int,int) ;
__attribute__((used)) static void FUNC_3( demux_t *VAR_1, es_format_t *VAR_2, const uint8_t *VAR_3, int VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_1->p_sys;

    switch( VAR_2->i_codec )
    {

    case 129:
    case 130:
    case 136:
        FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4, 1+6 );
        break;
    case 132:
        FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4, 8 );
        break;
    case 131:
        FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4, 0 );
        break;
    case 128:
        FUNC_0( VAR_1, VAR_2, VAR_3, VAR_4 );
        break;

    case 133:

        FUNC_2( VAR_1, VAR_2, VAR_3, VAR_4, 1+7+1 );
        break;


    case 134:
        FUNC_1( VAR_1, VAR_2, VAR_3, VAR_4 );
        break;


    case 135:
    default:
        break;
    }
    if( VAR_5->p_meta )
        VAR_5->updates |= VAR_0;
}
