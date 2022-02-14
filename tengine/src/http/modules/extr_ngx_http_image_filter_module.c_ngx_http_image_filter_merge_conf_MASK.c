
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ filter; scalar_t__ angle; scalar_t__ jpeg_quality; scalar_t__ webp_quality; scalar_t__ sharpen; scalar_t__ offset_x; scalar_t__ offset_y; int * oycv; int * oxcv; int buffer_size; int interlace; int transparency; int * acv; int * shcv; int * wqcv; int * jqcv; int hcv; int wcv; int height; int width; } ;
typedef TYPE_1__ ngx_http_image_filter_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_4, void *VAR_5, void *VAR_6)
{
    ngx_http_image_filter_conf_t *VAR_7 = VAR_5;
    ngx_http_image_filter_conf_t *VAR_8 = VAR_6;

    if (VAR_8->filter == VAR_1) {

        if (VAR_7->filter == VAR_1) {
            VAR_8->filter = VAR_2;

        } else {
            VAR_8->filter = VAR_7->filter;
            VAR_8->width = VAR_7->width;
            VAR_8->height = VAR_7->height;
            VAR_8->angle = VAR_7->angle;
            VAR_8->wcv = VAR_7->wcv;
            VAR_8->hcv = VAR_7->hcv;
            VAR_8->acv = VAR_7->acv;
        }
    }

    if (VAR_8->jpeg_quality == VAR_1) {


        FUNC_1(VAR_8->jpeg_quality, VAR_7->jpeg_quality, 75);

        if (VAR_8->jqcv == ((void*)0)) {
            VAR_8->jqcv = VAR_7->jqcv;
        }
    }

    if (VAR_8->webp_quality == VAR_1) {


        FUNC_1(VAR_8->webp_quality, VAR_7->webp_quality, 80);

        if (VAR_8->wqcv == ((void*)0)) {
            VAR_8->wqcv = VAR_7->wqcv;
        }
    }

    if (VAR_8->sharpen == VAR_1) {
        FUNC_1(VAR_8->sharpen, VAR_7->sharpen, 0);

        if (VAR_8->shcv == ((void*)0)) {
            VAR_8->shcv = VAR_7->shcv;
        }
    }
    FUNC_2(VAR_8->transparency, VAR_7->transparency, 1);

    FUNC_2(VAR_8->interlace, VAR_7->interlace, 0);

    FUNC_0(VAR_8->buffer_size, VAR_7->buffer_size,
                              1 * 1024 * 1024);
    return VAR_0;
}
