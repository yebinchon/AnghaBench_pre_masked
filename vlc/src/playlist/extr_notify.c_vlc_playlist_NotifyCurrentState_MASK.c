
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int data; } ;
struct TYPE_6__ {int has_next; int has_prev; int current; int order; int repeat; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_listener_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int *,int ,int ,...) ;

__attribute__((used)) static void
FUNC_1(vlc_playlist_t *VAR_6,
                                vlc_playlist_listener_id *VAR_7)
{
    FUNC_0(VAR_6, VAR_7, VAR_3,
                                VAR_6->items.data, VAR_6->items.size);
    FUNC_0(VAR_6, VAR_7, VAR_5,
                                VAR_6->repeat);
    FUNC_0(VAR_6, VAR_7, VAR_4,
                                VAR_6->order);
    FUNC_0(VAR_6, VAR_7, VAR_0,
                                VAR_6->current);
    FUNC_0(VAR_6, VAR_7, VAR_2,
                                VAR_6->has_prev);
    FUNC_0(VAR_6, VAR_7, VAR_1,
                                VAR_6->has_next);
}
