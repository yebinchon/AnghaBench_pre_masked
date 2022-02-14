
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xcb_keysym_t ;
typedef int xcb_keycode_t ;
typedef int uint_fast32_t ;
typedef int p_x11_modifier_ignored ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_10__ {int i_map; TYPE_3__* p_map; int p_symbols; int p_connection; } ;
typedef TYPE_2__ intf_sys_t ;
struct TYPE_11__ {int* p_keys; unsigned int i_modifier; int i_vlc; } ;
typedef TYPE_3__ hotkey_mapping_t ;


 unsigned int FUNC_0 (int ,int ,int const) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;



 int FUNC_3 (int*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,int) ;
 char** FUNC_5 (TYPE_1__*) ;
 size_t FUNC_6 (TYPE_1__*,char const* const,int,int**) ;
 int* FUNC_7 (int ,int ) ;

__attribute__((used)) static bool FUNC_8( intf_thread_t *VAR_1 )
{
    static const xcb_keysym_t VAR_2[] = {
        0,
        129,
        128,
        130,
    };

    intf_sys_t *VAR_3 = VAR_1->p_sys;
    bool VAR_4 = 0;

    VAR_3->i_map = 0;
    VAR_3->p_map = ((void*)0);


    for( const char* const* VAR_5 = FUNC_5( VAR_1 );
         *VAR_5 != ((void*)0); VAR_5++ )
    {
        uint_fast32_t *VAR_6;
        size_t VAR_7 = FUNC_6( VAR_1, *VAR_5, 1,
                                                     &VAR_6 );

        for( size_t VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8 )
        {
            uint_fast32_t VAR_9 = VAR_6[VAR_8];
            const unsigned VAR_10 = FUNC_2( VAR_3->p_connection,
                    VAR_3->p_symbols, VAR_9 & VAR_0 );

            const size_t VAR_11 = sizeof(VAR_2) /
                    sizeof(*VAR_2);
            for( unsigned int VAR_12 = 0; VAR_12 < VAR_11; VAR_12++ )
            {
                const unsigned VAR_13 = FUNC_0( VAR_3->p_connection,
                        VAR_3->p_symbols, VAR_2[VAR_12] );
                if( VAR_12 != 0 && VAR_13 == 0)
                    continue;

                xcb_keycode_t *VAR_14 = FUNC_7(
                    VAR_3->p_symbols, FUNC_1( VAR_9 & ~VAR_0 ) );

                if( VAR_14 == ((void*)0) )
                    break;

                hotkey_mapping_t *VAR_15 = FUNC_4( VAR_3->p_map,
                                  sizeof(*VAR_3->p_map) * (VAR_3->i_map+1) );
                if( !VAR_15 )
                {
                    FUNC_3( VAR_14 );
                    break;
                }
                VAR_3->p_map = VAR_15;
                VAR_15 += VAR_3->i_map;
                VAR_3->i_map++;

                VAR_15->p_keys = VAR_14;
                VAR_15->i_modifier = VAR_10|VAR_13;
                VAR_15->i_vlc = VAR_9;
                VAR_4 = 1;
            }
        }
        FUNC_3( VAR_6 );
    }
    return VAR_4;
}
