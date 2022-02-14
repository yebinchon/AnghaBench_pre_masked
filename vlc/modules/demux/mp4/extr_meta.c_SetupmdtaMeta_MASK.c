
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ i_entry_count; TYPE_1__* p_entries; } ;
struct TYPE_10__ {scalar_t__ i_index; } ;
struct TYPE_9__ {char* psz_value; scalar_t__ i_namespace; } ;
typedef TYPE_2__ MP4_Box_t ;


 scalar_t__ const VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (TYPE_2__*) ;
 scalar_t__ const VAR_1 ;
 int FUNC_2 (int *,int ,char const*,TYPE_2__*) ;
 int FUNC_3 (char,char,char,char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_7( vlc_meta_t *VAR_2, MP4_Box_t *VAR_3, MP4_Box_t *VAR_4 )
{
    if ( !VAR_4 || !FUNC_0(VAR_4) || FUNC_0(VAR_4)->i_entry_count == 0 )
        return;
    if ( !VAR_3->i_index || VAR_3->i_index > FUNC_0(VAR_4)->i_entry_count )
        return;

    const char *VAR_5 = FUNC_0(VAR_4)->p_entries[VAR_3->i_index - 1].psz_value;
    const uint32_t VAR_6 = FUNC_0(VAR_4)->p_entries[VAR_3->i_index - 1].i_namespace;

    if( VAR_6 == VAR_1 )
    {
        if ( !FUNC_6( "com.apple.quicktime.", VAR_5, 20 ) )
            FUNC_2( VAR_2, 0, VAR_5 + 20, VAR_3 );
    }
    else if ( VAR_6 == VAR_0 )
    {

        char *VAR_7 = FUNC_1( VAR_3 );
        if ( VAR_7 )
        {
            if ( FUNC_5(VAR_7) == 4 )
            {
                FUNC_2( VAR_2,
                         FUNC_3(VAR_7[0],VAR_7[1],VAR_7[2],VAR_7[3]),
                         ((void*)0), VAR_3 );
            }
            FUNC_4( VAR_7 );
        }
    }
}
