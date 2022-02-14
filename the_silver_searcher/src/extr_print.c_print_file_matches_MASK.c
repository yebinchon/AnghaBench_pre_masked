
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_6__ {size_t start; size_t end; } ;
typedef TYPE_1__ match_t ;
struct TYPE_8__ {scalar_t__ after; size_t before; scalar_t__ print_path; char path_sep; char* color_match; scalar_t__ width; scalar_t__ stdout_inode; scalar_t__ search_stream; scalar_t__ color; scalar_t__ only_matching; scalar_t__ column; scalar_t__ vimgrep; scalar_t__ ackmate; scalar_t__ print_count; scalar_t__ context; } ;
struct TYPE_7__ {scalar_t__ lines_since_last_match; size_t prev_line; size_t last_prev_line; char** context_prev_lines; size_t line; size_t prev_line_offset; size_t last_printed_match; size_t line_preceding_current_match_offset; void* in_a_match; void* printing_a_match; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__ const*,size_t,size_t,char) ;
 TYPE_3__ VAR_9 ;
 int FUNC_5 (char const*,size_t) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,size_t,size_t) ;
 int FUNC_8 (size_t,char) ;
 int FUNC_9 (char const*,char) ;
 int FUNC_10 (char const*,char,size_t const) ;
 int FUNC_11 (char const*,char const*,size_t) ;
 int VAR_10 ;

