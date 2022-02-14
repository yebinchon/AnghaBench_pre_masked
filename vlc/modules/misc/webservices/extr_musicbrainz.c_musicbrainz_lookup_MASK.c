
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int root; } ;
typedef TYPE_1__ musicbrainz_lookup_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,void*) ;
 void* FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static musicbrainz_lookup_t * FUNC_5(vlc_object_t *VAR_0, const char *VAR_1)
{
    FUNC_3(VAR_0, "Querying MB for %s", VAR_1);
    void *VAR_2 = FUNC_2(VAR_0, VAR_1);
    if(!VAR_2)
        return ((void*)0);

    musicbrainz_lookup_t *VAR_3 = FUNC_4();
    if(VAR_3)
    {
        VAR_3->root = FUNC_1(VAR_0, VAR_2);
        if (!VAR_3->root)
            FUNC_3(VAR_0, "No results");
    }
    FUNC_0(VAR_2);
    return VAR_3;
}
