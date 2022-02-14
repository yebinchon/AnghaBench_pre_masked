
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {char AsciiChar; int UnicodeChar; } ;
struct TYPE_7__ {scalar_t__ wVirtualKeyCode; TYPE_1__ uChar; int bKeyDown; } ;
struct TYPE_8__ {TYPE_2__ KeyEvent; } ;
struct TYPE_9__ {scalar_t__ EventType; TYPE_3__ Event; } ;
typedef TYPE_4__ INPUT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;


 char* FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*,int,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char,int ) ;
 int VAR_6 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,char*) ;

__attribute__((used)) static bool FUNC_10( HANDLE *VAR_7, unsigned char *VAR_8, int *VAR_9 )
{
    INPUT_RECORD VAR_10;
    DWORD VAR_11;




    while( *VAR_9 < VAR_1 - 4 &&
           FUNC_1( VAR_7, &VAR_10, 1, &VAR_11 ) )
    {
        if( VAR_10.EventType != VAR_0 ||
            !VAR_10.Event.KeyEvent.bKeyDown ||
            VAR_10.Event.KeyEvent.wVirtualKeyCode == VAR_5 ||
            VAR_10.Event.KeyEvent.wVirtualKeyCode == VAR_3||
            VAR_10.Event.KeyEvent.wVirtualKeyCode == VAR_4 ||
            VAR_10.Event.KeyEvent.wVirtualKeyCode == VAR_2 )
        {

            continue;
        }
        if( VAR_10.Event.KeyEvent.uChar.AsciiChar == '\n' ||
            VAR_10.Event.KeyEvent.uChar.AsciiChar == '\r' )
        {
            FUNC_6( '\n', VAR_6 );
            VAR_8[*VAR_9] = '\n';
            (*VAR_9)++;
            break;
        }
        switch( VAR_10.Event.KeyEvent.uChar.AsciiChar )
        {
        case '\b':
            if ( *VAR_9 == 0 )
                break;
            if ( *VAR_9 > 1 && (VAR_8[*VAR_9 - 1] & 0xC0) == 0x80 )
            {



                (*VAR_9) -= 2;
                unsigned int VAR_12 = 1;
                while( *VAR_9 > 0 && (VAR_8[*VAR_9] & 0xC0) == 0x80 )
                {
                    (*VAR_9)--;
                    VAR_12++;
                }
                FUNC_2( FUNC_3( (unsigned char)~(VAR_8[*VAR_9]) ) == VAR_12 + 1 );

            }
            else
                (*VAR_9)--;
            VAR_8[*VAR_9] = 0;

            FUNC_4( "\b \b", VAR_6 );
            break;
        default:
        {
            WCHAR VAR_13[] = { VAR_10.Event.KeyEvent.uChar.UnicodeChar, L'\0' };
            char* VAR_14 = FUNC_0( VAR_13 );
            int VAR_15 = FUNC_8(VAR_14);
            if ( *VAR_9 + VAR_15 > VAR_1 )
            {
                VAR_8[ *VAR_9 ] = 0;
                return 0;
            }
            FUNC_7( (char*)&VAR_8[*VAR_9], VAR_14 );
            FUNC_9( VAR_6, "%s", VAR_14 );
            FUNC_5(VAR_14);
            *VAR_9 += VAR_15;
        }
        }
    }

    VAR_8[ *VAR_9 ] = 0;
    return 1;
}
