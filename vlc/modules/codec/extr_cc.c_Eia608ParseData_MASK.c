
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {scalar_t__ mode; } ;
typedef TYPE_1__ eia608_t ;
typedef int eia608_status_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int,int,int ) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static eia608_status_t FUNC_10( eia608_t *VAR_3, uint8_t VAR_4, uint8_t VAR_5 )
{
    eia608_status_t VAR_6 = VAR_2;

    if( VAR_4 >= 0x18 && VAR_4 <= 0x1f )
        VAR_4 -= 8;


    switch( VAR_4 )
    {
    case 0x11:
        do { if( VAR_5 >= 0x20 && VAR_5 <= 0x2f ) VAR_6 = FUNC_7( VAR_3, VAR_5 ); } while(0);
        do { if( VAR_5 >= 0x30 && VAR_5 <= 0x3f ) VAR_6 = FUNC_3( VAR_3, VAR_5 ); } while(0);
        break;
    case 0x12: case 0x13:
        do { if( VAR_5 >= 0x20 && VAR_5 <= 0x3f ) VAR_6 = FUNC_4( VAR_3, VAR_4, VAR_5 ); } while(0);
        break;
    case 0x14: case 0x15:
        do { if( VAR_5 >= 0x20 && VAR_5 <= 0x2f ) VAR_6 = FUNC_1( VAR_3, VAR_5 ); } while(0);
        break;
    case 0x17:
        do { if( VAR_5 >= 0x21 && VAR_5 <= 0x23 ) VAR_6 = FUNC_2( VAR_3, VAR_5 ); } while(0);
        do { if( VAR_5 >= 0x2e && VAR_5 <= 0x2f ) VAR_6 = FUNC_7( VAR_3, VAR_5 ); } while(0);
        break;
    }
    if( VAR_4 == 0x10 )
        do { if( VAR_5 >= 0x40 && VAR_5 <= 0x5f ) VAR_6 = FUNC_5( VAR_3, VAR_4, VAR_5 ); } while(0);
    else if( VAR_4 >= 0x11 && VAR_4 <= 0x17 )
        do { if( VAR_5 >= 0x40 && VAR_5 <= 0x7f ) VAR_6 = FUNC_5( VAR_3, VAR_4, VAR_5 ); } while(0);

    if( VAR_4 >= 0x20 )
    {
        FUNC_0(FUNC_9("\033[0;33m%c", VAR_4));
        VAR_6 = FUNC_6( VAR_3, VAR_4 );
        if( VAR_5 >= 0x20 )
        {
            FUNC_0(FUNC_9("%c", VAR_5));
            VAR_6 |= FUNC_6( VAR_3, VAR_5 );
        }
        FUNC_0(FUNC_9("\033[0m"));
    }


    if( VAR_3->mode == VAR_0 && VAR_6 == VAR_1 )
        VAR_6 = VAR_2;

    return VAR_6;
}