void FUNC_12(const char *VAR_11, const char *VAR_12, const size_t VAR_13, const match_t VAR_14[], const size_t VAR_15) {
    size_t VAR_16 = 0;
    ssize_t VAR_17 = 0;
    char VAR_18 = '-';
    size_t VAR_19, VAR_20;
    int VAR_21 = VAR_7.context || VAR_7.after || VAR_7.before;

    if (VAR_7.ackmate || VAR_7.vimgrep) {
        VAR_18 = ':';
    }

    FUNC_6();

    if (VAR_7.print_path == VAR_1) {
        VAR_7.print_path = VAR_4;
    } else if (VAR_7.print_path == VAR_2) {
        VAR_7.print_path = VAR_3;
    }

    if (VAR_7.print_path == VAR_4) {
        if (VAR_7.print_count) {
            FUNC_10(VAR_11, VAR_7.path_sep, VAR_15);
        } else {
            FUNC_9(VAR_11, VAR_7.path_sep);
        }
    }

    for (VAR_19 = 0; VAR_19 <= VAR_13 && (VAR_16 < VAR_15 || VAR_9.lines_since_last_match <= VAR_7.after); VAR_19++) {
        if (VAR_16 < VAR_15 && VAR_19 == VAR_14[VAR_16].start) {
            VAR_9.in_a_match = VAR_5;

            if (VAR_16 > 0 && VAR_21 && VAR_9.lines_since_last_match > (VAR_7.before + VAR_7.after + 1)) {
                FUNC_1(VAR_8, "--\n");
            }

            if (VAR_9.lines_since_last_match > 0 && VAR_7.before > 0) {


                VAR_17 = VAR_9.lines_since_last_match - (VAR_7.after + 1);
                if (VAR_17 < 0) {
                    VAR_17 = 0;
                } else if ((size_t)VAR_17 > VAR_7.before) {
                    VAR_17 = VAR_7.before;
                }

                for (VAR_20 = (VAR_7.before - VAR_17); VAR_20 < VAR_7.before; VAR_20++) {
                    VAR_9.prev_line = (VAR_9.last_prev_line + VAR_20) % VAR_7.before;
                    if (VAR_9.context_prev_lines[VAR_9.prev_line] != ((void*)0)) {
                        if (VAR_7.print_path == VAR_3) {
                            FUNC_9(VAR_11, ':');
                        }
                        FUNC_8(VAR_9.line - (VAR_7.before - VAR_20), VAR_18);
                        FUNC_1(VAR_8, "%s\n", VAR_9.context_prev_lines[VAR_9.prev_line]);
                    }
                }
            }
            VAR_9.lines_since_last_match = 0;
        }

        if (VAR_16 < VAR_15 && VAR_19 == VAR_14[VAR_16].end) {

            VAR_16++;
            VAR_9.in_a_match = VAR_0;
        }


        if ((VAR_19 == VAR_13 || VAR_12[VAR_19] == '\n') && VAR_7.before > 0) {

            FUNC_5(&VAR_12[VAR_9.prev_line_offset], VAR_19 - VAR_9.prev_line_offset);
        }

        if (VAR_19 == VAR_13 || VAR_12[VAR_19] == '\n') {
            if (VAR_9.lines_since_last_match == 0) {
                if (VAR_7.print_path == VAR_3 && !VAR_7.search_stream) {
                    FUNC_9(VAR_11, ':');
                }
                if (VAR_7.ackmate) {

                    FUNC_8(VAR_9.line, ';');
                    for (; VAR_9.last_printed_match < VAR_16; VAR_9.last_printed_match++) {
                        size_t VAR_22 = VAR_14[VAR_9.last_printed_match].start - VAR_9.line_preceding_current_match_offset;
                        FUNC_1(VAR_8, "%lu %lu",
                                VAR_22,
                                VAR_14[VAR_9.last_printed_match].end - VAR_14[VAR_9.last_printed_match].start);
                        VAR_9.last_printed_match == VAR_16 - 1 ? FUNC_2(':', VAR_8) : FUNC_2(',', VAR_8);
                    }
                    FUNC_7(VAR_12, VAR_19, VAR_9.prev_line_offset);
                } else if (VAR_7.vimgrep) {
                    for (; VAR_9.last_printed_match < VAR_16; VAR_9.last_printed_match++) {
                        FUNC_9(VAR_11, VAR_18);
                        FUNC_8(VAR_9.line, VAR_18);
                        FUNC_4(VAR_14, VAR_9.last_printed_match, VAR_9.prev_line_offset, VAR_18);
                        FUNC_7(VAR_12, VAR_19, VAR_9.prev_line_offset);
                    }
                } else {
                    FUNC_8(VAR_9.line, ':');
                    int VAR_23 = VAR_0;
                    if (VAR_7.column) {
                        FUNC_4(VAR_14, VAR_9.last_printed_match, VAR_9.prev_line_offset, ':');
                    }

                    if (VAR_9.printing_a_match && VAR_7.color) {
                        FUNC_1(VAR_8, "%s", VAR_7.color_match);
                    }
                    for (VAR_20 = VAR_9.prev_line_offset; VAR_20 <= VAR_19; VAR_20++) {

                        if (VAR_9.last_printed_match < VAR_15 && VAR_20 == VAR_14[VAR_9.last_printed_match].end) {
                            if (VAR_7.color) {
                                FUNC_1(VAR_8, "%s", VAR_6);
                            }
                            VAR_9.printing_a_match = VAR_0;
                            VAR_9.last_printed_match++;
                            VAR_23 = VAR_5;
                            if (VAR_7.only_matching) {
                                FUNC_2('\n', VAR_8);
                            }
                        }


                        if (VAR_20 < VAR_13 && VAR_7.width > 0 && VAR_20 - VAR_9.prev_line_offset >= VAR_7.width) {
                            if (VAR_20 < VAR_19) {
                                FUNC_3(VAR_10, VAR_8);
                            }
                            FUNC_2('\n', VAR_8);


                            VAR_20 = VAR_19;
                            VAR_9.last_printed_match = VAR_15;
                        }

                        if (VAR_9.last_printed_match < VAR_15 && VAR_20 == VAR_14[VAR_9.last_printed_match].start) {
                            if (VAR_7.only_matching && VAR_23) {
                                if (VAR_7.print_path == VAR_3) {
                                    FUNC_9(VAR_11, ':');
                                }
                                FUNC_8(VAR_9.line, ':');
                                if (VAR_7.column) {
                                    FUNC_4(VAR_14, VAR_9.last_printed_match, VAR_9.prev_line_offset, ':');
                                }
                            }
                            if (VAR_7.color) {
                                FUNC_1(VAR_8, "%s", VAR_7.color_match);
                            }
                            VAR_9.printing_a_match = VAR_5;
                        }

                        if (VAR_20 < VAR_13) {

                            if (!VAR_7.only_matching || VAR_9.printing_a_match) {
                                if (VAR_7.width == 0 || VAR_20 - VAR_9.prev_line_offset < VAR_7.width) {
                                    FUNC_2(VAR_12[VAR_20], VAR_8);
                                }
                            }
                        }
                    }
                    if (VAR_9.printing_a_match && VAR_7.color) {
                        FUNC_1(VAR_8, "%s", VAR_6);
                    }
                }
            }

            if (VAR_7.search_stream) {
                VAR_9.last_printed_match = 0;
                break;
            }


            FUNC_11(VAR_11, &VAR_12[VAR_9.prev_line_offset], VAR_19 - VAR_9.prev_line_offset);

            VAR_9.prev_line_offset = VAR_19 + 1;
            if (!VAR_9.in_a_match) {
                VAR_9.line_preceding_current_match_offset = VAR_19 + 1;
            }


            if (VAR_19 == VAR_13 && VAR_12[VAR_19 - 1] != '\n') {
                FUNC_2('\n', VAR_8);
            }
        }
    }

    if (VAR_7.stdout_inode) {
        FUNC_0(VAR_8);
    }
}
