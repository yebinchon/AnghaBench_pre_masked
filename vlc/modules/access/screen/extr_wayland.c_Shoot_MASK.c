
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_shm_pool {int dummy; } ;
struct wl_buffer {int dummy; } ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_9__ {unsigned int width; int height; int pagemask; int done; int y; int x; int display; int output; int screenshooter; int shm; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_10__ {size_t p_buffer; size_t i_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (int ,int ,struct wl_buffer*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wl_buffer*) ;
 int FUNC_8 (int ) ;
 struct wl_shm_pool* FUNC_9 (int ,int,size_t) ;
 struct wl_buffer* FUNC_10 (struct wl_shm_pool*,int ,unsigned int,int,int,int ) ;
 int FUNC_11 (struct wl_shm_pool*) ;

__attribute__((used)) static block_t *FUNC_12(demux_t *VAR_2)
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;

    int VAR_4 = FUNC_5();
    if (VAR_4 == -1)
    {
        FUNC_2(VAR_2, "buffer creation error: %s", FUNC_6(VAR_1));
        return ((void*)0);
    }


    uint32_t VAR_5 = 4u * VAR_3->width;
    size_t VAR_6 = (VAR_5 * (VAR_3->height + 1) + VAR_3->pagemask) & ~VAR_3->pagemask;
    block_t *VAR_7 = ((void*)0);

    if (FUNC_1(VAR_4, VAR_6) < 0)
    {
        FUNC_2(VAR_2, "buffer allocation error: %s", FUNC_6(VAR_1));
        goto out;
    }

    struct wl_shm_pool *VAR_8 = FUNC_9(VAR_3->shm, VAR_4, VAR_6);
    if (VAR_8 == ((void*)0))
        goto out;

    struct wl_buffer *VAR_9;
    VAR_9 = FUNC_10(VAR_8, 0, VAR_3->width, VAR_3->height,
                                       VAR_5, VAR_0);
    FUNC_11(VAR_8);
    if (VAR_9 == ((void*)0))
        goto out;

    VAR_3->done = 0;
    FUNC_3(VAR_3->screenshooter, VAR_3->output, VAR_9);

    while (!VAR_3->done)
        FUNC_8(VAR_3->display);

    FUNC_7(VAR_9);
    VAR_7 = FUNC_0(VAR_4, 1);

    if (VAR_7 != ((void*)0))
    {
        size_t VAR_10 = (VAR_3->y * VAR_3->width + VAR_3->x) * 4;

        VAR_7->p_buffer += VAR_10;
        VAR_7->i_buffer -= VAR_10;
    }

out:
    FUNC_4(VAR_4);
    return VAR_7;
}
