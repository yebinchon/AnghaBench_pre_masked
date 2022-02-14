
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ print_path; char* color_path; scalar_t__ color; scalar_t__ vimgrep; scalar_t__ ackmate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 char* FUNC_1 (char const*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

void FUNC_2(const char *VAR_4, const char VAR_5) {
    if (VAR_2.print_path == VAR_0 && !VAR_2.vimgrep) {
        return;
    }
    VAR_4 = FUNC_1(VAR_4);

    if (VAR_2.ackmate) {
        FUNC_0(VAR_3, ":%s%c", VAR_4, VAR_5);
    } else if (VAR_2.vimgrep) {
        FUNC_0(VAR_3, "%s%c", VAR_4, VAR_5);
    } else {
        if (VAR_2.color) {
            FUNC_0(VAR_3, "%s%s%d%c", VAR_2.color_path, VAR_4, VAR_1, VAR_5);
        } else {
            FUNC_0(VAR_3, "%s%c", VAR_4, VAR_5);
        }
    }
}
