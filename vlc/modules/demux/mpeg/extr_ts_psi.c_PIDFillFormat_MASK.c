
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ts_transport_type_t ;
struct TYPE_8__ {int p_sections_proc; TYPE_1__* p_es; } ;
typedef TYPE_2__ ts_stream_t ;
struct TYPE_9__ {void* i_original_fourcc; } ;
typedef TYPE_3__ es_format_t ;
typedef int demux_t ;
struct TYPE_7__ {TYPE_3__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* FUNC_0 (char,char,char,char) ;
 int FUNC_1 (TYPE_3__*,int ,void*) ;
 int FUNC_2 (int *,int *,int,int,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( demux_t *VAR_19, ts_stream_t *VAR_20,
                           int VAR_21, ts_transport_type_t *VAR_22 )
{
    es_format_t *VAR_23 = &VAR_20->p_es->fmt;
    switch( VAR_21 )
    {
    case 0x01:
        FUNC_1( VAR_23, VAR_5, VAR_16 );
        VAR_23->i_original_fourcc = VAR_12;
        break;
    case 0x02:
    case 0x80:
        FUNC_1( VAR_23, VAR_5, VAR_16 );
        break;
    case 0x03:
    case 0x04:
        FUNC_1( VAR_23, VAR_0, VAR_15 );
        break;
    case 0x0f:
        FUNC_1( VAR_23, VAR_0, VAR_13 );
        VAR_23->i_original_fourcc = FUNC_0('A','D','T','S');
        break;
    case 0x10:
        FUNC_1( VAR_23, VAR_5, VAR_14 );
        break;
    case 0x11:
        FUNC_1( VAR_23, VAR_0, VAR_13 );
        VAR_23->i_original_fourcc = FUNC_0('L','A','T','M');
        break;
    case 0x1B:
        FUNC_1( VAR_23, VAR_5, VAR_10 );
        break;
    case 0x1C:

        FUNC_1( VAR_23, VAR_0, VAR_13 );
        break;
    case 0x24:
        FUNC_1( VAR_23, VAR_5, VAR_11 );
        break;
    case 0x42:
        FUNC_1( VAR_23, VAR_5, VAR_7 );
        break;

    case 0x81:
        FUNC_1( VAR_23, VAR_0, VAR_6 );
        break;
    case 0x82:
        FUNC_1( VAR_23, VAR_2, VAR_17 );
        *VAR_22 = VAR_3;
        FUNC_2( VAR_19, &VAR_20->p_sections_proc, 0xC6, 0x00,
                                   VAR_1, VAR_20 );
        break;
    case 0x84:
        FUNC_1( VAR_23, VAR_0, VAR_18 );
        break;
    case 0x85:
        FUNC_1( VAR_23, VAR_0, VAR_8 );
        break;
    case 0x87:
        FUNC_1( VAR_23, VAR_0, VAR_9 );
        break;
    case 0x8a:
        FUNC_1( VAR_23, VAR_0, VAR_8 );
        break;
    case 0x91:
        FUNC_1( VAR_23, VAR_0, FUNC_0( 'a', '5', '2', 'b' ) );
        break;
    case 0x92:
        FUNC_1( VAR_23, VAR_2, FUNC_0( 's', 'p', 'u', 'b' ) );
        break;

    case 0x94:
        FUNC_1( VAR_23, VAR_0, FUNC_0( 's', 'd', 'd', 'b' ) );
        break;

    case 0xa0:
        FUNC_1( VAR_23, VAR_4, 0 );
        break;

    case 0x06:
    case 0x12:
    case 0xEA:
    default:
        FUNC_1( VAR_23, VAR_4, 0 );
        break;
    }
}
