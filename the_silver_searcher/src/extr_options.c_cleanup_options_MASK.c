
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ file_search_regex_extra; scalar_t__ file_search_regex; scalar_t__ ackmate_dir_filter_extra; scalar_t__ ackmate_dir_filter; scalar_t__ re_extra; scalar_t__ re; scalar_t__ query; scalar_t__ color_line_number; scalar_t__ color_match; scalar_t__ color_path; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(void) {
    FUNC_0(VAR_0.color_path);
    FUNC_0(VAR_0.color_match);
    FUNC_0(VAR_0.color_line_number);

    if (VAR_0.query) {
        FUNC_0(VAR_0.query);
    }

    FUNC_1(VAR_0.re);
    if (VAR_0.re_extra) {

        FUNC_1(VAR_0.re_extra);
    }

    if (VAR_0.ackmate_dir_filter) {
        FUNC_1(VAR_0.ackmate_dir_filter);
    }
    if (VAR_0.ackmate_dir_filter_extra) {
        FUNC_1(VAR_0.ackmate_dir_filter_extra);
    }

    if (VAR_0.file_search_regex) {
        FUNC_1(VAR_0.file_search_regex);
    }
    if (VAR_0.file_search_regex_extra) {
        FUNC_1(VAR_0.file_search_regex_extra);
    }
}
