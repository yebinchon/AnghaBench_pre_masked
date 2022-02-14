
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_18__ {int ptr; } ;
struct TYPE_17__ {unsigned int length; TYPE_5__** values; } ;
struct TYPE_19__ {TYPE_3__ string; TYPE_2__ array; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_4__ u; } ;
typedef TYPE_5__ json_value ;
struct TYPE_16__ {unsigned int count; TYPE_7__* p_recordings; } ;
struct TYPE_21__ {TYPE_1__ recordings; } ;
typedef TYPE_6__ acoustid_result_t ;
struct TYPE_22__ {int psz_artist; int s_musicbrainz_id; int psz_title; } ;
typedef TYPE_7__ acoustid_mb_result_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 TYPE_7__* FUNC_1 (unsigned int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_5__ const*,char*) ;
 TYPE_5__* FUNC_3 (TYPE_5__ const*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (int *,char*,unsigned int,int ,int ,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_4, const json_value *VAR_5, acoustid_result_t *VAR_6 )
{
    if ( !VAR_5 || VAR_5->type != VAR_1 ) return;
    VAR_6->recordings.p_recordings = FUNC_1( VAR_5->u.array.length, sizeof(acoustid_mb_result_t) );
    if ( ! VAR_6->recordings.p_recordings ) return;
    VAR_6->recordings.count = VAR_5->u.array.length;

    for( unsigned int VAR_7=0; VAR_7<VAR_5->u.array.length; VAR_7++ )
    {
        acoustid_mb_result_t *VAR_8 = & VAR_6->recordings.p_recordings[ VAR_7 ];
        const json_value *VAR_9 = VAR_5->u.array.values[ VAR_7 ];
        if ( !VAR_9 || VAR_9->type != VAR_2 )
            break;
        VAR_8->psz_title = FUNC_2( VAR_9, "title" );
        const json_value *VAR_10 = FUNC_3( VAR_9, "id" );
        if ( VAR_10 && VAR_10->type == VAR_3 )
        {
            size_t VAR_11 = FUNC_7( VAR_10->u.string.ptr );
            VAR_11 = FUNC_0( VAR_11, VAR_0 );
            FUNC_4( VAR_8->s_musicbrainz_id, VAR_10->u.string.ptr, VAR_11 );
        }
        FUNC_6( FUNC_3( VAR_9, "artists" ), VAR_8 );
        FUNC_5( VAR_4, "recording %d title %s %36s %s", VAR_7, VAR_8->psz_title,
                 VAR_8->s_musicbrainz_id, VAR_8->psz_artist );
    }
}
