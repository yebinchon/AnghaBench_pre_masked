
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_17__ {char* psz_coverart_url; scalar_t__ psz_group_id; } ;
typedef TYPE_3__ musicbrainz_release_t ;
struct TYPE_18__ {size_t i_release; TYPE_3__* p_releases; } ;
typedef TYPE_4__ musicbrainz_recording_t ;
struct TYPE_19__ {int root; } ;
typedef TYPE_5__ musicbrainz_lookup_t ;
struct TYPE_15__ {int length; TYPE_6__** values; } ;
struct TYPE_16__ {TYPE_1__ array; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_6__ json_value ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 char* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_3 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_6__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_6__**,unsigned int,scalar_t__) ;
 TYPE_5__* FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static musicbrainz_recording_t *FUNC_8(vlc_object_t *VAR_3,
                                                                       const char *VAR_4)
{
    musicbrainz_recording_t *VAR_5 = FUNC_0(1, sizeof(*VAR_5));
    if(!VAR_5)
        return ((void*)0);

    musicbrainz_lookup_t *VAR_6 = FUNC_6(VAR_3, VAR_4);
    if(!VAR_6)
    {
        FUNC_2(VAR_5);
        return ((void*)0);
    }

    const json_value *VAR_7 = FUNC_3(VAR_6->root, "releases");
    if (VAR_7 && VAR_7->type == VAR_1 &&
        VAR_7->u.array.length)
    {
        VAR_5->p_releases = FUNC_0(VAR_7->u.array.length, sizeof(*VAR_5->p_releases));
        if(VAR_5->p_releases)
        {
            for(unsigned VAR_8=0; VAR_8<VAR_7->u.array.length; VAR_8++)
            {
                json_value *VAR_9 = VAR_7->u.array.values[VAR_8];
                musicbrainz_release_t *VAR_10 = &VAR_5->p_releases[VAR_5->i_release];
                if (!VAR_9 || VAR_9->type != VAR_2 ||
                    !FUNC_4(VAR_9, VAR_10))
                    continue;


                if(VAR_10->psz_group_id && !VAR_10->psz_coverart_url &&
                   FUNC_5(VAR_7->u.array.values,
                                                         VAR_7->u.array.length,
                                                         VAR_10->psz_group_id))
                {
                    char *VAR_11 = FUNC_1(
                                        VAR_0,
                                        VAR_10->psz_group_id );
                    if(VAR_11)
                        VAR_10->psz_coverart_url = VAR_11;
                }

                VAR_5->i_release++;
            }
        }
    }

    FUNC_7(VAR_6);

    return VAR_5;
}
