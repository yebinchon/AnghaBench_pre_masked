
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parsed_lock; int parsed_status; } ;
typedef TYPE_1__ libvlc_media_t ;
typedef int libvlc_media_parsed_status_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

libvlc_media_parsed_status_t
FUNC_2(libvlc_media_t *VAR_0)
{
    libvlc_media_parsed_status_t VAR_1;

    FUNC_0(&VAR_0->parsed_lock);
    VAR_1 = VAR_0->parsed_status;
    FUNC_1(&VAR_0->parsed_lock);
    return VAR_1;
}
