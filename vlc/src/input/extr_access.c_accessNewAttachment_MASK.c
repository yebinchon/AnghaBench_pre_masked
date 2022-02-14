
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {scalar_t__ psz_url; scalar_t__ psz_location; } ;
typedef TYPE_1__ stream_t ;
typedef int input_thread_t ;
typedef int input_attachment_t ;


 int * FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static stream_t *FUNC_5(vlc_object_t *VAR_0,
                                     input_thread_t *VAR_1, const char *VAR_2)
{
    if (!VAR_1)
        return ((void*)0);

    input_attachment_t *VAR_3 = FUNC_0(VAR_1, VAR_2 + 13);
    if (!VAR_3)
        return ((void*)0);
    stream_t *VAR_4 = FUNC_3(VAR_0, VAR_3);
    if (!VAR_4)
    {
        FUNC_2(VAR_3);
        return ((void*)0);
    }
    VAR_4->psz_url = FUNC_1(VAR_2);
    if (!VAR_4->psz_url)
    {
        FUNC_4(VAR_4);
        return ((void*)0);
    }
    VAR_4->psz_location = VAR_4->psz_url + 13;
    return VAR_4;
}
