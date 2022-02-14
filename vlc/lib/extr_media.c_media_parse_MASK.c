
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int has_asked_preparse; int is_parsed; int parsed_lock; int parsed_cond; int * p_input_item; TYPE_1__* p_libvlc_instance; scalar_t__ parsed_status; } ;
typedef TYPE_2__ libvlc_media_t ;
typedef int libvlc_media_parse_flag_t ;
typedef int libvlc_int_t ;
typedef int input_item_t ;
typedef int input_item_meta_request_option_t ;
struct TYPE_6__ {int * p_libvlc_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int ,int *,TYPE_2__*,int,TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(libvlc_media_t *VAR_12, bool VAR_13,
                       libvlc_media_parse_flag_t VAR_14, int VAR_15)
{
    bool VAR_16;

    FUNC_2(&VAR_12->parsed_lock);
    VAR_16 = !VAR_12->has_asked_preparse;
    VAR_12->has_asked_preparse = 1;
    if (VAR_16)
    {
        VAR_12->is_parsed = 0;
        VAR_12->parsed_status = 0;
    }
    FUNC_3(&VAR_12->parsed_lock);

    if (VAR_16)
    {
        libvlc_int_t *VAR_17 = VAR_12->p_libvlc_instance->p_libvlc_int;
        input_item_t *VAR_18 = VAR_12->p_input_item;
        input_item_meta_request_option_t VAR_19 = VAR_3;
        int VAR_20;

        if (VAR_14 & VAR_11)
            VAR_19 |= VAR_4;
        if (VAR_14 & VAR_9)
            VAR_19 |= VAR_1;
        if (VAR_14 & VAR_10)
            VAR_19 |= VAR_2;
        if (VAR_14 & VAR_8)
            VAR_19 |= VAR_0;

        VAR_20 = FUNC_0(VAR_17, VAR_18, VAR_19,
                                     &VAR_7, VAR_12,
                                     VAR_15, VAR_12);
        if (VAR_20 != VAR_6)
            return VAR_20;
    }
    else
        return VAR_5;

    if (!VAR_13)
    {
        FUNC_2(&VAR_12->parsed_lock);
        while (!VAR_12->is_parsed)
            FUNC_1(&VAR_12->parsed_cond, &VAR_12->parsed_lock);
        FUNC_3(&VAR_12->parsed_lock);
    }
    return VAR_6;
}
