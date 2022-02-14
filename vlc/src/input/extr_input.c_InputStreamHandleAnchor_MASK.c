
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int psz_url; } ;
typedef TYPE_1__ stream_t ;
typedef int input_thread_t ;
struct TYPE_8__ {int i_seekpoint_end; int i_seekpoint_start; int i_title_end; int i_title_start; } ;
typedef TYPE_2__ input_source_t ;


 int FUNC_0 (char const*,int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__**,char const*,char const**) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int *) ;

__attribute__((used)) static int
FUNC_5( input_thread_t *VAR_2, input_source_t *VAR_3,
                         stream_t **VAR_4, char const *VAR_5 )
{
    char const* VAR_6;
    if( FUNC_3( VAR_4, VAR_5, &VAR_6 ) )
    {
        FUNC_2( VAR_2, "unable to attach stream-extractors for %s",
            (*VAR_4)->psz_url );

        return VAR_0;
    }

    if( FUNC_4( VAR_4, ((void*)0) ) )
        FUNC_1( VAR_2, "attachment of directory-extractor failed for %s",
            (*VAR_4)->psz_url );

    FUNC_0( VAR_6 ? VAR_6 : "",
        &VAR_3->i_title_start, &VAR_3->i_title_end,
        &VAR_3->i_seekpoint_start, &VAR_3->i_seekpoint_end );

    return VAR_1;
}
