
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int i_row; int i_column; } ;
struct TYPE_9__ {void* mode; int font; int color; TYPE_1__ cursor; int i_screen; int i_row_rollup; } ;
typedef TYPE_2__ eia608_t ;
typedef int eia608_status_t ;
typedef void* eia608_mode_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static eia608_status_t FUNC_6( eia608_t *VAR_12, uint8_t VAR_13 )
{
    eia608_status_t VAR_14 = VAR_11;
    eia608_mode_t VAR_15;

    switch( VAR_13 )
    {
    case 0x20:
        FUNC_0(FUNC_5("[RCL]"));
        VAR_12->mode = VAR_3;
        break;
    case 0x21:
        FUNC_0(FUNC_5("[BS]"));
        FUNC_1( VAR_12 );
        VAR_14 = VAR_10;
        break;
    case 0x22:
    case 0x23:
        FUNC_0(FUNC_5("[ALARM %d]", VAR_13 - 0x22));
        break;
    case 0x24:
        FUNC_0(FUNC_5("[DER]"));
        FUNC_3( VAR_12 );
        break;
    case 0x25:
    case 0x26:
    case 0x27:
        FUNC_0(FUNC_5("[RU%d]", VAR_13 - 0x23));
        if( VAR_12->mode == VAR_3 || VAR_12->mode == VAR_2 )
        {
            FUNC_2( VAR_12, 1 );
            FUNC_2( VAR_12, 0 );
            VAR_14 = VAR_10 | VAR_8;
        }

        if( VAR_13 == 0x25 )
            VAR_15 = VAR_4;
        else if( VAR_13 == 0x26 )
            VAR_15 = VAR_5;
        else
            VAR_15 = VAR_6;

        if ( VAR_15 != VAR_12->mode )
        {
            VAR_12->mode = VAR_15;
            VAR_12->cursor.i_column = 0;
            VAR_12->cursor.i_row = VAR_12->i_row_rollup;
        }
        break;
    case 0x28:
        FUNC_0(FUNC_5("[FON]"));

        break;
    case 0x29:
        FUNC_0(FUNC_5("[RDC]"));
        VAR_12->mode = VAR_2;
        break;
    case 0x2a:
        FUNC_0(FUNC_5("[TR]"));

        break;

    case 0x2b:
        FUNC_0(FUNC_5("[RTD]"));
        VAR_12->mode = VAR_7;
        break;

    case 0x2c:
        FUNC_0(FUNC_5("[EDM]"));
        FUNC_2( VAR_12, 1 );
        VAR_14 = VAR_10 | VAR_8;
        break;
    case 0x2d:
        FUNC_0(FUNC_5("[CR]"));
        FUNC_4(VAR_12);
        VAR_14 = VAR_10;
        break;
    case 0x2e:
        FUNC_0(FUNC_5("[ENM]"));
        FUNC_2( VAR_12, 0 );
        break;
    case 0x2f:
        FUNC_0(FUNC_5("[EOC]"));
        if( VAR_12->mode != VAR_2 )
            VAR_12->i_screen = 1 - VAR_12->i_screen;
        VAR_12->mode = VAR_3;
        VAR_12->cursor.i_column = 0;
        VAR_12->cursor.i_row = 0;
        VAR_12->color = VAR_0;
        VAR_12->font = VAR_1;
        VAR_14 = VAR_10 | VAR_9;
        break;
    }
    return VAR_14;
}
