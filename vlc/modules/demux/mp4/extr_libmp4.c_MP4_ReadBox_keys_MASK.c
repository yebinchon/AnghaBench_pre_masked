
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int stream_t ;
struct TYPE_9__ {scalar_t__* psz_value; int i_namespace; } ;
struct TYPE_7__ {TYPE_1__* p_keys; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
struct TYPE_6__ {int i_entry_count; TYPE_4__* p_entries; } ;
typedef TYPE_3__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (int,int) ;
 int VAR_2 ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,int,int) ;
 int FUNC_7 (int *,char*,int,scalar_t__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8( stream_t *VAR_4, MP4_Box_t *VAR_5 )
{
    FUNC_2( VAR_0, VAR_1 );

    if ( VAR_2 < 8 )
        FUNC_3( 0 );

    uint32_t VAR_6;
    FUNC_0( VAR_6 );
    if ( VAR_6 != 0 )
        FUNC_3( 0 );

    FUNC_0( VAR_6 );
    VAR_5->data.p_keys->p_entries = FUNC_4( VAR_6, sizeof(*VAR_5->data.p_keys->p_entries) );
    if ( !VAR_5->data.p_keys->p_entries )
        FUNC_3( 0 );
    VAR_5->data.p_keys->i_entry_count = VAR_6;

    uint32_t VAR_7=0;
    for( ; VAR_7 < VAR_6; VAR_7++ )
    {
        if ( VAR_2 < 8 )
            break;
        uint32_t VAR_8;
        FUNC_0( VAR_8 );
        if ( (VAR_8 < 8) || (VAR_8 - 4 > VAR_2) )
            break;
        FUNC_1( VAR_5->data.p_keys->p_entries[VAR_7].i_namespace );
        VAR_8 -= 8;
        VAR_5->data.p_keys->p_entries[VAR_7].psz_value = FUNC_5( VAR_8 + 1 );
        if ( !VAR_5->data.p_keys->p_entries[VAR_7].psz_value )
            break;
        FUNC_6( VAR_5->data.p_keys->p_entries[VAR_7].psz_value, VAR_3, VAR_8 );
        VAR_5->data.p_keys->p_entries[VAR_7].psz_value[VAR_8] = 0;
        VAR_3 += VAR_8;
        VAR_2 -= VAR_8;




    }
    if ( VAR_7 < VAR_6 )
        VAR_5->data.p_keys->i_entry_count = VAR_7;

    FUNC_3( 1 );
}
