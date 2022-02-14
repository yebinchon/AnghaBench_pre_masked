
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vod_t ;
struct TYPE_10__ {int i_es; int lock; TYPE_2__** es; } ;
typedef TYPE_1__ vod_media_t ;
struct TYPE_13__ {scalar_t__ i_cat; scalar_t__ i_codec; scalar_t__ i_id; } ;
struct TYPE_11__ {TYPE_5__ fmt; scalar_t__ p_rtsp_url; struct TYPE_11__* psz_fmtp; } ;
typedef TYPE_2__ media_es_t ;
struct TYPE_12__ {scalar_t__ i_cat; scalar_t__ i_codec; scalar_t__ i_id; } ;
typedef TYPE_3__ es_format_t ;


 int FUNC_0 (int,TYPE_2__**,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( vod_t *VAR_0, vod_media_t *VAR_1, es_format_t *VAR_2)
{
    media_es_t *VAR_3 = ((void*)0);


    for( int VAR_4 = 0; VAR_4 < VAR_1->i_es; VAR_4++ )
    {
        if( VAR_1->es[VAR_4]->fmt.i_cat == VAR_2->i_cat &&
            VAR_1->es[VAR_4]->fmt.i_codec == VAR_2->i_codec &&
            VAR_1->es[VAR_4]->fmt.i_id == VAR_2->i_id )
        {
            VAR_3 = VAR_1->es[VAR_4];
        }
    }
    if( !VAR_3 ) return;

    FUNC_4( VAR_0, "  - Removing ES %4.4s", (char *)&VAR_2->i_codec );

    FUNC_5( &VAR_1->lock );
    FUNC_0( VAR_1->i_es, VAR_1->es, VAR_3 );
    FUNC_6( &VAR_1->lock );

    FUNC_2( VAR_3->psz_fmtp );

    if( VAR_3->p_rtsp_url ) FUNC_3( VAR_3->p_rtsp_url );
    FUNC_1( &VAR_3->fmt );
    FUNC_2( VAR_3 );
}
