
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_meta_t ;
typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int * meta; } ;
typedef TYPE_2__ demux_sys_t ;
typedef int buffer ;
typedef int avi_chunk_list_t ;
struct TYPE_9__ {int i_flags; } ;
typedef TYPE_3__ avi_chunk_avih_t ;
struct TYPE_10__ {int p_type; int p_str; } ;
typedef TYPE_4__ avi_chunk_STRING_t ;
 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,scalar_t__ const,int ,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char*,char*,char*) ;
 int FUNC_4 (int *,int ,char*) ;






 int * FUNC_5 () ;

 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,char*) ;





__attribute__((used)) static void FUNC_8( demux_t *VAR_5,
                          avi_chunk_list_t *VAR_6, avi_chunk_avih_t *VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_5->p_sys;

    vlc_meta_t *VAR_9 = VAR_8->meta = FUNC_5();
    if( !VAR_9 )
        return;

    char VAR_10[200];
    FUNC_3( VAR_10, sizeof(VAR_10), "%s%s%s%s",
              VAR_7->i_flags&VAR_1 ? " HAS_INDEX" : "",
              VAR_7->i_flags&VAR_3 ? " MUST_USE_INDEX" : "",
              VAR_7->i_flags&VAR_2 ? " IS_INTERLEAVED" : "",
              VAR_7->i_flags&VAR_4 ? " TRUST_CKTYPE" : "" );
    FUNC_7( VAR_9, VAR_10 );

    avi_chunk_list_t *VAR_11 = FUNC_0( VAR_6, VAR_0, 0, 1 );
    if( !VAR_11 )
        return;

    static const struct {
        vlc_fourcc_t i_id;
        int i_type;
    } VAR_12[] = {
        { 179, 138 },
        { 176, 135 },
        { 173, 137 },
        { 163, 134 },
        { 157, 131 },
        { 172, 136 },
        { 160, 133 },
        { 151, 132 },
        { 140, 128 },
        { 152, 130 },
        { 164, 129 },
        { 0, -1 }
    };
    for( int VAR_13 = 0; VAR_12[VAR_13].i_id != 0; VAR_13++ )
    {
        avi_chunk_STRING_t *VAR_14 = FUNC_0( VAR_11, VAR_12[VAR_13].i_id, 0, 0 );
        if( !VAR_14 || !VAR_14->p_str )
            continue;
        char *VAR_15 = FUNC_1( VAR_14->p_str );
        if( !VAR_15 )
            continue;

        if( *VAR_15 )
            FUNC_6( VAR_9, VAR_12[VAR_13].i_type, VAR_15 );
        FUNC_2( VAR_15 );
    }

    static const vlc_fourcc_t VAR_16[] = {
        180, 177, 171, 170, 168,
        165, 162, 161, 159, 155,
        154, 150, 149, 147, 145,
        144, 141, 146, 169, 148,
        139, 153, 175, 156, 166,
        178, 158, 143, 167, 174,
        142, 0,
    };

    for( int VAR_17 = 0; VAR_16[VAR_17] != 0; VAR_17++ )
    {
        avi_chunk_STRING_t *VAR_18 = FUNC_0( VAR_11, VAR_16[VAR_17], 0, 0 );
        if( !VAR_18 || !VAR_18->p_str )
            continue;
        char *VAR_19 = FUNC_1( VAR_18->p_str );
        if( !VAR_19 )
            continue;

        if( *VAR_19 )
            FUNC_4( VAR_9, VAR_18->p_type, VAR_19 );
        FUNC_2( VAR_19 );
    }
}
