
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * psz_filepath; } ;
typedef TYPE_1__ stream_t ;
typedef int DIR ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;

int FUNC_2 (vlc_object_t *VAR_1)
{
    stream_t *VAR_2 = (stream_t *)VAR_1;

    if (VAR_2->psz_filepath == ((void*)0))
        return VAR_0;

    DIR *VAR_3 = FUNC_1(VAR_2->psz_filepath);
    if (VAR_3 == ((void*)0))
        return VAR_0;

    return FUNC_0(VAR_2, VAR_3);
}
