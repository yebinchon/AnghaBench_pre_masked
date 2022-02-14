
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int width; int height; int drm_fourcc; int stride; int* offsets; size_t* handle; scalar_t__* map; int drm_fd; scalar_t__* fb; int size; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef size_t uint32_t ;
struct drm_mode_map_dumb {int width; int height; int bpp; size_t handle; int offset; int size; } ;
struct drm_mode_destroy_dumb {int width; int height; int bpp; size_t handle; int offset; int size; } ;
struct drm_mode_create_dumb {int width; int height; int bpp; size_t handle; int offset; int size; } ;
typedef scalar_t__ deviceRval ;
typedef int destroy_req ;


 int FUNC_0 (int,unsigned int) ;
 size_t FUNC_1 (size_t*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,struct drm_mode_map_dumb*) ;
 scalar_t__ FUNC_3 (int ,int,int,int,size_t*,size_t*,size_t*,scalar_t__*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct drm_mode_map_dumb*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int,int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static deviceRval FUNC_8(vout_display_t *VAR_9, const int VAR_10)
{
    vout_display_sys_t *VAR_11 = VAR_9->sys;
    struct drm_mode_create_dumb VAR_12 = { .width = VAR_11->width,
                                               .height = VAR_11->height,
                                               .bpp = 32 };
    struct drm_mode_destroy_dumb VAR_13;
    struct drm_mode_map_dumb VAR_14 = {};
    unsigned int VAR_15 = 512, VAR_16 = 16;
    deviceRval VAR_17;
    uint32_t VAR_18;
    uint32_t VAR_19[] = {0,0,0,0}, VAR_20[] = {0,0,0,0},
            VAR_21[] = {0,0,0,0};

    switch(VAR_11->drm_fourcc) {

    case 130:


    case 129:


    case 128:


        VAR_11->stride = FUNC_0(VAR_11->width*2, VAR_15);
        VAR_11->offsets[1] = VAR_11->stride*FUNC_0(VAR_11->height, VAR_16);
        VAR_12.height = 2*FUNC_0(VAR_11->height, VAR_16);
        break;

    case 131:
        VAR_11->stride = FUNC_0(VAR_11->width, VAR_15);
        VAR_11->offsets[1] = VAR_11->stride*FUNC_0(VAR_11->height, VAR_16);
        VAR_12.height = 2*FUNC_0(VAR_11->height, VAR_16);
        break;
    default:
        VAR_12.height = FUNC_0(VAR_11->height, VAR_16);




        VAR_11->stride = FUNC_0(VAR_11->width*4, VAR_15);
        break;
    }

    VAR_17 = FUNC_2(VAR_11->drm_fd, VAR_0, &VAR_12);
    if (VAR_17 < 0) {
        FUNC_7(VAR_9, "Cannot create dumb buffer");
        return VAR_7;
    }

    VAR_11->size = VAR_12.size;
    VAR_11->handle[VAR_10] = VAR_12.handle;





    for (VAR_18 = 0; VAR_18 < FUNC_1(VAR_20) && (VAR_11->offsets[VAR_18] || VAR_18 < 1); VAR_18++) {
        VAR_20[VAR_18] = VAR_12.handle;
        VAR_21[VAR_18] = VAR_11->stride;
        VAR_19[VAR_18] = VAR_11->offsets[VAR_18];
    }

    VAR_17 = FUNC_3(VAR_11->drm_fd, VAR_11->width, VAR_11->height, VAR_11->drm_fourcc,
                        VAR_20, VAR_21, VAR_19, &VAR_11->fb[VAR_10], 0);

    if (VAR_17) {
        FUNC_7(VAR_9, "Cannot create frame buffer");
        VAR_17 = VAR_7;
        goto err_destroy;
    }

    VAR_14.handle = VAR_11->handle[VAR_10];
    VAR_17 = FUNC_2(VAR_11->drm_fd, VAR_2, &VAR_14);
    if (VAR_17) {
        FUNC_7(VAR_9, "Cannot map dumb buffer");
        VAR_17 = VAR_7;
        goto err_fb;
    }

    VAR_11->map[VAR_10] = FUNC_6(0, VAR_11->size, VAR_5 | VAR_6, VAR_4,
                         VAR_11->drm_fd, VAR_14.offset);

    if (VAR_11->map[VAR_10] == VAR_3) {
        FUNC_7(VAR_9, "Cannot mmap dumb buffer");
        VAR_17 = VAR_7;
        goto err_fb;
    }
    return VAR_8;

err_fb:
    FUNC_4(VAR_11->drm_fd, VAR_11->fb[VAR_10]);
    VAR_11->fb[VAR_10] = 0;

err_destroy:
    FUNC_5(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.handle = VAR_11->handle[VAR_10];
    FUNC_2(VAR_11->drm_fd, VAR_1, &VAR_13);
    return VAR_17;
}
