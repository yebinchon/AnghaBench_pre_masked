
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vcddev_t ;
struct TYPE_2__ {int psz_filepath; int psz_location; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int * FUNC_2 (int *,int ,int ,unsigned int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(vlc_object_t *VAR_1)
{
    stream_t *VAR_2 = (stream_t *)VAR_1;
    unsigned VAR_3;

    vcddev_t *VAR_4 = FUNC_2(VAR_1, VAR_2->psz_location, VAR_2->psz_filepath,
                             &VAR_3);
    if (VAR_4 == ((void*)0))
        return VAR_0;

    if (VAR_3 == 0)
        return FUNC_0(VAR_1, VAR_4);
    else
        return FUNC_1(VAR_1, VAR_4, VAR_3);
}
