
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * source; int identifier; } ;
struct stream_extractor_private {int * wrapper; int module; void* object; TYPE_1__ directory; int * pf_clean; int pf_init; TYPE_1__ extractor; } ;
typedef int stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (void*,char const*,char const*,int) ;
 scalar_t__ FUNC_2 (struct stream_extractor_private*,int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct stream_extractor_private*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int) ;
 struct stream_extractor_private* FUNC_6 (int ,int,char const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8( stream_t** VAR_6, char const* VAR_7,
    char const* VAR_8 )
{
    const bool VAR_9 = VAR_7 != ((void*)0);
    char const* VAR_10 = VAR_9 ? "stream_extractor"
                                       : "stream_directory";

    struct stream_extractor_private* VAR_11 = FUNC_6(
        FUNC_7(*VAR_6), sizeof( *VAR_11 ), VAR_10 );

    if( FUNC_5( !VAR_11 ) )
        return VAR_1;

    if( VAR_9 )
    {
        VAR_11->object = FUNC_0( &VAR_11->extractor );

        VAR_11->pf_init = VAR_5;
        VAR_11->pf_clean = VAR_3;

        VAR_11->extractor.source = *VAR_6;
        VAR_11->extractor.identifier = FUNC_4( VAR_7 );

        if( FUNC_5( !VAR_11->extractor.identifier ) )
            goto error;
    }
    else
    {
        VAR_11->object = FUNC_0( &VAR_11->directory );

        VAR_11->pf_init = VAR_4;
        VAR_11->pf_clean = ((void*)0);

        VAR_11->directory.source = *VAR_6;
    }

    VAR_11->module = FUNC_1( VAR_11->object, VAR_10, VAR_8, 1 );

    if( !VAR_11->module || FUNC_2( VAR_11, *VAR_6 ) )
        goto error;

    *VAR_6 = VAR_11->wrapper;
    return VAR_2;

error:
    FUNC_3( VAR_11 );
    return VAR_0;
}
