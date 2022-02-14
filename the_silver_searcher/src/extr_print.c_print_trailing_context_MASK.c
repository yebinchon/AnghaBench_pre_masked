
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ after; scalar_t__ print_path; scalar_t__ vimgrep; scalar_t__ ackmate; } ;
struct TYPE_3__ {scalar_t__ lines_since_last_match; int in_a_match; int line; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char const*,int,size_t,int ) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (char const*,char) ;

void FUNC_4(const char *VAR_5, const char *VAR_6, size_t VAR_7) {
    char VAR_8 = '-';

    if (VAR_2.ackmate || VAR_2.vimgrep) {
        VAR_8 = ':';
    }

    if (VAR_4.lines_since_last_match != 0 &&
        VAR_4.lines_since_last_match <= VAR_2.after) {
        if (VAR_2.print_path == VAR_1) {
            FUNC_3(VAR_5, ':');
        }
        FUNC_2(VAR_4.line, VAR_8);

        FUNC_1(VAR_6, 1, VAR_7, VAR_3);
        FUNC_0('\n', VAR_3);
    }

    VAR_4.line++;
    if (!VAR_4.in_a_match && VAR_4.lines_since_last_match < VAR_0) {
        VAR_4.lines_since_last_match++;
    }
}
