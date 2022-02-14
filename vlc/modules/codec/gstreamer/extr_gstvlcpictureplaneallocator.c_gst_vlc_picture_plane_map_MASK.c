
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gsize ;
typedef int * gpointer ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_6__ {TYPE_2__ parent; TYPE_1__* p_plane; scalar_t__ p_pic; } ;
struct TYPE_4__ {scalar_t__ p_pixels; } ;
typedef TYPE_3__ GstVlcPicturePlane ;
typedef int GstMemory ;
typedef int GstMapFlags ;


 int FUNC_0 (int ) ;

__attribute__((used)) static gpointer FUNC_1( GstMemory *VAR_0,
    gsize VAR_1, GstMapFlags VAR_2 )
{
    FUNC_0( VAR_1 );
    FUNC_0( VAR_2 );
    GstVlcPicturePlane* VAR_3 = (GstVlcPicturePlane*) VAR_0;

    if( VAR_3->p_pic )
        return (gpointer) (VAR_3->p_plane->p_pixels + VAR_3->parent.offset);
    else
        return ((void*)0);
}
