
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* p_sectors; } ;
typedef TYPE_3__ vcddev_toc_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_11__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ stream_t ;
struct TYPE_12__ {int i_current_title; unsigned int i_current_seekpoint; TYPE_2__* titles; scalar_t__ i_sector; scalar_t__ offset; TYPE_3__* p_toc; } ;
typedef TYPE_5__ access_sys_t ;
struct TYPE_9__ {unsigned int count; scalar_t__* seekpoints; } ;
struct TYPE_8__ {scalar_t__ i_lba; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_2, uint64_t VAR_3 )
{
    access_sys_t *VAR_4 = VAR_2->p_sys;
    const vcddev_toc_t *VAR_5 = VAR_4->p_toc;
    int VAR_6 = VAR_4->i_current_title;
    unsigned VAR_7;


    VAR_4->offset = VAR_3;
    VAR_4->i_sector = VAR_3 / VAR_0 + VAR_5->p_sectors[VAR_6 + 1].i_lba;


    for( VAR_7 = 0; VAR_7 < VAR_4->titles[VAR_6].count; VAR_7++ )
    {
        if( VAR_7 + 1 >= VAR_4->titles[VAR_6].count ) break;
        if( 0 < VAR_4->titles[VAR_6].seekpoints[VAR_7 + 1] &&
            VAR_3 < VAR_4->titles[VAR_6].seekpoints[VAR_7 + 1] ) break;
    }

    if( VAR_7 != VAR_4->i_current_seekpoint )
    {
        FUNC_0( VAR_2, "seekpoint change" );
        VAR_4->i_current_seekpoint = VAR_7;
    }

    return VAR_1;
}
