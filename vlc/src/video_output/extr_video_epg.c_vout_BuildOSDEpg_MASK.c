
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* p_next; } ;
typedef TYPE_1__ subpicture_region_t ;
struct TYPE_10__ {scalar_t__ art; int obj; } ;
typedef TYPE_2__ epg_spu_updater_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int const,int,int const,int,int,int,TYPE_1__**) ;
 TYPE_1__* FUNC_1 (int,int,int,int,int) ;
 TYPE_1__* FUNC_2 (int ,int,int,int,int,scalar_t__) ;

__attribute__((used)) static subpicture_region_t * FUNC_3(epg_spu_updater_sys_t *VAR_8,
                                              int VAR_9, int VAR_10,
                                              int VAR_11,
                                              int VAR_12)
{
    subpicture_region_t *VAR_13;
    subpicture_region_t **VAR_14 = &VAR_13;

    const int VAR_15 = VAR_12 * (VAR_1 * VAR_4);

    *VAR_14 = FUNC_1(VAR_9 + VAR_11 * VAR_2,
                                   VAR_10 + VAR_12 * VAR_5,
                                   VAR_11 * VAR_6,
                                   VAR_12 * VAR_1,
                                   VAR_0);
    if(*VAR_14)
        VAR_14 = &(*VAR_14)->p_next;

    struct
    {
        int x;
        int y;
        int w;
        int h;
        int rx;
        int ry;
    } VAR_16 = {
        VAR_9 + VAR_11 * VAR_2 + VAR_15,
        VAR_10 + VAR_12 * VAR_5 + VAR_15,
        VAR_11 * VAR_6 - 2 * VAR_15,
        VAR_12 * VAR_1 - 2 * VAR_15,
        VAR_11 * VAR_2 + VAR_15,
        VAR_12 * (1.0 - VAR_5 - VAR_1) + VAR_15,
    };


    if( VAR_8->art )
    {
        struct
        {
            int x;
            int y;
            int w;
            int h;
        } VAR_17 = {
            VAR_16.x,
            VAR_16.y,
            VAR_16.h,
            VAR_16.h,
        };

        *VAR_14 = FUNC_1(VAR_17.x,
                                       VAR_17.y,
                                       VAR_17.w,
                                       VAR_17.h,
                                       0xFF000000 | VAR_7);
        if(*VAR_14)
            VAR_14 = &(*VAR_14)->p_next;

        int VAR_18 = VAR_12 * (VAR_3 * VAR_4);
        *VAR_14 = FUNC_2( VAR_8->obj,
                                   VAR_17.x + VAR_18,
                                   VAR_17.y + VAR_18,
                                   VAR_17.w - 2 * VAR_18,
                                   VAR_17.h - 2 * VAR_18,
                                   VAR_8->art );
        if(*VAR_14)
            VAR_14 = &(*VAR_14)->p_next;


        VAR_16.x += VAR_17.w + VAR_15;
        VAR_16.w -= VAR_17.w + VAR_15;
    }

    FUNC_0( VAR_8,
                         VAR_16.x,
                         VAR_16.y,
                         VAR_16.w,
                         VAR_16.h,
                         VAR_16.rx,
                         VAR_16.ry,
                         VAR_14 );

    return VAR_13;
}
