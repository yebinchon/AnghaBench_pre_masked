
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_decoder_device ;
typedef int filter_t ;
struct TYPE_2__ {int lock; int * owner; int * dec_device; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(filter_t *VAR_1,
                                vlc_decoder_device *VAR_2)
{
    FUNC_0(VAR_2);
    FUNC_1(&VAR_0.lock);
    if (VAR_1 == VAR_0.owner)
    {
        VAR_0.dec_device = ((void*)0);
        VAR_0.owner = ((void*)0);
    }
    FUNC_2(&VAR_0.lock);
}
